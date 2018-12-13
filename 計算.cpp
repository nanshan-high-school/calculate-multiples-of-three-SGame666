#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() 
{
  int a,i,j;
  do
  {
  cout<<"請選擇1:+,2:-,3:*,4/:";
  cin>>a;
  }
  while(a<1 || a>4);
  cout<<"請輸入第1個數:";
  cin>> i;
  cout<<"請輸入第2個數:";
  cin>> j;
  //加法
if(a==1)
{
  int k=i+j;
  if(k/3*3==k)
  {
    printf("%d是3的倍數",k);
  }
  else 
  {
    printf("%d不是3的倍數",k);
  }
}
//減法
  if(a==2)
{
  int k=i-j;
  if(k/3*3==k)
  {
    printf("%d是3的倍數",k);
  }
  else 
  {
    printf("%d不是3的倍數",k);
  }
}
//乘法
if(a==3)
{
  int k=i*j;
  if(k/3*3==k)
  {
    printf("%d是3的倍數",k);
  }
  else 
  {
    printf("%d不是3的倍數",k);
  }
}
//除法
if(a==4)
{
  int k=i/j;
  if(k/3*3==k)
  {
    printf("%d是3的倍數",k);
  }
  else 
  {
    printf("%d不是3的倍數",k);
  }
}

}
