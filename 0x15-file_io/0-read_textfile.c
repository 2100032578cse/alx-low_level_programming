#include"main.h"

/**
 * read_textfile - func Reads a text in file and prints it to POSIX stdout.
 * @filename: file. name
 * @letters: number of letters to read and write
 * Return: returns the actual number of letters it could read and print;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t only, read, write;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);
	only = open(filename, O_RDONLY);
	read = read(only, buffer, letters);
	write = write(STDOUT_FILENO, buffer, read);
	if (write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}
	if (only == -1 || read == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(only);
	return (write);
}
