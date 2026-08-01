#brute
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        int maxi=0;
        while(k--){
        for(int i=0;i<n;i++){
           if(gifts[i]>gifts[maxi]){
            maxi=i;
           }

        }
        gifts[maxi]=sqrt(gifts[maxi]);
        }
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=gifts[i];
        }
        return ans;
    }
};



#optimal
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        int n=gifts.size();

        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }
        while(k--){
            int largest=pq.top();
            pq.pop();
            largest=floor(sqrt(largest));
            pq.push(largest);
        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};