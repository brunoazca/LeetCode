#include <iostream>
#include <string>

class Solution {
    public:
        bool isPalindrome(int x) {
            std::string str = std::to_string(x);
            int len = str.length();
            char* left = &str[0];
            char* right = &str[str.length() - 1]; 
            while(left < right){
                if(*left != *right){
                    return false;
                }
                left++;
                right--;
            }
            return true;
        }
    };