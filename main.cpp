#include<iostream>
using namespace std;
#include "lib.h"
int main () {

bool primo(int num) {

    if (num < 1){
        return false;
    }else if (num == 2, num == 1) {
        return true;
    }
    bool primo (int x) {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {

                for (int i = 2; i < num; i++)
                    if (num % i == 0) {
                        return false;
                    }
            }
            return true;
        }
        return 0;
    }
