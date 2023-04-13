#include<stdio.h>
#include<math.h>
#include <conio.h>
#define max 50

void nhap(int a[], int n) {
    do{
        printf("nhap n:");
        scanf("%d",&n);
        if(n<=0 || n>max)
        printf("sai");
    }while (n<=0 || n>max);
    for(int i=0;i<n;i++) {
        printf("nhap a[%d]: ",i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    for(int i=0;i<n;i++){
        printf("%4d", a[i]);
    }
}

int tongchan(int a[], int n) {
    if(n==0)
    return 0;
    float s = tongchan(a, n-1);
    if(a[n-1]%2==0)
    s = s + a[n-1];
    return s;
}

int main() {
    int a[max];
    int n;
    nhap(a,n);
    xuat(a,n);
    int tong = tongchan(a,n);
    printf("ket qua: %d",tong);
    getch;
}