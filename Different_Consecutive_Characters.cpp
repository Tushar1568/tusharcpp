#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       int count=0;
       for(int i=0;i<n-1;i++){
           if((s[i]=='0' && s[i+1]=='0')||(s[i]=='1' && s[i+1]=='1')){
               count++;
           }
   }
   cout<<count<<endl;
	
}
return 0;
}
