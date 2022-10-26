#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
int sum=0;
cin>>n>>k;
long long a[n];
for (int i = 0; i < n; i++)
{
   cin>>a[i];
}
for (int i = 0; i < k; i++)
{
   sum+=a[i];
}
int mx=INT_MIN;
mx=max(mx,sum);
for (int i = 1; i < n-k+1; i++)
{
   sum-=a[i-1];
   sum+=a[i+k-1];
   mx=max(mx,sum);
}
cout<<mx<<endl;








}