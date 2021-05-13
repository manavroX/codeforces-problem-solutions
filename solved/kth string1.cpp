#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string ans[t];
    for(int j=0;j<t;j++)
    {
    long long int n,k,d;
    cin >> n >> k;
    if(remainder((1+sqrt(1+8*k))/2,1)==0)
        d=(1+sqrt(1+8*k))/2;
    else
        d=(3+sqrt(1+8*k))/2;//d=no. of alphabets to be handeled
    int c=((d*(d-1))/2)-k+1;//c=index at which string a = 'b'
    string a,b;
    a.resize(d);
    a[0]='b';
    for(int i=1;i<d;i++)
    {
        a[i] = 'a';
    }
    a[c]='b';
    b.resize(n-d);
    for(int i=0;i<n-d;i++)
        b[i] = 'a';
    ans[j] = b+a;
    }
    for(int j=0;j<t;j++)
    {
        cout << ans[j] << endl;
    }
    return 0;
}
