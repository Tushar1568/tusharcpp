#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
          cin>>n;
          long long arr[n];
          for (int i = 0; i < n; i++)
          {
            cin>>arr[i];
          }
          sort(arr,arr+n);
          int count=0;
          for (int i = 0; i < n-1; i++)
          {
            if(arr[0]==arr[i+1]){
                count++;
            }
            
          }
          if(count==0){
            cout<<n-1<<endl;
          }
          else cout<<n-count<<endl;

        }

    return 0;
}