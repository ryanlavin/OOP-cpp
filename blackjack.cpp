#include <iostream>
#include <random>
#include <ctime>
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
*/

struct card{
    std::string label;
    int value;
};

// Function that tests whether the player's deck has an ace and changes that ace's value to 1
int dealerCheckForAce(int dealerCount,int dealerHandIndex ,card (dealerHand[dealerHandIndex])){
    if (dealerCount > 21){
        for (int i = 0; i < dealerHandIndex+1; i++){
            if(dealerHand[i].value == 11){
                dealerHand[i].value = 1;
                dealerCount = 0;
                for (int j = 0; j < dealerHandIndex+1; j++){
                    dealerCount += dealerHand[j].value;
                }
                return dealerCount;
            }
            else if(dealerHand[i].value != 11){
                continue;
            }
        }
    }
    else if(dealerCount <= 21){
        return dealerCount;
    }
    return dealerCount;
}

int playerCheckForAce(int playerCount,int playerHandIndex ,card (playerHand[playerHandIndex])){//card (&playerHand)[playerHandIndex]){
    if (playerCount > 21){
        for (int i = 0; i < playerHandIndex+1; i++){
            if(playerHand[i].value == 11){
                playerHand[i].value = 1;
                playerCount = 0;
                for (int j = 0; j < playerHandIndex+1; j++){
                    playerCount += playerHand[j].value;
                }
                return playerCount;
            }
            else if(playerHand[i].value != 11){
                continue;
            }
        }
    }
    else if(playerCount <= 21){
        return playerCount;
    }
    return playerCount;
}

int main(){
    const int DECK_SIZE = 52; // Deck size
    const int HAND_SIZE = 11; // Maximum amount of cards a player can hold
    std::string placeHolder; // For shuffling deck
    int placeHolderNum; // For shuffling deck
    card cardDeck[DECK_SIZE]; // array of type card
    card playerHand[DECK_SIZE]; // Player's hand
    card dealerHand[DECK_SIZE]; // Dealer's hand
    bool hideCard; // Used to determine whether or not to hide the dealer's card
    int playerCount; // Keeps track of the value of the player's hand
    int dealerCount; // Keeps track of the value of the dealer's hand
    std::string suitType[5] = { "Y", "H", "S", "D", "C" };
    std::string cardLabel[13] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    int cardValue[13] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11 };
    for (int i = 1; i < 5; i++){
        for (int j = 0; j < 13; j++){
            int z;
            cardDeck[z].label = cardLabel[j] + "-" + suitType[i];
            cardDeck[z].value = cardValue[j];
            z++;
        }
    }
    //for testing before shuffle
    for (int i = 0; i < DECK_SIZE; i++){
        std::cout << cardDeck[i].label << " ";
    }
    std::cout << "\n";

    // Cards are shuffled here
    srand(time(NULL)); // Makes the shuffling actually random
    for (int i = DECK_SIZE-1; i > 0; i--){
        int j = rand() % (i);
        placeHolder = cardDeck[j].label;
        placeHolderNum = cardDeck[j].value; // Mirror of card shuffling with value ID shuffling
        cardDeck[j].label = cardDeck[i].label;
        cardDeck[j].value = cardDeck[i].value; // Mirror
        cardDeck[i].label = placeHolder;
        cardDeck[i].value = placeHolderNum; // Mirror
    }

// For testing post shuffle
    for (int i = 0; i < DECK_SIZE; i++){
        std::cout << cardDeck[i].label << " ";
    }
    std::cout << "\n";

