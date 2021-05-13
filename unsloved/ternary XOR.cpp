#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ans1[t];
    int ans2[t];
    for(int i=0;i<t;i++)
    {
        ans1[i]=0;
        ans2[i]=0;
        int n,x;
        cin >> n >> x;
        for(int j=0;j<n;j++)
        {
            long int c=pow(10,j);
            if(x%c==2)
            {
                ans1[i]+=1*(pow(10,j));
                ans2[i]+=1*(pow(10,j));
            }
            else if(x%c==1)
            {
                ans1[i]+=1*(pow(10,j));
                ans2[i]+=0*(pow(10,j));
            }
            else
            {
                ans1[i]+=0*(pow(10,j));
                ans2[i]+=0*(pow(10,j));
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        cout << ans1[i] << "\n" << ans2[i] << "\n";
    }
}
