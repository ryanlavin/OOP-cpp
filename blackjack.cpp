#include <iostream>
/*
    * Cards are shuffled
    * Two cards are dealt to player & dealer in alternating fashion
        * both of player's cards are face up (visible), the dealer's first card is hidden
        * while the second is visible (with the hidden card displayed as "?")
    * If the total of the player's 2 cards = 21, dealer immediatly starts playing
    * If not, then player is asked whether to hit or stand
        * Continue until either stand or total>21
        * If total > 21, game is over
        * If not, dealer's turn begins
    * Dealer's faced down card is now turned up
        * If total >= 17 dealer must stand, if total <= 16, hit
    *
*/
int main(){
    const int DECK_SIZE
    const char* cardDeck[DECK_SIZE] = { "2-H", "3-H", "4-H", "5-H", "6-H", "7-H", "8-H", "9-H", "10-H", "J-H", "Q-H", "K-H", "A-H", "2-S", "3-S", "4-S", "5-S", "6-S", "7-S", "8-S", "9-S", "10-S", "J-S", "Q-S", "K-S", "A-S", "2-D", "3-D", "4-D", "5-D", "6-D", "7-D", "8-D", "9-D", "10-D", "J-D", "Q-D", "K-D", "A-D", "2-C", "3-C", "4-C", "5-C", "6-C", "7-C", "8-C", "9-C", "10-C", "J-C", "Q-C", "K-C", "A-C" };
    int cardDeckNum[DECK_SIZE];
    bool continueHand;
    bool continueGame;



    return 0;
}




for (int i = 0; i < 52; i++){
        std::cout << cardDeck[i] << " ";
    }
    std::cout << std::endl;
