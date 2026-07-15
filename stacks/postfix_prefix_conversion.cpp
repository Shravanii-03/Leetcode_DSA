class Solution {
public:
    string postToPre(string postfix) {

        stack<string> st;

        for(int i = 0; i < postfix.size(); i++)
        {
            char c = postfix[i];

            if(isalnum(c))
            {
                st.push(string(1, c));
            }
            else
            {
                string op2 = st.top();
                st.pop();

                string op1 = st.top();
                st.pop();

                string temp = string(1, c) + op1 + op2;

                st.push(temp);
            }
        }

        return st.top();
    }
};