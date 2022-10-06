#include <iostream>

using namespace std;


int main() {
	int testcases;
	cin >> testcases;

	for(int i = 0; i < testcases; i++) {
		string s;
		cin >> s;
		int score[2];
		score[0] = 0;
		score[1] = 0;

		for(int j = 0; j < s.length(); j++) {
			if(s[j] == '0')
				score[0]++;
			else
				score[1]++;
		}

		if(score[0] > score[1]) {
			cout << "LOSE" << endl; 
		}
		else {
			cout << "WIN" << endl;
		}
	}

}
