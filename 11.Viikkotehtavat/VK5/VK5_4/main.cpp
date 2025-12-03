#include <iostream>

using namespace std;

class ratas
{
public:
    ratas(string);
    ~ratas();
private:
    string type;
};

class Polkupyora
{
public:
    Polkupyora();
    ~Polkupyora();
private:
    ratas * eturatas;
    ratas * takaratas;
};


ratas::ratas(string s)
{
    cout<<"constructing " << s << endl;
    type = s;
}

ratas::~ratas()
{
    cout<<"destructing " << type << endl;
}


Polkupyora::Polkupyora()
{
    // lisää tähän eturatas pointterin alustus
    eturatas = new ratas("eturatas");
    // lisää tähän takaratas pointterin alustus;
    takaratas = new ratas("takaratas");
}

Polkupyora::~Polkupyora()
{
    // Ja tännekin pitää tulla jotain, jotta pyörän osat tulee tuhottua.
    delete eturatas;
    delete takaratas;
}


int main()
{
    Polkupyora olio;
    return 0;
}
