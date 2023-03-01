#pragma oncee

//#define size_t unsigned int
//#define NULL 0

void *memchr(const void *str, int c, size_t n);

int memcmp(const void *str1, const void *str2, size_t n);

void *memcpy(void *dest, const void * src, size_t n);


void *memmove(void *str1, const void *str2, size_t n);

void *memset(void *str, int c, size_t n);


char *strcat(char *dest, const char *src);

char *strncat(char *dest, const char *src, size_t n);


char *strchr(const char *str, int c);

int strcmp(const char *str1, const char *str2);

int strncmp(const char *str1, const char *str2, size_t n);

int strcoll(const char *str1, const char *str2);

char *strcpy(char *dest, const char *src);

char *strncpy(char *dest, const char *src, size_t n);


size_t strcspn(const char *str1, const char *str2);

char *strerror(int errnum);
