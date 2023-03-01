#include <iostream>
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

int main(void)
{
  string menu;
  char c;
  //char listMenu;

  cout << "Enter an option (r,p,d,l) or q to quit, and press return..." << endl;
  Menu();
  cin >> menu;
  //1. ‘r’ (read and parse a specified input file)
  if(c == 'r')
  {
    cout << menu;

  }
  //2. ‘p’ (print all tags - this will list all the tags in arbitrary order, to cout)
  else if(c == 'p')
  {
    cout << menu;


  }
  //3. ‘d’ (dump/write tags and data to a file called tag.txt – see below)
  else if(c == 'd')
  {
    cout << menu;


  }
  //4. ‘l’ (list/print tag data for given tag to cout)
  else if(c == 'l')
  {
    cout << menu;


  }
  //5. ‘q’ (quit - terminate the input loop and exit the program)
  else if(c == 'q')
  {
    cout << menu;

        
  }
  else{
  cout << c;
  }

  return 0;
}
