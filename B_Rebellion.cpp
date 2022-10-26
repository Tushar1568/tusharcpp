#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       long long arr[n];
       for (int i = 0; i <n; i++)
       {
        cin>>arr[i];
       }
       int cnt=0;
        int x=count(arr,arr+n,1);
        for (int i = n-1; i >=n-x; i--)
        {
            if(arr[i]==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        

        }

    return 0;
}