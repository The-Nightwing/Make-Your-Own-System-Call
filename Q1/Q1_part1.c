/* Name: Shivam Verma
   Roll_Number: 2019272 */

#include <stdio.h> 
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int g = 10;

int main() 
{ 
   pid_t pid;
	pid = fork(); 

   if(pid==0){
     for(int i=0;i<100;i++){
      g--;
   }
     printf("Value of g: %d\n",g);
   }
   else if(pid>0){
      int status;
    waitpid(pid,&status,0);
    
   for(int i=0;i<90;i++){
         g++;
   }
   printf("Value of g: %d\n",g);
   }

   else if(pid<0){
      printf("Fork failed");
      exit(0);
   }
return 0; 
} 
