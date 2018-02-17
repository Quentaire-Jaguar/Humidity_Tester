#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstdlib>
using std::string;

class vs_499_01
{
  public:
    vs_499_01(string start)
    {
      startPrime = start;
    }
  	void introMessage()
    {
      cout << "\n===========YTZ 3===========\n"
        	<< "==========================="<<endl;
    }
  private:
    string start;
};

int main()
{
  char ending;
  
  vs_499_01 program("");
  
  program.introMessage();
  
  do
  {
    cout << "\n Enter 'q' to quit: ";
    	cin >> ending;
  }while(ending !='q');
  
  return 0;
}
