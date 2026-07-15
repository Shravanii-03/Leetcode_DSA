class Solution {
public:
    string prefixToInfix(string s) {

        stack<string> st;
	for(int i = s.size() - 1; i >= 0; i--)
        {
            char c = s[i];

            if((c >= 'a' && c <= 'z') ||
               (c >= 'A' && c <= 'Z') ||
               (c >= '0' && c <= '9'))
            {
                st.push(string(1, c));
            }
            else
            {
                string op1 = st.top();
                st.pop();

                string op2 = st.top();
                st.pop();

                string temp =op1 + op2 + c;

                st.push(temp);
            }
        }

        return st.top();
    }
};