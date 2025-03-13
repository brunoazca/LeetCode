#include <iostream>
#include <string>

class Solution {
    public:
        bool isPalindrome(int x) {
            std::string str = std::to_string(x);
            int len = str.length();
            for(int i = 0; i<=len/2;i++){
                if(str[i] != str[len - i - 1]){
                    return false;
                }
            }
            return true;
        }
    };