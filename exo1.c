#include <stdio.h>
#include<stdbool.h>

int main()
{
 int r,c ;
  printf("ara nombre tae rows: ");
  scanf("%d",&r);
  printf("ara nombre tae columns: ");
  scanf("%d",&c);
  
  int m[r][c];int l=0;
  for ( int i = 0; i <r; i++)
  {
    printf("3amr ligne %d: \n",i+1);
    for ( int j = 0; j < c; j++)
    {
        scanf("%d",&m[i][j]);
    }
  }
  int v[c];
  for (int i = 0; i < c; i++)//remplissage de v avec des 0,
  {
    v[c]=0;
  }
  int j=0,i=0;
  while (j<c)
  {
    bool bo = false;
    while ( i<r && bo==false )
    {
      int n=m[i][j];
      int sum=0,s =1;

      while (n>0)
      {
        s*=(n%10);
        sum+=(n%10);
        n/=10;
      }
      if (s==sum)
      {
        v[j]=1;
        bo=true;        
        l++;     
      }
       i++;
    }   
    j++;
  }
  
  for (int i = 0; i < r; i++)
  {
    for ( j = 0; j < c; j++)
    {
        printf(" %d",m[i][j]);
    }
    printf("\n");
  }
  
  for ( i = 0; i < c; i++)
  {
    if (v[i]==1)
    {
        printf("column li fiha espion nombre:{");
        for ( j = 0; j < r; j++)
        {
            printf("%d",m[j][i]);
            if (j==r-1)
            {
              break;    
            }
            printf(",");
        }
        printf("}\n");
    }   
  }
    
    return 0;
}