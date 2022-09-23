//PRACTICEPERF

#include <iostream>
using namespace std;

int main() {
	int p1,p2,p3,p4,ans=0;
	cin>>p1>>p2>>p3>>p4;
	if(p1>=10){
	    ans++;
	}
	if(p2>=10){
	ans++;
	}
	if(p3>=10){
	    ans++;
	}
	if(p4>=10){
	    ans++;
	}
	cout<<ans<<"\n";
	
    return 0;
}   

////////don't get why following code doesn't work

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int count;
	int A[4];
	for(int i=0; i<4; i++) {
	    cin>>A[i];
	    if(A[i]>10)  count+=1;
	    
	}
	 
	 cout<< count;
	return 0;
}
