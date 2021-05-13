#include <iostream.h>
#include <conio.h>
using namespace std;

int main()
{
	int n, m, sum=0,ans;
	cin>>n;
	m=(n+1)/2;
	int martix[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>matrix[i][j];
			if(j==i)
			{
				sum+=matrix[i][j];
			}
			if(j==n-i)
			{
				sum+=matrix[i][j];
			}
			if(j==m)
			{
				sum+=matrix[i][j];
			}
			if(i==m)
			{
				sum+=matrix[i][j];
			}
		}
	}
	ans = sum - matrix[m][m];
	cout<<ans;
	return 0;
}