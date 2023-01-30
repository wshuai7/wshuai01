#include<stdio.h>
#include<string.h>
int main()
{char a[100],b[128];
int z,i,o;
for(i=0;i<128;i++)
b[i]=0;
 scanf("%s",a);
 z=strlen(a);//统计a这个数组中输入的元素个数
 for(i=0;i<128;i++)//将字符的ASCII码从大到小排序

 {for(o=0;o<=z;o++)
 {if(a[o]==i)
 b[i]++;
 }//将数组a的元素与ASCII码对照，创立新数组b来记录是否出现并与字符对应
 }for(i=0;i<128;i++)
 {if(b[i]>0)
 printf("%c",i);
 }

}