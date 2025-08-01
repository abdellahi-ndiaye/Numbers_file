#include <iostream>
#include <fstream>

using namespace std;

int main(){
  
    
string file , form;
int cas , ra9m , to , ext;
while (true)
{
  

cout <<"choose one of the following numbers :";
cout <<" \n 1)Mauritel \n 2)Matell \n 3)chingitell \n 4)all \n=> ";
cin >> cas ;
if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "\nError: Please enter a number only.\n" << endl;
            continue;
        }

switch(cas)
{
  
 
    case 1: 
    ra9m = 40000000 ;
    to = 50000000 ;

    break;

    case 2:
    ra9m = 30000000 ;
    to = 40000000 ;

    break;

    case 3:
    ra9m = 20000000 ;
    to = 30000000 ;

    break;

    case 4:
    ra9m = 20000000 ;
    to = 50000000 ;

    break;
    default :
    cout <<"\nError : check the number "<< endl;
    continue;
}


break;
  }

cout << "\nEnter file name :\n=> ";
cin >> file ;
 
cout << "\nFile extension :";
cout << "\n 1)pdf \n 2)txt \n 3)docx \n=> ";
cin >> ext ;

if (ext == 1){
 form = ".pdf";
} else if(ext == 2) {
 form = ".txt";
} else if(ext == 3){
 form = ".docx";
} else{
 cout <<"Error : check the number "<< endl;
 return 0;
}

ifstream checkFile(file + form);
if (checkFile.is_open()) {
    cout << "\nError: File already exists.\n";
    return 0;
}
cout <<"\nLoading...\n";

ofstream outFile(file + form);

    while (ra9m < to)
    {
    outFile << ra9m << "\n" ;
     ra9m++;
    }
 
    outFile.close();
    cout << "The numbers have been saved in the file :"<< file + form << endl;
    return 0;
}