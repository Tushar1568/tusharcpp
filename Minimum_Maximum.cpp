#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  n;
        cin>>n;
       long long arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }
      long long x=*min_element(arr, arr+n);
        long long res=(n-1)*x;
        cout<<res<<endl;
        

        }

    return 0;
}