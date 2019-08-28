#include <stdio.h>
#include <string.h>
#include <ctype.h>

FILE *out;

void escrever(char letra[10]){
    fprintf(out,"%s",letra);
    printf("%s",letra);
}


void main(){
    FILE *arq;
    arq = fopen("decodificado.txt","r");
    out = fopen("codificado.txt","w");
    char x = '1';
    char saida[10];
    if(arq == NULL || out == NULL) printf("Erro ao abrir arquivo!");
    else{
        while((x=fgetc(arq))!=EOF){
            switch(toupper(x)){
                case 'A':strcpy(saida,".- ");
                         break;
                case 'B':strcpy(saida,"-... ");
                         break;
                case 'C':strcpy(saida,"-.-. ");
                         break;
                case 'D':strcpy(saida,"-.. ");
                         break;
                case 'E':strcpy(saida,". ");
                         break;
                case 'F':strcpy(saida,"..-. ");
                         break;
                case 'G':strcpy(saida,"--. ");
                         break;
                case 'H':strcpy(saida,".... ");
                         break;
                case 'I':strcpy(saida,".. ");
                         break;
                case 'J':strcpy(saida,".--- ");
                         break;
                case 'K':strcpy(saida,"-.- ");
                         break;
                case 'L':strcpy(saida,".-.. ");
                         break;
                case 'M':strcpy(saida,"-- ");
                         break;
                case 'N':strcpy(saida,"-. ");
                         break;
                case 'O':strcpy(saida,"--- ");
                         break;
                case 'P':strcpy(saida,".--. ");
                         break;
                case 'Q':strcpy(saida,"--.- ");
                         break;
                case 'R':strcpy(saida,".-. ");
                         break;
                case 'S':strcpy(saida,"... ");
                         break;
                case 'T':strcpy(saida,"- ");
                         break;
                case 'U':strcpy(saida,"..- ");
                         break;
                case 'V':strcpy(saida,"...- ");
                         break;
                case 'W':strcpy(saida,".-- ");
                         break;
                case 'X':strcpy(saida,"-..- ");
                         break;
                case 'Y':strcpy(saida,"-.-- ");
                         break;
                case 'Z':strcpy(saida,"--.. ");
                         break;
                case ' ':strcpy(saida,"/ ");
                         break;
                case '1':strcpy(saida,".---- ");
                         break;
                case '2':strcpy(saida,"..--- ");
                         break;
                case '3':strcpy(saida,"...-- ");
                         break;
                case '4':strcpy(saida,"....- ");
                         break;
                case '5':strcpy(saida,"..... ");
                         break;
                case '6':strcpy(saida,"-.... ");
                         break;
                case '7':strcpy(saida,"--... ");
                         break;
                case '8':strcpy(saida,"---.. ");
                         break;
                case '9':strcpy(saida,"----. ");
                         break;
                case '0':strcpy(saida,"----- ");
                         break;
                case '\n':strcpy(saida,"\n");
                         break;
                default:strcpy(saida,"");
                         break;
            }
            escrever(saida);
        }
    }
    printf("\n");
    fclose(arq);
    fclose(out);
}