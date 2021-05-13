#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    long int n,a=1,b=1;
    cin >> n;
    for(long int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            a = max(a, i);
            b = n/a;
        }
    }
    cout << a  << " "<< b;
    return 0;
}
