#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int> nums;
        nums.push_back(3);
        nums.push_back(2);
        nums.push_back(3);
        sort(nums.begin(),nums.end());
        int highest=nums[0],item=nums[0],count=1,maxcount=0;
        for(int i=1;i<nums.size();i++)
        {
             if(nums[i]==item)
            {
                count++;
            }
            if(nums[i]!=item || i==nums.size()-1)
            {
                if(maxcount<=count)
                {
                    maxcount=count;
                    highest=item;
                }
                item=nums[i];
                count=1;
            }
        }
        cout<<highest;
}
