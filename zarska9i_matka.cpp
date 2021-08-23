#include "zarska9i_matka.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;
zarska9I_Matka :: zarska9I_Matka (  zarska9I_Matka * p_parent ) //��� ����� ��������� ��������� � ��������� �����, ��������� ��.
{
    set_level(0);
    if ( p_parent ) { //���� ���� ��������
        this -> p_parent = p_parent; // ������ � ������������ ����� ���������� ������ �������, ������� �� �������
        p_parent -> add_child ( this ); // �������� ����� ���������� ������� �� ������ ���� ��� ����� ������� ������.
    }
    else {
        this -> p_parent = 0; //���� �������� ���, ������ ��������� �������� 0
    }
}
void zarska9I_Matka :: set_object_name ( string object_name ) //��� �ӣ ���, ������ ������
{
    this -> object_name = object_name;
}
string zarska9I_Matka :: get_object_name ( ) //��� �ӣ ���, ������ ������
{
   return  object_name;
}
void zarska9I_Matka :: set_parent (zarska9I_Matka *p_parent ) //�������� ���� � ��������
{
    if ( p_parent ) { //���� �������� ����
        this -> p_parent = p_parent;//������ ������ �����������
        p_parent -> add_child ( this );
    }
}
void zarska9I_Matka :: add_child ( zarska9I_Matka * p_child ) //����� ���������� ��������� �� ������ �� �����������.
{
    children.push_back ( p_child );//��������� ������� ������� ����� ��� ���������� �������� ����� �������
}
void zarska9I_Matka :: delete_child ( string s_object_name ) //����� �����
{
    it_child = children.begin ( ); //�������� ������ �� ������� �������.

    while ( it_child != children.end ( ) ) { // ���� �� ���ģ� �� ����� �������
        if ( ( * ( it_child ) ) -> get_object_name ( ) == s_object_name ) {
            children.erase ( it_child );
            return;
        }
        it_child ++;
    }
}

void zarska9I_Matka :: set_state ( char c_state )
{
    this -> c_state = c_state;
}

char zarska9I_Matka :: get_state ( )
{
    return c_state;
}

void zarska9I_Matka :: set_level ( int level)
{
    this -> level = level;
}

int zarska9I_Matka ::get_level ( )
{
    return level;
}

void zarska9I_Matka :: change_level(char sym)
{
    switch (sym) {
    case '+':
        level++;
        break;
    case '-':
        level--;
        break;
    default:
        break;
    }
}



zarska9I_Matka * zarska9I_Matka :: get_child ( string object_name )
{

if ( children.size ( ) == 0 ) return 0;

it_child = children.begin ( );

while ( it_child != children.end ( ) ) {

if ( ( * it_child ) -> get_object_name ( ) == object_name ) {

return ( * it_child );
}
it_child ++;
}
return 0;
}


