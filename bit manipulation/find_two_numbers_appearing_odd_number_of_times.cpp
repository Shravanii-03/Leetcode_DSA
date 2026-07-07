class solution{
public:
vector<int> singleNumber(vector<int>& nums){
vector<int> ans;

int n=nums.size();
for(int i=0;i<n;i++){
int count=0;
for(int j=0;j<n;j++){
if(nums[i]==nums[j]){
count++;
}

if(count==1){
ans.push_back(nums[i]);
}
if(ans.size()==2) break;
}
sort(ans.begin(), ans.end());

        return ans;
}
};



