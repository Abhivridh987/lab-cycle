#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[30][30]; 
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%29s", name[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) { 
                char temp[30];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Sorted names (alphabetically):\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}


