#include <iostream>
using namespace std;
int main()
{
    int q;
    cin >> q;
    int n[q];
    for(int i=0; i<q; i++)
    {
        cin >> n[i];
    }
    for(int i=0; i<q; i++)
    {
        if(n[i]==2)
            cout << "\n2";
        else if(n[i]%2==0)
            cout << "\n0";
        else
            cout << "\n1";
    }
    return 0;
}
