#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int area,a,b,c;
    cin >> area;
    c = sqrt(area);
    for(c;c>=0;c--)
    {
        if(area%c==0)
        {
            a = c;
            break;
        }
    }
    b=area/a;
    cout << 2*(a+b);
    return 0;
}
