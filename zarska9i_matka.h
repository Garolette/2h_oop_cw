#ifndef ZARSKA9I_MATKA_H
#define ZARSKA9I_MATKA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class zarska9I_Matka
{
public:
    zarska9I_Matka ( zarska9I_Matka * p_parent = 0 );//1.

    void    set_object_name ( string object_name );
    string  get_object_name ( );
    void    set_parent      ( zarska9I_Matka * p_parent );
    void    add_child       ( zarska9I_Matka * p_child  );

    void    delete_child    ( string    s_object_name );
    void    set_state       ( char      c_state  );
    char    get_state       ( );
    void    set_level       ( int level);
    int     get_level       ( );
    void    change_level    (char sym);
    vector < zarska9I_Matka * >  children;
    vector < zarska9I_Matka * > :: iterator it_child;
set_out_mass();

    zarska9I_Matka * p_parent;

    zarska9I_Matka *    get_child       ( string object_name  );
    string    object_name;
     string object_path;
private:
    int i_level;
//    string object_path;
//    string    object_name;
    int       level;
    char      c_state;
};

#endif // ZARSKA9I_MATKA_H
