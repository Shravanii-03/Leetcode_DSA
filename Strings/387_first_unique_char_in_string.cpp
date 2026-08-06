#brute
class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
              int count=0;
            for(int j=0;j<n;j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
            if(count==1){
                return i;
            }
            
        }
        return -1 ;
    }
};


#optimal
class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};