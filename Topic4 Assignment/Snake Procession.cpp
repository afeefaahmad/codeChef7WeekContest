#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<s.length();i++){
	        if(s[i]=='H'){
	            count++;
	        }
	        if(s[i]=='T'){
	            count--;
	        }
	        if(count<0||count>1){
	            break;
	        }
	        
	        
	    }
	    if(count!=0){
	        cout<<"Invalid"<<endl;
	    }
	    else{
	        cout<<"Valid"<<endl;
	    }
	}
	return 0;
}
