#include <iostream>
#include "catalog.h"
using namespace std;

//1304201018//

int main()
{
    catalog storage;
    storage.mx = 8;
    storage.num = -1;

    add_data(storage, 6);
    view_data(storage);
    add_data(storage, 4);
    view_data(storage);
    add_data(storage, 8);
    view_data(storage);
    add_data(storage, 2);
    view_data(storage);

    cout<< endl;
//1304201018//
    int i;
    i = search_data(storage, 8);
    cout << i << endl;
    i = search_data(storage, 5);
    cout << i << endl;

    cout << endl;

    reversed_view(storage);
    add_data(storage, 5);
    reversed_view(storage);

    cout << endl;

    view_data(storage);
    delete_data(storage);
    view_data(storage);

    return 0;
}

//1304201018//
