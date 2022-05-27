#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "include/utils.h"

int main(int argc, char *argv[]){
    //Bonus
    srand(time(NULL));    
    encode_file_poly("./files/perso/source.png", "./files/perso/encoded");
    decode_file_poly("./files/perso/encoded", "./files/perso/decoded.png");
   return 0;
}