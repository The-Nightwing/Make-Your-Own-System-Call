/* Name: Shivam Verma
   Roll_Number: 2019272 */

#include<linux/kernel.h>
#include<unistd.h>
#include<sys/syscall.h>
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>


int main(int argc,char **argv){

	pid_t pid = (pid_t)atoi(argv[1]);
	char *filename = argv[2];

	long int t = syscall(548,pid,filename);
	printf("System call returned with: %s\n",strerror(errno));

return 0;
}
