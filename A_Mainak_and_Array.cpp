#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
        }
        int s1=*max_element(arr, arr + n);
       int s2=*min_element(arr, arr + n);
        cout<<s1-s2<<endl;
        }

    return 0;
}