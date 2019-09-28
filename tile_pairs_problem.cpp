#include <iostream>

int main(){
    int total_width = 100;
    int tile_width = 5;
    double total_quads = (total_width - tile_width) / (tile_width * 4);
    double number_of_tiles = 1 + 4 * total_quads;
    double end_gap = (total_width - number_of_tiles) / 2;
    std::cout << end_gap << std::endl;
    return 0;

    int total_width = 100;
    int tile_width = 5;
    int number_of_pairs = (total_width - tile_width) / (2 * tile_width);
    double number_of_tiles = 1 + (2 * number_of_pairs);
    double end_gap = (total_width - number_of_tiles * tile_width) / 2;
    std::cout << double(end_gap) << std::endl;
    return 0;

}
