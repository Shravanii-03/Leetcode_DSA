class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int alt=0;
        for(int i=0;i<n;i++){
           int left=(i-1+n)% n;
           int right=(i+1)%n;

           if(colors[left]!=colors[i] && colors[i]!=colors[right]){
            alt++;
           }

        }
        return alt;
    }
};