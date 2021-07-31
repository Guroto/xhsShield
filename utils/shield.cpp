//
// Created by Kero on 2021/7/27.
//

#include <string>

extern "C"{
    #include "shield.h"
}

#include "base64.h"
#include "xyXor.h"
using namespace std;

extern "C" {
void shield_decrypt(unsigned char* shield_data, char *res){
    xyXor xyshield;
    unsigned char base[128] = {00 ,00 ,00 ,01 ,00 ,00 ,00 ,01 ,00 ,00 ,00 ,0x53 ,00 ,00 ,00 ,0x53};
    xyshield.GenrateResult(shield_data, base + 16);
    base64_encode(base,0x63, res);
}
}
