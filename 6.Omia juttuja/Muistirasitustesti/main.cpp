#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <limits>
#include <random>
#include <fstream>
#include <sstream>
#include <iomanip>

struct Olio {
    std::string muuttuja1;
    std::string muuttuja2;
    int muuttuja3;
    int muuttuja4;
};

struct MemInfo {
    long vmRSS_kB = 0;  // Resident set size
    long vmSize_kB = 0; // Virtual memory size
};

bool readMemInfo(MemInfo& info) {
    std::ifstream in("/proc/self/status");
    if (!in.is_open()) {
        return false;
    }

    std::string line;
    while (std::getline(in, line)) {
        if (line.rfind("VmRSS:", 0) == 0) {
            std::istringstream iss(line.substr(6));
            iss >> info.vmRSS_kB;
        } else if (line.rfind("VmSize:", 0) == 0) {
            std::istringstream iss(line.substr(7));
            iss >> info.vmSize_kB;
        }
    }
    return true;
}

std::string randomString(std::mt19937& rng, int minLen, int maxLen) {
    std::uniform_int_distribution<int> lenDist(minLen, maxLen);
    std::uniform_int_distribution<char> charDist('a', 'z');

    int len = lenDist(rng);
    std::string s;
    s.reserve(len);

    for (int i = 0; i < len; ++i) {
        s.push_back(charDist(rng));
    }
    return s;
}

int main() {
    std::size_t maara = 0;

    std::cout << "Anna olioiden maara: ";
    if (!(std::cin >> maara) || maara == 0) {
        std::cerr << "Virheellinen maara.\n";
        return 1;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Muistitieto ennen allokointia
    MemInfo memBefore{};
    readMemInfo(memBefore);

    std::vector<Olio*> oliot;
    oliot.reserve(maara);

    // satunnaislukukone
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> randomInt(50'000, 100'000);

    std::size_t totalChars = 0;
    std::size_t minStrLen = std::numeric_limits<std::size_t>::max();
    std::size_t maxStrLen = 0;

    auto startCreate = std::chrono::high_resolution_clock::now();

    // Luodaan oliot
    for (std::size_t i = 0; i < maara; ++i) {
        Olio* o = new Olio();

        // Satunnaiset stringit (pituus valilta 5–50)
        o->muuttuja1 = randomString(rng, 15, 20);
        o->muuttuja2 = randomString(rng, 15, 20);

        std::size_t len1 = o->muuttuja1.size();
        std::size_t len2 = o->muuttuja2.size();

        totalChars += len1 + len2;

        std::size_t localMin = std::min(len1, len2);
        std::size_t localMax = std::max(len1, len2);
        if (localMin < minStrLen) minStrLen = localMin;
        if (localMax > maxStrLen) maxStrLen = localMax;

        // Satunnaiset int-arvot
        o->muuttuja3 = randomInt(rng);
        o->muuttuja4 = randomInt(rng);

        oliot.push_back(o);
    }

    auto endCreate = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> createDur = endCreate - startCreate;

    // Muistitieto luomisen jalkeen
    MemInfo memAfterCreate{};
    readMemInfo(memAfterCreate);

    // Poistetaan oliot
    auto startDelete = std::chrono::high_resolution_clock::now();
    for (auto p : oliot) {
        delete p;
    }
    auto endDelete = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> deleteDur = endDelete - startDelete;

    // Muistitieto poistamisen jalkeen
    MemInfo memAfterDelete{};
    readMemInfo(memAfterDelete);

    // Laskentaa
    std::size_t olionKoko = sizeof(Olio);
    double totalBytes = static_cast<double>(olionKoko) * maara;
    double totalMB = totalBytes / (1024.0 * 1024.0);

    double charsMillions = static_cast<double>(totalChars) / 1'000'000.0;
    double avgStrLen = 0.0;
    if (maara > 0) {
        // 2 stringia per olio
        avgStrLen = static_cast<double>(totalChars) / (maara * 2.0);
    }

    double createPerObjMs = (maara > 0)
                                ? (createDur.count() * 1000.0 / static_cast<double>(maara))
                                : 0.0;
    double deletePerObjMs = (maara > 0)
                                ? (deleteDur.count() * 1000.0 / static_cast<double>(maara))
                                : 0.0;

    double createObjsPerSec = (createDur.count() > 0.0)
                                  ? static_cast<double>(maara) / createDur.count()
                                  : 0.0;
    double deleteObjsPerSec = (deleteDur.count() > 0.0)
                                  ? static_cast<double>(maara) / deleteDur.count()
                                  : 0.0;

    auto kbToMB = [](long kb) -> double {
        return static_cast<double>(kb) / 1024.0;
    };

    std::cout << std::fixed << std::setprecision(3);

    std::cout << "\n==== TESTIN YHTEENVETO ====\n";
    std::cout << "Olioita: " << maara << "\n";
    std::cout << "Yhden olion sizeof(Olio): " << olionKoko << " tavua\n";
    std::cout << "Arvioitu rakenteen muistinkulutus: " << totalMB << " MB\n\n";

    std::cout << "Satunnaismerkkien kokonaismaara: " << charsMillions
              << " miljoonaa merkkia\n";
    std::cout << "Keskimaarainen string-pituus: " << avgStrLen << " merkkia\n";
    std::cout << "String-pituus min: " << minStrLen
              << ", max: " << maxStrLen << "\n\n";

    std::cout << "Luontiaika: " << createDur.count() << " s\n";
    std::cout << "  -> ms per olio: " << createPerObjMs << " ms\n";
    std::cout << "  -> olioita sekunnissa: " << createObjsPerSec << "\n\n";

    std::cout << "Poistoaika: " << deleteDur.count() << " s\n";
    std::cout << "  -> ms per olio: " << deletePerObjMs << " ms\n";
    std::cout << "  -> olioita sekunnissa: " << deleteObjsPerSec << "\n\n";

    std::cout << "Muisti ennen luontia:     "
              << kbToMB(memBefore.vmRSS_kB) << " MB RSS, "
              << kbToMB(memBefore.vmSize_kB) << " MB VSZ\n";
    std::cout << "Muisti luomisen jalkeen:  "
              << kbToMB(memAfterCreate.vmRSS_kB) << " MB RSS, "
              << kbToMB(memAfterCreate.vmSize_kB) << " MB VSZ\n";
    std::cout << "Muisti poistamisen jalkeen: "
              << kbToMB(memAfterDelete.vmRSS_kB) << " MB RSS, "
              << kbToMB(memAfterDelete.vmSize_kB) << " MB VSZ\n";

    std::cout << "============================\n";

    std::cout << "\nPaina Enter lopettaaksesi...";
    std::cin.get();

    return 0;
}
