#include "common_cla_op.h"
#include <string.h>

int check_help_cmd(int count, char *cmdln[]){
  if(count != 2)
    return 0;
  if(strcmp(cmdln[1], _HELP_CMD_) != 0)
    return 0;
  return 1;
}

