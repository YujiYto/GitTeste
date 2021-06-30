#include <stdio.h>

int main ()
{
	FILE * comp;
	int  dia_dose1, dia_dose2, mes_dose1, mes_dose2, ano_dose1 , ano_dose2;

	printf("\n======================================");
	printf("\n              VACINA JA               ");
	printf("\n======================================");
	printf("\nNome : Richard Starkey");
	printf("\nCPF: 11111111122");
	printf("\nVacina ministrada: Sputnik V - Gmaleya");
	printf("\n======================================");
	
	printf("\nDigite o dia da sua primeira dose:");
	scanf("%d" , &dia_dose1);
	printf("\nDigite o mes da sua primeira dose:");
	scanf("%d" , &mes_dose1);
	printf("\nDigite o ano da sua primeira dose:");
	scanf("%d" , &ano_dose1);
	
	comp = fopen("COMPROVANTE_RICHARD_STARKEY.TXT" , "a");
	
	fprintf(comp,"\n=======================================");
	fprintf(comp,"\n              VACINA JA                ");
	fprintf(comp,"\n=======================================");
	fprintf(comp,"\nNome : Richard Starkey");
	fprintf(comp,"\nCPF: 11111111122");
	fprintf(comp,"\nVacina ministrada: Sputnik V - Gmaleya");
	
	fprintf(comp,"\n\nData da segunda dose: %d" , dia_dose1 );
	fprintf(comp , " / %d" , mes_dose1);
	fprintf(comp , " / %d" , ano_dose1);
	dia_dose2 = dia_dose1;
	mes_dose2 = mes_dose1 + 1;
	ano_dose2 = ano_dose1;
	fprintf(comp,"\n\nData da segunda dose: %d" , dia_dose1 );
	fprintf(comp , " / %d" , mes_dose1 + 1);
	fprintf(comp , " / %d" , ano_dose1);
	fprintf(comp,"\n\n=======================================");
	
	system ("COMPROVANTE_RICHARD_STARKEY.TXT");
	
	fclose (comp);
	
	return (0);
}
