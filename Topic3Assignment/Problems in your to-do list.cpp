//TODOLIST

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n=0;
	cin>>t;
	while(t--) {
	    int remove=0;
	    cin>>n;
	    for(int i=0; i<n; i++) {
	        int A[i];
	        cin>>A[i];
	        
	        if(A[i]>=1000)   remove++;
	    }
	    cout << remove<< endl;
	}
	return 0;
}
