#include <iostream>
#include <string>

using namespace std;

int main()
{
	string gui_token; //stores messages recieved from Chess GUI
	
	cout.setf(ios::unitbuf); //send outputs straight to GUI

	while(getline(cin, gui_token)){
		if(gui_token == "uci"){
			cout << "id name Alan" << endl;
			cout << "id author Patrick Cramer" << endl;
			// set options here
			cout << "uciok" << endl;
		}
		elseif(gui_token == "quit"){
			cout << "quitting" << endl;
			break;
		}
		elseif(gui_token == "isready"){
			cout << "readyok" << endl;
		}
		elseif(gui_token == "ucinewgame"){
			//engine logic begins here
		}
	}
	return 0;
}
