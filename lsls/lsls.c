#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  DIR *dir;
  struct dirent *sd;

  struct stat buf;

  char user_dir[20];

  printf("The current directory is..\n");

  for (int i = 0; i < argc; i++)
  {
    printf("   %s\n", argv[i]);
  }

  printf("What directory do you want to check?\n");
  scanf("%s", user_dir);

  // Open directory
  dir = opendir(user_dir);

  if (dir == NULL) // if it fails to open the directory
  {
    printf("Unable to open directory.\n");
    exit(1);
  }

  // Repeatly read and print entries

  while ((sd = readdir(dir)) != NULL)
  {
    printf(">> %s\n", sd->d_name);
    stat(sd->d_name, &buf);
    printf("Bytes = %lld\n", buf.st_size);
  };

  // Close directory
  closedir(dir);

  return 0;
}