//initial code from 153

#include <stdio.h>
#include <unistd.h>
int main()
{
/* fork a child process */
fork();
/* fork another child process */
fork();
/* and fork another */
fork();
return 0;
}



//code from a1 pdf
int main ()
{
fork(); //fork a child process
fork(); //fork another child process
fork(); //and fork an additional one
fork(); //This is the last fork
return 0;
}


