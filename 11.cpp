#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;s[i]!=0;i++){
        if(s[0]>=97 && s[0]<=122){
            s[0]=s[0]-32;
        }

    }
    cout<<s<<endl;
}
int main(){
long long int n,m;
        cin>>n>>m;
        
         if(m==1){
            cout<<n-1<<endl;
        }
       else cout<<(m-1)*n<<endl;
    
}