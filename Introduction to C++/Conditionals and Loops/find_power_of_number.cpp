/*
Find power of a number

Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1
*/

#include<iostream>
using namespace std;

int main() {
    int x, n ;
    cin >> x >> n ;
    int ans = 1;
    
    while(n>0){  
        ans = ans * x;
        n = n - 1;
    }
    cout << ans ;
}