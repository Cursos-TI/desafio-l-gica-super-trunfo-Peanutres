//inclusão de livrarias:
#include <stdio.h>

//carregamento de variaveis anterior ao codigo principal, para evitar erros:
int opcao, primeiroCompara, segundoCompara, resultado1, resultado2;
unsigned int populacao1, populacao2; //uso de modificador usingned devido ao uso zero de numero negativos
int pontoturistico1, pontoturistico2;
char pais1[40], pais2[40];
float area1, area2, pib1, pib2;
float densipopula1, densipopula2, pibresultado1, pibresultado2;

//codigo dados cartas:

int main(){
    printf("### Banco de dados das cartas ###\n");

    //resquição de dados ao usuario para fazer a comparação no jogo
    //primeira carta:
    printf("Insira os dados da primeira carta: \n");
    printf("Insira o nome do primeiro país: \n");
    scanf(" %s", &pais1);
    printf("Insira a quantidade de pontos turisticos do primero país: \n");
    scanf (" %d", &pontoturistico1);
    printf("Insira a quantidade de população do primeiro país: \n");
    scanf (" %u", &populacao1);
    printf("Insira a area do primeiro país em km2: \n");
    scanf(" %f", &area1);
    printf("Insira o PIB do primeiro país: \n");
    scanf(" %f", &pib1);

    
    //segunda carta:
    printf("Insira os dados da primeira carta: \n");
    printf("Insira o nome do segundo país: \n");
    scanf(" %s", &pais2);
    printf("Insira a quantidade de pontos turisticos do segundo país: \n");
    scanf (" %d", &pontoturistico2);
    printf("Insira a quantidade de população do segundo país: \n");
    scanf (" %u", &populacao2);
    printf("Insira a area do segundo país em km2: \n");
    scanf(" %f", &area2);
    printf("Insira o PIB do segundo país: \n");
    scanf(" %f", &pib2);

    //calculadoras de dados:
    //calculo de densidade de população:
    densipopula1 = (float) populacao1 / area1;
    densipopula2 = (float) populacao2 / area2;

    //diminuição do numero todo do pib para um menor e mais facil de se ler:
    pibresultado1 = pib1 / 1000000000;
    pibresultado2 = pib2 / 1000000000;

    //menu do jogo:
    printf("### Bem vindo ao Super Trunfo - Paises ###\n");
    printf("Selecione:\n");
    printf("1. Jogar\n");
    printf("2. Regras\n");
    printf("3. Sair do jogo\n");
    printf("Digite a opção:");
    scanf("%d", &opcao);
    //switch para melhor adequação de respostas do sistema:
    switch (opcao)
    {
    case 1:
        printf("Começando o jogo...\n");
        printf("Dados carregados: \n");
        printf("Carta 1 - Pais: %s - Populcação: %u, Area: %.2f - PIB: %.2f, Pontos turiscos: %d - Densidade demografica: %.2f\n", pais1, populacao1, area1, pib1, pontoturistico1, densipopula1);
        printf("Carta 2 - Pais: %s - Populcação: %u, Area: %.2f - PIB: %.2f, Pontos turiscos: %d - Densidade demografica: %.2f\n", pais2, populacao2, area2, pib2, pontoturistico2, densipopula2);
        printf("Selecione o primeiro atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Demografica\n");
        scanf("%d", &primeiroCompara);

        switch (primeiroCompara)
        {
        case 1:
            printf("Você escolheu população!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;

        case 2:
            printf("Você escolheu area!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;

        case 3:
            printf("Você escolheu PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;

        case 4:
            printf("Você escolheu pontos turisticos!\n");
            resultado1 = pontoturistico1 > pontoturistico2 ? 1 : 0;
            break;

        case 5:
            printf("Você escolheu densidade demografica!\n");
            resultado1 = densipopula1 < densipopula2 ? 1 : 0;
            break;

        default:
            printf("Opção Invalida");
            break;

        }

        printf("Agora selecione o segundo atributa para comparar!\n");
        printf("OBS.: O segundo tributo devera ser diferente do primero!\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Demografica\n");
        scanf("%d", &segundoCompara);

        if (primeiroCompara == segundoCompara)
        {
            printf("Você escolheu o mesmo atributo!!");
        } else {
            switch (segundoCompara) {
            case 1:
                printf("Você escolheu população!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;

            case 2:
                printf("Você escolheu area!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;

            case 3:
                printf("Você escolheu PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;

            case 4:
                printf("Você escolheu pontos turisticos!\n");
                resultado2 = pontoturistico1 > pontoturistico2 ? 1 : 0;
                break;

            case 5:
                printf("Você escolheu densidade demografica!\n");
                resultado2 = densipopula1 < densipopula2 ? 1 : 0;
                break;

            default:
                printf("Opção Invalida\n");
                break;
            }
        }

        if (resultado1 && resultado2)
        {
            printf("Parabens, Você venceu!!\n");
        } else if (resultado1 != resultado2)
        {
            printf("Empatou!\n");
        }else
        {
            printf("Você perdeu!!\n");
        }
        
    case 2:
        printf("Regras: \n");
        printf("Com base em cada carta selecione dois atributos que você irar comparar\n");
        printf("a carta com maior valor vence, exceto desidade populacional\n");
        printf("que devera ser o menor valor\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opcão não existente!!!\n");
        break;
    }
}