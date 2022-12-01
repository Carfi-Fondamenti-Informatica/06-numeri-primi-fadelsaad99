#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int x = 0;
    cin >> x;
    if(primo(x,x)){
        cout << "numero primo";
    }else{
        cout << "numero non primo";
    }
    return 0;
}
