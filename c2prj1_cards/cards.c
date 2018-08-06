
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  int flag = 0 ;
  if(c.value  < 2 || c.value >  VALUE_ACE)
    flag = 1 ;
  if(c.suit <  SPADES || c.suit >  CLUBS )
    flag = 1 ;
  assert(flag == 0);

}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case  STRAIGHT_FLUSH : return "STRAIGHT_FLUSH";break;
  case  FOUR_OF_A_KIND : return "FOUR_OF_A_KIND";break;
  case FULL_HOUSE: return "FULL_HOUSE";break;
  case FLUSH: return "FLUSH";break;
  case STRAIGHT: return "STRAIGHT";break;
  case THREE_OF_A_KIND: return "THREE_OF_A_KIND";break;
  case TWO_PAIR: return "TWO_PAIR";break;
  case  PAIR: return "PAIR";break;
  case  NOTHING: return "NOTHING";break;
  default: return "wrong";
    }

}

char value_letter(card_t c) {
  switch(c.value)
    {
    case 2 : return '2'; break;
    case 3 : return '3'; break;
    case 4 : return '4'; break;
    case 5 : return '5'; break;
    case 6 : return '6'; break;
    case 7 : return '7'; break;
    case 8 : return '8'; break;
    case 9 : return '9'; break;
    case 10 : return '0'; break;      
    case VALUE_JACK : return 'J'; break;      
    case VALUE_QUEEN : return 'Q'; break;
    case VALUE_KING : return 'K'; break;
    case VALUE_ACE : return 'A'; break;
    default: return 'x';       
    }
}


char suit_letter(card_t c) {
  switch(c.suit){
  case SPADES:return 's';break;
  case HEARTS:return'h';break;
  case DIAMONDS:return'd';break;
  case CLUBS:return'c';break;
  default: return 'x';
  }
  
}

void print_card(card_t c) {
  printf("%c",value_letter(c));
  printf("%c",suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch(value_let){
  case 'A': temp.value = VALUE_ACE;break;
  case 'J': temp.value = VALUE_JACK;break;
  case 'Q': temp.value = VALUE_QUEEN;break;
  case 'K': temp.value = VALUE_KING;break;
  case '0': temp.value = 10;break;      
  default:temp.value =  value_let - 48;
  }  
  switch(suit_let){
  case 's': temp.suit = SPADES;break;
  case 'h': temp.suit = HEARTS;break;    
  case 'd': temp.suit = DIAMONDS;break;  
  case 'c': temp.suit = CLUBS;break;
  default: temp.suit = NUM_SUITS;  
  }

  assert_card_valid(temp);
  
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
    if( c >= 0 && c <=12){
      
    if(c%13 == 0)
      temp.value = VALUE_KING;
    else if(c%13 == 1)
      temp.value = VALUE_ACE;
    else if(c%13 == 11)
      temp.value = VALUE_JACK;
    else if(c%13 == 12)
      temp.value = VALUE_QUEEN;
    else
      temp.value = c%13;
    temp.suit = SPADES;
    
    }
    
   if( c >= 13 && c <=25){
  if(c%13 == 0)
      temp.value = VALUE_KING;
    else if(c%13 == 1)
      temp.value = VALUE_ACE;
    else if(c%13 == 11)
      temp.value = VALUE_JACK;
    else if(c%13 == 12)
      temp.value = VALUE_QUEEN;
    else
      temp.value = c%13;
     temp.suit = HEARTS;
    }
   
    if( c >= 26 && c <=38){
        if(c%13 == 0)
      temp.value = VALUE_KING;
    else if(c%13 == 1)
      temp.value = VALUE_ACE;
    else if(c%13 == 11)
      temp.value = VALUE_JACK;
    else if(c%13 == 12)
      temp.value = VALUE_QUEEN;
    else
      temp.value = c%13;

      temp.suit = DIAMONDS;
    }
    
     if( c >= 39 && c <=51){
  if(c%13 == 0)
      temp.value = VALUE_KING;
    else if(c%13 == 1)
      temp.value = VALUE_ACE;
    else if(c%13 == 11)
      temp.value = VALUE_JACK;
    else if(c%13 == 12)
      temp.value = VALUE_QUEEN;
    else
      temp.value = c%13;
       temp.suit = CLUBS;
    }
  return temp;
}
