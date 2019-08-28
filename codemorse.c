#include <stdio.h>
#include <string.h>
#include <ctype.h>

FILE *out;

void escrever(char letra[10]){
    fprintf(out,"%s",letra);
    printf("%s",letra);
}

void main(){
    char letraMorse[10];
    char x;
    int posVetor = 0, stop = 0;

    FILE *arq;

    out = fopen("decodificado.txt","w");
    arq = fopen("codificado.txt","r");

    if(arq == NULL || out == NULL) printf("Não achei o arquivo!");
    else{
        while((x=fgetc(arq))!=EOF || stop != 1){
            if(x==' ' || x == '\n' || x == EOF){
                if(strcmp(letraMorse,".-")==0) escrever("A");
                if(strcmp(letraMorse,"-...")==0) escrever("B");
                if(strcmp(letraMorse,"-.-.")==0) escrever("C");
                if(strcmp(letraMorse,"-..")==0) escrever("D");
                if(strcmp(letraMorse,".")==0) escrever("E");
                if(strcmp(letraMorse,"..-.")==0) escrever("F");
                if(strcmp(letraMorse,"--.")==0) escrever("G");
                if(strcmp(letraMorse,"....")==0) escrever("H");
                if(strcmp(letraMorse,"..")==0) escrever("I");
                if(strcmp(letraMorse,".---")==0) escrever("J");
                if(strcmp(letraMorse,"-.-")==0) escrever("K");
                if(strcmp(letraMorse,".-..")==0) escrever("L");
                if(strcmp(letraMorse,"--")==0) escrever("M");
                if(strcmp(letraMorse,"-.")==0) escrever("N");
                if(strcmp(letraMorse,"---")==0) escrever("O");
                if(strcmp(letraMorse,".--.")==0) escrever("P");
                if(strcmp(letraMorse,"--.-")==0) escrever("Q");
                if(strcmp(letraMorse,".-.")==0) escrever("R");
                if(strcmp(letraMorse,"...")==0) escrever("S");
                if(strcmp(letraMorse,"-")==0) escrever("T");
                if(strcmp(letraMorse,"..-")==0) escrever("U");
                if(strcmp(letraMorse,"...-")==0) escrever("V");
                if(strcmp(letraMorse,".--")==0) escrever("W");
                if(strcmp(letraMorse,"-..-")==0) escrever("X");
                if(strcmp(letraMorse,"-.--")==0) escrever("Y");
                if(strcmp(letraMorse,"--..")==0) escrever("Z");
                if(strcmp(letraMorse,".----")==0) escrever("1");
                if(strcmp(letraMorse,"..---")==0) escrever("2");
                if(strcmp(letraMorse,"...--")==0) escrever("3");
                if(strcmp(letraMorse,"....-")==0) escrever("4");
                if(strcmp(letraMorse,".....")==0) escrever("5");
                if(strcmp(letraMorse,"-....")==0) escrever("6");
                if(strcmp(letraMorse,"--...")==0) escrever("7");
                if(strcmp(letraMorse,"---..")==0) escrever("8");
                if(strcmp(letraMorse,"----.")==0) escrever("9");
                if(strcmp(letraMorse,"-----")==0) escrever("0");
                if(strcmp(letraMorse,"/")==0) escrever(" ");
                strcpy(letraMorse,"");
                if(x == EOF) stop = 1;
                posVetor = 0;
            }else{
                letraMorse[posVetor++] = x;
                letraMorse[posVetor] = '\0';
            }
        }
        printf("\n");
    }
    fclose(arq);
    fclose(out);
}