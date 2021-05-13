#include <iostream>
using namespace std;
int main()
{
    char abc[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> abc[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<< abc[i][j];
        cout << endl;
    }

    return 0;
}
