#include<bits/stdc++.h>
using namespace std;
#define  long long ll
int main(){
      ll t;
	
	
	cin>>t;
	
	while(t--)
	{
      int e;
     int ans=0;
     long long m[26], n[26];
	string a, b;
	    cin>>e;
	    cin>>a;
	    cin>>b;
	    
	    for(int i=0; i<26; i++){
	        m[i]=n[i]=0;
	    }
	    
	    for(int j=0; j<e; j++){
	        m[a[j]-97]++;
	        n[b[j]-97]++;
	    }
	    
	    
	    
	    for(int k=0; k<26; k++){
	        ans=max(ans, min(m[k], n[k]));
	    }
	    
	    cout<<ans<<"\n";
	}
   return 0;
}