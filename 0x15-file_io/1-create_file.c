#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * create_file - Creates a file
  * @filename: The name of the file to be created
  * @text_content: The content of the file to be inserted;
  *
  * Return: -1 of the file cannot be written or created
  *       :  1 if it succeeds
  */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}
	close(op);

	return (1);
}
