#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int sig);
void checkMask(int sig);

int main () {
     if (signal(SIGINT, sighandler) == SIG_ERR) { // 注册SIGINT信号
          printf("can't catch SIGINT\n");
          return 0;
     }
     if (signal(SIGTERM, sighandler) == SIG_ERR) { // 注册SIGTERM信号
          printf("can't catch SIGTERM\n");
          return 0;
     }
     if (signal(SIGSTOP, sighandler) == SIG_ERR) { // 注册SIGSTOP信号
          printf("can't catch SIGSTOP\n"); // can't catch SIGSTOP
     }
     if (signal(SIGCONT, sighandler) == SIG_ERR) { // 注册SIGCONT信号
          printf("can't catch SIGCONT\n");
          return 0;
     }
     while(1) {
          printf("Going to sleep for a second...\n");
          sleep(1); 
     }
     return(0);
}

void sighandler(int sig) {
     checkMask(sig);
}

void checkMask(int sig)
{
    sigset_t oldSet;

    // 如果第二个参数set为NULL，则第一个参数how无意义
    // signal mask的值会存储在oldSet里
    if (sigprocmask(SIG_BLOCK, NULL, &oldSet) < 0) {
		printf ("sigprocmask error");
		return;
	}
     char *sigName;
     switch (sig) {
          case SIGINT:
               sigName = "SIGINT";
               printf("SIGINT is in signal mask, SIGINT: %d\n", sigismember(&oldSet, SIGINT)); // 检查SIGINT是否在signal mask中
               break;
          case SIGTERM:
               sigName = "SIGTERM";
               printf("SIGTERM is in signal mask, SIGTERM: %d\n", sigismember(&oldSet, SIGTERM));
               break;
          case SIGSTOP:
               sigName = "SIGSTOP";
               printf("SIGSTOP is in signal mask, SIGSTOP: %d\n", sigismember(&oldSet, SIGSTOP));
               break;
          case SIGCONT:
               sigName = "SIGCONT";
               printf("SIGCONT is in signal mask, SIGCONT: %d\n", sigismember(&oldSet, SIGCONT));
               break;
          default:
               printf("unknown signal\n");
               break;
     }
}