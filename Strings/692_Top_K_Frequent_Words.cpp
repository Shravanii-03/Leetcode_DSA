class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        int n=words.size();
        for(int i=0;i<n;i++) {
            mp[words[i]]++;
        }
        vector<string> ans;
        while(k>0){
            int maxfreq=0;
            string word="";

            for(pair<const string, int>p:mp){
                if(p.second>maxfreq){
                    maxfreq=p.second;
                    word=p.first;
                }
                else if (p.second==maxfreq && p.first<word ){
                    word=p.first;
                }
            }

            ans.push_back(word);
            mp.erase(word);
            k--;

        }
        return ans;
    }
};