#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
      int n,i,last,j,count=0;
      scanf("%d",&n);
      int a[n],b[n],wt[n];
      
      scanf("%d",&a[0]);
      wt[0] = a[0];
      b[0]=a[0]; 

      for(i=1;i<n;i++)
      {		
            scanf("%d",&a[i]);

            b[i]=a[i]; // copy input array a to b
      }
      sort(b,b+n);

      	wt[0] = b[0];
        for(i=1;i<n;i++)
      {		
            wt[i] = wt[i - 1] + b[i];

           // copy input array a to b
      }
      

      for (i = 0; i < n; i++) {
      	if (wt[i] > b[i]) {
      		count++;
      	}
      }
      


     
      printf("%d\n",count);
      return 0;
}

