#include "constants.h"

void get_dependencies(char *pkg, int clientfd);
void get_filesystem(int clientfd);
void get_installed(int clientfd);
void send_msg(int clientfd, char *msg);