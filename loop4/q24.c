/*
1 2 3
6 5 4
7 8 9
*/




#include<stdio.h>
int main()
{
	int n;
        scanf("%d",&n);
        int i=1;
        int k=1;
        int m=3;
        while(i<=n)
        {
        int j=1;
        if(j<=m)
        {if(i%2==0)
        {printf("%d ",k);
        k=k-1;
        }
        {
        printf("%d ",k);
        k=k+1;
        }
        j=j+1;
        }
        printf("\n");
        i=i+1;
        k=k+i;
        }
        return 0;
}
