using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int strlen = 0;
        int maxStrlen = 0;
        int lastI = 0;
        for(int i = 0; i<s.length();i++){
            auto inMap = m.find(s[i]);
            if(inMap != m.end()){
                if(inMap->second >= lastI){
                    if(strlen > maxStrlen){
                        maxStrlen = strlen;
                    }
                    lastI = inMap->second + 1;
                    strlen = i - lastI;
                }
            }
            strlen++;
            m[s[i]] = i;
        }
        if(strlen > maxStrlen){
            maxStrlen = strlen;
        }
        return maxStrlen;
    }
};