#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * append_text_to_file - Appends a text
  * @filename: The name of the file to be created
  * @text_content: The content to add at the end of the file;
  *
  * Return: -1 if the function fails or filenname is NULL
  *       :  -1 if the file does not exist and user lacks permission
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}
	close(op);

	return (1);
}

