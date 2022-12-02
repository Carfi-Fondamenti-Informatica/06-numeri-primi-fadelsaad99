#include "lib.h"
bool nprimo(int n, int i){
    if(n % i == 0){
        if(n == i){
            return true;
        }
        else{
            return false;
        }
    }
    nprimo(n, i + 1);
}
