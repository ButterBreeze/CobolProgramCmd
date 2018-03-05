#include <iostream>

std::string getInput(std::string subject);

int main() {

    std::cout
            << "Hello welcome to the Cobol Program generator, I, ButterBreeze, will be your guide. \n This version of the "
                    "program outputs a csv file that you can import into excel for a printer spacing chart. \n It will also output"
                    "a file that has all the Cobol line definitions and variables.\n Please press enter to continue: ";
    std::cin.get();

    std::string companyName = getInput("company name");
    std::string dateFormat = "99/99/9999";
    std::string pageNumber = "Z9";
    std::string programName = "";



    //getting title line info
    std::string useDate = getInput("if you would like to use date(y/n)");
    if(!(tolower(useDate[0]) == 'n'))
    {
        if(!(tolower(getInput("if you would like to use the default format(y/n)")[0]) =='y') )
        {
            dateFormat = getInput("the format you would like to use");
        }
    }

    if(!(tolower(getInput("if you would like to use the default format for page number(y/n)")[0]) =='y') )
    {
        pageNumber = getInput("the format you would like to use for a page number");
    }



    //subject line info


    programName = getInput("the program name you would like to go off to the side");








    return 0;
}

/**
 *
 * @param  subject of the required input Ex: please enter a "number":
 * @return what the user input
 */
std::string getInput(std::string subject) {
    std::string input = "";
    std::cout << "Please enter " << subject << ": ";
    std::cin >> input;
    return input;
}

