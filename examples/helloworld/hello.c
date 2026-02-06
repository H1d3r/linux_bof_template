#include "../../beacon.h"

void go(char* args, int alen) {
   datap parser;
   char* name;
   
   BeaconDataParse(&parser, args, alen);
   name = BeaconDataExtract(&parser, NULL);
   
   BeaconPrintf(CALLBACK_OUTPUT, "Hello World: %s", name);
}
