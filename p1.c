#include<stdio.h>
#include<pthread.h>
void * add(void *a)
{
	int *b;
	b=(int *) a;
	int sum;
	sum= b[0] + b[1];
	return (void *)sum;
}
int main()
{
	int c;
	pthread_t tid;
	int a[2]={3,5};
	pthread_create(&tid,NULL,&add,a);
	pthread_join(tid,(void *)&c);
	printf("\n%d\n", c);
	return 0;
}
