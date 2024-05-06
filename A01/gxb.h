#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef char* chars;

/*
  Funcao para ler um inteiro
  @param texto a ser imprimido na hora da leitura
  @return 
*/

int G_readint(char *text) {
  int x = 0;
  printf("%s", text);
  scanf("%d", &x);
  getchar();
  return (x);
}

double G_readdouble(char *text) {
  double x = 0;
  printf("%s", text);
  scanf("%lf", &x);
  getchar();
  return (x);
}

float G_readfloat(char *text) {
  float x = 0;
  printf("%s", text);
  scanf("%f", &x);
  getchar();
  return (x);
}

char G_readchar(char *text) {
  char x = '0';
  printf("%s", text);
  scanf("%c", &x);
  getchar();
  return (x);
}

char* G_readstring(char *text)
{
  char *x = (char*) malloc(100 * sizeof(char));
  printf("%s", text);
  scanf("%s", x);
  getchar();
  return (x);
}


// char* G_readln(char *text)
// {
//   //substituir /n por /0
// }

bool G_isPar(int x) {
  if (x % 2 == 0) {
    return true;
  }
  return false;
}

bool G_fIntervalo(int x, int a, int b) {
  if (x >= a && x <= b) {
    return true;
  }
  return false;
}

bool G_aIntervalo(int x, int a, int b) {
  if (x > a && x < b) {
    return true;
  }
  return false;
}

bool G_isMaiuscula (char x)
{
  if(x >= 'A' && x <= 'Z')
  {
    return true;
  }
  return false;
}

bool G_isMinuscula (char x)
{
  if(x >= 'a' && x <= 'z')
  {
    return true;
  }
  return false;
}

bool G_isDigit (char x)
{
  if(x >= '0' && x <= '9')
  {
    return true;
  }
  return false;
}

bool G_isSpecial (char x)
{
  if(G_isDigit(x) != 1 && G_isMaiuscula(x) != 1 && G_isMinuscula(x) != 1) // ou = 0 
  {
    return true;
  }
  return false;
}

int G_pot (int x, int y)
{
  if(y == 0)
  {
    return 1;
  }
  else
  {
    return x * G_pot(x, y - 1);
  }
}

double G_pot_real (double x, int y)
{
  if(y == 0)
  {
    return 1;
  }
  else
  {
    return x * G_pot(x, y - 1);
  }
}

int G_fac (int x)
{
  if(x == 0 || x == 1)
  {
    return 1;
  }
  else
  {
    return x * G_fac(x - 1);
  }
}

int G_fibonacci (int n)
{
  int resposta = 0;
  if(n == 1 || n == 2)
  {
    resposta = 1;
  }
  else
  {
    if(n > 2)
    {
      resposta = G_fibonacci(n - 1) + G_fibonacci(n - 2);
    }
  }
  return resposta;
}

/*
  Procedimento para mostrar na tela os elementos de um array
  @param int = tamanho, int array [] = array para ser percorrido e mostrar os elementos
*/

void G_printarray (int n, int array [])
{
  int x = 0;
  for(int i = 0; i < n; i++)
  {
    x = array[i];
    printf("%d ", x);
  }
}

/*
  Procedimento para ler dados e armazerar em um array de tamanho N
  @param int n = tamanho, int array [] = lugar a ser armazenado os valores de N
*/

void G_readarray (int n, int array [])
{
  int x = 0;
  for(int i = 0; i < n; i++)
  {
    printf("Elemento %d = ", i);
    scanf("%d", &x);
    array[i] = x;
  }
}

/*
  Funcao para somar elementos inteiros dentro de um arranjo
  @param int n = tamanho, int array [] = elementos do array
  @return soma dos elementos 
*/

int G_SumIntArray (int n, int array [])
{
  int soma = 0;
  for(int i = 0; i < n; i++)
  {
    soma = soma + array[i];
  }
  return soma;
}

void G_printdoublearray (int n, double array [])
{
  for(int i = 0; i < n; i++)
  {
    printf("%lf ", array[i]);
  }
}

void G_printERROFILE ( void )
{
  printf("Erro ao abrir o arquivo.\n");
}