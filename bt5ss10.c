#include<stdio.h>
#include<math.h>
int main(){
	int a[101];
    int n;
    do{
        printf("Nhap vao so phan tu ma ban muon nhap la: ");
        scanf("%d",&n);
        if(n < 1 || n > 101){
            printf("Loi! Hay nhap lai so phan tu ma ban muon nhap!");
        }
    }while(n < 1 || n > 101);

    for(int  i = 0; i < n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Mang vua nhap la: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d     ",i,a[i]);
    }
    printf("\n\n");

    int flag = 0;
    int count = 0;
    int key;
    printf("Enter the key: ");
    scanf("%d",&key);
    for(int i = 0; i < n; i++){
            if(a[i] == key){
                flag = 1;
                count++;          
            }
        
        
    }
    if(flag == 0){
        printf("Khong tim thay phan tu trong mang!");
    }
    if(count > 0){
    printf("\nSo lan xuat hien la: %d",count);
    }
    return 0;
}

