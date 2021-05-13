#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ansK[t],ansR[t], ansC[t];
    for(int i=0;i<t;i++)
    {
        long long int n,trace=0,r=0,c=0;
        bool x = false, y = false;
        cin >> n;
        int a[n][n];
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<n;col++)
            {
                cin >> a[row][col];
                if(row==col)
                    trace+=a[row][col];
            }
        }
        ansK[i] = trace;
        for(int row=0;row<n;row++)
        {
            if(duplicateRow(a,n,row))
                r++;
        }
        ansR[i] = r;
        for(int col=0;col<n;col++)
        {
            if(duplicateCol(a,n,col))
                c++;
        }
        ansC[i] = c;
    }
    for(int i=0;i<t;i++)
    {
        cout << "Case #" << i+1 <<":"<< ansK[i] << " " << ansR[i] << " " << ansC[i] << endl;
    }
    return 0;
}

bool duplicateRow(int a[][],int n,int row)
{
    bool visited[n];
    fill(visited, visited+n,0);
    for(int i=0;i<n;i++)
    {
        if(visited[a[row][i])
            return true;
        visited[a[row][i]]=true;
    }
    return false;
}

bool duplicateCol(int a[][],int n,int col)
{
    bool visited[n];
    fill(visited, visited+n,0);
    for(int i=0;i<n;i++)
    {
        if(visited[a[i][col])
            return true;
        visited[a[i][col]]=true;
    }
    return false;
}
