#include "gnb.h"


void serialize(char* buffer, pkg* package, int typeOfConversion){
    if (typeOfConversion == 0){
        buffer = buffer + 4; // avança 4 bytes o buffer
        strcpy(buffer, package->data); // copia os dados para o buffer
        buffer = buffer - 4; // retorna o buffer para a posição inicial
        b[0] = package->type;
        b[1] = package->seqnum;
        b[2] = package->checksum
    }
    else if (typeOfConversion == 1){
        p->numSeq = b[0];
        p->ack = b[1];
    }
}