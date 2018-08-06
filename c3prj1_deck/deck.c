#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"
void print_hand(deck_t * hand){
  card_t **temp = (*hand).cards;
  for(int i=0; i<(*hand).n_cards; i++)
    {
      print_card(**temp);
      printf(" ");
      temp++;
    }
}

int deck_contains(deck_t * d, card_t c) {
  card_t **temp = (*d).cards;
  for(int i=0; i<(*d).n_cards; i++)
    {
      if((**temp).value == c.value && (**temp).suit == c.suit)
	return 1;
      
      temp++;
    }

  return 0;
}

void shuffle(deck_t * d){
  card_t *temp;
  int j;
  for(int i=(*d).n_cards - 1; i>0; i--)
    {
      
      j= rand()%(i+1);
      temp = (*d).cards[i];
      (*d).cards[i] = (*d).cards[j];
      (*d).cards[j] = temp;     
    }
  

}

void assert_full_deck(deck_t * d) {

}
