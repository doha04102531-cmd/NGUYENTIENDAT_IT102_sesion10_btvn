#include<stdio.h>
#include<math.h>
int main(){
	int a[101];
    int n;
    do{
        printf("Nhap vao so phan tu ban muon nhap la: ");
        scanf("%d",&n);
        if(n < 1 || n > 101){
            printf("Loi! hay nhap lai so phan tu cua ban muon nhap!\n");
        }
    }while(n < 1 || n > 101);

    for(int i = 0; i < n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Mang sau khi nhap la: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d     ",i, a[i]);
    }
    printf("\n\n");

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n - i -1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d     ",i,a[i]);
    }
    printf("\n\n");
    int key;
    printf("Enter the key: ");
    scanf("%d",&key);

    int left = 0;
    int right = n - 1;
    int mid;
    int flag = 0;
    while(left <= right){
        mid = left + (right - left) / 2;
        if(a[mid] == key){
            flag = 1;
            break;
        }else if(a[mid] < key){
            left = mid + 1;
        }else if(a[mid] > key){
            right = mid - 1;
        }
    }
    if(flag==1){
        printf("Tim thay phan tu %d o vi tri arr[%d]",key,mid);
    }else{
        printf("Khong tim thay phan tu trong mang!");
    }
    
    return 0;
}

