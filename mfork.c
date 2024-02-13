/*
 * fork.c: Program to learn about multiple fork calls
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Question 1: How many processes are created? Explain.
// Answer: 7 processes were made. The reason this happens is because of interweaving, as fork-1, fork-2, and fork-3 come from the same process, and as more children are made
// then those children will share the same process. A child of a child. 

int main(int argc, char *argv[])
{
  pid_t ret1=0, ret2=0, ret3=0;
  int ret_stat, pid;

  fprintf(stdout, "Fork-1 was called from process: %d\n", getpid());
  ret1 = fork();

  fprintf(stdout, "Fork-2 was called from process: %d\n", getpid());
  ret2 = fork();

  fprintf(stdout, "Fork-3 was called from process: %d\n", getpid());
  ret3 = fork();

  return(0);
}
