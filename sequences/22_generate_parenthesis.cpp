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
class Solution {
public:
    void backtrack(string curr, int open, int close, int n, vector<string>& res ){
        if(curr.length()==2*n){
            res.push_back(curr);
            return;
        }

        if(open<n) backtrack(curr+'(',open+1,close, n, res );
         if(close<open) backtrack(curr+')',open,close+1, n, res );
    }
    vector<string> generateParenthesis(int n) {
        vector <string> res;
        backtrack("",0, 0 , n, res );
        return res;
    }
};

