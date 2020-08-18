#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int n=3;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);
    int i,j;
    vector<int> finalv;
    for(i=0,j=n;i<n,j<nums.size();i++,j++)
    {
         finalv.push_back(nums[i]);
         finalv.push_back(nums[j]);
    }
    for(int i=0;i<finalv.size();i++)
        cout<<finalv[i]<<" ";
}
