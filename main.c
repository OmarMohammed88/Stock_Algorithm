#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
int A[n],i,count_sorted=0,count_revere=0,max,min,max_index=0,min_index=0;
for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    }
// Check if Array sorted or reverse Sorted
for(i=0;i<n;i++){
    if(A[i]>=A[i+1]){
        count_revere++;
    }}


if(count_revere==n-1){
    printf("0\n");
}else{

// Select max num in array

max=A[0];
min=A[0];
for(i=0;i<n;i++){
    if(A[i]>max){
        max=A[i];
        max_index=i;
    }
    if(A[i]<min){
        min=A[i];
        min_index=i;
    }
}
if(max_index==n-1){
   printf("%d",max-min);
}else {
    max=A[max_index+1];
    min=A[max_index+1];
    int new_start=max_index+1;
for(i=max_index+1;i<n;i++){
    if(A[i]>max){
        max=A[i];
        max_index=i;
    }
    else if(A[i]<min){
      min=A[i];
      min_index=i;
    }
}
if(max_index>min_index){
    printf("%d",max-min);
}else
{   int size=min_index-new_start;
    int B[size];
    for(i=new_start;i<min_index;i++){
        B[i-1]=max-A[i];
    }
    int MAx_B=B[0];
    for(i=0;i<size;i++){
           if(B[i]>MAx_B){
            MAx_B=B[i];
           }
    }

  printf("%d",MAx_B);
}


}

}






    return 0;
}
