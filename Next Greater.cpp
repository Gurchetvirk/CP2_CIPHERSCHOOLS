#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<int> nums1,nums2;
        nums1.push_back(4);
        nums1.push_back(1);
        nums1.push_back(2);

        nums2.push_back(1);
        nums2.push_back(3);
        nums2.push_back(4);
        nums2.push_back(2);
        int i,j,item,flag=0;
        vector<int> result;
        vector<int> :: iterator it;
        for(i=0;i<nums1.size();i++)
        {
            flag=0;
            it=find(nums2.begin(),nums2.end(),nums1[i]);
            j=it-nums2.begin();
            item=nums2[j];
            for(j=j+1;j<nums2.size();j++)
            {
                if(item<nums2[j]){
                    result.push_back(nums2[j]);
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                result.push_back(-1);
            }
        }
        for(i=0;i<result.size();i++)
            cout<<result[i]<<" ";
}
