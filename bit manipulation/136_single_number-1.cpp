#brute
class solution{
public:
int getSingleElement(vector<int>& arr) {
        int n = arr.size();

for(int i=0;i<n;i++){
int num=arr[i];
int count=0;
for(int j=0;j<n;j++){
if(arr[j]==num){
count++;
}
if(count==1) return num;
}

return -1;
}

};




#optimal
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        for(int i=0;i<n;i++){
            result^=nums[i];

        }
        return result;
    }
};