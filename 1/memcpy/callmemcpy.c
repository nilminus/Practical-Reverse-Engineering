#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_memcpy(void *dst, const void *src, size_t n);

int main(int argc, char **argv){

		char *name = malloc(100);
		char *newname = malloc(100);

		strcpy(name, "panos\x00");
		strcpy(newname, "pantelis\x00");
		printf("Name is at %p and has the value %s\n", name, name, name);
		// memcpy(name, newname, strlen(newname));
		my_memcpy(name, newname, strlen(newname));
		puts("After my_memcpy...");
		printf("Name is at %p and has the value %s\n", name, name, name);

    return 0;
}
