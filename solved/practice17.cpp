#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i1,i2;
    double d1,d2;
    string s1,s2;
    cin >> i1;
    cin >> d1;
    cin.ignore(1000, '\n');
    getline(cin, s1);
    i2 = i+i1;
    d2=d+d1;
    s2=s+s1;
    cout << i2<<endl;
    cout <<fixed<< setprecision(1) << d2<<endl;
    cout << s2;
    return 0;
}
