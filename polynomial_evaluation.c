#include <stdio.h>
#include <math.h>
double val=0,result=0,a,b;
int numOfItem=0;
int main() {
    printf("請輸入浮點數x的值以及多項式含有的項數正整數y︰\n");
    for(int i = 0 ; i <= numOfItem ; i++)
    {
        scanf("%lf %lf",&a,&b);
        if(i==0)
        {
            val = a;
            numOfItem = b;
        }
        else result += (pow(val,b))*a;
    }
    printf("%lf\n", result);
}
