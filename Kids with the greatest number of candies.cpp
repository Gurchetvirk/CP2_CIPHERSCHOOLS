#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int> candies;
        candies.push_back(2);
        candies.push_back(3);
        candies.push_back(5);
        candies.push_back(1);
        candies.push_back(3);
        int extraCandies=3;
        vector<int> temp=candies;
        vector<bool> result;
        sort(temp.begin(),temp.end());
        int max=temp[temp.size()-1];
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= max){
                result.push_back(true);
            }
            else
                result.push_back(false);
        }
        for(int i=0;i<result.size();i++)
            cout<<(bool)result[i]<<" ";
}
