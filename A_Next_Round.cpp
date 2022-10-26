#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
    cin>>a>>n;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    int x=arr[n-1];
    for (int i = 0; i < a; i++)
    {

       if(arr[i]>=x && arr[i]!=0){
        cnt++;
       }
    }
    cout<<cnt<<endl;
    
    

    return 0;
}