// Cách 1:
int sumDerect(int n){
    int total=0;
    for(int counter=1; counter<=n; counter++){
        total+=counter;
    }
    return total;
}
// kết quả là: 0(1)

// Cách 2:
int sumWitArray(int n){
    int* numberList=(int*)malloc(n*sizeof(int));
    for(int index=0; index<n; index++){
        numberList[index]=index+1;
    }
    int total=0;
    for(int index =0; index<n; index++){
        total+=numberList[index];
    }
    if(numberList!=NULL){
        realloc(numberList,0);
        return total;
    }
// kết quả là: O(n)