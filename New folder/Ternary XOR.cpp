#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ll long long
#define mp make_pair
#define INF 1000000007 // 10^9+7
#define EPS 0.000000001 //10^-9
#define int long long
#define mINF -1000000007 //-1*10^9-7
#define endl "\n"
#define bn begin
#define rs resize
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
#define ss second
#define ff first
#define gcd __gcd
#define bs binary_search
#define lb lower_bound //lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value not less than ‘x’.
#define ub upper_bound //upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which has a value greater than ‘x’.
int ceiling(int a, int b)
{
    if(a%b==0)
        return (a/b);
    else
        return (a/b)+1;
}
int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
int min3(int a, int b,int c)
{
    return min(a,min(b,c));
}
int power(int x,int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a,b;
        a.rs(n);
        b.rs(n);
        bool one = false;
        for(int i=0;i<n;i++)
        {
            if(!one)
            {
                if(s[i]=='2')
                {
                    //cout << "one ";
                    a[i] = '1';
                    b[i] = '1';
                }
                else if(s[i] == '0')
                {
                    //cout << "two ";
                    a[i] = '0';
                    b[i] = '0';
                }
                else
                {
                    //cout << "three ";
                    one = true;
                    a[i] = '1';
                    b[i] = '0';
                }
            }
            else
            {
                //cout << "four ";
                a[i] = '0';
                b[i] = s[i];
            }
        }
        //cout << endl;
        cout << a << endl << b << endl;
    }
    return 0;
}
