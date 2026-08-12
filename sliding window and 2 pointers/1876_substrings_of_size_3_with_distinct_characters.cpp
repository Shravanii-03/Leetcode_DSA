class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int l=0;
        int ans=0;
        vector<int> freq(26, 0);

        for(int r=0;r<n;r++){
            freq[s[r]-'a']++;

            if(r-l+1==3){
            bool good= true;

            for(int j=0;j<26;j++){
                if(freq[j]>1){
                    good=false;
                    break;
                }

            }
            if(good) ans++;
            freq[s[l]-'a']--;
            l++;
            }
        }
        return ans;
    }
};