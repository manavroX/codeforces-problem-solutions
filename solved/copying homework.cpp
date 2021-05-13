#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        a[i] = n+1-a[i];
        cout << a[i] << " ";
    }
    return 0;
}
