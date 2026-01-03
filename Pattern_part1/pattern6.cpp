/*
Problem : pattern 6 - inverted right-angled triangle pattern of numbers
A2Z Topic: Patterns

Approach:
- Using two nested loops
- outer loop for rows with i from 0 to n-1
- inner loop for printing numbers in decreasing order from 1 to n-i

Time Complexity: O(n^2)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
void p6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    p6(n);
    return 0;
}