#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,c;
	    cin>>d>>c;
	    int c1,c2,c3,c4,c5,c6;
	    cin>>c1>>c2>>c3>>c4>>c5>>c6;
	    int sum=c1+c2+c3+c4+c5+c6;
	    if(c<=2*d){
	        cout<<"YES"<<endl;
	    }
	    else if(c==d){
	        cout<<"NO"<<endl;
	    }
	}
	 
	return 0;
}
