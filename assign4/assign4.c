#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[], char *envp[])
{

  if (argc < 2) {
    /* no argument */
    /* give error message and exit */
    fprintf(stderr, "Must pass an argument!\n");
    exit(1);
  }


  FILE *bashFile = fopen(argv[1], "r");
   
  char buf[256];
  while (fgets(buf, sizeof buf, bashFile) != NULL)
    printf("\"%s\"\n", buf);
  
  /* Test reason for reaching NULL. */
  if (feof(bashFile))          /* if failure caused by end-of-file condition */
    puts("End of file reached");
  else if (ferror(bashFile))   /* if failure caused by some other error      */
    {
      perror("fgets()");
      fprintf(stderr,"fgets() failed in file %s at line # %d\n", __FILE__,__LINE__-9);
      exit(EXIT_FAILURE);
    }
  
  return EXIT_SUCCESS;
}
