#ifndef HEADER_FILE
#define HEADER_FILE

char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
void print_hex_line(char *b, int start, int size);
void print_ascii_line(char *b, int start, int size);

#endif
