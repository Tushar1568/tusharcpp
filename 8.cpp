#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        for ( int i = 0; i < n; i++)
        {
        if(s[i]==0&&s[i+1]==1&&s[i+2]==0||s[i]==1&&s[i+1]==0&&s[i+2]==1){
         
         cout<<"Good"<<endl;
         break;
        }
        

        }
        cout<<"Bad"<<endl;
        
    }
}