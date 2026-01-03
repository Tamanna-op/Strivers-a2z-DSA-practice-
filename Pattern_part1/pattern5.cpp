/*
Problem: pattern 5 - inverted right-angled triangle pattern of asterisks
A2Z Topic: Patterns

Approach:
- Using two nested loops
- outer loop for rows
- inner loop for printing asterisks in decreasing order, starting from n to 1

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
void p5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    p5(n);
    return 0;
}