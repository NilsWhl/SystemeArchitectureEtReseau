#include "ip.h"
#include "mac.h"
#include "reseau.h"
#include "station.h"
#include "switch.h"
#include <string.h>
#include <stdio.h>

int main() {
    reseau monReseau;
    monReseau.nombreMachines = 0;

    // création d'une station
    station maStation;
    mac maStationMac = {0x00, 0x1A, 0x2B, 0x3C, 0x4D, 0x5E};
    ip maStationIp = {192,168, 1, 1};

    memcpy(maStation.adrMac, maStationMac, sizeof(mac));
    memcpy(maStation.adrIp, maStationIp, sizeof(ip));

    // Préparer un element_tabMachine pour la station
    element_tabMachine elem;
    elem.type = TYPE_STATION;
    elem.donnee.station = maStation;

    // Ajout de la station au réseau
    monReseau.tabSommet[monReseau.nombreMachines] = elem;
    monReseau.nombreMachines++;

    printf("Nombre de machines dans le réseau : %d\n", monReseau.nombreMachines);
    return 0;
}