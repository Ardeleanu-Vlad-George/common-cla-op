#include <stdio.h>
#include "common_cla_op.h"

int main(int argc, char* argv[]){
  printf("Is the help command activated?\n%s\n", check_help_cmd(argc, argv) ? "YES" : "NO");
  return 0;
}
