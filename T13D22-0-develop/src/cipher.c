#include <stdio.h>
#include<stdlib.h>

#define MASS 100

//int menu();
int test();

int main() {
    test();
    //menu();
return 0;
}

/* int menu() {
    system("clear");
    char *file_name;
    printf("Please, enter name file => ");
    scanf("%c", &file_name);
    FILE *file = fopen(*file_name);
    if ((*file_name = fopen(file_name, "r")) == NULL) {
        printf("Error! Ошибка открытия файла");
        getchar();
        return 0;
    }
    fclose(file_name);
    getchar();
    return 0;
}*/

int test() {
    char str[MASS];
    FILE *file;
    file = fopen("new_file.txt", "r");
    if(file != NULL) {
        while(fgets(str, MASS, file)) 
        fprintf(stdout, "%s\n", str);

    } else {
        fprintf(stderr, "File canot created(((");
        return 1;
    }
    return 0;
}















