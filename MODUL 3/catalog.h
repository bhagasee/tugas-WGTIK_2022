#ifndef CATALOG_H_INCLUDED
#define CATALOG_H_INCLUDED
#include <iostream>

using namespace std;
//1304201018//
const int nMax = 50;
struct catalog{
    int data[nMax];
    int mx;
    int num;
};

void add_data(catalog &C, int x);
void view_data(catalog C);
int search_data(catalog C, int x);
void reversed_view(catalog C);
void delete_data(catalog &C);


#endif // CATALOG_H_INCLUDED
//1304201018//
