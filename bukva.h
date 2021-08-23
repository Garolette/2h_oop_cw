#ifndef BUKVA_H
#define BUKVA_H
#include <iostream>
#include<string>
#include "zarska9i_matka.h"
using namespace std;
class bukva : public zarska9I_Matka
{
public:
    char vvod() {char b; cin >> b; return b;}
    int usl(string a);
};

#endif // BUKVA_H
