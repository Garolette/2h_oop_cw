#ifndef VYVODY_H
#define VYVODY_H
#include <iostream>

using namespace std;
#include <zarska9i_matka.h>
class vyvody  : public zarska9I_Matka
{
public:
    void stroka(string a) {cout << a << "\n";}
    void popitka (int N) {cout << "У вас осталось попыток: "<< N << ".\n";}
    void POBEDA(){cout << "Поздравляем с победой! Оставьте отзыв в своей голове" << endl;}
    void PORAZENIE() {cout << "Ну ничего, потом получится. Больше смотри мультиков, советую)))" << endl;}
};

#endif // VYVODY_H
