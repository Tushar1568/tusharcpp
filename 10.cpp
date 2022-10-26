#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
         long long int n,m;
        cin>>n>>m;
        
         if(m==1){
            cout<<n-1<<endl;
        }
       else if (n>m) cout<<n*m-n<<endl;
       else cout<<m*n-m<<endl;
    
}