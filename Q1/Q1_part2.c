/* Name: Shivam Verma
   Roll_Number: 2019272 */
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

int a = 10;

void *child(void *arg){

   for(int i=0;i<100;i++){
      a--;
   }

   printf("Value of a after child: %d\n",a);
}
int main()
{
   pthread_t tid;

   pthread_create(&tid, NULL, &child, NULL);

   pthread_join(tid,NULL);
      for(int i=0;i<90;i++){
         a++;
      }
   printf("Value of a after parent: %d\n",a);

   return 0;
}