#include <iostream>
using namespace std;

int main() {
	long long int A,B,C;
    
    int t;
    cin >> t;
    
    while(t--){
        cin>>A>>B>>C;
        
    if (A>B && A>C){
        cout<< "Alice" << endl;
    }
     else if (B>A && B>C){
        cout << "Bob" << endl;  
    }
    else if (C>A && C>B){
        cout << "Charlie"<< endl;
    } 
   
  }
	return 0;
}
