// TASK 4 TASK 4 TASK 4 TASK 4 TASK 4 TASK 4 TASK 4 TASK 4

// program should first generate a divide-by-zero error,
// which can trigger a SIGFPE. When handling this signal,
// your customized handler will output a message:
// “I catch a SIGFPE successfully!”

#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <iostream>
using namespace std;

void catch_signal(int sign) {
	switch (sign){
	case SIGFPE:
		printf("I catch a SIGFPE successfully!\n");
		exit(0);
	}
}

int main(int arg, char *args[]) {
	struct sigaction sigact;
	sigact.sa_handler = catch_signal;
	sigemptyset(&sigact.sa_mask);
	sigact.sa_flags = 0;

	sigaction(SIGFPE, &sigact, NULL);

	int b = 100;
	int zero = 0;

	cout << b / zero << endl;

	sigaction(SIGFPE, NULL, NULL);
	return 0;
}