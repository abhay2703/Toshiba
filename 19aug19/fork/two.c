#include<stdio.h>
#include<unistd.h>
void main()
{
	printf("taki taki rumba pid=%d\n", getpid());
	fork();
	printf("ok madam pid=%d\n", getpid());
	printf("i am rich ppid=%d\n", getppid());
	sleep(30);
	return;
}
