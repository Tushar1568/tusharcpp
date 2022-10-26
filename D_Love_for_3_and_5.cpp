#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
       long long l,r;
       cin>>l>>r;
      long long x=1;
       long long cnt=0;
       long long p=l;
       long long q=p;
       long long v=q;
       long long w=v;

       while(l<=r)
       {
        if(x<=r && x>=p){
            cnt++;
        }
        x*=3;
        l*=3;
       }
      long long y=5;
        while(p<=r)
       {
        if(y<=r && y>=q){
            cnt++;
        }
        y*=5;
        p*=5;
       }
      long long z=15;
        while(q<=r)
       {
        if(z<=r &&z>=v){
            cnt++;
        }
        z*=3;
        q*=3;
       }
       long long d=75;
        while(v<=r)
       {
        if(d<=r && d>=w){
            cnt++;
        }
        d*=5;
        v*=5;
       }
      
       cout<<cnt<<endl;
      


        }

    return 0;
}