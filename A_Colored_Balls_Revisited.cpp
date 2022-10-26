#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int max = *max_element(arr,arr+n);
      int index = find(arr, arr+n, max) - arr;
      cout<<index+1<<endl;
        

        }

    return 0;
}