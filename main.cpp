#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int x = 0, k = 2;
    cin >> x;
    if(numprimo(x, k) == true){
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
