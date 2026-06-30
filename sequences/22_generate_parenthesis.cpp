#brute
class Solution {
public:

    bool valid(string s){
        int balance=0;
        for(char ch: s){
            if(ch=='(') balance++;

            else{
                balance--;
            }
        
        if (balance<0) return false;
        }
        return balance=0;
    }

    void generateallParaenthesis(vector<string> &res, string curr, int n){
        if(curr.length()==2*n && valid(curr)){
            res.push_back(curr);
            return;
        }

        generateallParaenthesis(res, curr+'(', n);
        generateallParaenthesis(res, curr+')', n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generateallParaenthesis(res, "", n);
        return res;
        
    }
};


#optimal
