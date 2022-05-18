#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

execute(char *cmd, char *argv[]) {
	int pid, status;
	pid = fork();
	if (pid == 0) {
		execve(cmd, argv, NULL);
		fprintf(stderr, "command %s not found¥n", cmd);
		exit(1);
	}
	while (wait(&status) != pid);
}

