#include <stdio.h>
#include <unistd.h>

/**
* main - prints out the sum
* Return: 0
*/
int main(void)
{
	int a, b;

	printf("Enter value of a: ");
	scanf("%d", &a);
	printf("Enter value of b: ");
	scanf("%d", &b);

	pid_t eupid;

	eupid = getpid();

	pid_t egppid;

	egppid = getppid();

	int sum = a + b;

	printf("The sum of a and b is %d\n", sum);
	printf("pid is %u\n", eupid);
	printf("ppid is %u\n", egppid);
	return (0);
}
