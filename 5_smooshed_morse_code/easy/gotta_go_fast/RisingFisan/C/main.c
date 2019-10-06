#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char** read_input() {
}

int main() {
    char* morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    char line[500];
    fgets(line,500,stdin);
    line[strcspn(line,"\n")] = '\0';
    char sep[2] = " ";
    char* word = strtok(line, sep);
    while(word != NULL) {
        printf("\"%s\" => \"", word);
        for(int i = 0; word[i]; i++) {
            printf("%s",morse[tolower(word[i]) - 97]);
        }
        printf("\"\n");
        word = strtok(NULL, sep);
    }
    return 0;
}