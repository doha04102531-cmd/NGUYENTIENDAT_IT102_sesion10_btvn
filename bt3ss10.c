#include<stdio.h>
#include<math.h>
int main(){
	int a[101];
    int n;
    do{
        printf("Nhap vao so phan tu ban muon nhap: ");
        scanf("%d",&n);
        if(n < 1 || n > 101){
            printf("Loi! Ban hay nhap lai so phan tu ban muon nhap!");
        }
    }while(n < 1 || n > 101);

    for(int i = 0; i < n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Mang sau khi nhap la: \n");
    for(int  i = 0; i < n; i++){
        printf("arr[%d] = %d     ",i,a[i]);
    }
    printf("\n\n");
    int flag = 0;
    int key;
    printf("Enter the key: ");
    scanf("%d",&key);

    for(int  i = 0; i < n; i++){
        if(a[i] == key){
            printf("Tim thay phan tu tai vi tri arr[%d]",i);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Khong tim thay phan tu trong mang");
    }
    
    return 0;
}

