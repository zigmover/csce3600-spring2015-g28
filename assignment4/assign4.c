#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[], char *envp[])
{

  if (argc < 2) {
    /* no argument */
    /* give error message and exit */
    fprintf(stderr, "Must pass an argument! (eg. \"./a.out inputBashFile\"\n");
    exit(1);
  }

  printf("Num Arguments: %u\n",argc);


  FILE *bashFile = fopen(argv[1], "r");
   
  char line[256];
  while (fgets(line, sizeof line, bashFile) != NULL) {
    printf("[%lu]%s", sizeof(line),line);
  //parse line
  }
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

