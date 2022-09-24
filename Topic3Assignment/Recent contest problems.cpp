//RECENTCONT

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    string str[n];
	    
	    int S=0,L=0;
	    for (int i=0;i<n; i++) {
	        
	        cin>>str[i];
	        
	        if(str[i]=="START38")   S++;
	        else    L++;
	    }
	    
	    cout<<S<< " "<<L<<endl; 
	}
	return 0;
}
