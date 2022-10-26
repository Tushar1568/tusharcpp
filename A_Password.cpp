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
       int x=10-n-1;
        if(x==0){
            cout<<6<<endl;
        }
        
        else cout<<(6*x*(x+1))/2<<endl;
        

        }

    return 0;
}