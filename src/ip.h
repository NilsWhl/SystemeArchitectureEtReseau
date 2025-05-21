// Definition d'une adresse IP
#include <stdint.h> // Pour int8_t
#include <stdio.h>  // Pour printf
#include <stdbool.h> // Pour bool

typedef int8_t ip[4];

// Affiche l'adresse IP (format : a.b.c.d)
void afficherIP(ip adr) {
    printf("%d.%d.%d.%d", adr[0], adr[1], adr[2], adr[3]);
}

// Affichage sans possibilité de modification grâce à const
ip lireIP(const char* ligne);

// Retourne une chaîne (char*) représentant l'adresse IP (à libérer par l'appelant)
char* ecrireIP(ip adr);

// Compare deux adresses IP, retourne true si elles sont identiques
bool equals(ip a, ip b);