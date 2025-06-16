// Cách 1:

#include <isotream>
using namespace std;
bool kiemTraTrungLap(int mang[], int kichThuoc){
    for(int i=0; i<kichThuoc-1; i++){
        for(int j=i+1; j<kichThuoc; j++){
            if(mang[i]==mang[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int duLieu[]={4,2,5,7,2}
    int soPhanTu=sizeof(duLieu)/sizeof(duLieu[0]);
    if(kiemTraTrungLap(duLieu, soPhanTu)){
        cout<<"Mang co phan tu trung lap.\n";
    }else{
        cout<<" Mang khong co phan tu trung lap.\n";
    }
    return 0;
}

// kết quả độ phức tạp là: O(n^2)

// Cách 2:

#include <isotream>
using namespace std;
bool kiemTraTrungLap(int mang[], int kichThuoc){
    bool danhDau[1001]={false};
    for(int i=0; i<kichThuoc; i++){
        int giaTri=mang[i];
        if(danhDau[giaTri]==true){
            return true;
        }
        danhDau[giaTri]=true;
    }
    return false;
}
int main(){
    int duLieu[]={4,2,5,7,2};
    int soPhanTu=sizeof(duLieu)/sizeof(duLieu[0]);
    if(kiemTraTrungLap(duLieu,soPhanTu)){
        cout<<"Mang có phan tu trung lap.\n";
    }else{
        cout<<"Mang khong co phan tu trung lap.\n";
    }
    return 0;
}

// Kết quả độ phức tạp là: O(n)