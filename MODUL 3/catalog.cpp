#include <iostream>
#include "catalog.h"

using namespace std;

//1304201018//

void add_data(catalog &C, int x){
    if(C.num < C.mx) {
        C.data[C.num+1] = x;
    }
    C.num++;
}

//1304201018//

void view_data(catalog C){
    int i = 0;
    while(i <= C.num){
        cout << C.data[i] << " ";
        i++;
    }
    cout << endl;
}

//1304201018//

int search_data(catalog C, int x){
    int i = 0;
    while(i < C.num){
        if(C.data[i] == x){
            return i;
        }
        i++;
    }
    return -1;
}

//1304201018//

void reversed_view(catalog C){
    for(int i = 0; i <=C.num; i++){
        cout <<C.data[C.num-i] << " ";
    }
    cout << endl;

}

//1304201018//

void delete_data(catalog &C){
    C.num -= 1;

}

