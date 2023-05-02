/*
 * File: 102-zombie.c
 * Author:Lesego Winnie Seshabo
 * code inspired by Jorgezafra
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * infinite_while - Run an infinite while loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main -C program that creates 5 zombie processes.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	pid_t child_pid;

	for (; a < 5; a++)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			dprintf(1, "Zombie process created, PID: %d\n", getpid());
			return (0);
		}
	}
	infinite_while();
	return (0);
}
