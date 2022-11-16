#include <stdio.h>

int main (void){
int year=2020;
int is_year=0;

if(((year%4==0 && year%100==0))||(year%400==0)){

is_year=1;

}
if(is_year){
printf("%d is year \n",year);
}

    return 0;
}