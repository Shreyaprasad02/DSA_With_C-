/*
Binary to decimal

Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
*/

#include<iostream>
using namespace std;

int main() {
	int n, pv=1, ans=0;//n=1100
	cin>>n;
	while(n>0){
	  int last = n % 10;
	  ans = ans + last * pv;
      n = n / 10;
      pv= pv * 2;

	}
	cout<<ans;
}