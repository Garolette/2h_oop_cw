#ifndef HAUPTCLASS_H
#define HAUPTCLASS_H

#include <iostream>
#include <string>

using namespace std;
#include "zg.h"
#include "vyvody.h"
#include "bukva.h"
#include "zarska9i_matka.h"
class Hauptclass : public zarska9I_Matka
{
    zg ob1;
    vyvody ob3;
    string Before;
    string After;
    int Life;
    int Size;
public:
    void setString();
    void setAfter();
    void Game();
    void zamena();
};

#endif // HAUPTCLASS_H
