#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* my_memcpy(void *dst, int c, size_t length);

int main(int argc, char **argv){

	char *name = malloc(100);
	size_t length = 10;

	strcpy(name, "panos\x00");
	printf("Name is at %p and has the value %s\n", name, name, name);
	//memset(name, 0x61, length);
	my_memset(name, 0x61, length);
	puts("After my_memset...");
	printf("Name is at %p and has the value %s\n", name, name, name);

	return 0;
}
