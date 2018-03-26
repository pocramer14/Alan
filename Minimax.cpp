#include <string>
#include <iostream>
#include <cmath>
#include <stdint.h>
#include <list>

#include "Move_gen.cpp"
#include "Eval.cpp"

using namespace std;

class Minimax{
	static string minimax(string FEN, bool white){
		uint64 board = fen_to_bitboard(FEN);
		if(white){
			return maxi(board,10);
		}
		else return mini(board, 10);
	}
	
	static string maxi(uint64 board, int depth){
		if(depth == 0)
			return Eval::evaluate(board);
		int max = INT_MIN;
		
		//still need to determine how to best represent moves
		list<int> moves = Move_gen::generate_moves(board, true);
		
		for(int i = 0; i<moves.size(); i++){
			uint64 child = move(board, moves[i]);
			int score = mini(child, depth-1);
			if(score > max)
				max = score;
		}
		
		return max;
	}
	
	static string mini(string board, int depth){
		if(depth == 0)
			return Eval::evaluate(board);
		int min = INT_MAX;
		
		//still need to determine how to best represent moves
		list<int> moves = Move_gen::generate_moves(board, false);
		
		for(int i = 0; i<moves.size(); i++){
			uint64 child = move(board, moves[i]);
			int score = maxi(child, depth-1);
			if(score < min)
				min = score;
		}
		
		return min;
	}
	
	static uint64 fen_to_bitboard(string FEN){
		//convert board notation from a FEN string to a 64b bitboard
		uint64 board = 0;
		return board;
	}

	static string bitboard_to_fen(uint64 board){
		return "";
	}
	
	static uint64 move(uint64 board, int move){
		uint64 new_board = 0;
		return new_board;
	}
}