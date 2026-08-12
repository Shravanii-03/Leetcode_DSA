class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxfreq=0;
        int ans=0;

        vector< int> freq(26, 0);

        for(int r=0;r<s.length();r++){
            freq[s[r]-'A']++;
            maxfreq=max(maxfreq,freq[s[r]-'A'] );

            int changes=(r-l+1)-maxfreq;

            while(changes>k){
                freq[s[l]-'A']--;
                l++;
                
            changes=(r-l+1)-maxfreq;

            }

            ans= max(ans, r-l+1);
        }
        return ans;
    }
};