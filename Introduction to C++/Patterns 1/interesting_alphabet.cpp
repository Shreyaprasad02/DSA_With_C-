/*
Code : Interesting Alphabets

Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow<=n){
        int currCol = 1;
        char ch = 'A' + n - currRow;
        while (currCol <= currRow)
        {
            cout << char(ch + currCol - 1);
            currCol = currCol + 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }  
}