
class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
          vector<int> ans;
        for(int i=0;i<indices.size();i++){
            int ind=indices[i];
             int count=0;
            for(int j=ind+1;j<arr.size();j++){
                if(arr[j]>arr[ind]){
                 count++;   
                }
              
        }
          ans.push_back(count);
            
      
    }
    return ans;
    }
};



