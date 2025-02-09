#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <iostream>
using namespace std;


void catch_signal(int sign)
{
	switch (sign)
	{
	case SIGFPE:
		printf("Divide by zero!\n");
		exit(0);
	}
}
int main(int arg, char *args[])
{
	signal(SIGFPE, catch_signal);
	int b = 100;
	int zero = 0;
	cout << b / zero << endl;
	signal(SIGFPE, SIG_DFL);
	return 0;
}