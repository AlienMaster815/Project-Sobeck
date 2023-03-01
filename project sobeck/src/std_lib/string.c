//...........Using -freestanding........



#include <stddef.h>
#include <stdint.h>
#include "string.h"
#include "errno.h"

void *memchr(const void *str, int c, size_t n){
    int* strPointer = (int*)str; //set up for byte by byte scan
    for(size_t i = 0; i < n; i++){
        if(strPointer[i] == c) return strPointer;//if the charecter is found return the address
    }//scann as many bytes as as n
    return NULL;//if not return NULL
}

int memcmp(const void *s1, const void *s2, size_t n){
    int s1int ,s2int ,differencemem; //define values to be compared allong with return value

    int* s1pointer = (int*)s1;// turn the s1 address to a pointer
    int* s2pointer = (int*)s2; // turn the s2 address to a pointer

        for(size_t i = 0; i < n; i++){
           s1int = s1int + (int)s1pointer[i];//add the integer values of s1int
           s2int = s2int + (int)s2pointer[i];//add the integer values of s2int
        }
    differencemem = s2int - s1int; //compare values
    return differencemem; //return the difference
}

void *memcpy(void *dest, const void * src, size_t n){
    int* destPointer = (int*)dest;
    int* srcPointer = (int*)src;
    for(size_t i = 0;i < n; i++){
       
        destPointer[i] = srcPointer[i];
    }
    return destPointer;
}

void *memmove(void *str1, const void *str2, size_t n){
    int* str1Pointer = (int*)str1;
    int* str2Pointer = (int*)str2;
    for(size_t i = 0; i < n; i++){
        str1Pointer[i] = str2Pointer[i];
        str2Pointer[i] = 0;
    }
    return str1Pointer;
}
void *memset(void *str, int c, size_t n){
    int* strPointer = (int*)str;
    for(size_t i = 0; i < n; i++){
        strPointer[i] = c;
    }
    return strPointer;
}



char *strcat(char *dest, const char *src){

    char* destPointer = (char*)dest;
    char* srcPointer = (char*)src;
    size_t i = 0;
    for(i; 1; i++){
        char destChar = (char)destPointer[i];
        if(destChar == '\0') break;
    }
    for(size_t d = 0; 1; d++){
        char srcChar = (char)srcPointer[d];
        destPointer[i] = srcChar;
        i++;
        if(srcChar == '\0') break;
    }
    return dest;
}

char *strncat(char *dest, const char *src, size_t n){

    char* destPointer = (char*)dest;
    char* srcPointer = (char*)src;
    size_t i = 0;
    for(i; 1; i++){
        char destChar = (char)destPointer[i];
        if(destChar == '\0') break;
    }
    for(size_t d = 0; d < n; d++){
        char srcChar = (char)srcPointer[d];
        destPointer[i] = srcChar;
        i++;
    }
    return dest;
}

char *strchr(const char *str, int c)
{
    char* strPointer = (char*)str;
    char cChar = (char)c;
    for(size_t i; 1; i++){
        if(strPointer[i] == '\0')return 0;
        else if(strPointer[i] = cChar){
            char* cCharPointer = &strPointer[i];
            return cCharPointer;
        }
        else continue;
    }
}

int strcmp(const char *str1, const char *str2)
{

    char* str1charPointer = (char*) str1;

    char* str2charPointer = (char*) str2;

    int str1int ,str2int ,differencestr;//define values to be compared allong with return value
    int* str1pointer = (int* )str1; // turn the str1 address to a pointer
    int* str2pointer = (int* )str2; // turn the str2 address to a pointer

    size_t a = 0,b = 0;
    for(size_t i = 0; 1; i++){ //loop for size
        if(str1charPointer[a] != '\0'){
            a++;
        char str1char = (char)str1charPointer[a];
        str1int = str1int + (int)str1pointer[a]; //add the integer values of str1int
        }
        else continue;
        if(str2charPointer[b] != '\0'){
        b++;
        str2int = str2int + (int)str2pointer[b]; //add the integer values of str2int
        }
        else continue;

        if((str1charPointer && str2charPointer) == '\0'){

            differencestr = str2int - str1int; //compare values
            return differencestr; //return the difference
        }
    }
}

int strncmp(const char *str1, const char *str2, size_t n){

    //std c library compliant alternitive

    int str1int ,str2int ,differencestr;//define values to be compared allong with return value
    int* str1pointer = (int* )str1; // turn the str1 address to a pointer
    int* str2pointer = (int* )str2; // turn the str2 address to a pointer


    for(size_t i = 0; i < n; i++){ //loop for size
        str1int = str1int + (int)str1pointer[i]; //add the integer values of str1int
        str2int = str2int + (int)str2pointer[i]; //add the integer values of str2int
    }

    differencestr = str2int - str1int; //compare values
    return differencestr; //return the difference
}


