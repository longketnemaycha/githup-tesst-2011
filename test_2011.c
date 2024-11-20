#include <stdio.h>
    int so1=3;
    int so2;
    float so3;
    int j=0;
    int z;
    int y;
    int k;
void    in(int mang3 [10],int k)
{
 for(int i =0 ; i < k; i++)
    {
        printf(" số MANG 1:%d", mang3[i]);
    }
}
int tong(int a, int b)
{
    int kq;
    kq=a+b;
    return kq;
}  
struct dongn
{
    /* data */
    char dong1[100];
    char dong2[100];
    char dong3[100];
    int dong4;
};



int main()
{

    int mang2[6]= {1,2,3,4,5,6};
    int mang1[10]={10,11,12,13,14,20,21,22,23,24};
    struct dongn caun ={"cau1","cau2","cau3",20};
    // printf("nhap so dau: ");3
    // scanf("%d",&so2);
    // printf("nhap so hai: ");
    // scanf("%f",&so3);2
    printf("nhap so k: ");
    scanf("%d",&k);
    printf("nhap so a: ");
    scanf("%d",&z);
    printf("nhap so b: ");
    scanf("%d",&y);
    for(int j=0;j<=2;j++)
    {   
        //printf("%d",k);
        printf("\n %d ",j);
        in(mang1,k);
    }
    int c = tong(z,y);
    int l = caun.dong4*k;
    printf("\n tong= %d",c);
    printf("\n cau may %d \n",l);

    
    // printf("huhhhhh số thứ nhất: %d \n", so1);
    // printf("huhhhhh số thứ hai:  %d \n", so2);
    // printf("huhhhhh số thứ ba: %.1f \n", so3);
}   
