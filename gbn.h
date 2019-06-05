#ifndef GBN_H
#define GBN_H	

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/time.h>
#include <arpa/inet.h> 
#include <errno.h>
#include <unistd.h>

typedef struct {
	uint8_t  type;            // Tipo do pacote
	uint8_t  seqnum;          // Numero de sequencia do pacote
    uint16_t checksum;        // Soma de verificação
    uint8_t* data;    // Ponteiro para os dados
}pkg;

void serialize(char* buffer, pkg* package, int typeOfConversion); // função de serialização do pacote
uint16_t checksum (pkg* pacote);   // Soma de verificação
