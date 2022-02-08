#include<stdio.h>

int input_side()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    return a;
    
}
int check_scalene(int a,int b,int c)
{
    int scalene;
    if(a==b || b==c || c==a)
    {
        scalene = 2;
    }
    else
    {
        scalene=0;
    }
    return scalene;
}
void output(int a,int b,int c,int  isscalene)
{
    if(isscalene==0)
    {
        printf("it is a is scalene\n");
    }
    
    else
    {
        printf(" it is not a isscalene\n");
    }

}
int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}