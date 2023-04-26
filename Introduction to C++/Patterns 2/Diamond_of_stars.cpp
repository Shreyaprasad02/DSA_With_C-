/*
Code : Diamond of stars

Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5

. . *
. * * *
* * * * *
. * * * 
. . *

The dots represent spaces.
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow<= (n/2) + 1){
        int spaces = 1;
        while(spaces <= (n/2) + 1 - currRow){
            cout << " ";
            spaces = spaces + 1;
        }
        int currCol = 1;
        while (currCol <= (2 * currRow) - 1){
            cout << "*";
            currCol = currCol + 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }
    currRow = 1;
    while(currRow <= n/2){
        int spaces = 1;
        while(spaces <= currRow);
        cout << " ";
        spaces = spaces + 1;
    }
    int currcol = 2 * ((n/2) - currRow + 1) - 1;
    while (currcol >= 1){
        cout << "*";
        currcol = currcol - 1;
    }
    cout << endl;
    currRow = currRow + 1;
}  