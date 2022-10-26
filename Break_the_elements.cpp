#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }
        long long odd_count=0, even_count=0;
        for(int i = 0; i < n; i++)
       {
        if(arr[i] % 2 == 1)
            odd_count++;
        else
            even_count++;
       }
       if(odd_count>even_count){
          cout<<even_count<<endl;
       }
       else cout<<odd_count<<endl;

        
        

        }

    return 0;
}