#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> sMap;
        map<string, int> dMap;
        sMap['I'] = 1; sMap['V'] = 5; sMap['X'] = 10; sMap['L'] = 50; sMap['C'] = 100; sMap['D'] = 500; sMap['M'] = 1000;
        dMap["IV"] = 4; dMap["IX"] = 9; dMap["XL"] = 40; dMap["XC"] = 90; dMap["CD"] = 400; dMap["CM"] = 900;

        int res = 0;
        for(int i = 0; i<=s.length(); i++){
            if(i+1 <= s.length()){
                string next2 = string(1, s[i]) + s[i+1];
                auto val = dMap.find(next2);
                if(val != dMap.end()){
                    res += val->second;
                    i++;
                    continue;
                }
            }
            auto val = sMap.find(s[i]);
            if(val != sMap.end()){
                res += val->second;
            }
        }
        return res;
    }
};