#include<bits/stdc++.h>
using namespace std;
# define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,u,d;
        cin>>n>>u>>d;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int count=1;
        int x=0;
        for (int i = 0; i <n-1; i++)
        {
            if(arr[i+1]>=arr[i] && arr[i+1]-arr[i]<=u){
            count++;
         }
        
         
         else if(arr[i]>=arr[i+1] && arr[i]-arr[i+1]<=d){
            count++;
         }
         else if(arr[i]>arr[i+1]){ 
            x++;
            count++;
            }
            else{
                break;
            }
            if(x>1){
                count--;
                break;
            }
            
        }
        


       cout<<count<<endl;
        
        
        

        
    }
    
   
    return 0;
    

}