#include <iostream>
#include <map>
using namespace std;


class Solution {
    public:
        bool isValid(string s) {
            map<char,char> m = {{'(',')'}, {'[',']'}, {'{','}'} };
            vector<char> pile;
            for(int i = 0; i<s.length(); i++){
                if(m[s[i]]){
                    pile.push_back(s[i]);
                } else if(pile.size() >= 1 && m[pile.back()] == s[i]){
                    pile.pop_back();
                } else{
                    return false;
                }
            }
            if(pile.size() == 0){
                return true;
            } else{
                return false;
            }
        }
    };