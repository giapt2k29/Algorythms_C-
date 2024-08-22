#include<windows.h>
#include<stdio.h>

int main() {
    HANDLE hDisk;
    BYTE Buf[512];
    DWORD FAT[128];
    WORD FATAddr;   DWORD byteread, i;
    hDisk = CreateFile("\\\\.\\C:", GENERIC_READ,
                    FILE_SHARE_READ | FILE_SHARE_WRITE,
                    NULL, OPEN_EXISTING, 0, NULL);
    ReadFile(hDisk, Buf, 512, &byteread, NULL);
    memcpy(&FATAddr, &Buf[14], 2);
    SetFilePointer(hDisk, FATAddr * 512, NULL, FILE_BEGIN);
    ReadFile(hDisk, FAT, 512, &byteread, NULL);
    for(i = 0; i < 128; i++) {
        printf(" %08X ", FAT[i]);
    }
    CloseHandle(hDisk);
    return 0;
}