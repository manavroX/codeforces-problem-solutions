#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    static char a[987];
    bool x[26];
    int b[987];
    for(int i=0; i<987;i++)
    {
        b[i] = a[i];
    }
    cout << b[1];
    cin >> a;
    for(int j=0;j<strlen(a);j++)
        {
            if(a[j]==a[j+1])
            {
                cout << 1;
            }
            else{cout << 0;}

        }

    return 0;
}
