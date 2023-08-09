#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

#define ELF_MAGIC "\x7f\x45\x4c\x46"

typedef struct {
    // ... (Elf64_Ehdr struct definition)
} Elf64_Ehdr;

void print_error(const char *message);
void print_elf_header_info(const Elf64_Ehdr *header);

#endif /* ELF_HEADER_H */
