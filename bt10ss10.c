#include <stdio.h>

int main(){
    int a[101];
    int n;
    do{
        printf("Nhap vao so luong san phan trong cua hang cua ban: ");
        scanf("%d",&n);
        if(n < 1 || n > 101){
            printf("Loi! Hay nhap lai so luong san phan tron cua hang cua ban!");
        }
    }while(n < 1 || n > 101);
    for(int i = 0; i < n; i++){
        printf("Gia san phan co ma [%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Gia cua cac san phan: \n\n");
    for(int i = 0; i < n ; i++){
        printf("Gia cua san phan co ma a[%d] la: %d Nghin(VND)\n",i,a[i]);
    }

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n/===============================================/\n");
    printf("Danh sach cac san phan theo gia ban tang dan la:\n");
    printf("/===============================================/\n\n");
    for(int i = 0; i < n; i++){
        printf("Gia cua san phan co ma a[%d] la: %d Nghin(VND)\n",i,a[i]);
    }
    int key;
    printf("Nhap ma san phan ma ban muon tim: ");
    scanf("%d",&key);

    int left = 0;
    int right = n-1;
    int mid;
    int flag = 0;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(mid == key){
            flag = 1;
            break;
        }else if(mid > key){
            right = mid - 1;
        }else if(mid < key){
            left  = mid + 1;
        }
    }
    if(flag){
        printf("San pham ma a[%d] co trog cua hang",mid);
    }else{
        printf("San pham a[%d] khong co trong cua hang",mid);
    }

    return 0;
}
