/*
Fibonacci Number

Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


Input Format :
Integer N
Output Format :
true or false
Constraints :
0 <= n <= 10^4
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    
*/

#include<iostream>
using namespace std;

bool checkMember(int n) {
  //  Check if the number is equal to 0 or 1 then return true.
  if (n == 0 || n == 1) {
    return true;
  }
  //  Variables to store the previous Fibonacci Numbers.
  int a = 0, b = 1;

  while (true) {
    //  Variable to store the next Fibonacci Number.
    long add = a + b;
    //  if next Fibonacci number is equal to given number then return true.
    if (add == n) {
      return true;
    }
    //  If next Fibonacci number is greater than the given number then stops the iteration.
    else if (add > n) {
      break;
    }
    //  Change 'b' to 'a' and 'a' to next Fibonacci Number.
    b = a;
    a = add;
  }
  //  If the given number is not a Fibonacci Number then return false.
  return false;
}

int main(){
  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}