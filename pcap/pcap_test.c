//
// Created by Administrator on 2021/5/7.
//
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int test_pcap_file_read() {
    unsigned char pcap_file_header[24] = {0};/*file header 24 bytes*/
    unsigned char pkt_hdr[16] = {0};/*pkt_hdr 16 bytes*/
    unsigned char udp_pkt_data[4096] = {0};/*content*/
    int len = 0;
    int pkt_cnt = 0;
    bool isLittleEndian = false;/*big endian*/

    FILE *pInFile = fopen("C:\\Users\\Administrator\\Desktop\\资料\\n4-pfcpsessionest.pcap", "r");/*open pcap file*/
    if (NULL == pInFile) {
        printf("Fail to open file!\n");
        exit(0);
    }
    if (1 != fread(pcap_file_header, 24, 1, pInFile))/*read pcap file header*/
    {
        fclose(pInFile);
    }
    /*交换顺序读取*/
    if ((0xD4 == pcap_file_header[0]) && (0xC3 == pcap_file_header[1]) && (0xB2 == pcap_file_header[2]) &&
        (0xA1 == pcap_file_header[3])) {
        isLittleEndian = true;
    }

    while (1) {
        if (1 != fread(pkt_hdr, 16, 1, pInFile))/*read a pkt_hdr 16 bytes*/
        {
            break;
        }

        if (isLittleEndian)/*get the pktcontent's length in the file following the pkt_hdr*/
        {
            len = (int)((pkt_hdr[11]) << 24) + (int)((pkt_hdr[10]) << 16) + (int)((pkt_hdr[9]) << 8) + (int)((pkt_hdr[8]));
        } else {
            len = (int)((pkt_hdr[8]) << 24) + (int)((pkt_hdr[9]) << 16) + (int)((pkt_hdr[10]) << 8) + (int)(pkt_hdr[11]);
        }
        /*read the length bytes from file, this is the pktcontent*/
        if (1 != fread(udp_pkt_data, len, 1, pInFile)) {
            break;
        }
        pkt_cnt++;
    }
//    printf("Total %d packets found\n", pkt_cnt);
    return pkt_cnt;
    fclose(pInFile);
}

int main() {
    printf("%d\n", test_pcap_file_read());
    return 0;
}
