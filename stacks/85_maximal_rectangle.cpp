class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        vector<int> left(n), right(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>= heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i]=-1;
            }
            else{
                left[i]=st.top();
            }
            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>= heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n;
            }
            else{
                right[i]=st.top();
            }
            st.push(i);
        }

        int maxarea=0;
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int area=width*heights[i];
            maxarea=max(maxarea, area);
        }
        return maxarea;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;

        int rows=matrix.size();
        int cols=matrix[0].size();

         vector<int> histogram(cols, 0);
         int ans=0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]=='1'){
                histogram[j]++;
            }

            else{
                histogram[j]=0;
            }

        }
        ans=max(ans,largestRectangleArea(histogram));

    }
    return ans;
    }
};