/*
Code : Square Pattern

Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
4444
4444
4444

*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int currRow = 0;
    while(currRow<=n){
        int currCol = 1;
        while (currCol <= n)
        {
            cout << n;
            currCol = currCol + 1;
        }
        cout << endl;
        currRow = currRow + 1;
    }
    
}
