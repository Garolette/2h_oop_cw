#ifndef ZG_H
#define ZG_H
#include <string>
#include <iostream>
#include "windows.h"
#include "zarska9i_matka.h"
using namespace std;
class zg : public zarska9I_Matka
{
private:
    string w;
    string o;
public:
    zg();
    void setslovo();
    string play() {return w;}
    string vopros() {return o;}
};

#endif // ZG_H
