#include <iostream>
#include <string>

using namespace std;
#include "utils/xyAes.h"
#include "utils/xyMd5.h"
#include "utils/xyXor.h"
#include "utils/base64.h"
#include "utils/shield.h"


int main() {
    unsigned char in[128] = {
            0x00, 0x00, 0x00, 0x01, 0xec, 0xfa, 0xaf, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07,
            0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x10, 0x36, 0x37, 0x33, 0x30, 0x31, 0x35, 0x37, 0x65,
            0x65, 0x30, 0x64, 0x65, 0x37, 0x35, 0x61, 0x2d, 0x32, 0x37, 0x33, 0x61, 0x2d, 0x33, 0x61, 0x39,
            0x64, 0x2d, 0x38, 0x32, 0x38, 0x66, 0x2d, 0x64, 0x63, 0x35, 0x65, 0x31, 0x36, 0x33, 0x33, 0x64,
            0x38, 0x30, 0x32, 0xa7, 0xbc, 0xb0, 0x2f, 0x2a, 0xd6, 0xf0, 0xd1, 0xcd, 0x52, 0x72, 0xa6, 0x05,
            0x01, 0x32, 0xf7
    };
    char res[128] = {0};
    shield_decrypt(in,res);
    printf("%s\r\n",res);



//    xyAes xy;
//    string strMain = "JPUl6G8k4MGEwml9FmGV1qV8UScx3IQkecsFkyLORcNmYJnHbONSjsgi2ZaSNhRGvm6FY7iYeaZpB1frFhqwlWzVgtUcByKgLNsMLFPYi7HDdhf23YR573g8ggnNwV5e";
//    unsigned char *decode = new unsigned char [strMain.length() / 4 * 3];
//    base64_decode(strMain.c_str(),strMain.length(),decode);
//    unsigned char out[256] = {0};
//    xy.testAesDec(reinterpret_cast<char *>(decode), reinterpret_cast<char *>(out));
//    delete []decode;
//
//    xyMd5 md5;
//    char *url = "/api/sns/v1/user/teenager/statusdeviceId=70c59259-7e91-3e8b-b8f2-35855a8565b6&identifier_flag=0&tz=Asia%2FShanghai&fid=161856398010307b510d8c42675f8f332860bd48186c&app_id=ECFAAF01&device_fingerprint1=2021040810451492d7a829c8e6b091209359dfd80365a00173354acd00c486&uis=light&launch_id=1620054097&project_id=ECFAAF&device_fingerprint=2021040810451492d7a829c8e6b091209359dfd80365a00173354acd00c486&versionName=6.87.0.1&platform=android&sid=session.1619581616447127665217&t=1620055467&build=6870213&x_trace_page_current=explore_feed&lang=zh-Hans&channel=Liteplatform=android&build=6870213&deviceId=70c59259-7e91-3e8b-b8f2-35855a8565b6";
//    char md5Result[16] = {0};
//    md5.GenrateResult(reinterpret_cast<unsigned char *>(url),md5Result);
//
//    xyXor xyshield;
//    memcpy(in + 67,md5Result,16);
//
//    unsigned char base[128] = {00 ,00 ,00 ,01 ,00 ,00 ,00 ,01 ,00 ,00 ,00 ,0x53 ,00 ,00 ,00 ,0x53};
//    xyshield.GenrateResult(in,base + 16);

//    char res[128] = {0};
//    base64_encode(base,0x63, res);
//    printf("%s\r\n",res);

    return 0;

}
