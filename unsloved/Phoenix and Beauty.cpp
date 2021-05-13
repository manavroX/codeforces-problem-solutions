#include <bits/stdc++.h>
using namespace std;
int num(vector<int> arr, int n)
{
    int res = 1;

    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr.at(i) == arr.at(j))
                break;

        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned short int n,k,x,m;
        cin >> n >> k;
        m = n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            a.push_back(x);
        }
        if(k>=num(a,m))
        {
            for(int i=0;i<m-k;i++)
            {
                if(a.at(i)==a.at(i+k))
                    continue;
                else
                {
                    a.insert(a.begin()+i+k,a.at(i));
                    m++;
                }
            }
            cout << m << endl;
            for(int i=0;i<m;i++)
            {
                cout << a.at(i) << " ";
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
