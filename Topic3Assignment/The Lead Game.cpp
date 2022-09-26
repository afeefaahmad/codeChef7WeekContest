#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	 int a, b, c, diff, max=0, winner, temp, teamA=0, teamB=0;
 cin>>a;
 while(a--) {
  cin>>b>>c;
  teamA=teamA+b;
  teamB=teamB+c;
  if(teamA>teamB) {
   diff=teamA-teamB; temp=1;
  }
  else {
   diff=teamB-teamA; temp=2;
  }
  if(diff>max) {
   max=diff; winner=temp;
  }
 }
 cout<<winner<<" "<<max;
 return 0;
}
