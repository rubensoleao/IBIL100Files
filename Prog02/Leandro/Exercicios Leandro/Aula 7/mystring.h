//Rafael Stefanini Carreira

/*Escreva um programa em linguagem C para reproduzir a
função strcmp. O programa deve ser salvo como uma
biblioteca para uso nos exercícios seguintes;*/

int mystrcmp(char *str1, char *str2)
{
	int i=0;
	while(str1[i] == str2[i] && str1[i])
		i++;

	if(str1[i] == str2[i] && !str1[i]) //str1=str2
		return 0;
	else if(str1[i] > str2[i]) //str1>str2
		return -1;
	else if(str2[i] > str1[i]) //str1<str2
		return 1;
}

/*Escreva um programa em linguagem C para reproduzir a
função strcat. O programa deve ser salvo como uma biblioteca
para uso nos exercícios seguintes;*/

char *mystrcat(char *str1, char *str2)
{

  	char *strcat = str1; //strcat aponta pra str1

  	while(*strcat) //chega até a ultima posição
  		strcat++;

  	while(*str2) //enquanto tiver valores em str2
	{
		*strcat=*str2;
		str2++;
		strcat++;
    	}
	*strcat='\0'; //null terminator
		

  	return str1; //que ainda aponta para o inicio da strcat
}

/*Escreva um programa em linguagem C para reproduzir a
função strcpy. O programa deve ser salvo como uma biblioteca
para uso nos exercícios seguintes;*/


char *mystrcpy(char *str2, char *str1)
{
	char *ret = str2;
	while(*str1)
	{
		*str2=*str1;
		str2++;
		str1++;
	}
	*str2='\0'; //null terminator
   
   	return ret;
}

/*Escreva um programa em linguagem C para reproduzir a
função strlen. O programa deve ser salvo como uma biblioteca
para uso nos exercícios seguintes;*/


int mystrlen(char *str)
{
    int i=0;

    while(str[i] != '\0')
        i++;

    return i;
}



