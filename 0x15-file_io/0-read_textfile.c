#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * read_textfile - Reads and prints a textfile
  * @filename: The file name to be read
  * @letters: The number of letters to be read and printed
  *
  * Return: 0 if the filename is NULL
  *       : The number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t op, re, wr;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, re);

	if (wr == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
