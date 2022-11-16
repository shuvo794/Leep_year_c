#include <stdio.h>

int main (void){
int year;
int is_year=0;
printf("Enter a Year  - ");
scanf("%d",&year);
if(((year%4==0 && year%100!=0))||(year%400==0)){

is_year=1;

}
if(is_year){
printf("%d is leap year \n",year);
}else{
    printf("%d is leap not year \n",year);
}

    return 0;
}