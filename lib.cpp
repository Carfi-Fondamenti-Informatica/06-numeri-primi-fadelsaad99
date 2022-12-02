#include "lib.h"
bool numprimo(int x, int k){
    if(x % k == 0){
        if(x == k){
            return true;
        }
        else{
            return false;
        }
    }
    numprimo(x, k + 1);
}
