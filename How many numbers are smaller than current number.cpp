#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
        int count=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            result.push_back(count);
        }
        for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
}
