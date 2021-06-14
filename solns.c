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
      int c[n],count;
    for(int i=0;i<n;i++){
        count=0;
    for(int j=0;j<n;j++){
      if(a[i]==a[j])
         count++;
         printf("count of %i is %i \n",a[i],count);}
         c[i]=count;
       }
      int large=c[0],i;
    for( i=0;i<n;i++){
      if (c[i]>large)
       large=c[i];
     printf("max is %i \n",large);}
     printf("mode is %i \n",a[i]);
         return a[i];}
       }
