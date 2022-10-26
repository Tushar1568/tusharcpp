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
        if(n-2==0){
            cout<<6<<endl;
        }
        int x=n-2
        else cout<<(6*x*(x+1))/2<<endl;
        

        }

    return 0;
}