#ifndef VYVODY_H
#define VYVODY_H
#include <iostream>

using namespace std;
#include <zarska9i_matka.h>
class vyvody  : public zarska9I_Matka
{
public:
    void stroka(string a) {cout << a << "\n";}
    void popitka (int N) {cout << "� ��� �������� �������: "<< N << ".\n";}
    void POBEDA(){cout << "����������� � �������! �������� ����� � ����� ������" << endl;}
    void PORAZENIE() {cout << "�� ������, ����� ���������. ������ ������ ���������, �������)))" << endl;}
};

#endif // VYVODY_H
