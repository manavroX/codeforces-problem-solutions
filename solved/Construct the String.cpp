#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,counter = 0;
        cin >> n >> a >> b;
            char ans[b];
            while(counter!=n)
            {
                for(int i=0;i<b;i++)
                {
                    ans[i] = 97+i;
                    cout << ans[i];
                    counter++;
                    if(counter==n)
                        break;
                }
            }


        cout << endl;
    }
    return 0;
}
