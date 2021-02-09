/******************************************************************************
Use of time.h library functions
*******************************************************************************/
//The C library function clock_t clock(void) returns the number of clock ticks 
//elapsed since the program was launched. 
//To get the number of seconds used by the CPU, you will need to divide by CLOCKS_PER_SEC.
//Syntax --

// clock(void);

//2. time_t time( time_t *second )

/*
The time() function is defined in time.h header file. 
This function returns the time since 00:00:00 UTC, January 1, 1970 in seconds. 
*/
#include <time.h>
#include <stdio.h>



void main()
{
   
   clock_t start_time,end_time;
 
   start_time=clock();
   for(int i=0;i<2000000;i++)
   {
       
   }
   
   end_time=clock();
   double time_req=(double)(end_time - start_time);
   printf("The number of clock ticks since the beginning of program is %f\n",time_req);
   printf("Time required to run this program is %f sec\n",time_req/CLOCKS_PER_SEC);
   
  time_t t;
    time(&t);
  
  //   printf("Seconds since January 1, 1970 = %ld\n", time(NULL)); 
      printf("Seconds since January 1, 1970 = %ld\n", time(&t)); 
    printf("Today's date and time : %s",ctime(&t));
   
}
