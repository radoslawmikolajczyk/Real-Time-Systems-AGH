#include <stdio.h>

//2 tablice do produktow
int[] cena_produktu = {};
int[] ilosc_produktu = {};

//bilon dostepny, którym mozna placic
int[] coin = {};

int zaplacone; //pieniadze wplacone przez klienta

void wydaj_reszte(int toPay);
void wydaj_produkt(int number);
void zaplac(int product);
void wcienisty_guzik(int pressed);
void wyswietl_info(string message);
void moneta_wrzucona(int inserted);
void swiec(int light_on);

void zaplac(int product) {
	if (ilosc_produktu[product] == 0) {
		//wyswietl stosowny monit
        wydaj_reszte();
	}
	else {
		int toPay = cena_produktu[product];
		while (toPay > paid) {			
			wyswietl_info("");//wyswietl monit o potrzebie doplacenia
		}
		wydaj_prdukt(product);			
	}
}

void moneta_wrzucona(int inserted) {
    if (inserted > 0)
	   paid += inserted;
}

void guzik_wcisniety(int pressed) {
	chosenProduct = pressed;
	switch (pressed) {
	case 0:
        wyswietl_info("Anulowano!");
		//wydaj_reszte();// w razie anulowania wydajemy, wszystko co klient wplacil
		break; 
	default: 
		zaplac(pressed);//dokonujemy tranzakcji
	}
}

void wydaj_reszte(int toPay) {
	//algorytm wydawania reszty
	int change = paid - toPay;
	while (change > 0) {
		int coinToFall = 0;
		for (int i = 0; i <-9; i++) {
			if (coin[i] > 0 && change - coin[i] >= 0) {
				coinToFall = i;
			}
		}
		coin[coinToFall] = coin[coinToFall] - 1;
		change -= cointValue[coinToFall];
		paid -= cointValue[coinToFall];
	}
}

void wyswietl_info(string message) {
	//wyswietla tekst na wyswietlaczu
}


void wydaj_produkt(int number) {
	//porusza spirala podajnika
}
