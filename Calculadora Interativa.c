#include <stdio.h>
#include <math.h>

void soma();
void subtracao();
void multiplicacao();
void divisao();
void exponenciacao();
void raiz_quadrada();
void modulo();
void bhaskara();

int main() {
    int escolha;

    do {
        printf("\n Calculadora Interativa \n");
        printf("Escolha uma operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Exponenciação\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Módulo\n");
        printf("8. Bhaskara\n");
        printf("0. Sair\n");
        printf("Opção:");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: exponenciacao(); break;
            case 6: raiz_quadrada(); break;
            case 7: modulo(); break;
            case 8: bhaskara(); break;
            case 0: 
                printf("Valeu por usar a calculadora! Até mais!\n");
                break;
            default: 
                printf("Ops! Opção inválida. Tente de novo.\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}

void soma() {
    double num1, num2;
    printf("\nVocê escolheu Soma!\n");
    printf("Primeiro número: ");
    scanf("%lf", &num1);
    printf("Segundo número: ");
    scanf("%lf", &num2);
    printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
}

void subtracao() {
    double num1, num2;
    printf("\nVocê escolheu Subtração!\n");
    printf("Primeiro número: ");
    scanf("%lf", &num1);
    printf("Segundo número: ");
    scanf("%lf", &num2);
    printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
}

void multiplicacao() {
    double num1, num2;
    printf("\nVocê escolheu Multiplicação!\n");
    printf("Primeiro número: ");
    scanf("%lf", &num1);
    printf("Segundo número: ");
    scanf("%lf", &num2);
    printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
}

void divisao() {
    double num1, num2;
    printf("\nVocê escolheu Divisão!\n");
    printf("Primeiro número: ");
    scanf("%lf", &num1);
    printf("Segundo número: ");
    scanf("%lf", &num2);
    if (num2 != 0) {
        printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
    } else {
        printf("Erro: Divisão por zero não rola!\n");
    }
}

void exponenciacao() {
    double base, expoente;
    printf("\nVocê escolheu Exponenciação!\n");
    printf("Base: ");
    scanf("%lf", &base);
    printf("Expoente: ");
    scanf("%lf", &expoente);
    printf("Resultado: %.2lf ^ %.2lf = %.2lf\n", base, expoente, pow(base, expoente));
}

void raiz_quadrada() {
    double num;
    printf("\nVocê escolheu Raiz Quadrada!\n");
    printf("Número: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Resultado: Raiz quadrada de %.2lf é %.2lf\n", num, sqrt(num));
    } else {
        printf("Erro: Não dá pra tirar raiz de número negativo.\n");
    }
}

void modulo() {
    double num1, num2;
    printf("\nVocê escolheu Módulo!\n");
    printf("Primeiro número: ");
    scanf("%lf", &num1);
    printf("Segundo número: ");
    scanf("%lf", &num2);
    if (num2 != 0) {
        printf("Resultado: %.2lf %% %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));
    } else {
        printf("Erro: Divisão por zero não dá!\n");
    }
}

void bhaskara() {
    double a, b, c;
    printf("\nVocê escolheu Bhaskara!\n");
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    if (a == 0) {
        printf("Erro: 'a' não pode ser zero.\n");
        return;
    }
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes: %.2lf e %.2lf\n", raiz1, raiz2);
    }
}
