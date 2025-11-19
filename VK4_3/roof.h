#ifndef ROOF_H
#define ROOF_H
#include<iostream>
using namespace std;

class Roof {
private:
    string material;
public:
    void setMaterial(string value){
        material=value;
    }
    string getMaterial(){
        return material;
    }
};

#endif // ROOF_H
