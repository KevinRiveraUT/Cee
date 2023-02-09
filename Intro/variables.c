#include <stdlib.h>
#include <stdio.h>

int main(){
    char characterName [] = "John";
    int characterAge = 35;

    printf("There was once a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 30;
    printf("He really liked the name %s.\n", characterName);
    printf("But did not like being %d.\n", characterAge);
}