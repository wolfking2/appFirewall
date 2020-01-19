//
//  cmd.h
//  com.leith.appFirewall-Helper
//
//  Created by Doug Leith on 18/01/2020.
//  Copyright © 2020 Doug Leith. All rights reserved.
//

#ifndef cmd_h
#define cmd_h

#include <stdio.h>
#include <netinet/in.h>
#include <pthread.h>
#include "util.h"

#define CMD_PORT 6

void start_cmd(void);

#endif /* cmd_h */