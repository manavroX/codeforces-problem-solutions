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
int ceiling(float a, float b)
{
    if(fmod(a,b)==0)
        return (int)(a/b);
    else
        return (int)((a/b)+1);
}
int max3(int a,int b,int c)
{
    return max(a,max(b,c));
}
int min3(int a, int b,int c)
{
    return min(a,min(b,c));
}
int power(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
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
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin >> a[i];
        }
        vvi uni;
        uni.resize(n);
        for(int i=0;i<n;++i)
        {
            int x;
            cin >> x;
            //cout << x;
            uni[a[i]-1].push_back(x);
        }
        //cout << uni[1].size();


        for(int i=0;i<n;++i)
        {
            sort(uni[i].begin(),uni[i].end());
        }
//        for(int i=0;i<n;++i)
//        {
//            cout << "team " << i+1 << endl;
//            for(int j=0;j<uni[i].size();++j)
//                cout << uni[i][j] << " ";
//            cout << endl;
//        }
        int sumUni[n] = {0};
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<uni[i].size();++j)
            {
                sumUni[i]+=uni[i][j];
//                cout << uni[i][j] << " ";
            }
//            cout << endl;
        }
        int maxSize=0;
        for(int i=0;i<n;++i)
            if(uni[i].size()>=maxSize)
                maxSize = uni[i].size();
//        for(int i=0;i<n;++i)
//            cout << sumUni[i] << " ";
//        cout << endl;
//        std::sort(uni.begin(), uni.end(), [](const vector<int> & a, const vector<int> & b){ return a.size() < b.size(); });
        for(int i=0;i<maxSize;++i)
        {
            int ans=0;
            for(int j=0;j<n;++j)
            {
                if(i+1>uni[j].size())
                    continue;
                int exSum=0;
                int z = uni[j].size()%(i+1);
//                cout << z-1<< " ";
                for(int k=0;k<z;++k)
                {
                    exSum+=uni[j][k];
                }
//                cout << (sumUni[j]-exSum) << " ";
                ans= ans + (sumUni[j]-exSum);
            }
//            cout << endl;
            cout << ans << " ";
        }
        for(int i=maxSize;i<n;++i)
            cout << 0 << " ";
        cout << endl;
    }
    return 0;
}
