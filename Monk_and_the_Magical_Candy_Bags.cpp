#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        multiset<long long>m;
        for (int i = 0; i < n; i++)
        {
           long long ct;
            cin>>ct;
            m.insert(ct);
        }
        long long total=0;
        for(int i=0;i<k;i++){

         auto it=(--m.end());
          long long ct=*it;
          total+=ct;
          m.erase(ct);
          m.insert(ct/2);

        
        }
        cout<<total<<endl;
        
        }

    return 0;
}