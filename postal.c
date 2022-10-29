
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <in/netinet.h>
#include <sys/types.h>
#include <string.h>

#define DGRAM_SIZE 2000
void main (void) {


	struct sockaddr_in server_address, client_address;

	char server_message[DGRAM_SIZE], char client_message[DGRAM_SIZE];

	memset(server_message '\0', sizeof(server_message));	
	memset(client_message, '\0', sizeof(client_message));

	int socket_pid = socket(AF_INET, SOCK_STREAM,  0);

	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(DGRAM_SIZE);
	server_address.sin_addr.s_addr = inet_addr("127.0.0.1");
	bind (socket_pid, (struct sockaddr*)&server_address, sizeof(server_address));
	listen (socket_pid, 1);

	/* store the clients outgoing address 
	 * and accept exchange on incoming connection */

	struct sockaddr client;
	int client_size = sizeof(client);
	int client = accept(socket_pid, (struct sockaddr*)&client, &client_size);

	if (bind (socket_pid, (struct sockaddr*)&server_address, sizeof(server_address)))	
		printf ("socket is bound...\n");
	else
		printf ("not sure what happened there...\n");

	printf ("done binding.\n");

}
