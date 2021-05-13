#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, x[4];
    cin >> a >> b >> c;
    x[0] = a+b+c;
    x[1] = (a+b)*c;
    x[2] = a*(b+c);
    x[3] = a*b*c;
    sort(x,x+4);
    cout << x[3];
    return 0;
}
