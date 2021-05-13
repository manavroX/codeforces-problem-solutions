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
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return true;
    }
    return false;
}
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        bool ans = false;
        cin >> n;
        if(n<31)
            cout << "No" << endl;
        else
        {
            if(n==36)
            {
                cout <<"Yes" << endl;
                cout << 5 << " " << 6 << " " << 10 << " " << 15 << endl;
            }
            else if(n==44)
            {
                cout <<"Yes" << endl;
                cout << 6 << " " << 7 << " " << 10 << " " << 21 << endl;
            }
            else if(n==40)
            {
                cout <<"Yes" << endl;
                cout << 6 << " " << 10 << " " << 9 << " " << 15 << endl;
            }
            else
            {
                cout <<"Yes" << endl;
                cout << 6 << " " << 10 << " " << 14 << " " << (n-30) << endl;
            }
        }
    }
    return 0;
}
