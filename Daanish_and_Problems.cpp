#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long arr[10];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long k;
        cin>>k;
        long long sum=0;

        for(int i=9;i>=0;--i){
          sum+=arr[i];
          if(arr[i]>k){
            cout<<i+1<<endl;
            break;
          }
          else if(sum>=k){
              
          }
        }

        
        }

    return 0;
}