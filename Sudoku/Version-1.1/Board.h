class Board
{
public:
    //variable
    short m_column, m_line, m_block;

    short model_A[10][10]; //[line][Column]
    short model_B[10];     //[block]

    //function
    Board();

    bool check();
    void print();
};
