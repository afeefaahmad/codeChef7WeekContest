//GFTCHF
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x1,x2,y1,y2,z1,z2;
	cin >>t;
	while(t--) {
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    if(x2>=x1 && y2>=y1 && z2<=z1)
	        cout<<"yes"<<endl;
	    else cout <<"no"<<endl;	        
	}
	return 0;
}
