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
	ssize_t only, RD, WRT;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL || buffer == NULL)
		return (0);
	only = open(filename, O_RDONLY);
	RD = read(only, buffer, letters);
	WRT= write(STDOUT_FILENO, buffer, RD);
	if (WRT == -1 ||WRT != RD)
	{
		free(buffer);
		return (0);
	}
	if (only == -1 || RD == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(only);
	return (WRT);
}
