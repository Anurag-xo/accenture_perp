#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int count = 0;
        
	//count the number of set bits in N
	while(n > 0) {
		if (n & 1) {              // Check if the least significant bit is set
			count++;
		}
		n = n >> 1;               // Right shift n by 1 to check the next bit
	}

	// 2 set bits = 2^0*1 + 2^1*1 = 3
	int ans = 0;
	int power = 1;

	for(int i = 0; i < count; i++) {
		ans += power * 1;
		power = power * 2;
	}
	cout << ans << endl;
};


