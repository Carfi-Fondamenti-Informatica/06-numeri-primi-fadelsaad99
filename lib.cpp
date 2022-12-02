#include "lib.h"
bool nuprimo(int n, int i){
    if(n % i == 0){
        if(n == i){
            return true;
        }
        else{
            return false;
        }
    }
    nuprimo(n, i + 1);
}
