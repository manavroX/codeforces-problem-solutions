#include <bits/stdc++.h>
using namespace std;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ll long long
#define mp make_pair
#define INF 1000000007 // 10^9+7
#define EPS 0.000001 //10^-6
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
int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
int min3(int a, int b,int c)
{
    return min(a,min(b,c));
}
double nthRoot(int A, int N)
{
    // intially guessing a random number between
    // 0 and 9
    double xPre = rand() % 10;

    //  smaller eps, denotes more accuracy
    double eps = 1e-3;

    // initializing difference between two
    // roots by INT_MAX
    double delX = INT_MAX;

    //  xK denotes current value of x
    double xK;

    //  loop untill we reach desired accuracy
    while (delX > eps)
    {
        //  calculating current value from previous
        // value by newton's method
        xK = ((N - 1.0) * xPre +
              (double)A/pow(xPre, N-1)) / (double)N;
        delX = abs(xK - xPre);
        xPre = xK;
    }

    return xK;
}
int32_t main()
{
    ios;
    int n,c;
    double d;
    int ans = 0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    /*if(fmod(nthRoot(a[n-1],n-1),1)==0)
        d = nthRoot(a[n-1],n-1);
    else*/
        d = nthRoot(a[n-1],n-1) + 1;
    c = (int)d;
    //cout <<"d= " << d<< " c= "<< c << endl;
    //cout <<"d= " << d<< " c= "<< c << endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=pow(c,i))
        {
            ans+=(int)(a[i]-pow(c,i)+EPS);
            //cout << "a" <<i<<" =" << a[i] << "pow(c,i)=" <<pow(c,i) << "        " << (int)(a[i]-pow(c,i)+EPS) << endl;

        }
        else
        {
            ans+=(int)(pow(c,i)-a[i]+EPS);
            //cout << "a" <<i<<" =" << a[i] << "pow(c,i)=" <<pow(c,i) << "        " << (int)(pow(c,i)-a[i]+EPS) << endl;
        }
    }
    //cout << ans << endl;
    c--;
    int ans2=0;
    //cout << "test2 c=" << c << endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=pow(c,i))
        {
            ans2+=(int)(a[i]-pow(c,i)+EPS);
            //cout << "a" <<i<<" =" << a[i] << "pow(c,i)=" <<pow(c,i) << "        " << (int)(a[i]-pow(c,i)+EPS) << endl;

        }
        else
        {
            ans2+=(int)(pow(c,i)-a[i]+EPS);
            //cout << "a" <<i<<" =" << a[i] << "pow(c,i)=" <<pow(c,i) << "        " << (int)(pow(c,i)-a[i]+EPS) << endl;
        }
    }
    ans = min(ans,ans2);
    //cout << ans << endl;
    c--;
    int ans3=0;
    //cout << "test3 c=" << c << endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=pow(c,i))
        {
            ans3+=(int)(a[i]-pow(c,i)+EPS);
            //cout << "a" <<i<<" =" << a[i] << "pow(c,i)=" <<pow(c,i) << "        " << (int)(a[i]-pow(c,i)+EPS) << endl;

        }
        else
        {
            ans3+=(int)(pow(c,i)-a[i]+EPS);
            //cout << "a" <<i<<" =" << a[i] << "pow(c,i)=" <<pow(c,i) << "        " << (int)(pow(c,i)-a[i]+EPS) << endl;
        }
    }
    ans = min(ans,ans3);
    cout << ans;
    return 0;
}
