#include <iostream>
using namespace std;

int main() {
	// your code goes here
int N,M,K;
    
    int t;
    cin >> t;
    
    while(t--){
        cin>>N>>M>>K;
        
    if ((M-K)>=N) {
        cout<< "Yes" << endl;
    }
     else if ((M-K)<N) {
         cout << "No"<< endl;
     }
   
  }
	
	return 0;
}
