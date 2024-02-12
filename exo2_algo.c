#include <stdio.h>
#include<stdbool.h>
int main()
{
  int n,v1[15];
  
  do
  {
    printf("ara la taille tae v1:");
    scanf("%d",&n);
  } while (n<0 || n>100);
  
  for (int i = 0; i < n; i++)
  {
    do
    {
        printf("ara valua tae la case %d: ",i+1);
        scanf("%d",&v1[i]);
    } while (v1[i]<10);
    
  }
  printf("v1:{");
  for ( int i = 0; i < n; i++)
  {
    printf("%d",v1[i]);
    if (i==n-1)
    {
        break;
    }
    printf(",");
  }
  printf("}\n");
  
  int s,i=0,j=0,v2[2*n];
  while (i<n)
  {
    v2[j+1]=(v1[i]%10);//V2 
    while (v1[i]>0)
    {
        s=v1[i]%10;
        v1[i]/=10;
    }
    v2[j]=s;
    j+=2;
    i++;
  }
  
  printf("v2:{");
  for ( int i = 0; i < 2*n; i++)
  {
    printf("%d",v2[i]);
    if (i==2*n-1)
    {
        break;
    }
    printf(",");
  }
  printf("}\n");
  
  int v3[2*n];//bsmlah l7arb..  
  
  int l=0,cv3=0,k,nn=0;
  
  while (l<2*n)
  {
    
    k=l+1;
    if (v2[l]<10)//bch nsotiw les cases li rtbnahoum deja
    {   
        v3[cv3]=v2[l];
        cv3++;
        while (k<2*n)
        {
            if (v2[k]==v2[l])
            {
                v3[cv3]=v2[l];
                cv3+=1;
                v2[k]=10;
                 
            }
            k++;
        }
     nn++;
    }
    l++;
  }
   
  printf("v3:{");
  for ( int i = 0; i < 2*n; i++)
  {
    printf("%d",v3[i]);
    if (i==2*n-1)
    {
        break;
    }
    printf(",");
  }
  printf("}\n");
  printf("nn=%d ",nn);

  
  int v4[n*2],cv4=0,cpt=0,e=0,w=0;
  
  
  while( w < 2*n )
  {    
     w+=cpt;
     cpt=1; 
      e=w;
    while (e<2*n && v3[e]==v3[e+1])
    {
        cpt+=1;
        e++;
    }    
    v4[cv4]=v3[w]; v4[cv4+1]=cpt; cv4+=2;
  }
   
  
  printf("v4:{");
  
  for( int i = 0; i < nn*2 ; i++)
  {
    printf("%d",v4[i]);
    
    printf(",");
  }
  
  printf("}\n");
  printf("cv4=%d",cv4);
  int max=v4[1];
  for ( i = 3; i < cv4-2; i+=2)
  {
    if (v4[i]>max)
    {
        max=v4[i];
    }
  }
  
  printf("\nmax=%d",max);
  printf("\n numbers li m3awdin bzaf f v3 houma: ");
  for ( i = 0; i < cv4-2; i+=1)
  {
    if (v4[i+1]==max)
    {
        printf(" %d",v4[i]);
    } 
  }

                       
    return 0;
}