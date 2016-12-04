/*
** ls.c for  in /home/mathias/Bureau/my_ls/ls_normal
** 
** Made by Mathias
** Login   <mathias.descoin@epitech.eu@epitech.net>
** 
** Started on  Thu Dec  1 10:09:40 2016 Mathias
** Last update Sun Dec  4 13:33:26 2016 Mathias
*/

#include "h.h"

void my_putstr(char *str)
{
  int i;

  i = 0;
  if (str[i] != '.')
    {
      while (str[i] != '\0')
	{
	  write(1, &str[i], 1);
	  i += 1;
	}
      write(1, "\n", 1);
    }
}

void ls(char *str)
{
  struct stat st;
  struct dirent *file;
  DIR *fd;

  fd = opendir(str);
  while ((file = readdir(fd)) != NULL)
    my_putstr(file->d_name);
}

int main(int av, char **ac)
{
  if (av == 2 && ac[1][0] != '-')
    ls(ac[1]);
  if (av == 1)
    ls("./");
}
