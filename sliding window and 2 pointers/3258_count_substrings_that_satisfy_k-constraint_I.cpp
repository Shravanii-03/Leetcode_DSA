#brute
class Solution {
public:
    long long countKConstraintSubstrings(string s, int k) {
        int n = s.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int zeros = 0;
            int ones = 0;

            for (int j = i; j < n; j++) {

                if (s[j] == '0')
                    zeros++;
                else
                    ones++;

                
                if (zeros <= k || ones <= k) {
                    ans++;
                }
            }
        }

        return ans;
    }
};


#optimal
class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int l=0;
        int count=0;
        int zero=0;
        int one=0;
        for(int r=0;r<n;r++){
            if(s[r]=='0'){
                zero++;
            }
            else{
                one++;
            }
            while(one>k && zero>k){
                if(s[l]=='0') zero--;
                else{
                    one--;
                }
                l++;
            }
            count=count+(r-l+1);
        }

        return count;
    }
};