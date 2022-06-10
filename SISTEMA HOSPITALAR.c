#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>

struct rgAgora {
int dia, mes, ano;
int h, m, s;
};

int main (){

    FILE *relatorio;
    struct tm tempo;
    time_t tempoSeg;
    time(&tempoSeg);
    tempo = *localtime(&tempoSeg);
    struct rgAgora agora;
    agora.dia = tempo.tm_mday;
    agora.mes = tempo.tm_mon + 1;
    agora.ano = tempo.tm_year + 1900;
    agora.h = tempo.tm_hour;
    agora.m = tempo.tm_min;
    agora.s = tempo.tm_sec;
    printf("Data: %02d/%02d/%02d as %02d:%02d:%02d\n", agora.dia, agora.mes, agora.ano, agora.h, agora.m, agora.s);
    char login = 'israel';
    int senha = 123;
    int acesso;
    printf("SEJA BEM VINDO AO HOSPITAL ISRAELITA\n\n");
    printf("DIGITE SEU LOGIN E SENHA:\n\n");
do {
    printf("Digite o Login: ");
    scanf("%s", &login);
    printf("Digite a Senha: ");
    scanf("%d", &senha);
}while
          (senha != 123);
          (login != 'israel');
       printf("\nAcesso liberado!\n\n");
       printf("\nBEM VINDO A PAGINA DO COLABORADOR!\n\n");
       printf("\nDigite os dados do Paciente:\n\n");

char nome[15];
printf("nome completo do paciente: ");
scanf("%s", nome);

int dia[15];
printf("dia de nascimento do paciente: ");
scanf("%02d", &dia);

int mes[15];
printf("mes de nascimento do paciente: ");
scanf("%02d", &mes);

int anoatual;
int anodenascimento;
int idade;

printf("ano de nascimento: ");
scanf("%d", &anodenascimento);

printf("ano atual: ");
scanf("%d", &anoatual);

idade=(anoatual-anodenascimento);
printf ("idade:%d\n",idade);

int CPF[15];
int telefone[15];
char cep[15];
char estado[15];
char cidade[15];
char bairro[15];
char rua[15];
int  casa[15];

printf("CPF paciente: ");
scanf("%d", &CPF);

printf("telefone: ");
scanf("%d", &telefone);

printf("CEP: ");
scanf("%s", &cep);

printf("estado: ");
scanf("%s", &estado);

printf("cidade: ");
scanf("%s", &cidade);

printf("bairro: ");
scanf("%s", &bairro);

printf("rua: ");
scanf("%s", &rua );

printf("numero da casa: ");
scanf("%d", &casa);

int comorbidade;


printf("Possui comorbidade: Diabete, Obesidade, Tuberculose, Outros...\nDigite(1=sim ou 2=nao): ");
scanf("%d", &comorbidade);


relatorio = fopen("relatorio.txt", "w");

if((idade > 65) && (comorbidade == 1))
 {

     fprintf(relatorio, "%d anos\n", idade);

     fprintf(relatorio, "CEP: %s", cep);


     fclose (relatorio);
}
return; }
