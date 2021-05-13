#include <iostream>
using namespace std;
int main()
{
    char b = 'b';
    static char a[500] = {'a'};
    cout << a << sizeof(a)<< a[23] << b << sizeof(b);
    return 0;
}
