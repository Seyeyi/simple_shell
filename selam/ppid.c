#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%u\n",  getppid());
	return (0);
}
