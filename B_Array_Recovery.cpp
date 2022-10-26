#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        long long b[n];
        b[0]=a[0];
        for(int i=1;i<n;i++){
           b[i]=b[i-1]+a[i];

   }
   
   long long count=0;
   long long ans=0;
   for(int i=1;i<n-1;i++){
           if(b[i]-a[i+1]>0){
             ans=-1;
            cout<<ans<<endl;
            break;
           }
           else count++;
           
            }
            if(ans!=-1){

            for (int i = 0; i < n; i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            }
            

        
        
        
        

        }

    return 0;
}