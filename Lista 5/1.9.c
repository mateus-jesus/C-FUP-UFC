#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a=0, man1=0,man2=0, men1=0, men2= 0, med=0, ni=0;

    printf("Quantidade de alunos:");
    scanf("%d", &a);
    printf("\nQuantas notas? ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("Nota %d: ", i);
        scanf("%d", &ni);
        med = med + ni;
        if(ni > man1){
            man2 = man1;
            man1 = ni;
        }
        if(ni > man2 && ni != man1){
            man2 = ni;
        }
        if(men1> ni){
            men2 = men1;
            men1 = ni;
        }
        if(ni < men2 && ni != men1){
            men2 = ni;
        }
    }
        printf("\nAs maiores notas foram: %d e %d", man1, man2);
        printf("\nAs menores notas foram: %d e %d", men1, men2);
        printf("\nA media total foi: %d", (med/n));
    return 0;
}
