#include <stdio.h>
#include <math.h>

int lernumeropositivo()
{
  int numero;
  do
  {
    printf("\ndigite um numero\n");
    scanf("%i",&numero);
    getchar();

  }while(numero<0);
  return numero;
}

void  escrevetabuada(int valor,int valor2)
{
  for(int j=valor;j<=valor2;j++)
  {
    for(int i=1;i<=10;i++)
    {
      printf("%i * %i = %i\n",j,i,valor*i);
    }
    printf("\n");
  }
}
float distancia(float x1,float y1,float x2,float y2)
{
  float dist=   sqrt(pow((x1-x2),2)+pow((y1-y2),2));
  
  return dist;

}




int main(void) {
  float dista;
  dista=distancia(1,1,1,2);
  printf("%f",dista);
  
  
  
  
  return 0;
}
