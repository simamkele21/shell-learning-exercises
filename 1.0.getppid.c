

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("Parent %u\n", my_pid);
	my_pid = getppid();
	printf("Child %u\n", my_pid);
	return (0);
}

int main(int argc, char* argv[])
{
	int ID = fork();
	if id == 0 {
		sleep(1);
	}
	{
		printf("currentID: %d\n, ParentID: %d\n", getpid(), getppid());
	return (0);
	}
	
}

