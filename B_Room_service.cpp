//Tushar Bhattarai 2112064//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n ;      
        string s;
       cin>>s;
       sort(s.begin(),s.end());
       reverse(s.begin(),s.end());
       
        int sum1=0;
        int sum2=0;
       for(int i=0;i<n;i+=2){
        sum1+=s[i];
       }
       for(int i=1;i<n;i+=2){
        sum2+=s[i];
       }
       if(sum1>sum2){
        cout<<"SHIVAM"<<endl;
       }
       else cout<<"SHUBHAM"<<endl;

       
        }

    return 0;
}