#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool ans[t];
    for(int i=0;i<t;i++)
    {
        ans[i] = false;
        int n,k;
        cin >> n >> k;
        bool abc[(n/k)];
        char a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
        }
        if(isPalindrome(a[]))
        {
            ans[i] = true;
        }
        else
        {
            continue;
        }
        for(int j=0;j<(n/k);j++)
        {
            if(a[j]!=a[j+k])
            {
                ans[i] = false;
                break;
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        if(ans[i])
            cout <<"yes";
        else
            cout << "no";
    }
}
bool isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
