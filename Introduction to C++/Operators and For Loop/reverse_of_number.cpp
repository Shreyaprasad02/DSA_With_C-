/*
Reverse of a number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

Input format :
Integer N

Output format :
Corresponding reverse number

Constraints:
0 <= N < 10^8

Sample Input 1 :
1234

Sample Output 1 :
4321
*/

#include<iostream>
using namespace std;

int main() {
	int n, rev=0;//n=125, rev=0
	cin>>n;
	while(n>0){
          rev = (rev*10) + n % 10; //rev=5
          n = n / 10; //n=12
	}
	cout<<rev;
}
