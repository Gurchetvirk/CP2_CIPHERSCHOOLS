#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int> nums;
        nums.push_back(2);
        nums.push_back(7);
        nums.push_back(11);
        nums.push_back(15);
        int target=9;
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]== target){
                    cout<<i<<" "<<j;
                }
            }
        }
}
