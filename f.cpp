#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
       cin>>s;
       int x=s.length();
       int count=0;
       for (int i = 0; i <x; i++)
       {
          if(s[i]=='1'){
            count++;
          }
       }
       cout<<count<<endl;

}