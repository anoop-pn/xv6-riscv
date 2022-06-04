#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char* argv[])
{
  int n=0;
  if(argc >=2)
  {
    n=atoi(argv[1]);
  }
  printf("Parameter sent to kernel: %d\n",n);
  int result=info(n);
  printf("Result from kernel: %d\n",result);
  int r=info(n);
  printf("Result from Second instance of same system call= %d\n",r);
  printf("\n\n----------Lab2---------\n\n");
  int tickets=5;
  int ss=sched_statistics();
  printf("Print scheduler statistics and return: %d\n",ss);
  int st=sched_tickets(tickets);
  printf("Set number of tickets to: %d, and return value= %d\n\n",tickets,st);
  exit(0);
}
