#brute
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area=0;
         int maxarea=0;
        int n=heights.size();
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                mini=min(mini, heights[j]);
                int width=j-i+1;
                area=mini*width;
                maxarea=max(area, maxarea);
            }
        }
        return maxarea;
    }
};


#optimal
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
};