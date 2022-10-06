#include <iostream>
using namespace std;

int calc(int a[],int n){
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==a[i])
        {
            count++;
        }
    }
    
    return (n-count);
}

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    int a[n];
	    for(int j=0;j<n;j++)
	       cin>>a[j];
	    cout<<calc(a,n)<<endl;    
	}
	return 0;
	
}
