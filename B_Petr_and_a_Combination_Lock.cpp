#include<bits/stdc++.h>
using namespace std;
int main(){
    
       int n;
       cin>>n;
       long long arr[n];
       int sum=0,sum1=0;
       for (int i = 0; i <n; i++)
       {
        cin>>arr[i];
        sum+=arr[i];
       }
       sort(arr,arr+n);
       for (int i = 0; i <n-1; i++)
       {
        sum1+=arr[i];
       }
       if(sum%360==0){
        cout<<"YES"<<endl;
       }
       else if(sum1==arr[n-1]){
        cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;

        
        

        

    return 0;
}