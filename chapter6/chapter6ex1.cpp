// Christmas Tree Function Program
// Chris M - 20210422
#include <iostream>

void printTree(int intpHeight) {
    int intNumberofLeaves = 1;
    for(int intBranches = 1; intBranches < intpHeight; intBranches++) {
        //Add spaces before printing the branches
        for(int intCountSpace = (intpHeight - intBranches); intCountSpace > 0; intCountSpace--) {
            std::cout << " ";
        }
        //Print out the number of leaves based on the branch
        for(int intCountLeaves = 1; intCountLeaves <= intNumberofLeaves; intCountLeaves++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        //Add leaves for the next branch
        intNumberofLeaves += 2;
    }
    for(int intCountSpace = (intpHeight - 1); intCountSpace > 0; intCountSpace--) {
            std::cout << " ";
    }
    std::cout << "*" << std::endl;
}

int main() {

    int intNumberofLine = 5;

    std::cout << std::endl;

    printTree(intNumberofLine);

    std::cout << std::endl;

    //printTree(intNumberofLine + 2);

    return 0;
}