#include <stdio.h>
int main(){
    int mang[]={1,2,2,3,1,2,4,2,3};
    int soPhanTu=sizeof(mang)/sizeof(mang[0]);
    int soNhieuNhat=mang[0];
    int soLanNhieuNhat=0;
    for(int i=0; i<soPhanTu; i++){
        int so=mang[i];
        int dem=0;
        for (int j=0; j<soPhanTu; j++){
            if(mang[j]==so){
                dem++;
            }
        }
        if(dem>soLanNhieuNhat){
            soLanNhieuNhat=dem;
            soNhieuNhat=so;
        }
    }
    printf("So xuat hien nhieu nhat: %d\n", soNhieuNhat);
    printf("So lan xuat hien nhieu nhat: %d\n", soLanNhieu);
    return 0;
}
 // kết quả độ phức tạp thời gian là O(n^2), bộ nhớ là O(1)