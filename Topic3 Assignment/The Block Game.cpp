#include <iostream>

using namespace std;



int main() {

	int t;  cin>>t;

	while(t--) {

	    int num;  cin>>num;

	    int rev=0,val;

   val = num;

   while(num > 0) {

      rev = rev * 10 + num % 10;

      num = num / 10;

   }

   if(val==rev)

   cout<<"wins"<<endl;

   else

   cout<<"loses"<<endl;



	}

	return 0;

}
