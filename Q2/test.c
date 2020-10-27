/* Name: Shivam Verma
   Roll_Number: 2019272 */

#include<linux/kernel.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
#include<stdlib.h>


int main(int argc,char **argv){

	if(argc<3 || argc>3){
		printf("Insufficient or extra arguments given");
		return 0;
	}

	pid_t pid = (pid_t)atoi(argv[1]);
	char *filename = argv[2];

	long int t = syscall(548,pid,filename);
	printf("System call returned with: %ld\n",t);

return 0;
}
