// // Server side C/C++ program to demonstrate Socket programming
// #include <unistd.h>
// #include <stdio.h>
// #include <sys/socket.h>
// #include <stdlib.h>
// #include <netinet/in.h>
// #include <string.h>
// #define PORT 8080
// int main(int argc, char const *argv[])
// {
//     int server_fd, new_socket, valread;
//     struct sockaddr_in address;
//     int opt = 1;
//     int addrlen = sizeof(address);
//     char buffer[1024] = {0};
//     char *hello = "Hello from server";
       
//     // Creating socket file descriptor
//     if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
//     {
//         perror("socket failed");
//         exit(EXIT_FAILURE);
//     }
       
//     // Forcefully attaching socket to the port 8080
//     if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
//                                                   &opt, sizeof(opt)))
//     {
//         perror("setsockopt");
//         exit(EXIT_FAILURE);
//     }
//     address.sin_family = AF_INET;
//     address.sin_addr.s_addr = INADDR_ANY;
//     address.sin_port = htons( PORT );
       
//     // Forcefully attaching socket to the port 8080
//     if (bind(server_fd, (struct sockaddr *)&address, 
//                                  sizeof(address))<0)
//     {
//         perror("bind failed");
//         exit(EXIT_FAILURE);
//     }
//     if (listen(server_fd, 3) < 0)
//     {
//         perror("listen");
//         exit(EXIT_FAILURE);
//     }
//     if ((new_socket = accept(server_fd, (struct sockaddr *)&address, 
//                        (socklen_t*)&addrlen))<0)
//     {
//         perror("accept");
//         exit(EXIT_FAILURE);
//     }
//     valread = read( new_socket , buffer, 1024);
//     printf("%s\n",buffer );
//     send(new_socket , hello , strlen(hello) , 0 );
//     printf("Hello message sent\n");
//     return 0;
// }

//Server.c



#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>

// Winsock library
#pragma comment(lib, "ws2_32.lib")

#define MAX_PENDING 5
#define RECEIVE_BUFFER_SIZE 32

void error(char *message)
{
    fprintf(stderr, "%s: %d\n", message, WSAGetLastError());
    exit(1);
    return;
}

void close(SOCKET so)
{
    closesocket(so);
    WSACleanup();
    return;
}

void handle_client(int client_socket)
{
    char buffer[RECEIVE_BUFFER_SIZE];
    char message[200] = "Welcome to the server!\n";
    int receive_message_size;

    send(client_socket, message, strlen(message) + 1, 0);

    while (strcmp(message, "QUIT") != 0)
    {
        if ((receive_message_size = recv(client_socket, buffer, RECEIVE_BUFFER_SIZE, 0)) < 0)
            error("Error on receive data.\n");

        buffer[receive_message_size] = '\0';
        printf("[TCP Client]: %s\n", buffer);

        scanf("%s", message);
        printf("[Server]: %s\n", message);
        send(client_socket, message, strlen(message) + 1, 0);

    }

    puts("Closing client socket..");
    closesocket(client_socket);
}

int main(int argc, char *argv[])
{
    SOCKET server_so, client_so;
    WSADATA wsa;
    char *ip;
    int bytes_received;
    unsigned int client_length;
    unsigned short port;
    struct sockaddr_in server, client;

    if (argc != 3)
    {
        printf("Usage: %s <server_ip> <server_port>\n", argv[0]);
        return 1;
    }

    ip = argv[1];
    port = atoi(argv[2]);

    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
        error("Failed WSAStartup.\n");

    printf("Winsock Initialised.\n");

    if ((server_so = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
        error("Failed socket.\n");

    printf("Socket created.\n");

    memset(&server, 0, sizeof(server));
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ip);
    server.sin_port = htons(port);

    if (bind(server_so, (struct sockaddr *)&server, sizeof(server)) == SOCKET_ERROR)
        error("Bind failed.\n");

    if (listen(server_so, MAX_PENDING) < 0)
        error("Listen failed.\n");

    puts("Waiting for incoming connections..");

    while (1)
    {
        client_length = sizeof(client);

        if ((client_so = accept(server_so, (struct sockaddr *)&client, &client_length)) < 0)
            error("Error on accept.\n");

        printf("New connection accepted %s\n", inet_ntoa(client.sin_addr));
        handle_client(client_so);
    }

    close(server_so);
    return 0;
}











