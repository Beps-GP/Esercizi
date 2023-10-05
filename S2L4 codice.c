#include <stdio.h>

int main() {

	char nome_giocatore[30];
	int punteggio = 0;
	char domanda1[] = "A quando risale la presa della Bastiglia?";
	char domanda2[] = "Quale e' la capitale del Nicaragua?";
	char domanda3[] = "Cosa c'e' al centro della terra?";
	char giocare;
	char scelta1;
	char scelta2;
	char scelta3;
	char risposta1 = 'c';
	char risposta2 = 'b';
	char risposta3 = 'b';
	
	
	
	printf("Ciao! L' obiettivo di questo gioco e' rispondere alle domande digitando la lettera corrispondente alla risposta esatta, confermando premendo invio. \nAlla fine verra' mostrato il tuo punteggio.\n \n");
	printf("Innanzitutto, come ti chiami? \n");
	scanf(" %s", &nome_giocatore);
	printf("Vuoi giocare %s? Digita 'y' per giocare, 'n' per uscire. \n", nome_giocatore);
	scanf(" %c", &giocare);
	
	

	while (giocare=='y') {
		 
		printf("\n \nVa bene %s, iniziamo subito!", nome_giocatore);
		printf("\n \nEcco la prima domanda: \n");
		printf("%s\n", domanda1);
		printf(" a) 1200 a.C. \n b) 2023 \n c) 1789 \nRisposta:");
		scanf(" %c", &scelta1);
		    
		if (scelta1==risposta1) {
		    printf("\nEsatto! \n \n");
		    punteggio++;
		    }
		else printf("\nSbagliato! \n \n");
		    
		    	
		printf("Ecco la seconda domanda: \n");
		printf("%s\n", domanda2);
		printf(" a) Roma \n b) Managua \n c) Canicatti' \nRisposta:");
		scanf(" %c", &scelta2);
		    
		if (scelta2==risposta2) {
		    printf("\nEsatto! \n \n");
		    punteggio++;
		    }
		else printf("\nSbagliato! \n \n");
		    
					    
		printf("Ecco la terza domanda: \n");
		printf("%s\n", domanda3);
		printf(" a) Acqua \n b) Nucleo metallico \n c) Jerry Scotti \nRisposta:");
		scanf(" %c", &scelta3);
		    
		if (scelta3==risposta3) {
		    printf("\nEsatto! \n \n");
		    punteggio++;
		    }
		else printf("\nSbagliato! \n \n");	
		    
		    
	    printf("%s, il tuo risultato e': \n" , nome_giocatore);
	    printf("%d punti!", punteggio);
		    
		    
        printf("\n \n Vuoi giocare ancora? y/n \n");
        scanf(" %c", &giocare);          
		    
    }
		    

printf("Alla prossima!");
	
	
return 0;

}
	
	
