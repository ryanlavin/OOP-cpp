#include <iostream>

int main(){
    // we want to inquire user how big of array they want?
    // the stack memory is declared at the beginning of runtime-> this means we dont neccessarily
    // know how much memory we need in the stack... the way around this is by using the
    // heap. This is called dynamic (dynamic meaning changing) memory allocation, and it is
    // a very important fundamental in c++

    //for example

    int n;
    std::cin>>n;
    std::cout<<"You have entered: "<<n<<std::endl;
    int array[n];

    //if we do this then we dont have the space on the stack -> we must use heap
    // first declare a pointer which points to beginning of array. This means that it
    // doesnt matter how big the array is right now because we are pointing only to the start
    // which we know it has at the very least....

    int *dma = new int[n];
    int *integer = new int; // we are also just gonna dynamically allocate some random int

    // now we have a pointer pointing to beginnining of the array. We also have an array of
    // variable size. Keep in mind the key word new, and also that we declare the pointer value
    // dma. This is why pointers are so important amongst many other things...

    for(int i=0;i<n;i++){
        dma[i] = i;
    }

    for(int i=0;i<n;i++){
        std::cout<<dma[i]<<std::endl;
    }

    // now we have interacted with this array and we want to go ahead and close the program.
    // but wait! we have this memory that is still in the heap. The heap is dynamic. If we dont
    // bring "equilibrium" to the heap, we have something called a memory leak.
    // in order to bring this equilibrium back to the heap memory, we need to delete the memory

    delete[] dma;
    delete integer;

    return 0;
}
