#include <stdio.h>
#include <stdlib.h>


void insertRandom(
	char sexo,
	char idade[7],
	char renda[10],
	char escolaridade[2],
	char idioma [12],
	char pais[8],
	char localizador[12])
{
	
	FILE *arquivo;

	arquivo = fopen("banco.txt","w");

	fprintf(arquivo,"%s%S%S%S%S%S%S\n",sexo,idade,renda, escolaridade,idioma,pais,localizador)

}

void consulta(int cons)
{

	switch (cons)
	{
	case 1:
	/*
	SELECT pais, sexo, count(*)
	FROM pessoas
	GROUP BY pais, sexo;	
	*/
	break;

	case 2:
	/*
	SELECT pais, sexo, count(*)
	FROM pessoas
	GROUP BY pais, sexo;	
	*/
	break;

	case 3:
	/*
	SELECT pais, sexo, avg(salaraio)
	FROM pessoas
	GROUP BY pais, sexo;	
	*/
	break;

	case 4:
	/*
	SELECT pais, sexo, avg(idade)
	FROM pessoas
	GROUP BY pais, sexo;	
	*/
	break;

	case 5:
	/*
	SELECT pais, sexo, count(*)
	FROM pessoas
	WHERE país =15
	GROUP BY pais, sexo;	
	*/
	break;

	case 6:
	/*
	SELECT pais, sexo, count(*)
	FROM pessoas
	WHERE país =15 AND sexo =1
	*/
	break;

	case 7:
	/*
	SELECT pais, sexo, count(*)
	FROM pessoas
	WHERE país >=0 AND pais <=15
	GROUP BY pais, sexo;	
	*/
	break;

	case default:
		printf("CONSULTA NÃO CADASTRADA COMO VÁLIDA")
	break;
	}

	

}


