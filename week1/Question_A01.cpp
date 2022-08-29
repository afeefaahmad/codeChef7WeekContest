#include <iostream>
using namespace std;

#include <stdio.h>

int main() {
    long long int x,y;
    
    int t;
    cin >> t;
    
    while(t--){
        cin>>x;
    cin>>y;    
    if (x<y){
        cout<< "first" << endl;
    }
     else if (x>y){
        cout << "second" << endl;  
    }
    else if (x=y){
        cout << "any"<< endl;
    } 
   
  }
  return 0;                                        
}
