#include<stdio.h>
int main(void)
{
      int n, i, j;
      printf("input tinggi : ");
      scanf("%d", &n);
      for (i = 1; i <= n; i++)
      {
      	if(n%2==0){
      		printf("program gagal");break;
		  }
		  for (i = 1; i <= n; i++)
      {
            for (j = 1; j <= i; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      for (i = n; i >= 1; i--)
      {
            for (j = 1; j < i; j++)
            {
                  printf("*");
            }
            printf("\n");
      }
      return 0;
}
}
