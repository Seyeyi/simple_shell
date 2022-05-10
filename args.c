#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	int  words = 1;
	for(int i = 0; i < strlen(av); i++){
		if(av[i] == ' '){
			words++;
		}
		print("%i", words);
	}
}

