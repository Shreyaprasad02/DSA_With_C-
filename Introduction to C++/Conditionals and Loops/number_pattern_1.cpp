/*
Number Pattern 1

Print the following pattern
Pattern for N = 4
1
23
345
4567
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int col = 1;
        int value = i;
        while (col <= i)
        {
            cout << value;
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        i = i + 1;
    }    
}