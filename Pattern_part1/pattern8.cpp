/*
Problem: pattern 8 - inverted triangle pattern of asterisks
A2Z Topic: Patterns

Approach:
- Using two nested loops
- outer loop for rows with i from 0 to n-1
- inner loops for printing spaces and asterisks to form an inverted triangle

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
void p8(int n)
{
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int s=0;s<i;s++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
        }
        //spaces
        for(int s=0;s<i;s++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    p8(n);
    return 0;
}