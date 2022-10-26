#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       long long arr[n];
       int a=n/2+1;
       int b=1;
       
       for (int i = 0; i < n; i++)
       {
         if(i%2==0){
          arr[i]=a;
          a++;
         }
         else{
         arr[i]=b;
          b++;
         }
       }
       
       for (int i = 0; i < n; i++)
       {
          cout<<arr[i]<<" ";
       }
       cout<<endl;
       

        }

    return 0;
}