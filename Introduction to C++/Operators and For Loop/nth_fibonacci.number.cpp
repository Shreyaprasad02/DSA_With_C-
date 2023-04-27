/*
Nth Fibonacci Number

Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  1, 
           F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Sample Input 1:
6
Sample Output 1:
8

*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int a = 0;
  int b = 1;
  int c;
  
  for(int i = 0; i < n; i++){
    c = a + b;
    a = b;
    b = c;
  }
  cout << a << endl;
}