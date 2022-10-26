#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
      long x;
        cin>>x;
        long long arr[x]; 
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }
        map<long long,long long>m;
        for (int i = 0; i < x; i++)
        {
            m[arr[i]]++;
        }
        long long ans=-1;
        for(auto i:m){
            ans=max(ans,i.second);
        }
        cout<<ans-1<<endl;

        }
        return 0;
        }
