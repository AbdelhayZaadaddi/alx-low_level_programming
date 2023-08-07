#include "main.h"

/**
 * error_check_files - checks if files can be opened.
 *
 * @src_fd: source file descriptor.
 * @dest_fd: destination file descriptor.
 * @args: arguments vector.
 *
 * Return: no return.
 */

void error_check_files(int src_fd, int dest_fd, char *args[])
{
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX students
 *
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd, err_close;
	ssize_t num_chars, num_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_check_files(src_fd, dest_fd, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(src_fd, buffer, 1024);
		if (num_chars == -1)
			error_check_files(-1, 0, argv);
		num_written = write(dest_fd, buffer, num_chars);
		if (num_written == -1)
			error_check_files(0, -1, argv);
	}

	err_close = close(src_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	err_close = close(dest_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
