#include "Cell.h"
using namespace wsp;
class CellList{

	public :
		CellList();
		CellList(int rows, int columns); 
		~CellList();
		void SpawnCells(int bombAmount);
		void ResetList();
		void Draw();
	

	private :
		Cell** cells;	
		int rows, columns;
		Image unClickedCell, mineCell, oneCell, twoCell, threeCell, fourCell, fiveCell, sixCell, sevenCell, eightCell;
};