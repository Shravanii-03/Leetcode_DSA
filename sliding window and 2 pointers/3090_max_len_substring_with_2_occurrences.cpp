#brute
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;

                if(freq[s[j]-'a']>2){
                    break;
                }
                ans=max(ans, j-i+1);
            }
           
        }
        return ans;
    }
};


#optimal
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int l=0;
        int ans=0;
         vector<int>freq(26,0);
        for(int r=0;r<n;r++){
            freq[s[r]-'a']++;

        while(freq[s[r]-'a']>2){
            freq[s[l]-'a']--;
            l++;
        }
        ans=max(ans, r-l+1);
        }
        return ans;
    }
};