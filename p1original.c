#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the base and height\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float hight,float *area)
{
  *area=((base*hight)/2);
}
void output(float base ,float height ,float area)
{
  printf("area of %f base and %f hight is %f\n",base ,height,area);
}
int main()
{
  float  base ,height ,area ;
  input(&base,&height);
  find_area(base,height ,&area);
  output(base ,height ,area);
  return 0;

}

