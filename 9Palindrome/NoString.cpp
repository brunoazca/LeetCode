#include <iostream>
#include <string>

class Solution {
    public:
        bool isPalindrome(int x) {
            if(x != 0 && x % 10 == 0){
                return false;
            }
            int aux = 0;
            while(x > aux){
                aux = aux*10 + x%10;
                if(x > aux){
                    x /= 10;
                }
            }
            if(x == aux){
                return true;
            }
            return false;
        }
    };