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
	printf("Initial Value for child: %d\n",g);

   while(g!=-90){
      g--;
   }

     printf("Final Value for child: %d\n",g);
   }
   else if(pid>0){
      int status;
    waitpid(pid,&status,0);
	
	printf("Initial Value for Parent: %d\n",g);
    
   while(g!=100){
      g++;
   }
   printf("Final Value for Parent: %d\n",g);
   }

   else if(pid<0){
      printf("Fork failed");
      exit(0);
   }
return 0; 
} 
