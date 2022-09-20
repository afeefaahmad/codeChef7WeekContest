//FLOW018

#include <iostream>
using namespace std;

int fact_n(int n) ;
int main() {
	int t,n;
	cin >>t;
	while(t--){
	    cin >>n;
	   cout<< fact_n(n)<<endl;
	}
	return 0;
}
int fact_n(int n) {
    if (n>1) return n*fact_n(n-1);
    else 
        return 1;
    
}
