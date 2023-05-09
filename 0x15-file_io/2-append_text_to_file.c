#include"main.h"
#include<stdlib.h>
/**
 * append_text_to_file - function
 * @filename: name
 * @text_content: content
 * Return: defined
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		j++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, j);

	return (1);
}
