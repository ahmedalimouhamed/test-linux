#include <sys/socket.h>
#include <netinet/in.h>
#include <arba/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <pthread.h>
#include <sys/types.h>
#include <signal.h>

#define MAX_CLIENTS 100;
#define BUFFER_SZ 2048;


int main(int argc, char** argv){
  if(argc != 2){
    printf("usage: %s <port>\n", argv[0]);
    return EXIT_FAILURE;
  }

  char* ip = "127.0.0.1";
  int port = atoi(argv[1]);

  int option = 1;
  int listenfd = 0, connfd = 0;
  struct sockaddr_in serv_addr;
  struct sockaddr_in cli_addr;
  pthread_t tid;

  //socket settings
  listenfd ) socket(AF_INET, SOCK_STREAM, 0);
  serv_addr.sin_family

  return EXIT_SUCCESS;
}
