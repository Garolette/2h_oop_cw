#ifndef BASE_H
#define BASE_H
using namespace std;
#include <windows.h>
#include "zarska9i_matka.h"
#include "bukva.h"
#include "hauptclass.h"
#include "vyvody.h"
#include "zg.h"
class base : public zarska9I_Matka
{
public:
    base();
    cl_application ( );
    void bild_tree_objects ( );
    int  exec_app          ( );
    void show_tree_state   ( );
    string check_address      ( zarska9I_Matka * ob );
    zarska9I_Matka access            (string address);
    void pusk();
    Hauptclass igr;
private:
    void show_tree       ( zarska9I_Matka * ob_parent );
    void show_state_next ( zarska9I_Matka * ob_parent );
    void rebild_objects  ( );
    bukva vetka1;
    Hauptclass vetka2;
    vyvody vetka3;
    zg vetka4;
};

#endif // BASE_H
