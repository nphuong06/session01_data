#include <stdio.h>
void sort(int a[],int n){
    for (int i=0;i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if (a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
int main(){
    int a[]={5,2,9,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,n);
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
    return 0;
}
// kết quả của độ phức tạp thời gian là O(n^2), không gian là O(1)

