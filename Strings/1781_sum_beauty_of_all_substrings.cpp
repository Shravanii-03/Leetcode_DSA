class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            unordered_map<char, int> freq;
            for(int j = i ; j < s.length() ; j++)
            {   
                freq[s[j]]++;
                int maxf = INT_MIN;
                int minf = INT_MAX;
                for(auto a : freq)
                {
                    maxf = max(maxf,a.second);
                    minf = min(minf,a.second);

                }
                sum += maxf - minf;
            }   
        }
        return sum;
    }
};