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
        int n,x,i,sum=0,num = INF,mini = INF,add,minadd;
        bool change = false;
        cin >> n >> x;
        vi a;
        int y;
        for(i=0;i<n;i++)
        {
            cin >> y;
            a.pb(y);
            sum+=a[i];
            if(a[i]<mini)
            {
                mini = a[i];
                minadd = sum-a[i];
            }
            //cout << "0sum+=" << a[i] << endl;
            if((fmod(log(a[i])/log(x),1)!=0)||(a[i]%x!=0))
            {
                if(a[i]%x!=0)
                {
                    if(num>2)
                    {
                        num = 2;
                        add = sum-a[i];
                    }
                }
                else
                {
                    if(num>(log(a[i])/log(x))+1)
                    {
                        num = (log(a[i])/log(x))+1;
                        add = sum - a[i];
                    }
                }
                //cout <<"1num = "<< num << endl;
                change = true;
            }
        }
        if(!change)
        {
            num = (log(mini)/log(x))+2;
            add = minadd;
        }
        //cout << "sum = " << sum << endl << "add = " << add << endl;
        //cout <<"2num = "<< num << endl;
        sum*=(num-1);
        sum+=add;
//        for(i=0;i<n;i++)
//        {
//            if(i<abc)
//            {
//                sum+=(num)*a[i];
//                cout <<"1sum+=" << (num+1)*a[i] << endl;
//            }
//            else
//            {
//                sum+=(num-1)*a[i];
//                cout <<"2sum+=" << (num)*a[i] << endl;
//            }
//        }
        cout << sum << endl;
    }
    return 0;
}
