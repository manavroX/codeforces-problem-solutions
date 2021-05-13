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
#define ft front // returns the first element of a vector
#define bk back //returns the last element of a vector
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
        vi odd,even;
        int oddsum=0,evensum=0,x,alice=0,bob=0;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            if(x%2==0)
            {
                even.pb(x);
            }
            else
            {
                odd.pb(x);
            }
        }
        sort(odd.bn(),odd.end());
        sort(even.bn(),even.end());

//        cout << "odd ";
//        for(auto a : odd)
//            cout << a << " ";
//        cout << endl;
//        cout << "even " ;
//        for(auto a : even)
//            cout << a << " ";
//        cout << endl;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                //alice plays
                if(even.size()!=0&&odd.size()!=0)
                {
                    if(even.bk()>odd.bk())
                    {
                        alice+=even.bk();
                        even.pop_back();
                        //cout << "first 1" << endl;
                    }
                    else
                    {
                        odd.pop_back();
                        //cout << "first 2" << endl;
                    }
                }
                else
                {
                    if(even.size()==0)
                    {
                        odd.pop_back();
                    }
                    else
                    {
                        alice+=even.bk();
                        even.pop_back();
                    }
                }

            }
            else
            {
                //bob plays
                if(even.size()!=0&&odd.size()!=0)
                {
                    if(odd.bk()>even.bk())
                    {
                        bob+=odd.bk();
                        odd.pop_back();
                        //cout << "second 1" << endl;
                    }
                    else
                    {
                        even.pop_back();
                        //cout << "second 2" << endl;
                    }
                }
                else
                {
                    if(even.size()==0)
                    {
                        bob+=odd.bk();
                        odd.pop_back();
                    }
                    else
                    {
                        even.pop_back();
                    }
                }
            }
        }
        if(alice>bob)
            cout << "Alice" << endl;
        else if(alice==bob)
            cout << "Tie" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
