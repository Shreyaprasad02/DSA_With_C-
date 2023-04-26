/*
Code : Mirror Number Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4

. . . 1
. . 1 2
. 1 2 3
1 2 3 4

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 1;
    while(currRow <= n){
        int spaces = 1;
        while(spaces <= n - currRow){
            cout << " ";
            spaces = spaces + 1;
        }
        int currCol = 1;
        while (currCol <= currRow)
        {
            cout << currCol;
            currCol = currCol + 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }  
}

