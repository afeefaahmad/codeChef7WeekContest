#include <iostream>
using namespace std;

int main() {
	
	int t,x,y,A;
	cin>>t;
	while (t--) { 
	    
	    cin>>x>>y>>A;
    	
    	if(A>=x && A<y)
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;
	}
	
	return 0;
}
