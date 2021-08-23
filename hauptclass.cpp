#include "hauptclass.h"
void Hauptclass::setString() {
    system("cls");
    ob1.setslovo();
    ob3.stroka(ob1.vopros());
    Before = ob1.play();
    After=Before;
    Size = Before.size();
    setAfter();
    Life = 5;
    ob3.stroka(After);
    ob3.popitka(Life);
}
void Hauptclass::Game() {
    bukva ob2;
    while ((ob2.usl(After)!=0) && (Life>0)) {
        char buk;
    buk=ob2.vvod();
    int Sovpadenie=Size;
    for (int i=0; i<Size; i++) {
        if (buk==Before[i]) After[i]=buk; else Sovpadenie--;
    }
    if (Sovpadenie==0) Life--;
        system ("cls");
    ob3.stroka(ob1.vopros());
    ob3.stroka(After);
    ob3.popitka(Life);
    }
    if(Life == 0) ob3.PORAZENIE(); else ob3.POBEDA();
}
void Hauptclass::setAfter() {
    for (int i=0; i<Size; i++) After[i]='?';
}
