//AMR15A
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,ready, notready;
	cin>>t;
	for(int  i=0; i<t; i++) {
	    int A[i];
	    cin>>A[i];
	
	    if(A[i]%2==0)   ready++;
	    else    notready++;
	} 
	    if(ready > notready)    cout<<"READY FOR BATTLE"<<endl;
	    else    cout <<"NOT READY"<<endl;
	
	return 0;
}
