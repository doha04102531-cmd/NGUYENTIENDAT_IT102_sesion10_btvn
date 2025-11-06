
#include <stdio.h>

int main (){
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

    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    printf("\nSo nho nhat trong mang la: %d\n", min);

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }

    printf("\nMang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    int key;
    printf("\n\nNhap so can tim: ");
    scanf("%d", &key);

    int left = 0, right = n - 1, mid, flag = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (a[mid] == key) {
            flag = 1;
            break;
        } else if (a[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (flag)
        printf("So %d duoc tim thay tai vi tri a[%d].", key, mid);
    else
        printf("So %d khong co trong mang.", key);
    return 0;
}
