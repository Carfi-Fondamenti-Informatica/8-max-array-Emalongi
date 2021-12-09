#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a=0;
    float max=0;
    cin>>a;
    float lol[a];
    for(int i=0; i<a; i++){
        float b=0;
        cin>>b;
       lol[i]=b;
    }
    cout<< mass( a, lol ,max );


    return 0;
}
