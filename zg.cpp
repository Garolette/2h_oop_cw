#include "zg.h"
#include <ctime>
#include <cstdlib>
zg::zg() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
void zg :: setslovo() {
    srand(time(NULL));
    int a=(rand()%21)+1;
    string x;
    string y;
    switch (a) {
    case 1:
        x = "���������";
        y = "�����. ����� ���������";
        break;
    case 2:
        x = "����������";
        y = "��� � �����";
        break;
    case 3:
        x = "�������";
        y = "������ ���";
        break;
    case 4:
        x="���������";
        y="������� ��������� ������ ��� ���";
        break;
    case 5:
        x="��������";
        y="����� �����������";
        break;
    case 6:
        x="�������";
        y="��������";
        break;
    case 7:
        x="������";
        y="������. ������� �� �����";
        break;
    case 8:
        x="���������";
        y="�������� �� �����������";
        break;
    case 9:
        x="��������";
        y="������ �����";
        break;
    case 10:
        x="��������";
        y="������� ����";
        break;
    case 11:
        x="�������";
        y="��������";
        break;
    case 12:
        x="���������";
        y="����� ��� ���������� �����";
        break;
    case 13:
        x="���������";
        y="��� � ���� ������ �� ������";
        break;
    case 14:
        x="��������";
        y="��������";
        break;
    case 15:
        x="�����������";
        y="�� �� ������� ��������";
        break;
    case 16:
        x="������";
        y="������";
        break;
    case 17:
        x="�������";
        y="������ ���";
        break;
    case 18:
        x="��������";
        y="������������������";
        break;
    case 19:
        x="����������";
        y="�������-����";
        break;
    case 20:
        x="��������";
        y="��������";
        break;
    case 21:
        x="������";
        y="����� �";
        break;
    default:
        x="������������";
        y="��������� ������";
    }
    w=x;
    o=y;
}
