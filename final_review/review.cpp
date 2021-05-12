#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vtrNames;
    std::string strName = "";

    do
    {
        std::cout << "Please enter a name (quit to quit): ";
        std::cin >> strName;
        if (strName != "quit")
        {
            vtrNames.push_back(strName); // Adding to the vector
            std::cout << "Size: " << vtrNames.size() << std::endl;
        }

    } while (strName != "quit");

    //vtrNames.push_back("Chris"); // Adding to the vector
    //vtrNames.push_back("Brandi"); // Adding to the vector
    //vtrNames.push_back("Daniel");
    //vtrNames.push_back("Sean");

    //vtrNames.pop_back();

    //std::cout << "Size: " << vtrNames.size() << std::endl;

    std::cout << "Index Location: " << 3 << " Variable Stored at that Index: " << vtrNames.at(3) << std::endl;


    for (int intIndex = 0; intIndex < vtrNames.size(); intIndex++)
    {

        std::cout << "Index Location: " << intIndex << " Variable Stored at that Index: " << vtrNames.at(intIndex) << std::endl;
    }

    return 0;
}