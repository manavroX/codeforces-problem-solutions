#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
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
#define bs binary_search
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        if(n%4==0)
        {
            for(int i=0;i<(n-((n/4)));i++)
            {
                cout << 9;
            }
            for(int i=0;i<n/4;i++)
                cout << 8;
        }
        else
        {
            for(int i=0;i<(n-((n/4)+1));i++)
            {
                cout << 9;
            }
            cout << 8;
            for(int i=0;i<(n/4);i++)
                cout << 8;
        }
        cout << endl;
    }
    return 0;
}
