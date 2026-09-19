#include <stdio.h>
int main(){
    int n;
    printf("nhập số phần từ mảng: ");
    scanf("%d",&n);
    int B[n];
    int A[n];
    for(int i=0;i<n;i++){
    scanf("%d",&A[i]); 
    }
    int k=0;
    for(int i=0;i<n;i++){
        if(A[i]%2==0){
            B[k]=A[i];
            k++;
        }
    }
    for(int i=0;i<n;i++){
        if(A[i]%2==1){
            B[k]=A[i];
            k++;
        }
    }
    printf("{");
    for(int i=0;i<n;i++){
        printf("%d",B[i]);
        if(i<n-1){
            printf(",");
        }
    }
    printf("}");
    return 0;
}