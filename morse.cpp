#include <iostream>
#include <windows.h>

using namespace std;

int main ( int argc, char *argv[]){
	
	char string[100];
	
	printf("-----------------------------------------------\n");
	printf("LETRA >>>>>CODIGO----NUMERO Y SIGNOS>>>>>>>CODIGO---\n");
	printf("A           .-             1           .---    \n");
	printf("B           -...           2           ..--- \n");
	printf("C           -.-.           3           ...-- \n");
	printf("D           -..            4           ....- \n");
	printf("E           .              5           ..... \n");
	printf("F           ..-.           6           -.... \n");
	printf("G           --.            7           --... \n");
	printf("H           ....           8           ---.. \n");
	printf("I           ..             9           ----. \n");
	printf("J           .---           0           ----- \n");
	printf("K           -.-            COMA        --..-- \n");
	printf("L           .-..        DOS PUNTOS     ---... \n");
	printf("M           --          PREGUNTA       ..--.. \n");
	printf("N           -.    \n");
	printf("O           ---   \n");
	printf("P           .--. \n");
	printf("Q           --.- \n");
	printf("R           .-. \n");
	printf("S           ... \n");
	printf("T           - \n");
	printf("U          ..- \n");
	printf("V          ...- \n");
	printf("W          .--     \n");
	printf("X          -..- \n");
	printf("Y          -.-- \n");
	printf("Z          --.. \n");
	printf("------------------------------------------------------------------ \n");
	
	printf("Ingrese frase: \n");
		gets(string);
			printf("La frase escrita en codigo morse es: \n");
			char a[]= "a";
				for(int i; string[i]!=0;i++){
					if(char(string[i])==a[0]){
					
						printf(".- "); //A
						Beep(567,250);
						Beep(567,500);
				}
					char b[]="b";
				if(char(string[i])==b[0]){
				
						printf("-..."); //B
						Beep(567,500);
						Beep(567,250);
						Beep(567,250);
						Beep(567,250);
					}
					char c[]="c";
				if(char(string[i])==c[0]){
				
						printf("-.-."); //C
						Beep(567,500);
						Beep(567,250);
						Beep(567,500);
						Beep(567,250);
					}
					char d[]="d";
				if(char(string[i])==d[0]){
					printf("-..");//D
						Beep(567,500);
						Beep(567,250);
						Beep(567,250);
					
				}
					char e[]="e";
				if(char(string[i])==e[0]){
					printf(".");//E
					Beep(567,250);
				}
					char f[]="f";
				if(char(string[i])==f[0]){
					printf("..-.");//F
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
					Beep(567,250);
				}
					char g[]="g";
				if(char(string[i])==g[0]){
					printf("--.");//G
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
				}
					char h[]="h";
				if(char(string[i])==h[0]){
					printf("....");//H
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
				}
					char xy[]="i";
				if(char(string[i])==xy[0]){
					printf("..");//I
					Beep(567,250);
					Beep(567,250);
				}
					char j[]="j";
				if(char(string[i])==j[0]){
					printf(".---");//J
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
				}
					char k[]="k";
				if(char(string[i])==k[0]){
					printf("-.-");//K
					Beep(567,500);
					Beep(567,250);
					Beep(567,500);
					
				}
					char l[]="l";
				if(char(string[i])==l[0]){
					printf(".-..");//L
					Beep(567,250);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
				}
					char m[]="m";
				if(char(string[i])==m[0]){
					printf("--");//M
					Beep(567,500);
					Beep(567,500);
				}
					char n[]="n";
				if(char(string[i])==n[0]){
					printf("-.");//N
					Beep(567,500);
					Beep(567,250);
				}
					char o[]="o";
				if(char(string[i])==o[0]){
					printf("---");//O
					Beep(567,500);
					Beep(567,500);
				}
					char p[]="p";
				if(char(string[i])==p[0]){
					printf(".--.");//P
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
				}
					char q[]="q";
				if(char(string[i])==q[0]){
					printf("--.-");//Q
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,500);
				}
					char r[]="r";
				if(char(string[i])==r[0]){
					printf(".-.");//R
					Beep(567,250);
					Beep(567,500);
					Beep(567,250);
				}
					char s[]="s";
				if(char(string[i])==s[0]){
					printf("...");//S
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
				}
					char t[]="t";
				if(char(string[i])==t[0]){
					printf("-");//T
					Beep(567,500);
				}
					char u[]="u";
				if(char(string[i])==u[0]){
					printf("..-");//U
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
				}
					char v[]="v";
				if(char(string[i])==v[0]){
					printf("...-");//V
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
					
				}
					char w[]="w";
				if(char(string[i])==w[0]){
					printf(".--");//W
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
					
				}
					char x[]="x";
				if(char(string[i])==x[0]){
					printf("-..-");//X
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
				}
					char y[]="y";
				if(char(string[i])==y[0]){
					printf("-.--");//Y
					Beep(567,500);
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
				}
					char z[]="z";
				if(char(string[i])==z[0]){
					printf("--..");//Z
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
				}
					char a1[]="1";
				if(char(string[i])==a1[0]){
					printf(".---");//1
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
				}
					char a2[]="2";
				if(char(string[i])==a2[0]){
					printf("..---");//2
						Beep(567,250);
						Beep(567,250);
						Beep(567,500);
						Beep(567,500);
						Beep(567,500);
				}
					char a3[]="3";
				if(char(string[i])==a3[0]){
					printf("...--");//3
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
				
				}
					char a4[]="4";
				if(char(string[i])==a4[0]){
					printf("....-");//4
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
				}
					char a5[]="5";
				if(char(string[i])==a5[0]){
					printf(".....");///5
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
				}
					char a6[]="6";
				if(char(string[i])==a6[0]){
					printf("-....");//6
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
				}
					char a7[]="7";
				if(char(string[i])==a7[0]){
					printf("--...");//7
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
				}
					char a8[]="8";
				if(char(string[i])==a8[0]){
					printf("---..");//8
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
				}
					char a9[]="9";
				if(char(string[i])==a9[0]){
					printf("----.");//9
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
				}
					char a0[]="0";
				if(char(string[i])==a0[0]){
					printf("-----");///0
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
				}
					char coma[]=",";
				if(char(string[i])==coma[0]){
					printf("--..--");//coma ","
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
				}
					char p2[]=":";
				if(char(string[i])==p2[0]){
					printf("---...");///dospuntos ":"
					Beep(567,500);
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
					Beep(567,250);
				}
					char pre[]="?";
				if(char(string[i])==pre[0]){
					printf("..--..");///pregunta "?"
					Beep(567,250);
					Beep(567,250);
					Beep(567,500);
					Beep(567,500);
					Beep(567,250);
					Beep(567,250);
				}
					char a00[]=" ";
				if(char(string[i])==a00[0]){
					printf("/////");//espacio
					Beep(0,700);
				}
				
	}
	
	return 0;
}
