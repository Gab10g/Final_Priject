//PROGRAMA DESARROLLADO POR SEBASTIAN NAVARRETE, STIVEN GUALTEROS Y GABRIEL GARCIA.

#include <stdio.h> //librería estandar
#include <sys/socket.h> // para socket(), connect(), sendto() y recvfrom()
#include <arpa/inet.h> // para sockaddr_in i inet_addr()
#include <stdlib.h> // para atoi()
#include <string.h> // para memset()
#include <unistd.h> // para close()

#define ECHOMAX 225 // longitud maxima para el string


int main(int argc, char *argv[])
{
    int sock;
    struct sockaddr_in echoServAddr; // eco de la direccion del servidor
    struct sockaddr_in fromAddr; // funte de direccion del eco
    unsigned short echoServPort;
    unsigned int fromSize;
    char *servIP;
    char *echoString;
    char echoBuffer[ECHOMAX+1]; // tamaño del buffer
    int echoStringLen;
    int respStringLen;

    if ((argc < 3) || (argc > 4)) // prueba el numero correcto de argumentos
    {
        fprintf(stderr, "usar :%s <Server IP> <Echo Word> [<Echo Port>]\n", argv[0]);
        exit(1);
    }
    servIP = argv[1];
    echoString = argv[2];
    if ((echoStringLen = strlen(echoString)) > ECHOMAX)
        printf("Echo word too long");


    if (argc == 4)
        echoServPort = atoi(argv[3]); // el argumento 3 es el puerto
    else
        echoServPort = 7; // por defecto va al puerto 7

    /* creacion de un datagram/UDP socket*/
    if ((sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0)
        printf("socket() failed");

    /* estructura para la direccion del servidor*/
    memset(&echoServAddr, 0, sizeof(echoServAddr));
    echoServAddr.sin_family = AF_INET; // Internet addr family
    echoServAddr.sin_addr.s_addr = inet_addr(servIP); // direccion IP del servidor
    echoServAddr.sin_port = htons(echoServPort); //puerto del servidor

    /* Enviar el string a el servidor */
    if (sendto(sock , echoString, echoStringLen, 0, (struct sockaddr *) &echoServAddr, sizeof(echoServAddr)) != echoStringLen)
        printf("sendto() sent a different number of bytes than expected");


    /* Recv respuesta*/
    fromSize = sizeof(fromAddr);
    if ((respStringLen = recvfrom(sock, echoBuffer, ECHOMAX, 0, (struct sockaddr *) &fromAddr, &fromSize)) != echoStringLen)
          //printf("recvfrom() failed");

    if (echoServAddr.sin_addr.s_addr != fromAddr.sin_addr.s_addr)
    {
          fprintf(stderr, "Error: received a packet from unknown source.\n");
          exit(1);
    }

    /* null-terminate the received data*/
    echoBuffer[respStringLen] = '\0';
    printf("Received: %s\n", echoBuffer);

    close(sock);
    //*************************************************************************************************************************
    /*proceso para determinar los numeros*/
    char *dir_1, *dir_2, *dir_3, *dir_4, *dir_5, *dir_6, *dir_7;
    double carnet, velocidad, frecuencia, voltaje, temperatura, tiempo;

    dir_1 = strchr(echoBuffer, ':');
    dir_2 = strchr((dir_1+1), ':');
    dir_3 = strchr((dir_2+1), ':');
    dir_4 = strchr((dir_3+1), ':');
    dir_5 = strchr((dir_4+1), ':');
    dir_6 = strchr((dir_5+1), ':');
    dir_7 = strchr((dir_6+1), ':'); // direcciones para determinar los numeros

    carnet = atoi(dir_2 + 2);
    velocidad = atof(dir_3 + 1);//
    frecuencia = atof(dir_4 + 1);
    voltaje = atof(dir_5 + 1);
    temperatura = atof(dir_6 + 1);
    tiempo = atoi(dir_7 + 1);

    printf("El numero de carnet es: %.0f\n", carnet);
    printf("La velocidad es: %f\n", velocidad);
    printf("La frecuencia es: %f\n", frecuencia);
    printf("El voltaje es: %f\n", voltaje);
    printf("La temperatura es: %f\n", temperatura);
    printf("El tiempo es: %.0f\n", tiempo);
    //**************************************************************************
    /*escritura de datos en un archivo .txt*/
    FILE *archivo = fopen("datos.txt", "w"); // w para escribir o sobrescribir el archivo
    if(archivo == NULL)
        perror("Error en la escritura del archivo\n");
    else
        fprintf(archivo, "%.0f %f %f %f %f %.0f", carnet, velocidad, frecuencia, voltaje, temperatura, tiempo);

    fflush(archivo);
    fclose(archivo);
    printf("Escritura realizada. \n");

    exit(0);
}
