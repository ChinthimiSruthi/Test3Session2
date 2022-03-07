#include <stdio.h>
void input_n_and_r(int *n,int *r)
{
  printf("Enter two values\n");
  scanf("%d%d",n,r);
}
int fact(int n)
{
  int i,f=1;
  for(i=1;i<=n;i++)
    {
      f=f*i;
    }
  return f;
}
int ncr(int n, int r)
{
  return fact(n)/(fact(r)*fact(n-r));
}
void output(int n, int r, int result)
{
  printf("%d\n",result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  ncr(n,r);
  output(n,r,result);
  return 0;
}