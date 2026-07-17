#brute
 vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[i]) {
                    ans[i] = arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};

#optimal
class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n, -1);
	for(int i=n;i>=0;i--){
	while(!st.empty() && st.top()>=arr[i]){
	st.pop();	
	}
	if(!st.empty()){
	ans[i]=st.top();		
}
st.push(arr[i])
	}
return ans;
	}
};