/*
    * Two cards are dealt to player & dealer in alternating fashion
    * both of player's cards are face up (visible), the dealer's first card is hidden
    * while the second is visible (with the hidden card displayed as "?")
*/
for (int y = 0; y <=2; y++){
    for (int i = 0; i <= 3; i++){
        if (0 == i % 2){
            playerHand[y].value = cardDeck[i].value;
            playerHand[y].label = cardDeck[i].label;
            y++;
        }
        if (0 != i % 2){
            if (i == 1){
                dealerHand[0].value = cardDeck[i].value;
                dealerHand[0].label = "?";
            }
            else if (i == 3){
                dealerHand[1].value = cardDeck[i].value;
                dealerHand[1].label = cardDeck[i].label;
            }
        }

    }
}
    playerCount = playerHand[0].value + playerHand[1].value;
    dealerCount = dealerHand[0].value + dealerHand[1].value;
    std::cout << "Dealer: " << dealerHand[0].label << " " << dealerHand[1].label;
    std::cout << "\n";
    std::cout << "Player: " << playerHand[0].label << " " << playerHand[1].label;
    std::cout << "\n";
    int cardCount = 4; // The number of cards that have been played, used to determine what index of cardDeck I need to refer to
    int playerHandIndex = 2; // Used to determine what index of player's deck I need to refer to


    std::cout << "Type 'h' to hit or 's' to stay" << std::endl;
    char input;
    if (playerCount <= 20){
        std::cin.get(input);
    }
    if (input != 's' && input != 'h') {std::cout << "Invalid input, restart the game and try again" << std::endl; return 1;}
    while(input == 'h' && playerCount < 21){
        playerHand[playerHandIndex].value = cardDeck[cardCount].value;
        playerHand[playerHandIndex].label = cardDeck[cardCount].label;
        cardCount++;
        playerCount += playerHand[playerHandIndex].value;
        playerCount = playerCheckForAce(playerCount, playerHandIndex, playerHand);
        playerHandIndex++;
        if (playerCount > 21){
            std::cout << "Bust" << std::endl;
            std::cout << "Lose " << playerCount << " " << dealerCount << std::endl;
            break;
        }
        if (playerCount == 21){
            std::cout << "Win " << playerCount << " " << dealerCount << std::endl;
            break;
        }
        std::cout << "Player: ";
        for(int i=0;i<playerHandIndex;i++){
            std::cout<<playerHand[i].label<<" ";
        }
        std::cout << ", would you like to hit again?" << std::endl;
        std::cin >> input;
        if (input == 'h'){ continue; }
        else if (input == 's') { std::cout<<playerCount<<std::endl; break; }
    }

/*
    Dealer's faced down card is now turned up
        * If total >= 17 dealer must stand, if total <= 16, hit
        * If counting an ace as 11 would bring his total to 17 or more
          (but not over 21) he must count the ace as 11 and stand.
*/
    int dealerHandIndex = 2; // Used to determine what index of dealer's deck I need to refer to
    if (dealerCount < 17 && playerCount < 21){
        while (dealerCount <= 17){
            dealerHand[dealerHandIndex].value = cardDeck[cardCount].value;
            dealerHand[dealerHandIndex].label = cardDeck[cardCount].label;
            cardCount++;
            dealerCount += dealerHand[dealerHandIndex].value;
            dealerCount = dealerCheckForAce(dealerCount, dealerHandIndex, dealerHand);
            dealerHandIndex++;
            if (dealerCount > 21){
                std::cout << "Dealer busts" << std::endl;
                std::cout << "Win " << playerCount << " " << dealerCount << std::endl;
                break;
            }
            if(dealerCount >= 17 && dealerCount <= 21){
                if(dealerCount > playerCount){
                    std::cout << "Lose " << playerCount << " " << dealerCount << std::endl;
                    break;
                }
                if(dealerCount < playerCount){
                    std::cout << "Win " << playerCount << " " << dealerCount << std::endl;
                    break;
                }
                if(dealerCount == playerCount){
                    std::cout << "Tie " << playerCount << " " << dealerCount << std::endl;
                    break;
                }
            }
        }
    }
    else if(dealerCount >= 17 && playerCount < 21){
        if(dealerCount > playerCount){
            std::cout << "Lose " << playerCount << " " << dealerCount << std::endl;
        }
        if(dealerCount < playerCount){
            std::cout << "Win " << playerCount << " " << dealerCount << std::endl;
        }
        if(dealerCount == playerCount){
            std::cout << "Tie " << playerCount << " " << dealerCount << std::endl;
        }
    }


    return 0;
}


// Old way of changing dealer's ace value, now inputted into a function and improved
/*
            if(dealerHand[dealerHandIndex].value == 11 && dealerCount > 21){
                dealerHand[dealerHandIndex].value = dealerHand[dealerHandIndex].value - 10;
                dealerCount = dealerCount - 10;
            }
*/

// Old way of changing player's ace value, now inputted into a function and improved
/*
        if(playerHand[playerHandIndex].value == 11 && playerCount > 21){
            playerHand[playerHandIndex].value = playerHand[playerHandIndex].value - 10;
            playerCount = playerCount - 10;
        }
*/
