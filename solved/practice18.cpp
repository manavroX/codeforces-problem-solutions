#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    string s = "abc ";
    string s1;
    getline(cin, s1);
    cout<< s+s1;
    return 0;
}
