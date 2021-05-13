#include <stdio.h>

int main()
{
	int n, m, sum=0,ans;
	scanf("%d", &n);
	m=(n+1)/2;
	int matrix[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &matrix[i][j]);
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
	ans = sum - (4*matrix[m][m]);
	printf("%d", ans);
	return 0;
}