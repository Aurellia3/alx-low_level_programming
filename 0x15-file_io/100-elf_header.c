#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e-ident);
void print_version(unsigned char *e-ident);
void print_abi(unsigned char *e-ident);
void print_osabi(unsigned char *e-ident);
void print_type(unsigned int e_type, unsigned char *e-ident);
void print_entry(unsigned long int e_entry, unsigned char *e-ident);
void close_elf(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
