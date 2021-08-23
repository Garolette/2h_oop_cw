#include "base.h"
#include <windows.h>
#include <mmsystem.h>
#pragma comment (lib, L"D:\\Qt\winmm.lib")
base::base() {
    PlaySound(L"D:\\CppProject\KURZ\abc.wav", NULL, SND_FILENAME | SND_ASYNC);
    system("pause");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    set_object_name ( "Главное меню" );
    set_state       ( 1 );
}
void base::pusk()
{
    int a;
    while (a!=0) {
    cout << "Выберите пункт меню:\n";
    cout << "1 - Игра\n";
    cout << "2 - Правила игры\n";
    cout << "0 - Выход\n";
    cout << "__________________\n";
    cin >> a;
    if (a==1){
        igr.setString();
        igr.Game();
    }
    if (a==2){
        cout << "Добро пожаловать в виселицу. Правила игры:\n ";
                cout <<"Когда вы начнёте игру, вам покажут слово - популярный сериал.\n";
                cout <<"Ваша цель - угадать персонажа из этого сериала. Несложно, да?\n";
                cout << "Вы должны написать одну или несколько СТРОЧНЫХ букв русского языка. \n";
                cout <<"У вас есть 8 жизней, чтобы прийти к победе. Если вы непрвильно угадали букву - жизнь сгорает. Будьте осторожны.\n";
                cout <<"Вот и всё. Удачи в прохождении игры и не забывайте - в мультиках - сила)))\n";
                cout << "(а при вводе ответа на главный вопрос жизни, вселенной и всего такого\n";
                cout << "преподаватель по программированию получит заветную пасхалку)\n";
    }
    if (a==42) {
        cout << "";
        system("pause");
        system("cls");
        bild_tree_objects();
        cout << exec_app() << endl;
    }
    if (a!=0) system("pause");
    system("cls");
    if (a==0) cout <<"Завершение игры. Нажимте ENTER." << endl;
    }
}
void base::bild_tree_objects() {
    vetka1.set_object_name("Создание буквы");
    vetka2.set_object_name("Игровой процесс");
    vetka3.set_object_name("Вывод результатов");
    vetka4.set_object_name("Загадывание слова");
    vetka1.set_parent(&vetka2);
    vetka2.set_parent(this);
    vetka3.set_parent(&vetka2);
    vetka4.set_parent(&vetka2);
}
int base :: exec_app ( ) //ЙНЕООП ЬФПФ НЕФПД ТЕБМЙЪХЕФ НЕФПД Ч НЬКО
{
    show_tree (this);
    return 42;
}
void base :: show_state_next ( zarska9I_Matka * ob_parent )
{
    if ( ob_parent -> get_state ( ) == 1 ) {
        cout << "The object " << ob_parent -> get_object_name () << " is ready" << endl;
    }
    else {
        cout << "The object " << ob_parent -> get_object_name () << " is not ready" << endl;
    }
    if ( ob_parent -> children.size ( ) == 0 ) {return;}

    ob_parent -> it_child = ob_parent -> children.begin ( );
    while ( ob_parent -> it_child != ob_parent -> children.end ( ) ) {
        show_state_next ( ( * ( ob_parent -> it_child ) ) );
        ob_parent -> it_child ++;
    }
}

void base :: show_tree_state ( )
{
    show_tree(this);
}


void  base :: show_tree ( zarska9I_Matka *ob_parent )
{

    for (int i=0; i < get_level();i++) { cout << "      ";}
    cout << ob_parent -> get_object_name ()  << endl;
    if ( ob_parent -> children.size() == 0 ) {return;}
    ob_parent -> it_child = ob_parent -> children.begin ( );
    change_level('+');
    while ( ob_parent -> it_child != ob_parent -> children.end ( ) )
    {
        show_tree ( ( * ( ob_parent -> it_child ) ) );
        ob_parent -> it_child ++;
    }
    change_level('-');
 }
