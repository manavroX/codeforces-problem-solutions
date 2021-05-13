#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ll long long
#define mp make_pair
#define INF 1000000007 // 10^9+7
#define EPS 0.000000001 //10^-9
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
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n,x=0,y=0;
        cin >> n;
        string s;
        s.resize(n);
        int zoo[n]; //zero or one
        int z[n];
        for(int i=0;i<n;i++)
        {
            zoo[i]==0;
            z[i]=0;
            cin >> s[i];
            if(s[i]=='0'||s[i]=='1')
            {
                x++;
                if(s[i]=='0')
                    y++;
            }
            else
            {
                zoo[i] = x;
                z[i] = y;
                x = 0;
                y = 0;
            }
        }
        for(int i=0;i<n;i++)
            cout << zoo[i] << " ";
        cout << endl;
        for(int i=0;i<n;i++)
            cout << z[i] << " ";
        cout << endl;
    }
    return 0;
}
