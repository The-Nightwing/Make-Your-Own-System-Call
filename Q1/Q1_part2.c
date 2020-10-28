/* Name: Shivam Verma
   Roll_Number: 2019272 */
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

int a = 10;

void *child(void *arg){

printf("Initial Value for child: %d\n",a);

  while(a!=-90){
     a--;
  }

   printf("Final Value for child: %d\n",a);
}
int main()
{
   pthread_t tid;

   pthread_create(&tid, NULL, &child, NULL);

   pthread_join(tid,NULL);

  printf("Initial Value for Parent: %d\n",a);

      while(a!=100){
         a++;
      }
      
   printf("Final Value for Parent: %d\n",a);

   return 0;
}
