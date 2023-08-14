#include<stdio.h>
#include<conio.h>
struct student
{
  int s1,s2,s3,s4,s5,total;
  float avg;
}   ;
void main()
{
 int n,i;
 struct student obj[100];
 clrscr();
 printf("ENTER TOTAL STUDENT ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("ENTER YOUR 5 SUBJECT MARKS\n");
  scanf("%d%d%d%d%d",&obj[i].s1,&obj[i].s2,&obj[i].s3,&obj[i].s4,&obj[i].s5);
  obj[i].total = obj[i].s1+ obj[i].s2+ obj[i].s3+ obj[i].s4+ obj[i].s5;
  obj[i].avg=obj[i].total/5;
  printf("TOUR TOTAL is ==> %d\n",obj[i].total);
  printf("YOUR AVD IS ==> %f\n",obj[i].avg);
  if(obj[i].avg>=35&&obj[i].avg<55)
  {
     printf("C Grade");
  }
  else if(obj[i].avg>=55&&obj[i].avg<80)
  {
    printf("B Grade");
  }
  else if(obj[i].avg>=80)
  {
    printf("A Grade");
  }
  else
  {
    printf("FAil");
  }



 }

 getch();
}