#include<stdio.h>
#include<conio.h>
void main() 
{
int hindi, english, science,math,computer,sum ;
float per;
printf("Enter marks of hindi=");
scanf("%d",&hindi);
printf("Enter marks of english=");
scanf("%d",&english);
printf("Enter marks of science=");
scanf("%d",&science);
printf("Enter marks of math=");
scanf("%d",&math);
printf("Enter marks of computer=");
scanf("%d",&computer);
sum=hindi+english+science+math+computer;
printf("\nSum of marks=%d",sum);
per=(float)sum/5;
printf("\nPercentage of marks=%f",per);
if(per>=90&&per<=100)
{
printf("\nGrade A");
}
else if(per>=80&&per<90)
{
printf("\nGrade B");
}
else if(per>=60&&per<80)
{
printf("\nGrade C");
}
else if(per<60)
{
printf("\nGrade D");
}
getch();
}