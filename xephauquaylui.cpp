#include <stdio.h>
#include <math.h>
int n;
int d=0;
int a[100];
bool Check(int v,int k)
{
    for(int i=1;i<=k-1;i++)
    {
        if(v==a[i]) return false;
        if(abs(a[i]-v)==abs(i-k)) return false;
    }
    return true;
}

void Solution()
{     d++;
    printf("Cach xep thu %d: ",d );
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void Try (int k)
{
    for(int v=1;v<=n;v++)
    {
        if(Check(v,k))
        {
            a[k]=v;
            if(k==n) Solution();
            else Try(k+1);
        }
    }
}
int main()
{
    printf("nhap n: ");
    scanf("%d",&n);
    Try(1);
    if(d==0) printf("Khong ton tai cach xep nao thoa man");
    return 0;
}
