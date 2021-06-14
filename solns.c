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
