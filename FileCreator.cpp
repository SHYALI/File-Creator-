#include<iostream>
#include<string>
#include<fstream>

int main(){
    bool exit = false; // whether the application should keep running or exit 
    while(!exit){
        std::string name; //the name of the file {path included}
        std::string content; // the content of the file 
        std::ofstream outfile;

        int option;
        std::cout << "menu" << std::endl;
        std::cout << "[1] create a new file" <<std::endl;
        std::cout << "[2] exit" << std::endl;

        std::cout << "filecreator> please choose an option ";
        std::cin>> option;

        switch(option)
        {
            case 1:
            //get the file name from user 
            std::cout << "filecreator> enter the name of the file: ";
            std::cin >> name;

            //get the file content from user 
            std::cin.ignore();
            std::cout << "filecreator>enter the content of the file ";
            std::getline(std::cin,content);

            //create the file 
            outfile.open(name);
            outfile<< content <<std::endl;
            outfile.close();

            std::cout << "the file was created successfully!"<<std::endl;
            break;

            case 2:
            std::cout<<"exiting out of the application " << std::endl;
            exit = true ;
            break;
        }
    }
}