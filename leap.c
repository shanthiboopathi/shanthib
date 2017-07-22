#include<stdio.h>
int yr;
printf("Enter a year\n");
scanf("%d",&yr);
if(yr%4==0&&yr%100==0&&yr%400==0)
printf("\n \t is LEAP YEAR.");
else if(yr%4==0&&yr%100!=0)
printf("\n \t it is LEAP YEAR.");
else
printf("\n \t is not LEAP YEAR.");
return 0;
}
