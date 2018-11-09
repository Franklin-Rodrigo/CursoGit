#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> //Usada por conta da função sleep, para caso o arquivo "iv_semana_si.txt" estiver vazio

typedef struct Info Info;
typedef struct Lista Lista;



//-----------------------PROTOTIPOS DAS FUNÇÕES-----------------------------------------------
void menu();

int createList();

void originalList();

void listByDate(char []);

void listParticipantByIns(int);

void listParticipantByName(char*);

void listInOrder();

void listOrderByDate_Time(char [], int);