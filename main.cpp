#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int n = 0, i = 2;
    cin >> n;
    if(numprimo(n, i) == true){
        cout << "numero primo";
    }
    else{
        cout << "numero non primo";
    }
    return 0;
}
