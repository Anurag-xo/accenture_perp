#include <bits/stdc++.h>
using namespace std;

int main() {
	string playerA; cin >> playerA;

	if(playerA == "rock") {
		cout << "paper";
	} else if (playerA == "paper") {
		cout << "scissors";
	} else {
		cout << "rock";
	}
};
