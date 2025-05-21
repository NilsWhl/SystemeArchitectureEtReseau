#include "ip.h"
#include "mac.h"
#include "reseau.h"
#include "station.h"
#include "switch.h"

int main() {
    // Exemple d'utu<lisation des structures et fonctions
    struct reseau monReseau;
    monReseau.nombreMachines = 0;

    // création d'une station
    struct station maStation;
    // Definir l'adresse MAC et IP de la station
    mac maStationMac = {0x00, 0x1A, 0x2B, 0x3C, 0x4D, 0x5E}; // adresse au pif
    ip maStationIp = {192,168, 1, 1}; // adresse au pif

    maStation.adrMac = maStationMac;
    maStation.adrIp = maStationIp;
    
    // Ajout de la station au réseau
    //monReseau.tabSommet
}