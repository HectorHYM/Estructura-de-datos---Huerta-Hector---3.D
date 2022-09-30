#include <stdio.h>

float exponencia(int coef, int exp){
    int res;
    if(exp == 0){
        res = 1;
    }else if(exp > 0){
        res=coef * exponencia(coef, exp -1);
    }else if (exp < 0)
    {
        res = 1 / coef * exponencia(coef, exp + 1);
    }
    return res;
}

int main(){
    int coef = 0, exp = 0;
    int res;

    printf("Ingrese el coeficiente: ");
    scanf("%d", &coef);
     printf("Ingrese el exponente: ");
    scanf("%d", &exp);

    res = exponencia(coef, exp);

    printf("Resultado = %d \n", res);
    return 1;
}