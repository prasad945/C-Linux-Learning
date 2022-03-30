// // Client side C/C++ program to demonstrate Socket programming
// #include <stdio.h>
// #include <sys/socket.h>
// #include <arpa/inet.h>
// #include <unistd.h>
// #include <string.h>
// #define PORT 8080
   
// int main(int argc, char const *argv[])
// {
//     int sock = 0, valread;
//     struct sockaddr_in serv_addr;
//     char *hello = "Hello from client";
//     char buffer[1024] = {0};
//     if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
//     {
//         printf("\n Socket creation error \n");
//         return -1;
//     }
   
//     serv_addr.sin_family = AF_INET;
//     serv_addr.sin_port = htons(PORT);
       
//     // Convert IPv4 and IPv6 addresses from text to binary form
//     if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0) 
//     {
//         printf("\nInvalid address/ Address not supported \n");
//         return -1;
//     }
   
//     if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
//     {
//         printf("\nConnection Failed \n");
//         return -1;
//     }
//     send(sock , hello , strlen(hello) , 0 );
//     printf("Hello message sent\n");
//     valread = read( sock , buffer, 1024);
//     printf("%s\n",buffer );
//     return 0;
// }


//Client.c


#include <stdio.h>
#include <winsock.h>

// Winsock library
#pragma comment(lib, "ws2_32.lib")

#define RECEIVE_BUFFER_SIZE 32

void error(char *message)
{
    fprintf(stderr, "%s: %d", message, WSAGetLastError());
    exit(1);
    return;
}

void close(SOCKET so)
{
    closesocket(so);
    WSACleanup();
    return;
}

int main(int argc, char *argv[])
{
    SOCKET so;
    WSADATA wsa;
    char *server_ip;
    char message[200];
    char buffer[RECEIVE_BUFFER_SIZE];
    unsigned short server_port;
    int bytes_received;
    struct sockaddr_in server;

    if (argc != 3)
    {
        printf("Usage: %s <server_ip> <server_port>\n", argv[0]);
        return 1;
    }

    server_ip = argv[1];
    server_port = atoi(argv[2]);

    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
        error("Failed WSAStartup");

    printf("Winsock Initialised.\n");

    /**
     * @brief Creates a socket and return socket descriptor
     * AF_INET: IP Version 4 (Address Family)
     * SOCK_STREAM: Oriented to TCP protocol (Type)
     * 0: (Protocol)
     */
    if ((so = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
        error("Error on created the socket");

    printf("Socket created.\n");

    /**
     * @brief Setting server values
     * sin_family: Target addrees family (IP Version 4)
     * sin_addr.s_addr: Target server ip conversion to unsigned long value
     * sin_port = Value in TCP/IP network byte order (using htons)
     */
    memset(&server, 0, sizeof(server));
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(server_ip);
    server.sin_port = htons(server_port);

    /**
     * @brief Establishes a connection
     * so: Target socket descriptor.
     * (struct sockaddr *) &server: A pointer to the sockaddr structure to which the connection should be established
     * sizeof server: The lenght in bytes of the sockaddr struct.
     */
    if (connect(so, (struct sockaddr *)&server, sizeof server) < 0)
        error("Failed to connect");

    printf("Connected to %s:%d\n", server_ip, server_port);

    while (strcmp(message, "QUIT") != 0)
    {
        if ((bytes_received = recv(so, buffer, RECEIVE_BUFFER_SIZE, 0)) == SOCKET_ERROR)
            error("Failed on receive"); 

        buffer[bytes_received] = '\0';
        printf("[Server]: %s", buffer);

        scanf("%s", message);
        printf("[You]: %s\n", message);
        send(so, message, strlen(message) + 1, 0);
    }

    closesocket(so);
    WSACleanup();
    return 0;
}