int strcoll(const char *str1, const char *str2){
    int *str1data = (int *)str1;
    int *str2data = (int *)str2;
    int ret = str2data - str1data;
    return ret;
}



char *strcpy(char *dest, const char *src){
    char* destPointer = (char*)dest;
    char* srcPointer = (char*)src;
    for(size_t i = 0; 1;i++){
     if(srcPointer[i] == '\0')break;
     else destPointer[i] == srcPointer[i];
    }
    return destPointer;
}



char *strncpy(char *dest, const char *src, size_t n){
    char* destPointer = (char*)dest;
    char* srcPointer = (char*)src;
    for(size_t i = 0;i < n;i++){
     if(srcPointer[i] == '\0')break;
     else destPointer[i] == srcPointer[i];
    }
    return destPointer;
}


size_t strcspn(const char *str1, const char *str2){
    char* str1Pointer = (char*)str1;
    char* str2Pointer = (char*)str2;
    int bar;
    uint8_t a = 0;
    for(size_t i = 0; 1 ; i++){
        for(int foo = 0; 1; foo++){
            if(str2Pointer[foo] == '\0') break;
            else if(str1Pointer[i] == str2Pointer[foo]) a++;
            else continue;
        }
        if(str1Pointer[i] == '\0'){
            bar = a - i;
            break;
        }
        else continue;
    }
}




char *strerror(int errnum){
    return deployERRvariable(errnum);
}


size_t strlen(const char *str){
    char* strPointer = (char*)str;
    int i;
    for(i = 0; 1; i++){
        if(strPointer[i] == '\0')return (i - 1);
    }
}


char *strpbrk(const char *str1, const char *str2){
    char* str1Pointer = (char*)str1;
    char* str2Pointer = (char*)str2;
    int bar;

    for(size_t i = 0; 1 ; i++){
        for(int foo = 0; 1; foo++){
            if(str2Pointer[foo] == '\0')break;
            else if(str1Pointer[i] == str2Pointer[foo]) return &str2Pointer[foo];
            else continue;
        }
        if(str1Pointer[i] == '\0') return NULL;

        else continue;

    }
}

char *strrchr(const char *str, int c){
    char* strPointer = (char*)str;
    uint8_t i = 0;
    for(i; 1; i++) if(strPointer[i] == '\0') break;

    for(i; 1; i--)if(strPointer[i] == c) return &strPointer[i];
}

size_t strspn(const char *str1, const char *str2){
    char* str1Pointer = (char*)str1;
    char* str2Pointer = (char*)str2;
    size_t a;
    uint8_t foo;
    for(uint8_t i = 0;1;i++){
        if(str2Pointer[foo] == '\0') break;
        else{
            for(foo; 1; foo++){
                if(str2Pointer[foo] == str2Pointer[i]) a++;
                else if(str2Pointer[foo] == '\0')break;
                else continue;
            }
        }
    }
    return a;
}


char *strstr(const char *haystack, const char *needle){
    char* haystackPointer = (char*)haystack;
    char* needlePointer = (char*)needle;
    int a;
    for(int i; 1; i++){
        if(haystackPointer[i] == needlePointer[i]){
            a = i;
            for(a;1;a++)
            {
                if(needlePointer[a] == haystackPointer[a]) continue;
                else if(needlePointer[a] == '\0') return &haystackPointer[i];
                else break;
            }

        }
        else if(haystackPointer[i] == '\0')return NULL;
        else continue;
    }
}


uint8_t tokennum;
char* token[100];
uint8_t i;
char *strtok(char *str, const char *delim){
    tokennum++;
    char* strPointer = (char*)str;
    char* delimPointer = (char*)delim;
    if(str != NULL){
        if(tokennum != 0)tokennum = 0;
        if(i != 0)i = 0;
            for(uint8_t i = 0;1;i++){
                if(strPointer[i] == delimPointer[i]){
                    token[tokennum] == &strPointer[i];

                }
                else if(strPointer[i] == '\0') break;
                else continue;
            }
            return token[0];
    }
    if(str == NULL){
        i = i + 1;
        return token[i];
    }
}

size_t strxfrm(char *dest, const char *src, size_t n){
    char* destPointer = (char*)dest;
    char* srcPointer = (char*)src;
    uint8_t i;
    for(i = 0; i < n ; i++){
        destPointer[i] = srcPointer[i];
        if(srcPointer[i] == '\0'){
            i = i - 1;
            return i;
        }
        else if(i == n) return i;
    }
}









