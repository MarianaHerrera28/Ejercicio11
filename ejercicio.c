/* Este programa es para realizar operaciones bit a bit para la clase de Alse
  Autor:Mariana Herrera y  Karin Lugo 
  Licencia: Comercial
  Versión: 1.0
  */

/* inclusión de librerias */
#include<stdio.h>
#include<string.h>

/* inclusión de prototipos */
void letra_s (char *str,char *st, char *str1);
void letra_i (char *str,char *st1, char *str1);
void letra_l (char *str,char *st2, char *str1);
void letra_v (char *str,char *st3, char *str1);
void letra_i1 (char *str, char *st4, char *str1);
void letra_vacio ( char *str, char *st5, char *str1);

/* Código principal */
int main (void) // esta es la función principal
{   
	char str[] = "SIlvia" ;// Se crea un string con el nombre de la primera integrante 
	char str1[] = "0"; //Se crea un string vacio que luego se llenara con el nombre de la segunda integrante 
	char *ptr;  // Se crea apuntador para variable tipo char 
	char st[] = "K"; 
	char st1[]= "a";
	char st2[]= "r";
	char st3[]= "i";
	char st4[]= "n";
	char st5[]= " ";
	int cont; // se difine una entrada contador 
	printf( "El nombre a cambiar es Silvia\n");
	printf( "El nombre a obtener es Karin\n");
	
	for (cont = 0; str[cont] != '\0'; cont++)
	{
		ptr = (&str[cont]); // se asigna al apuntador ptr la direccion del str en cada una de las posicion y toma el valor de las mismas  
		printf("%c\n",*ptr); //se imprime cada uno de los caracteres del string str1 
		
		if (*ptr == 'S')
		{
			letra_s (str,st,str1);
			
		}
		else 
		{
			if (*ptr == 'I')
			{
				letra_i (str,st1,str1);
				
			}
			else
			{
				if (*ptr == 'l')
				{
					letra_l (str,st2,str1);
					
				}
				else
				{
					if (*ptr == 'v')
					{
					letra_v (str,st3,str1);
					
					}
					else
					{
						if (*ptr == 'i')
						{
							letra_i1 (str,st4,str1);
							
						}
						else 
						{
							if (*ptr == 'a')
							{
								letra_vacio (str,st5,str1);
							}
						}
					}
				}
			}
		}
	}
	printf ("%s\n", str1);
}

	
void letra_s (char *str, char *st, char *str1) //esta función permite hacer el cambio de la letra 'S' por 'K'
{
	str1[0] = (str[0]& st[0])|st[0];
	printf("Primer bit de str1 es : %s\n", &str1[0]);
}

void letra_i (char *str, char *st1, char *str1) //esta función permite hacer el cambio de la letra 'I' por 'a'
{
	str1[1] = (str[0] & st1[0])|st1[0];
	printf("Segundo bit de str1 es : %s\n", &str1[1]);
}

void letra_l (char *str, char *st2, char *str1) //esta función permite hacer el cambio de la letra 'l' por 'r'
{
	str1[2] = (str[0] & st2[0])|st2[0];
	printf("Tercer bit de str1 es : %s\n", &str1[2]);
}
void letra_v (char *str, char *st3, char *str1) //esta función permite hacer el cambio de la letra 'v' por 'i'
{
	str1[3] = ((str[0] & st3[0])|st3[0]);
	printf("Cuarto bit de str1 es : %s\n", &str1[3]);
}
void letra_i1 (char *str, char *st4, char *str1) //esta función permite hacer el cambio de la letra 'i' por 'n'
{
	str1[4] = str[3] << 1 & st4[0] |st4[0];
	printf("Quinto bit de str1 es : %s\n", &str1[4]);
}
void letra_vacio ( char *str, char *st5, char *str1) //esta función permite hacer el cambio de la letra 'a' por 'espacio'
{
	str1[5] = str[4] >> 1 & st5[0];
	printf("Sexto bit de str1 es : espacio\n");
}



	
	
	
	
	
	
	