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
int32_t main()
{
    ios;
    int test;
    cin >> test;
    while(test--)
    {
        int n;string s;
        cin >> n >> s;
        queue<int> q0,q1;
        vi ans(n);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int x = s[i]-'0';
            if(x==1)
            {
                if(q0.size()==0)
                {
                    count++;
                    ans[i]=count;
                    q1.push(ans[i]);
                }
                else
                {
                    int p = q0.front();
                    q0.pop();
                    ans[i] = p;
                    q1.push(ans[i]);
                }
            }
            else
            {
                if(q1.size()==0)
                {
                    count++;
                    ans[i]=count;
                    q0.push(ans[i]);
                }
                else
                {
                    int p = q1.front();
                    q1.pop();
                    ans[i] = p;
                    q0.push(ans[i]);
                }
            }
        }
        cout << count << endl;
        for(int i=0;i<n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
