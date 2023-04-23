/*
Fahrenheit to Celsius Table

Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value in integer form. The Fahrenheit value and its corresponding Celsius value should be separate by single space.
Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 
Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37
*/

#include <iostream>
using namespace std;

int main(){

    int start, end, step;
    cin >> start >> end >> step;

    int currFahrenhietValue = start;

    while(currFahrenhietValue <= end){
        int celsiusValue = (int)((5.0/9) * (currFahrenhietValue - 32));
        cout <<  currFahrenhietValue << " " << celsiusValue <<endl;
        currFahrenhietValue = currFahrenhietValue + step;
    }    
}
