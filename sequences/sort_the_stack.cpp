class Solution {
public:

    void insertelements(stack<int> &st, int x){
        if(st.empty() || st.top() <= x){
            st.push(x);
            return;
        }

        int temp = st.top();
        st.pop();

        insertelements(st, x);

        st.push(temp);
    }

    void sortStack(stack<int> &st) {
        if(st.empty()){
            return;
        }

        int temp = st.top();
        st.pop();

        sortStack(st);

        insertelements(st, temp);
    }
};