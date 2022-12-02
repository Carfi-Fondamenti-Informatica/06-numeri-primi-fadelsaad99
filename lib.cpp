#include "lib.h"
bool numprimo(int n, int i){
    if(n % i == 0){
        if(n == i){
            return true;
        }
        else{
            return false;
        }
    }
    numprimo(n, i + 1);
}
