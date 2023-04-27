/*
Count Characters

Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).

Input Format :
A stream of characters terminated by '$'

Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)

Sample Input :
abc def4 5$

Sample Output :
6 2 2 

Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)
*/

#include<iostream>
using namespace std;

int main()

{    
    char ch;
    ch = cin.get();

    int digits = 0, spaces = 0, characters = 0;
    while(ch != '$')
    { 
        if(ch >= 'a' && ch <= 'z') {
            characters++; 
        }
        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
        else if(ch == ' ' || ch == '\t' || ch == '\n') {
            spaces++;
        } 
		ch = cin.get();
    } 
	cout << characters << " " << digits << " " << spaces;
}
