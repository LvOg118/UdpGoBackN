#include "gnb.h"


void serialize(char* buffer, pkg* package, int typeOfConversion){
    if (package->type == DATA){
    	if (typeOfConversion == 0){
        	buffer = buffer + 4; // avança 4 bytes o buffer
        	strcpy(buffer, package->data); // copia os dados para o buffer
        	buffer = buffer - 4; // retorna o buffer para a posição inicial
        	buffer[0] = package->type;
        	buffer[1] = package->seqnum;
        	buffer[2] = package->checksum;
    	}
    	else if (typeOfConversion == 1){
        	package->type = buffer[0];
        	package->seqnum = buffer[1];
        	package->checksum = buffer[2]
    	}
    }
    else if (package->type == ACK){
    	if (t == 0){
        	buffer[0] = package->type;
        	buffer[1] = package->seqnum;
        	buffer[2] = package->checksum;
    	}
    	if (t == 1){
        	package->type = buffer[0];
        	package->seqnum = buffer[1];
        	package->checksum = buffer[2];
        	buffer = buffer + 4;
        	strcpy(package->dados, buffer);
    	}
    }
}