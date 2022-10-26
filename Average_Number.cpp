#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,k,v;
	    cin>>n>>k>>v;
	     int x=n+k;
	    long long arr[x];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	   long long   res=(float)((v*x)-sum);
	    if(res>0 && res%k==0){
	        cout<<res/k<<endl;
	    }
	    else cout<<-1<<endl;
	    
	}
	return 0;
}
