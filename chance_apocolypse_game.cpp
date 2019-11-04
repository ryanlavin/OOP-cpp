#include <iostream>
#include <cstdlib>

int main(){
    std::cout << "Please input the starting population as an integer" << std::endl;
    int n; // pop
    std::cin >> n;
    bool* pop = new bool[n];
    std::cout << "Now input the starting zombie population as an integer" << std::endl;
    int k;
    int night_count = 0;
    std::cin >> k;
    if (k > n){
          std::cout << "Error, there cannot be more zombies than the whole population" << std::endl;
          return 1;
        }
    else{
        for (int i = 0; i < k; i++){
        pop[i] = true;
        }
        for (int i = k+1; i < n; i++){
        pop[i] = false;
        }
    }

    for (int i = 0; i < n; i++){
        std::cout << pop[i] << " ";
    }

    std::cout << "\n";
    std::cout << std::endl;
    do{
        for (int i = 0; i <= k; i++){
            int new_z = rand() % n;
            pop[new_z] = true;
        }
        int i = k;
        int j = n;
        while (i < j){
            if (pop[i] == false){
                bool extraVar = pop[i];
                pop[i] = pop[j];
                pop[j] = extraVar;
                j--;
            }
            else{
                i++;
            }
        }
        for (int i = 0; i < n; i++){
        std::cout << pop[i] << " ";
        }
        std::cout << "\n";
        k = 0;
        for (int i = 0; i < n; i++){
            if (pop[i] == true){
                k++;
            }

        }
        night_count++;
    } while (pop[n-1] != true);

    for (int i = 0; i < n; i++){
        std::cout << pop[i] << " ";
    }
    std::cout << "\n";
    std::cout << "After " << night_count << " nights the last remaining human perished." << std::endl;
    delete[] pop;
    return 0;
}


/*
for (int i = 0; i < n; i++){
        std::cout << pop[i] << " ";
    }
    std::cout << "\n";
*/
