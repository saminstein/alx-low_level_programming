#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void check_for_elf(unsigned char *e_ident);
void display_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void close_elf(int elf);


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
	int i = 0;

	fprintf(stdout, "Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		fprintf(stdout, "%02x%s", e_ident[i],
				(i == EI_NIDENT - 1) ? "\n" : " ");
	}
}


/**
 * print_class - print the class of an Elf header
 * @e_ident: A pointer to an array containing the
 * Elf class
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the data of an Elf header
 * @e_ident: A pointer to an array containing the
 * Elf data
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's compliment, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's compliment, Big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 *  print_version - prints the version of an e
 *  lf header
 *  @e_ident: A pointer to an array containing
 *  the Elf version
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_abi - prints the ABI version of an el
 * f header
 * @e_ident: a pointer to an array containing
 * the elf ABI version
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}


/**
 * print_osabi - prints the os/abi version
 * @e_ident: a pointer to an array containing
 * the elf version
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_type - prints the type of an Elf header
 * @e_type: The elf type
 * @e_ident: a pointer to an array containing the 
 * elf class
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}


/**
 * close_elf - closes an elf header
 * @elf: file descriptor of the elf file
 * Description: if the file cannot be closed, exit
 * with code 98
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf), exit(98);
	}
}


/**
 * main - displays the information contained in th
 * e elf header at the start of an elf file
 * @argc: number of arguments passed to the progra
 * m
 * @argv: array of pointers to the argument
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_for_elf(header->e_ident);
	printf("ELF Header:\n");
	display_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_abi(header->e_ident);
	print_osabi(header->e_ident);
	print_type(header->e_type, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
