#include <iostream>
using namespace std;


struct {
  int numTags;                  //number of tages: counter?
  string tagNames;              // tag name
  string textBetweenTags;       // tags btwn texts
} TagStruct;

int main(int argc, char *argv[])
{
    TagStruct.numTags = 5;
    cout << TagStruct.numTags;
}
