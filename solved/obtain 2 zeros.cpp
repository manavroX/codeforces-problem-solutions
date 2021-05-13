#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool ans[t];
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin >> a >> b;
        if(((2*a)-b)%3==0&&((2*b)-a)%3==0&&((2*a)-b)>=0&&((2*b)-a)>=0)
        {
            ans[i]=true;
        }
        else
        {
            ans[i]=false;
        }
    }
    for(int i=0;i<t;i++)
    {
        if(ans[i])
            cout << "yes"<<endl;
        else
            cout << "no"<<endl;
    }
    return 0;
}
