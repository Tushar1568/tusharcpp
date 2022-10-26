//2112064
//tushar
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,k;
    cin>>n>>k;
   
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
     
    for (int i = 0; i < n; i++)
    {
       if(arr[i]>k){
          count++;
       }
    }
    long long ans= pow(2,count);

    cout<<ans-1<<endl;    
    
    }
    return 0;
}
