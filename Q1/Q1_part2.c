/* Name: Shivam Verma
   Roll_Number: 2019272 */
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

int a = 10;

void *child(void *arg){

printf("Initial Value for child: %d\n",a);

   for(int i=0;i<100;i++){
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
      for(int i=0;i<90;i++){
         a++;
      }
   printf("Final Value for Parent: %d\n",a);

   return 0;
}
