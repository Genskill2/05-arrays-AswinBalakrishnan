/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[], int n){
      int large=a[0];
    for(int i=0;i<n;i++){
      if (a[i]>large)
       large=a[i];
     printf("max is %i \n",large);}
       return large;
       }
int min(int a[], int n){
      int small=a[0];
    for(int i=0;i<n;i++){
      if (small>a[i])
       small=a[i];
     printf("min is %i \n",small);}
       return small;
       }
float average(int a[], int n){
      int sum=0;
      float avg;
    for(int i=0;i<n;i++)
      sum+=a[i];
       avg=(float)sum/n;
     printf("average is %f \n",avg);
       return avg;
       }

   int mode(int a[], int n){
      int c[n],count,large=c[0],i,no;
    for( i=0;i<n;i++){
        count=0;
    for(int j=0;j<n;j++){
      if(a[i]==a[j])
         count++;
         }
       c[i]=count;
       printf("%ith element of array c is %i \n",i,c[i]);}
    for(i=0;i<n;i++){
      if (c[i]>large)
         no=i;
        large=a[i];
     printf("max is %i \n",large);
     printf("%i\n",no);
     printf("%i \n",a[i]);
        return a[i];
       }
   }    
