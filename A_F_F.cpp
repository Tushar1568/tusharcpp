//Tushar Bhattarai
#include<bits/stdc++.h>
using namespace std;
int main(){
    
       long long n;
       cin>>n;
       long long arr1[n];
       long long arr2[n];
       for (int i = 0; i <n; i++)
       {
        cin>>arr1[i];
       }
       for (int i = 0; i <n; i++)
       {
        cin>>arr2[i];
       }
       long long c;
       long long x;
      long long mx;
       long long ans=INT_MIN;
       
       for( long long i=0;i<n;i++){
        
         x=(arr2[i]-arr1[i]);
       if(x>ans &&x!=mx){
        ans=x;
        mx=x;
        c=i+1;
       }

       }
       cout<<c<<endl;

        
        

        }

    
