#ifndef HEAD_H
#define	HEAD_H
#include <cstdlib>
#include<cmath>      //mathematical functions
#include <iostream>  //std::cin, std::cout
#include <iomanip>   //input/output manipulation
#include <fstream>   //file stream
using namespace std; //rid of std::

//GLOBAL
int *dangerZone=NULL; //DELETE LATER, POR FAVOR!

//CLASSES
class WalkyTalky
{
	protected:
		int var=0;
		int length=0;
		int x=0, y=0;
		float flow=0.0;
		char c='\0';
	public:
	void Speech(bool speak, bool listen){
		if (speak){
                    ifstream ifs ("text.txt", ifstream::in);
                	while (ifs.good()) {
                	    cout << c;
                	    c = ifs.get();
                	}
                    ifs.close();
		}
		if (listen){
                    ifstream ifs ("text.txt", ifstream::out);
                    char str[256];
                    cout << "What? ";
                    cin.get (str,256);    //get c-string
                    while (ifs.get(c)){    //loop getting single characters
                        cout << c;
                    }
                    ifs.close();           //close file
		}	
	}
};

#endif	/* HEAD_H */

