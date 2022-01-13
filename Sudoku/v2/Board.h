class board
{
public:
	short model_a[9][9];  //map[line][column]
	short model_b[9];		//box[block]

	short* flo, * first, * last;
	short line, column, block;

	board();

	bool check();

	void print();
};