#include "main.h"
/**
 * create_file -func to creates an array of chars, and initializes
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1)
		return (-1);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
