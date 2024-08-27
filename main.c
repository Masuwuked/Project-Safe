#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void what_is_projectsafe(){
}


int main(int argc, char **argv){
	float version = 0.1;
	char release[] = "beta";
	
	if (argc < 2){
	
		printf("welcome to project safe\n");
		printf("Version: %f_%s\n", version,release);
	}
	  const char *directory = "/usr/bin";
    const char *filename = "p_safe";
    char filepath[256];

    // Construct the full path of the file
    sprintf(filepath, "%s/%s", directory, filename);

    FILE *fp;

    // Try to open the file in read-only mode
    fp = fopen(filepath, "r");
    if (fp == NULL) {
        // File does not exist, create it
        fp = fopen(filepath, "w");
        if (fp == NULL) {
            perror("Error creating file");
            return 1
        }
        printf("File created successfully: %s\n", filepath);
    } else {
        printf("Psafe is ready to use");
        fclose(fp);
    }

    return 0;
	
}
