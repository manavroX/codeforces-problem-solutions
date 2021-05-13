#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[] = {1,4,2,3};
    sort(a,a+4);
    for(int i=0; i<4; i++)
    {
        cout << a[i];
    }
    return 0;
}
