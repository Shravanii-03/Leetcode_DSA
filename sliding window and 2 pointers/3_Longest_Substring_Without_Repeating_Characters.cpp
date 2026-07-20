#brute
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            vector<int>hash(256, 0); 
            for(int j=i;j<s.size();j++){
                if(hash[s[j]]==1){
                    break;
                }
                hash[s[j]]=1;
             maxlen= max(maxlen, j-i+1);
            }

        }
        return maxlen;
    }
};


#optimal
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxlen=0;
           vector<int> hash(256, -1 );
        for(int right=0;right<s.size();right++){
         
            if(hash[s[right]]>= left){
                left=hash[s[right]]+1;
            }
            hash[s[right]]=right;
            maxlen=max(maxlen, right-left+1);
        }
        return maxlen; 
    }


};