#include <iostream>
using namespace std;
int main()
{
    int q;
    cin >> q;
    long int sum[q];
    for(int i=0;i<q;i++)
    {
        sum[i] = 0;
        long int n,m;
        cin >> n >> m;
        for(int j=1;j<=n;j++)
        {
            if(j%m==0)
            {
                sum[i]+=(j%10);
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        cout << sum[i] << endl;
    }
    return 0;
}
