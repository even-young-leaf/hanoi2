#include <stdio.h>
//1
//将n个圆盘从柱x移至柱z，可借助y
void Hanoi(int n,char x,char y,char z);

int main(void)
{
    int n;//圆盘数量
    scanf("%d",&n);
    Hanoi(n,'A','B','C');
    return 0;
}

void Hanoi(int n,char x,char y,char z)
{
    if(n==1)
    {
        printf("%c->%c\n",x,z);
    }else
    {
        Hanoi(n-1,x,z,y);
        printf("%c->%c\n",x,z);
        Hanoi(n-1,y,x,z);
    }
}