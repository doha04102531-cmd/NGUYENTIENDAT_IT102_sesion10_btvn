#include<stdio.h>
#include<math.h>
int main(){
	int a[101];
    int n;
    do{
        printf("Nhap vao so phan tu ma ban muon nhap: ");
        scanf("%d",&n);
        if(n < 1 || n > 101){
            printf("Loi! Hay nhap lai so phan tu ma ban muon nhap!");
        }
    }while(n < 1 || n > 101);

    for(int  i = 0; i < n; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("Mang sau khi nhap la: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d     ",i,a[i]);
    }
    printf("\n\n");

    for(int i = 0; i < n; i ++){

        for(int j = 0; j < n - i -1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep la: \n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d     ",i,a[i]);
    }
    return 0;
}

