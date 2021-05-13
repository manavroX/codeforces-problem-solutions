#include <bits/stdc++.h>
using namespace std;
int noOfCardsInAPyramid(int a)
{
    int b = ((3*a*a)+a)/2;
    return b;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,k=0;
        bool exit = true;
        cin >> m;
        while(m>1)
        {
            for(int i = 1;exit;i++)
            {
                if(m-noOfCardsInAPyramid(i)<0)
                {
                    m=m-noOfCardsInAPyramid(i-1);
                    k++;
                    exit = false;
                }
                if(m-noOfCardsInAPyramid(i)==0)
                {
                    m=m-noOfCardsInAPyramid(i);
                    k++;
                    exit = false;
                }
            }
            exit = true;

        }
        cout << k << endl;
    }
}
