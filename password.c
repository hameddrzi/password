#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_C 20


int main() {

    char password[MAX_C+ 1];
    scanf("%20s", password);

 ; ++i) {
        if(!(isalpha(password[i])))
            esiste_cifre = true;
    }

    bool  due_maiuscole = false ;  //P3
    for (size_t i = 0; password[i] && !due_maiuscole ; ++i) {
        if(2 > (isupper(password[i])))
            due_maiuscole = true;
    }

    bool cifre_consentive = false;
    if(password[0] != '\0'){
        for (size_t i = 0; password[i] && !cifre_consentive ; ++i) {
            if(isdigit(password[i]) && isdigit(password[i -1]))
                cifre_consentive = true;
        }
    }
    size_t len = 0;
    while (password[len]){
        len++;
    }
    bool ultimi_cifre = (len >= 2) &&
            ispunct(password[len-1]) &&
            ispunct(password[len -2]);

}
