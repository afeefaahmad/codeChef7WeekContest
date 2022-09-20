//BATTERYLOW

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,b;
	cin >>t;
	while(t--) {
	    cin>>b;
	    if(b<=15) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
