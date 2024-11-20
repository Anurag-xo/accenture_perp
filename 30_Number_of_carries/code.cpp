#include <bits/stdc++.h>
using namespace std;

int findCarryCount(int num1, int num2) {
  int carry = 0;
  int count = 0;

  while(num1 > 0 and num2 > 0) {
    int sum = num1 % 10 + num2 % 10 + carry;   // Taking the right most digit of the number using this.
    carry =sum / 10; // find the carray
    if(carry == 1) count++;  //if there is the carry then
    num1 = num1 / 10; 
    num2 = num2 / 10;
  }

  while(num1 > 0) {
    int sum = num1 % 10 + carry;   // Taking the right most digit of the number using this.
    carry =sum / 10; // find the carray
    if(carry == 1) count++;  //if there is the carry then
    num1 = num1 / 10; 
  }

  while(num2 > 0) {
    int sum = num2 % 10 + carry;   // Taking the right most digit of the number using this.
    carry =sum / 10; // find the carray
    if(carry == 1) count++;  //if there is the carry then
    num2 = num2 / 10;
  
  }
  return count;
}

int main() {
  int num1;
  int num2;

  cin >> num1;
  cin >> num2;

  cout << "Result: " << findCarryCount (num1, num2) << endl;
  return 0;
}
