#brute
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int n1=pat.length();
        int n2=txt.length();
        
        string sortedpat=pat;
        sort(sortedpat.begin(), sortedpat.end());
        int count=0;
        for(int i=0;i<=n2-n1;i++){
            string temp=txt.substr(i,n2);
            sort(temp.begin(), temp.end());
            
        
        if(sortedpat==temp) count++;
        }
        return count;
    }
};
