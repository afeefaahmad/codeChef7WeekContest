
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
     cin>>t;
     while(t--){
     int temp=0,test=0;
     string a,b;
     cin>>a>>b;
     for(int i=0;i<a.size();i++){
      if((a[i]=='?' && b[i]=='?')|| (a[i]!='?' && b[i]=='?') || (a[i]=='?' && b[i]!='?') || (a[i]==b[i])){
         temp++;
      }
      if((a[i]=='?' && b[i]=='?') || (a[i]!='?' && b[i]=='?') || (a[i]=='?' && b[i]!='?') || (a[i]!=b[i])){
         test++;
      }
     }  
     cout<<(a.size()-temp)<<" ";
     cout<<test<<endl;
     }
	return 0;
}
