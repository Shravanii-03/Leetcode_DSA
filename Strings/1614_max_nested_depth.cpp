class Solution {
public:
    int maxDepth(string s) {
        int balance=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                balance++;
               
            }
            else if (s[i]==')'){
                balance--;
            }
            ans=max(ans, balance);
        }
        return ans;
    }
};