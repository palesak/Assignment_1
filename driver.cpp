#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//Creating the struct
struct {
  int numTags;                  //number of tages: counter?
  string tagNames;              // tag name
  string textBetweenTags;       // tags btwn texts
} TagStruct;

void Menu()
{
  string options;
  options = "1. 'r' Read and enter input file\n2. 'p' Print all tags\n3. 'd' write all files to Tag.txt\n4. 'l' Print all tag data to cout\n5. 'q' Quit the program\n";
  cout << options;
  //return ;
}

int Read()
{
  int count = 0;
  int sum = 0;
  string filename;
  string sentence;
  vector <string> arraySentence;
  vector <string> tags;
  cout << "Enter the name of the file you'd like read"  << endl;
  //getline(cin, filename);
  cin >> filename;

  ifstream in(filename);
  if(!in)
  {
    cout << "File cannot be opened\n";
    return 1;
  }

  //int *sentence = new int[size];
  while (getline (in, sentence)) {
  //cout << sentence <<endl;
  arraySentence.push_back(sentence);
}
}

int Print()
{
  int count = 0;
  int sum = 0;
  string filename;
  string sentence;
  vector <string> arraySentence;
  vector <string> tags;
  cout << "Enter the name of the file you'd like read"  << endl;
  //getline(cin, filename);
  cin >> filename;

  ifstream in(filename);
  if(!in)
  {
    cout << "File cannot be opened\n";
    return 1;
  }

  //int *sentence = new int[size];
  while (getline (in, sentence)) {
  //cout << sentence <<endl;
  arraySentence.push_back(sentence);
}

int wordSize;
for (int i = 0; i < arraySentence.size(); ++i)
{
  wordSize = arraySentence[i].length();
  int j = 0; 
  while(j<wordSize)
  {
    sum = 0;
    if(arraySentence[i][j] == '<'&& arraySentence[i][j+1] != '/')
    {
      j++;
      while(arraySentence[i][j]!= '>')
      {
        TagStruct.tagNames+=arraySentence[i][j];
        ++j;
      }
      cout << TagStruct.tagNames<<endl;
      //break;

      TagStruct.tagNames = "";

      sum++;
    }
    ++j;

  }
}


  in.close();
  return 0;

}


int main(void)
{
  string menu;
  char c;
  int menuLen;
  string filename;
  //char listMenu;

  cout << "Enter the option for the operation you would like to perform from the menu" << endl;
  Menu();
  cin >> menu;
  menuLen = menu.length();
  //cout << menuLen<<endl;

  //1. ‘r’ (read and parse a specified input file)
  if (menuLen == 1){
  //c = menu.c_str();
  
  if(menu == "r")
  {
    //cout << menu;
    Read();

  }
  //2. ‘p’ (print all tags - this will list all the tags in arbitrary order, to cout)
  else if(menu == "p")
  {
    Print();


  }
  //3. ‘d’ (dump/write tags and data to a file called tag.txt – see below)
  else if(menu == "d")
  {
    cout << menu;


  }
  //4. ‘l’ (list/print tag data for given tag to cout)
  else if(menu == "l")
  {
    cout << menu;


  }
  //5. ‘q’ quit - exit program
  else if(menu == "q")
  {
    cout << "Program Terminated, goodbye";
    return 0;    
  }
  else{
  cout << c;
  }
  }
  else
  {
    cout << "The input you have entered is too long please try again" << endl;
  }

  return 0;
}
