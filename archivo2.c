#include <stdio.h>
int multi, i=0;
int main(){
    FILE*vector=NULL;
    FILE*archivo2=NULL;
    vector=fopen("vector.txt","r");
    archivo2=fopen("vector2.txt","w");
    if (vector==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }
     while (!feof(vector)){
        fscanf(vector,"%d",&i);
        if (i %5==0){
            fprintf(archivo2, "Numeros multiplos de 5:%d \n",i);
}else {
    fprintf(archivo2,"%d \n" ,i);
}

 }
 fclose(vector);
 fclose(archivo2);
 return 0;
  }