#include <stdio.h>
int main(){
    int A[]= { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 };
    int n=sizeof(A)/sizeof(A[0]);
    int k=0;
    for(int i=0;i<n;i++){
        if(A[i]==0){
            k++;
        }
    }
    for(int i =0;i<n;i++){
        A[i]=0;
    }
    for(int i=k;i<n;i++){
        A[i]=1;
    }
    printf("{");
    for(int i=0;i<n;i++){
        printf("%d",A[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("}");
    return 0;
}