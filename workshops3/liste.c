#include<stdio.h>

int main()
{
     char nom[100];
     printf("Entre votre nom : \n");
     scanf("%s",&nom);
     
     
	 char prenom[100];
     printf("Entre votre prenom : \n");
     scanf("%s",&prenom);     
     

     int age;
     printf("Entre Votre age : \n");
     scanf("%d",&age);
     
     
     char sex;
     printf("Entre votre sex : \n");
     scanf(" %c",&sex);  
     

     char tel[100];
     printf("Entre Votre tel : \n");
     scanf("%s",&tel);
     
     printf("votre nom : %s \n votre prenom : %s \n vous avez : %d \n votre sex : %c \n Votre tel : %s \n",nom,prenom,age,sex,tel);

     return 0;
}
