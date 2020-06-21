#include <stdio.h>
#include <conio.h>
void one();
void two();
void three();
void four();
void five();
void six();
char ch = '!';
char ch2 = '!';
char ch3 = '!';
char ch4 = '!';
char ch5 = '!';

int i, j, k, l, m;
int main(){
	int ch;
	system("COLOR 02");
	system("mode 800");
	system("TITLE dictGen by dev7060");
	while(1){
		system("cls");
		printf("\n\t\t\t\t\tA tool by:\n");
		printf("\n          yMMd                             +MMMMMMMMMMM:  .hMMMNMMMm:    -hMMMNNNMs   `yMMMNNMMm/\n     `..  yMMd       ...`     ``        `   ......-mMMd` `NMMs` `sMMM-  /MMN/`   ``  `mMMy`  oMMM:\n   omMMMMhdMMd   `odMMMMMmo` :MMM:    +MMN`       hMMm.  oMMN`   `NMMs `NMM: `..`    /MMM.    mMMh\n  hMMm/-:yMMMd  `dMMo` `sMMd  yMMm`  .NMM/       yMMN.   hMMm     mMMh :MMMdNMMMMm+  sMMN     hMMm\n -MMM:    yMMd  +MMNsssssMMM. `NMMs  hMMy       sMMM:    hMMm     mMMh :MMMy/--oMMMo sMMN     hMMm\n :MMM-    yMMd  oMMNssssssss`  :MMM-/MMm`      oMMM/     sMMN`   `NMMo -MMM:    dMMh +MMM.    mMMy\n `NMMh` `+NMMd  -MMM/     ..    sMMdNMM:      +MMMo      -MMMs` `sMMN`  dMMh`  :MMM/ .NMMy` `oMMN.\n  -mMMMNMNyMMd   :mMMNmdmNMs    `mMMMMy      /MMMy        :mMMMNMMMh.   .hMMMNNMMm/   -dMMMNMMMd-\n");
		printf("\n\t\t\tAdd me on Github: https://github.com/dev7060\n");	
		printf("\n______________________________________________________________________________________________________\n\n");
		printf("\n\n\t$ ");
		fflush(stdin);
		scanf("%d", &ch);
		switch(ch){
			case 1: one(); break;
			case 2: two(); break;
			case 3: three(); break;
			case 4: four(); break;
			case 5: five(); break;
			default: system("cls");printf("\n\tInvalid input/Not supported currently!\n\t"); system("pause"); fflush(stdin);
		}		
	}

	return 0;
}
void one(){
	system("cls");
	FILE *fp = fopen("dictGenByDev7060_oneChar.txt", "w");
	ch='!';
	for(i=33; i<=255; i++){
		if(i==33){
			printf("\n\tProgress:");
		}
		fprintf(fp, "%c\n", ch);
		ch++;
		if(i%2==0){
			printf("|");
		}
	}
	fclose(fp);
	printf("\n\tAll done. ");
	system("pause");
}
void two(){
	system("cls");
	FILE *fp = fopen("dictGenByDev7060_twoChars.txt", "w");
	ch='!'; ch2='!';
	for(i=33; i<=255; i++){
		if(i==33){
			printf("\n\tProgress:");
		}
		for(j=33; j<=255; j++){
			fprintf(fp, "%c%c\n", ch, ch2);
			ch2++;
		}
		ch++;

		if(i%2==0){
			printf("|");
		}
	}
	fclose(fp);
	printf("\n\tAll done. ");
	system("pause");	
}
void three(){
	system("cls");
	FILE *fp = fopen("dictGenByDev7060_threeChars.txt", "w");
	ch='!'; ch2='!'; ch3='!';
	for(i=33; i<=255; i++){
		if(i==33){
			printf("\n\tProgress:");
		}
		for(j=33; j<=255; j++){
			for(k=33; k<=255; k++){
				fprintf(fp, "%c%c%c\n", ch, ch2, ch3);
				ch3++;
			}
			ch2++;
		}
		ch++;
		if(i%2==0){
			printf("|");
		}
	}
	fclose(fp);
	printf("\n\tAll done. ");
	system("pause");
}
void four(){
	system("cls");
	FILE *fp = fopen ("dictGenByDev7060_fourChars.txt", "w");
	ch='!'; ch2='!'; ch3='!'; ch4='!';
	for(i=33; i<=255; i++){
		if(i==33){
			printf("\n\tProgress:");
		}
		ch2 = '!';
		for(j=33; j<=255; j++){
			ch3 = '!';
			for(k=33; k<=255; k++){
				ch4='!';
				for(l=33; l<=255; l++){
					fprintf(fp, "%c%c%c%c\n", ch, ch2, ch3, ch4);
					ch4++;
				}
				ch3=ch3+1;
			}
			ch2=ch2+1;
		}
		ch=ch+1;
		if(i%2==0){
			printf("|");
		}
	}
	fclose(fp);
	printf("\n\tAll done. ");
	system("pause");
}
void five(){
	system("cls");
	FILE *fp = fopen ("dictGenByDev7060_fiveChars.txt", "w");
	ch='!'; ch2='!'; ch3='!'; ch4='!'; ch5='!';
	for(i=33; i<=255; i++){
		if(i==33){
			printf("\n\tProgress:");
		}
		ch2 = '!';
		for(j=33; j<=255; j++){
			ch3 = '!';
			for(k=33; k<=255; k++){
				ch4='!';
				for(l=33; l<=255; l++){
					ch5='!';
					for(m=33; m<=255; m++){
						fprintf(fp, "%c%c%c%c%c\n", ch, ch2, ch3, ch4, ch5);
						ch5++;
					}
					ch4++;
				}
				ch3=ch3+1;
			}
			ch2=ch2+1;
		}
		ch=ch+1;
		if(i%2==0){
			printf("|");
		}
	}
	fclose(fp);
	printf("\n\tAll done. ");
	system("pause");
}
