/*
#include <stdio.h>
#include <stdlib.h>
//��fahr=0,20,...,300ʱ���ֱ��ӡ�����¶��������¶ȶ��ձ�
int main()
{
    float fahr,celsius;
    int lower,upper,step;

    lower=0;//�¶ȱ������
    upper=300;//�¶ȱ������
    step=20;//����

    celsius=lower;
    printf("hello ��ȫ\n");
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

#define LOWER 0    //�������
#define UPPER 300  //�������
#define STEP  20   //����
//��ӡ�����¶ȡ��������¶ȶ��ձ�
int main()
{
    int fahr;

    for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
}
*/
/*
#include<stdio.h>
//�����븴�Ƶ�������汾1
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
//ͳ��������ַ���:�汾1
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
#define IN 1 //�ڵ�����
#define OUT 0 //�ڵ�����
//ͳ����������������������ַ���
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
      if(inspace == 0) //���ǰһ���ַ����ǿո�,���־��ǰ�ַ�Ϊ�ո�����ո�
      {
        inspace = 1;
        putchar(c);
      }
    }

    //We haven't met 'else' yet, so we have to be a little clumsy
    if(c != ' ') //�����ǰ���벻�ǿո�����ı�־λinspace
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

