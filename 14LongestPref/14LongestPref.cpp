#include <iostream>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string prefix = "";
            int j = 0;
            while(true){
                for(int i = 0; i < strs.size(); i++){
                    if(j < strs[i].length()){
                        if(j + 1 > prefix.length()){
                            prefix += strs[i][j];
                        } else if(prefix[j] != strs[i][j]){
                            prefix.pop_back();
                            return prefix;
                        }
                    } else {
                        if(j + 1 == prefix.length() && prefix.length() >= 1){
                            prefix.pop_back();
                        }
                        return prefix;
                    }
                }
                j++;
            }
            
        }
    };