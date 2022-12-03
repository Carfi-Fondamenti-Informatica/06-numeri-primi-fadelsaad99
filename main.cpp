#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int x = 0, y = 2;
    cin >> x;
    if(numeroprimo(x, y) == true){
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
