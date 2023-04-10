#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void check_for_elf(unsigned char *e_ident);
void display_magic(unsigned char *e_ident);


/**
 * check_for_elf - check if a file is an elf file
 * @e_ident: a pointer to an unsigned array
 * Description: if not elf file, exit with status code 98
 */
void check_for_elf(unsigned char *e_ident)
{
	unsigned char elf_magic[] = {0x7f, 'E', 'L', 'F'};

	if (memcmp(e_ident, elf_magic, sizeof(elf_magic)) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}



/**
 * display_magic - prints the magic numbers of an elf header
 * @e_ident: a pointer to an unsigned array
 * Description: magic numbers should be separated by spaces
 */
void display_magic(unsigned char *e_ident)
{
	fprintf(stdout, "Magic:   ");

	for (int i = 0; i < EI_NIDENT; i++)
	{
		fprintf(stdout, "%02x%s", e_ident[i],
				(i == EI_NIDENT - 1) ? "\n" : " ");
	}
}
