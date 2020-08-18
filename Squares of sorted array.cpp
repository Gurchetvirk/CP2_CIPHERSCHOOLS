#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> A;
    A.push_back(-4);
    A.push_back(-1);
    A.push_back(0);
    A.push_back(3);
    A.push_back(10);
        int temp;
        for(int i=0;i<A.size();i++){
            A[i]=A[i]*A[i];
        }
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
            cout<<A[i]<<" ";
}
