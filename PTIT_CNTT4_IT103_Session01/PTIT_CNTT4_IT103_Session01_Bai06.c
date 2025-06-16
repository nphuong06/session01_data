#include <stdio.h>
int main (){
    int a[]={1,2,3,2,4,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    int x=2;
    int count=0;
    for(int i=0; i<n; i++){
        if (a[i]==x){
            count++;
        }
    }
    printf("So lan xuat hien của %d là: %d\n",x,count);
    return 0;
}
// kết quả của độ phức tạp thời gian là O(n), không gian là O(1)