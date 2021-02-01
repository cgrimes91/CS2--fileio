// Chris Grimes
// Lab Week 3 fileio
// CS 23001

#include<iostream>
#include<fstream>

void fileIoRead(){
std::ifstream file ("fileio-text.txt");
     if(!file.is_open()){
	std::cout<<"Unable to open file!"<<std::endl;
	}
	else{
            char ch;
	    file.get(ch);
	    while(ch != ' '){
                std::cout<<ch;
                file.get(ch);
	    }
	    std::cout<<std::endl;
	    file.close();
	}
}

void fileIoAdd(){
std::ifstream file_2 ("fileio-data-1.txt");
 char ch;
 int lhs=0, rhs=0;
    if(!file_2.is_open()){
        std::cout<<"Unable to open file!"<<std::endl;
        }
        else{
          if(!file_2.eof())
	    file_2>>lhs;
          if(!file_2.eof())
            file_2>>ch;
          if(!file_2.eof())
            file_2>>rhs;
	}
    std::cout<<std::endl;
    file_2.close();
    int result= lhs + rhs;
    std::cout<< result;
}

int main(){

fileIoRead();
fileIoAdd();

}
