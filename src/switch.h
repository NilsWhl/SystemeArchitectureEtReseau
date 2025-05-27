#ifndef SWITCH_H
#define SWITCH_H

#include "mac.h"
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct tabCommutation {
    int index;
    mac adrMac;
    int port;
} tabCommutation;

typedef struct switch_t {
    mac adrMac;
    int nbPort;
    int8_t priorite;
    tabCommutation* tabCommu; // pointer to table of commutations
    int tailleTabCommu;       // number of entries in the table
} switch_t;

// Function prototypes
void creerConnexion(mac adrMac, int port);
void supprimerConnexion_parPort(int port); // renamed to avoid duplicate
void supprimerConnexion_parMac(mac adrMac); // renamed to avoid duplicate

bool macExisteDansTable(mac adrMac);
bool portLibre(int port);

void envoyerBPDU(void* BPDU, int port);
void resoudreBPDU();

#endif // SWITCH_H