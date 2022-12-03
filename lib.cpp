#include "lib.h"
bool numeroprimo(int x, int k){
    if(x % k == 0){
        if(x == k){
            return true;
        }
        else{
            return false;
        }
    }
    numeroprimo(x, k + 1);
}
