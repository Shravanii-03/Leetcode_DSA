#brute
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double maxi=nums[0];
        for(int i=0;i<=nums.size()-k;i++){
            double sum=0;
            for(int j=i;j<i+k;j++){
                sum += nums[j];
                
            }
            avg=sum/k;
             maxi=max(avg, maxi);
        }
        return maxi;
    }
};


#optimal
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }

        double maxi = sum;

        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxi=max(maxi, sum);
        }
        return maxi/k;
    }
};