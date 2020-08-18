#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int> nums;
        nums.push_back(0);
        nums.push_back(1);
        nums.push_back(0);
        nums.push_back(3);
        nums.push_back(12);
        vector<int> newv;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                c++;
            }
            else
            {
                newv.push_back(nums[i]);
            }
        }
        for(int i=0;i<c;i++)
            newv.push_back(0);
        cout<<"[";
        for(int i=0;i<newv.size();i++)
        {
            cout<<newv[i];
            if(i!=newv.size()-1)
                cout<<",";
        }
        cout<<"]";

}
