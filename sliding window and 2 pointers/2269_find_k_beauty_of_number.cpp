class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int ans=0;
        for(int i=0;i+k<=s.size();i++){
            string st=s.substr(i, k);
            int x=stoi(st);

            if(x!=0 && num%x==0){
                ans++;
            }
        }
        return ans;
    }
};