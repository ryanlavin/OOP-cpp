#include <iostream>
#include <random>
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
        * If counting an ace as 11 would bring his total to 17 or more
          (but not over 21) he must count the ace as 11 and stand.
    *
*/
int main(){
    const int DECK_SIZE = 52;
    const std::string OrigCardDeck[DECK_SIZE] = { "2-H", "3-H", "4-H", "5-H", "6-H", "7-H", "8-H", "9-H", "10-H", "J-H", "Q-H", "K-H", "A-H", "2-S", "3-S", "4-S", "5-S", "6-S", "7-S", "8-S", "9-S", "10-S", "J-S", "Q-S", "K-S", "A-S", "2-D", "3-D", "4-D", "5-D", "6-D", "7-D", "8-D", "9-D", "10-D", "J-D", "Q-D", "K-D", "A-D", "2-C", "3-C", "4-C", "5-C", "6-C", "7-C", "8-C", "9-C", "10-C", "J-C", "Q-C", "K-C", "A-C" };
    std::string cardDeck[DECK_SIZE] = { "2-H", "3-H", "4-H", "5-H", "6-H", "7-H", "8-H", "9-H", "10-H", "J-H", "Q-H", "K-H", "A-H", "2-S", "3-S", "4-S", "5-S", "6-S", "7-S", "8-S", "9-S", "10-S", "J-S", "Q-S", "K-S", "A-S", "2-D", "3-D", "4-D", "5-D", "6-D", "7-D", "8-D", "9-D", "10-D", "J-D", "Q-D", "K-D", "A-D", "2-C", "3-C", "4-C", "5-C", "6-C", "7-C", "8-C", "9-C", "10-C", "J-C", "Q-C", "K-C", "A-C" };
    int i; // Integer ID for each index in the cardDeck array
    int cardDeckNum[DECK_SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51 };// Not sure if needed or not
    std::string placeHolder;
    int placeHolderNum;
    //std::string playerHand[11];
    int playerHandNum[11];
    //std::string dealerHand[11];
    int dealerHandNum[11];
    bool continueHand;
    bool continueGame;
    bool visible = true; // Boolean value that determines whether a card is visible to the player or not


    //this is all hard to read, Ryan.

    std::string suitType[4] = { "-H", "-S", "-D", "-C" };
    // maybe this is better?\
    // take this and think of how you can restructure your assigned of the cardDeck
    // concatenate the strings

    for(int i = 0;i < 4;i++){

        for(int j = 0;j < 13){

        }
    }


// Cards are shuffled here
    for (int i = 0; i < DECK_SIZE - 1; i++){
        int j = rand() % (DECK_SIZE - 1);
        placeHolder = cardDeck[i];
        placeHolderNum = cardDeckNum[i]; // Mirror of card shuffling with value ID shuffling
        cardDeck[i] = cardDeck[j];
        cardDeckNum[i] = cardDeckNum[j]; // Mirror
        cardDeck[j] = cardDeck[i];
        cardDeckNum[j] = cardDeckNum[i]; // Mirror
    }

/* Two cards are dealt to player & dealer in alternating fashion
    * both of player's cards are face up (visible), the dealer's first card is hidden
    * while the second is visible (with the hidden card displayed as "?") */
    for (int i = 0; i <= 3; i++){
        if (0 == i % 2){
            playerHandNum[i] = cardDeckNum[i];
            std::cout << "The player's card is: " << cardDeck[i] << ". ";
        }
        if (0 != i % 2){
            dealerHandNum[i] = cardDeckNum[i];
            if (i == 1){
                std::cout << "The dealer's card is: ?";
            }
            else if (i == 3){
                std::cout << "The dealer's card is: " << cardDeck[i] << ". ";
            }
        }
        std::cout << "\n";
    }




    return 0;
}

// Outputting the card deck as a whole, for testing
/*
for (int i = 0; i < DECK_SIZE - 1; i++){
        std::cout << cardDeck[i] << " ";
    }
    std::cout << "\n";
*/

// Outputting the card deck & it's associated integer ID as a whole, for testing
/*
for (int i = 0; i < DECK_SIZE - 1; i++){
        std::cout << cardDeckNum[i] << " " << cardDeck[i] << " | ";
    }
    std::cout << "\n";
*/

