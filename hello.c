#include <stdio.h>
int main () 
{
FILE * fp;
fp = fopen( "output.txt" , "w");
fprintf (fp , "Hello World");
int fclose( FILE *fp );
return 0;
}

