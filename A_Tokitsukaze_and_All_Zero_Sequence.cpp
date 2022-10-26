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
       sort(arr,arr+n);
       int count1=0;
       
       for (int i = 0; i <n-1; i++)
       {
        if(arr[i]!=arr[i+1]){
            count1++;
        }
       }
      int z=count(arr,arr+n,0);
        if(count1==n-1 && z==0){
            cout<<n+1<<endl;
        }
        else if(z>0){
            cout<<n-z<<endl;
        }
        else cout<<n<<endl;
        

        }

    return 0;
}