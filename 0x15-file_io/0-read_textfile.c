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
	ssize_t only, rd, wr;

	buffer = malloc(sizeof(char) * letters);
	if (filename == NULL || buffer == NULL)
		return (0);
	only = open(filename, O_RDONLY);
	rd = read(only, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr  != rd)
	{
		free(buffer);
		return (0);
	}
	if (only == -1 || rd == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(only);
	return (wr);
}
