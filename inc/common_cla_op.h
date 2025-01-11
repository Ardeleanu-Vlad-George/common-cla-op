#ifndef _COMMON_CLA_OP_H_
#define _COMMON_CLA_OP_H_

#define _HELP_CMD_ "help"

#include <string.h>

#define check_help_cmd(count, cmdln) ((2==(count) && 0==strcmp((cmdln)[1], _HELP_CMD_)) ? 1 : 0)

#endif//_COMMON_CLA_OP_H_
