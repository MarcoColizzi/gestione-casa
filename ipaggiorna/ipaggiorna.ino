/*
   Progetto Gestione Casa, inizio con aggirnamento IP del router.
   Mi appoggio su un DB.
    created Ottobre 2017
  by  Marco Colizzi
  Contact: marco.colizzi@gmail.com
  https://www.linkedin.com/in/marco-colizzi-b5800246/
*/


long Conta; // Questa variabile determina il tempo di ripetizione del controllo dell'IP address. 7000 corrisponde a circa 14 minuti.
bool inizio = true; // questa variabile serve per discriminare la prima interrogazione all'accensione del sistema contemporaneamente
// al modem/ADSL, quindi permette di impostare un tempo diverso per la prima verifica dando il tempo al modem di allinearsi.
const int Inizio = 3500;  // Ipotizzo circa 3 minuti per la prima interrogazione al server esterno.


const String Percorso = "/mnt/sda1/arduino/www"; // percorso fisico del file http da lanciare.
const String nomefile = "ridiriziona.php";
// old const String locale =  "http://localhost/sd/";
String locale =  "http://localhost/sd/";
const String url = locale + nomefile;
#include <Bridge.h>
#include <HttpClient.h>

#include <Dhcp.h>
#include <Dns.h>
#include <Ethernet.h>
#include <EthernetClient.h>
#include <EthernetServer.h>
#include <EthernetUdp.h>


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
© 2017 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
API
Training
Shop
Blog
