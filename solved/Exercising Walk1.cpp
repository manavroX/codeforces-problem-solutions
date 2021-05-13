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
        long int a,b,c,d,x,y,x1,y1,x2,y2;//if((((x+1)<=x2)||(x1<=(x-1)))&&(((y+1)<=y2)||(y1<=(y-1))))
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;//if((((x1<=(x-a))&&((x-a)<=x2))||((x1<=(x+b))&&((x+b)<=x2)))&&(((y1<=(y-c))&&((y-c)<=y2))||((y1<=(y+d))&&((y+d)<=y2))))
        if((x1<=(x-a+b)&&(x-a+b)<=x2)&&((y1<=(y-c+d))&&((y-c+d)<=y2)))
            {
                if(a==0&&b==0){
                    if(((y+1)<=y2)||(y1<=(y-1)))
                       { ans[i] = true;}}
                else if(c==0 && d==0){
                    if(((x+1)<=x2)||(x1<=(x-1)))
                        {ans[i] = true;}}
                else{
                    if((((x+1)<=x2)||(x1<=(x-1)))&&(((y+1)<=y2)||(y1<=(y-1))))
                        {ans[i] = true;}}

            }
        else
            ans[i] = false;
    }
    for(int i=0;i<t;i++)
    {
        if(ans[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
/*
if(a==0&&b==0){
    if(((y+1)<=y2)||(y1<=(y-1)))
       { ans[i] = true;}}
else if(c==0 && d==0){
    if(((x+1)<=x2)||(x1<=(x-1)))
        {ans[i] = true;}}
else{
    if((((x+1)<=x2)||(x1<=(x-1)))&&(((y+1)<=y2)||(y1<=(y-1))))
        {ans[i] = true;}}
*/

