#include<stdio.h>
#include<math.h>
#define MAX 100
/* hàm nhập các phần tử trong mảng */
void nhap (int a[], int &n)
{
    printf("nhap n: ");
    scanf("%d", &n);
    for(int i=0 ; i<n ; i++){
        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
  //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào số phần tử của mảng trong khoảng từ 1 -> MAX
    // do
    // {
    //     printf("\nNhap n: ");
    //     scanf("%d", &n);
    //     if(n <= 0 || n > MAX)
    //     {
    //         printf("\nSố phần tử không hợp lệ, xin vui lòng nhập lại!");
    //     }
    // }while(n <= 0 || n > MAX);
    // //sử dụng vòng lặp for để nhập giá trị cho phần tử của mảng
    // for(int i = 0; i < n; i++)
    // {
    //     printf("a[%d]: ", i);
    //     scanf("%d", &a[i]);
    // }
}
/* hàm xuất các phần tử trong mảng */
void xuat(int a[], int n)
{
  //sử dụng vòng lặp for lặp từ đầu đến cuối mảng, cứ mỗi vòng lặp thì in phần tử a[i] ra màn hình
    for(int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}
/* hàm tính tổng các số âm trong mảng */
float tongam(int a[], int n)
{
  //khai báo biến s = 0 để tính tổng các số âm
    int s = 0;
    //sử dụng vòng lặp for duyệt từng phần tử của mảng, số nào < 0 thì ta cộng dồn cho s
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            s = s + a[i];
        }
    }
    //return s để trả về tổng các số âm trong mảng
    return s;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    int tong = tongam(a, n);
    printf("\nTong duong trong mang: %d", tong);
}