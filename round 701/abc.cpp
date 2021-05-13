#include <bits/stdc++.h>
using namespace std;

// Function to check that a number
// is the sum of cubes of 2
// consecutive numbers or not
bool isSumCube(int N)
{
    int a = cbrt(N);
    int b = a - 1;

    // Condition to check if a
    // number is the sum of cubes of 2
    // consecutive numbers or not
    return ((a * a * a + b * b * b) == N);
}

// Driver Code
int main()
{
    int i = 1;
    // Function call
    if (isSumCube(i)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
