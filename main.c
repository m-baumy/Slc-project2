#include <stdio.h>
int main()
{
    int sec;
    int min;
    int hours ;
    
    printf("Enter the number of sec to convert: ");
    scanf("%d", &sec);
    
    hours = (sec/3600) ;
    min =(sec - (3600* hours))/60 ;
    sec = (sec -(3600* hours)-(min*60)) ;
    
    
    

    printf("hours = %d\n",  hours);
    printf("minutes = %d\n", min);
    printf("seconds = %d\n",  sec);
    return 0;
}
