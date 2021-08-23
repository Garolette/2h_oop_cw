#include "zarska9i_matka.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;
zarska9I_Matka :: zarska9I_Matka (  zarska9I_Matka * p_parent ) //Эта фигня опрделяет родителей и добавляет детей, связвывая их.
{
    set_level(0);
    if ( p_parent ) { //Если есть родитель
        this -> p_parent = p_parent; // Объект в заголовочном файле становится равным объекту, который мы создали
        p_parent -> add_child ( this ); // Вызываем метод Добавления ребенка по адресу того или иного объекта дерева.
    }
    else {
        this -> p_parent = 0; //Если родителя нет, объект принимает значение 0
    }
}
void zarska9I_Matka :: set_object_name ( string object_name ) //тут всё изи, листай дальше
{
    this -> object_name = object_name;
}
string zarska9I_Matka :: get_object_name ( ) //тут всё изи, листай дальше
{
   return  object_name;
}
void zarska9I_Matka :: set_parent (zarska9I_Matka *p_parent ) //Доавляет инфу о родителе
{
    if ( p_parent ) { //Если родитель есть
        this -> p_parent = p_parent;//ляляля смотри конструктор
        p_parent -> add_child ( this );
    }
}
void zarska9I_Matka :: add_child ( zarska9I_Matka * p_child ) //Метод приниманет указатель на объект из конструтора.
{
    children.push_back ( p_child );//Последний элемент вектора после его добавления получает адрес объекта
}
void zarska9I_Matka :: delete_child ( string s_object_name ) //Убить детей
{
    it_child = children.begin ( ); //Итератор ставим на первого ребенка.

    while ( it_child != children.end ( ) ) { // Пока не дойдёт до конца вектора
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


