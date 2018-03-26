#include <string>
#include <iostream>
#include <cmath>
#include <stdint.h>
#include <list>

using namespace std;

class Move_gen{

	static list<int> generate_moves(uint64 board, bool white){
		list<int> *moves = new list<int>();
		if(in_check(board, white))
			generate_evasions(moves, board, white);
		else{
			generate_captures(moves, board, white);
			generate_noncaptures(moves, board, white);
		}
		
		return *moves;
	}

	static void generate_evasions(list<int> *moves, uint64 board, bool white){
		return;
	}
	
	static void generate_captures(list<int> *moves, uint64 board, bool white){
		return;
	}
	
	static void generate_noncaptures(wcerrist<int> *moves, uint64 board, bool white){
		return;
	}
	
	static bool in_check(uint64 board, bool white){
		return true;
	}
	
	static bool move_is_legal(uint64 board, int move){
		return true;
	}
}