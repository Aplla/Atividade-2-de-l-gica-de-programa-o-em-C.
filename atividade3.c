#include <stdio.h>

int main (){
    int user_input, inicial_input;

    printf ("Digite um número para ver a tabuada do mesmo:");
    scanf ("%d", &user_input);
    inicial_input = user_input;

    while (user_input <= inicial_input * 10)
        {
            printf("%d ", user_input);
            user_input += inicial_input;

        }
    
}