/*
#include <stdio.h>
#include <stdlib.h>
//当fahr=0,20,...,300时，分别打印华氏温度与摄氏温度对照表
int main()
{
    float fahr,celsius;
    int lower,upper,step;

    lower=0;//温度表的下限
    upper=300;//温度表的上限
    step=20;//步长

    celsius=lower;
    printf("hello 陈全\n");
    while(celsius<=upper)
    {
        fahr=(9.0/5.0)*celsius+32.0;
        printf("%3.0f %6.1f\n",celsius,fahr);
        celsius=celsius+step;
    }
}
*/
/*#include<stdio.h>
int main()
{
    int fahr;
    for(fahr=300;fahr>=0;fahr=fahr-20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));

}
*/
/*#include<stdio.h>

#define LOWER 0    //表的上限
#define UPPER 300  //表的下限
#define STEP  20   //步长
//打印华氏温度——摄氏温度对照表
int main()
{
    int fahr;

    for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
*/
/*
#include<stdio.h>
//将输入复制到输出；版本1
int main()
{
    int c;

    c=getchar();
    while(c!=EOF)
    {
        putchar(c);
        c=getchar();
    }
}*/
/*
#include<stdio.h>
int main()
{
    int c;

    while((c=getchar())!=EOF)

    {   putchar(c);
        printf("%d\n",EOF);
         printf("%d\n",getchar()!=EOF);
    }
}
*/
/*#include<stdio.h>
//统计输入的字符数:版本1
int main()
{
    long nc;

    nc=0;
    while(getchar()!=EOF)
        nc++;
    printf("%ld\n",nc);
}
*/
/*
#include<stdio.h>
#define IN 1 //在单词内
#define OUT 0 //在单词外
//统计输入的行数、单词数与字符数
int main()
{
    int c,n1,nw,nc,state;

    state=OUT;
    n1=nw=nc=0;
    while((c=getchar())!=EOF)
    {
        ++nc;
        if(c=='\n')
            ++n1;
        if(c==' '||c=='\n'||c=='\t')
            state=OUT;
        else if(state==OUT)
        {
            state=IN;
            ++nw;
        }
    }
    printf("%d %d %d\n",n1,nw,nc);
}
*/
/*
#include<stdio.h>
int main()
{
    int c,nk,nz,nh;

    nk=nz=nh=0;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
            ++nh;
        if(c==' ')
            ++nk;
        if(c=='\t')
            ++nz;

    }
    printf("%d %d %d\n",nk,nz,nh);
}
*/
/*
#include <stdio.h>

int main(void)
{
  int c;
  int inspace;

  inspace = 0;
  while((c = getchar()) != EOF)
  {
    if(c == ' ')
    {
      if(inspace == 0) //如果前一个字符不是空格,则标志当前字符为空格，输出空格
      {
        inspace = 1;
        putchar(c);
      }
    }

    //We haven't met 'else' yet, so we have to be a little clumsy
    if(c != ' ') //如果当前输入不是空格，则更改标志位inspace
    {
      inspace = 0;
      putchar(c);
    }
  }

  return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int c;

    while((c=getchar())!=EOF)
    {
        if(c=='\t')
        {
            c='\t';
            printf("%d",c);
        }
        else
            putchar(c);
    }
}
*/
#include <stdio.h>
void main() {
    int c;
    while ((c=getchar())!=EOF) {
             if (c=='\t') {putchar('\\');putchar('t' );}
        else if (c=='\b') {putchar('\\');putchar('b' );}
        else if (c=='\\') {putchar('\\');putchar('\\');}
        else               putchar(c);
    }
}

