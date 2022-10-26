#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n,s;
       cin>>n>>s;
       long long x=n*n;
       if(n==0 || x>s){
        cout<<0<<endl;
       }
       else cout<<s/x<<endl;

        

        }

    return 0;
}