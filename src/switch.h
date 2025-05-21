#ifndef SWITCH_H
#define SWITCH_H

#include "mac.h" // Assuming mac is defined in mac.h
#include <stdint.h> // For int8_t
#include <stdbool.h> // For bool type
#include <stddef.h>  // For size_t if needed

typedef struct tabCommutation {
    int index;
    mac adrMac;
    int port;
} tabCommutation;

typedef struct switch_t {
    mac adrMac;
    int nbPort;
    int8_t priorite;
    tabCommutation tabCommu;
} switch_t;

// Function prototypes (add return types and argument names)
void creerConnexion(mac adrMac, int port);
void supprimerConnexion(int port);
void supprimerConnexion(mac adrMac);

bool macExisteDansTable(mac adrMac); // Assuming you want a boolean return
bool portLibre(int port);           // Assuming you want a boolean return

void envoyerBPDU(void* BPDU, int port); // Assuming BPDU is a type, replace void* with actual type if known
void resoudreBPDU();

#endif // SWITCH_H