/*
Sum of even & odd

Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
*/

#include<iostream>
using namespace std;

int main() {
	
	int N, sum_e = 0, sum_o = 0 ;
    cin>>N;
    
    while(N>0){
        
        int remainder = N % 10;
        if (remainder % 2 == 0)
        {   
            sum_e = sum_e + remainder;    
        }
        else
        {
            sum_o = sum_o + remainder;
        }
        N = N/10;
    } 
    cout << sum_e<<" "<<sum_o<<endl;
}