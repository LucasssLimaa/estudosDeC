/*
7 - Uma lanchonete aceita 3 formas de pagamento: cartão de crédito, cartão de débito e dinheiro. Faça um
programa, utilizando a função abaixo, para exibir o troco do cliente, dependendo da forma de pagamento,
ou a mensagem “Não há troco”. Inicialmente, o seu programa deve ler o valor da despesa a ser paga (real)
e a forma de pagamento (‘D’- para cartão de débito, ‘C’ - para cartão de crédito ou ‘N’ para dinheiro). Se o
pagamento for realizado por cartão (débito ou crédito), não há troco. Se pagamento for em dinheiro, será
lido o valor pago pelo cliente e pode haver troco ou não.
a) Faça a função pagamento_dinheiro que recebe como parâmetro o valor da despesa, lê o valor pago
pelo cliente e exibe o troco do cliente ou a mensagem “Não há troco”.
*/

#include <stdio.h>

float pagamento_dinheiro(float despesa){

    float valorPago;

    printf("Digite quanto vai pagar: ");
    scanf("%f", &valorPago);

    if (valorPago > despesa)
    {
        printf("Troco = %.2f", valorPago - despesa);
    }
    else
    {
        printf("Nao ha troco");
    }
}

int main()
{

    char formaDePagamento;
    float despesa;

    printf("Digite o valor a ser pago: ");
    scanf("%f", &despesa);

    printf("Digite a forma de pagamento\n C - Cartao de Credito\n D - Cartao de Debito\n N - Dinheiro\n ==> ");
    scanf("%c", &formaDePagamento);

    if(formaDePagamento == 'C' || formaDePagamento == 'D'){
        printf("Nao ha troco");
    }else{
        pagamento_dinheiro(despesa);
    }

    return 0;
}