void init_Chess_6_Type()
{
    //win
    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE] = WIN;

    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_NONE] = WIN;
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE] = WIN;

    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_BLACK] = WIN;
    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE] = WIN;

    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_BOUND] = WIN;
    chess_6_type[C_BOUND][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_WHITE] = WIN;
    
    
    //LOSE
    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK] = LOSE;

    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_NONE] = LOSE;
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK] = LOSE;

    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_WHITE] = LOSE;
    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK] = LOSE;

    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BOUND] = LOSE;
    chess_6_type[C_BOUND][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_BLACK] = LOSE;

    //white_live_4
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_NONE] = WHITE_LIVE_4;
    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE] = WHITE_LIVE_4;
    chess_6_type[C_WHITE][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_NONE] = WHITE_LIVE_4;
    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_NONE] = WHITE_LIVE_4;

    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_WHITE] = WHITE_LIVE_4;
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_WHITE] = WHITE_LIVE_4;
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_WHITE] = WHITE_LIVE_4;

    //black_live_4
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_NONE] = BLACK_LIVE_4;
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_BLACK] = BLACK_LIVE_4;
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_BLACK] = BLACK_LIVE_4;
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BLACK] = BLACK_LIVE_4;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_BLACK] = BLACK_LIVE_4;

    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE] = BLACK_LIVE_4;
    chess_6_type[C_BLACK][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_NONE] = BLACK_LIVE_4;
    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_NONE] = BLACK_LIVE_4;
    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_NONE] = BLACK_LIVE_4;

    //white_sleep_4
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_BLACK] = WHITE_SLEEP_4;
    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_BLACK] = WHITE_SLEEP_4;
    chess_6_type[C_WHITE][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_BLACK] = WHITE_SLEEP_4;
    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_BLACK] = WHITE_SLEEP_4;
    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_BLACK] = WHITE_SLEEP_4;

    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_WHITE][C_WHITE][C_NONE] = WHITE_SLEEP_4;
    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_WHITE] = WHITE_SLEEP_4;
    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_WHITE] = WHITE_SLEEP_4;
    chess_6_type[C_BLACK][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_WHITE] = WHITE_SLEEP_4;
    chess_6_type[C_BLACK][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_WHITE] = WHITE_SLEEP_4;

    //black_sleep_4
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_WHITE] = BLACK_SLEEP_4;
    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_WHITE] = BLACK_SLEEP_4;
    chess_6_type[C_BLACK][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_WHITE] = BLACK_SLEEP_4;
    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_WHITE] = BLACK_SLEEP_4;
    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_WHITE] = BLACK_SLEEP_4;

    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_BLACK][C_BLACK][C_NONE] = BLACK_SLEEP_4;
    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_BLACK] = BLACK_SLEEP_4;
    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_BLACK] = BLACK_SLEEP_4;
    chess_6_type[C_WHITE][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BLACK] = BLACK_SLEEP_4;
    chess_6_type[C_WHITE][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_BLACK] = BLACK_SLEEP_4;
    
    //white_live_3
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_NONE] = WHITE_LIVE_3;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE] = WHITE_LIVE_3;
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_NONE] = WHITE_LIVE_3;

    //black_live_3
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_NONE] = BLACK_LIVE_3;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE] = BLACK_LIVE_3;
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_NONE] = BLACK_LIVE_3;

    //white_sleep_3
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_NONE][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_WHITE][C_NONE][C_NONE][C_WHITE][C_WHITE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_NONE][C_WHITE][C_WHITE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_NONE][C_WHITE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_NONE][C_WHITE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_WHITE][C_NONE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_WHITE][C_NONE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_WHITE][C_WHITE][C_NONE][C_WHITE][C_NONE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_WHITE][C_WHITE][C_NONE][C_WHITE][C_NONE][C_BLACK] =WHITE_SLEEP_3;

    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_NONE][C_NONE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_WHITE][C_WHITE][C_WHITE][C_NONE][C_NONE][C_BLACK] =WHITE_SLEEP_3;




    chess_6_type[C_BOUND][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_NONE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_WHITE][C_NONE][C_NONE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_NONE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_NONE][C_WHITE][C_NONE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_NONE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_NONE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_WHITE][C_WHITE][C_WHITE][C_NONE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_WHITE][C_WHITE][C_NONE][C_NONE][C_WHITE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_NONE][C_NONE][C_WHITE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_WHITE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_WHITE][C_NONE][C_WHITE][C_WHITE][C_WHITE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_WHITE][C_WHITE][C_NONE][C_WHITE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_WHITE][C_WHITE][C_NONE][C_WHITE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_WHITE][C_NONE][C_WHITE][C_WHITE] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_WHITE][C_NONE][C_WHITE][C_WHITE] =WHITE_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_NONE][C_WHITE][C_WHITE][C_BOUND] =WHITE_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_NONE][C_WHITE][C_WHITE][C_BLACK] =WHITE_SLEEP_3;



    //black_sleep_3

    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_NONE][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_BLACK][C_NONE][C_NONE][C_BLACK][C_BLACK][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_NONE][C_BLACK][C_BLACK][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_NONE][C_BLACK][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_NONE][C_BLACK][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_BLACK][C_NONE][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_BLACK][C_NONE][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_BLACK][C_BLACK][C_NONE][C_BLACK][C_NONE][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_BLACK][C_BLACK][C_NONE][C_BLACK][C_NONE][C_WHITE] =BLACK_SLEEP_3;

    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_NONE][C_NONE][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_BLACK][C_BLACK][C_BLACK][C_NONE][C_NONE][C_WHITE] =BLACK_SLEEP_3;




    chess_6_type[C_BOUND][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_NONE] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_BLACK][C_NONE][C_NONE] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_NONE] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_NONE][C_BLACK][C_NONE] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_NONE] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_NONE] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_BLACK][C_BLACK][C_BLACK][C_NONE] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_BLACK][C_BLACK][C_NONE][C_NONE][C_BLACK] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_NONE][C_NONE][C_BLACK] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BLACK] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_BLACK][C_NONE][C_BLACK][C_BLACK][C_BLACK] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_BLACK][C_BLACK][C_NONE][C_BLACK] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_BLACK][C_BLACK][C_NONE][C_BLACK] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_BLACK][C_NONE][C_BLACK][C_BLACK] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_BLACK][C_NONE][C_BLACK][C_BLACK] =BLACK_SLEEP_3;

    chess_6_type[C_BOUND][C_NONE][C_NONE][C_BLACK][C_BLACK][C_BOUND] =BLACK_SLEEP_3;
    chess_6_type[C_WHITE][C_NONE][C_NONE][C_BLACK][C_BLACK][C_BLACK] =BLACK_SLEEP_3;

    //white_live_2
    chess_6_type[C_NONE][C_WHITE][C_WHITE][C_NONE][C_NONE][C_NONE] =WHITE_LIVE_2;
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_WHITE][C_NONE][C_NONE] =WHITE_LIVE_2;
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_NONE][C_WHITE][C_NONE] =WHITE_LIVE_2;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_WHITE][C_NONE][C_NONE] =WHITE_LIVE_2;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_NONE][C_WHITE][C_NONE] =WHITE_LIVE_2;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_WHITE][C_WHITE][C_NONE] =WHITE_LIVE_2;
    //black_live_2
    chess_6_type[C_NONE][C_BLACK][C_BLACK][C_NONE][C_NONE][C_NONE] =BLACK_LIVE_2;
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_BLACK][C_NONE][C_NONE] =BLACK_LIVE_2;
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_NONE][C_BLACK][C_NONE] =BLACK_LIVE_2;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_NONE][C_NONE] =BLACK_LIVE_2;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_NONE][C_BLACK][C_NONE] =BLACK_LIVE_2;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_BLACK][C_BLACK][C_NONE] =BLACK_LIVE_2;

    //white_sleep_2
    chess_6_type[C_NONE][C_NONE][C_NONE][C_WHITE][C_WHITE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_WHITE][C_WHITE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_NONE][C_NONE][C_WHITE][C_NONE][C_WHITE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_NONE][C_WHITE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_NONE][C_WHITE][C_NONE][C_NONE][C_WHITE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_NONE][C_WHITE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_NONE][C_NONE][C_WHITE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_WHITE][C_NONE][C_NONE][C_NONE][C_WHITE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_NONE][C_NONE][C_WHITE][C_WHITE][C_NONE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_WHITE][C_NONE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_NONE][C_WHITE][C_NONE][C_WHITE][C_NONE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_WHITE][C_NONE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_NONE][C_WHITE][C_NONE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_WHITE][C_NONE][C_NONE][C_WHITE][C_NONE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_NONE][C_NONE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_WHITE][C_NONE][C_WHITE][C_NONE][C_NONE][C_BOUND] =WHITE_SLEEP_2;

    chess_6_type[C_WHITE][C_WHITE][C_NONE][C_NONE][C_NONE][C_BLACK] =WHITE_SLEEP_2;
    chess_6_type[C_WHITE][C_WHITE][C_NONE][C_NONE][C_NONE][C_BOUND] =WHITE_SLEEP_2;


    

    chess_6_type[C_BLACK][C_NONE][C_NONE][C_NONE][C_WHITE][C_WHITE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_NONE][C_NONE][C_WHITE][C_WHITE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_NONE][C_WHITE][C_NONE][C_WHITE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_NONE][C_WHITE][C_NONE][C_WHITE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_WHITE][C_NONE][C_NONE][C_WHITE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_WHITE][C_NONE][C_NONE][C_WHITE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_WHITE][C_NONE][C_NONE][C_NONE][C_WHITE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_WHITE][C_NONE][C_NONE][C_NONE][C_WHITE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_NONE][C_WHITE][C_WHITE][C_NONE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_NONE][C_WHITE][C_WHITE][C_NONE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_WHITE][C_NONE][C_WHITE][C_NONE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_WHITE][C_NONE][C_WHITE][C_NONE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_WHITE][C_NONE][C_NONE][C_WHITE][C_NONE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_WHITE][C_NONE][C_NONE][C_WHITE][C_NONE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_WHITE][C_NONE][C_WHITE][C_NONE][C_NONE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_WHITE][C_NONE][C_WHITE][C_NONE][C_NONE] =WHITE_SLEEP_2;

    chess_6_type[C_BLACK][C_WHITE][C_WHITE][C_NONE][C_NONE][C_NONE] =WHITE_SLEEP_2;
    chess_6_type[C_BOUND][C_WHITE][C_WHITE][C_NONE][C_NONE][C_NONE] =WHITE_SLEEP_2;
    
    
    //black_sleep_2
    chess_6_type[C_NONE][C_NONE][C_NONE][C_BLACK][C_BLACK][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_BLACK][C_BLACK][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_NONE][C_NONE][C_BLACK][C_NONE][C_BLACK][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_NONE][C_BLACK][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_NONE][C_BLACK][C_NONE][C_NONE][C_BLACK][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_NONE][C_BLACK][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_NONE][C_NONE][C_BLACK][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_BLACK][C_NONE][C_NONE][C_NONE][C_BLACK][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_NONE][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_BLACK][C_NONE][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_NONE][C_BLACK][C_NONE][C_BLACK][C_NONE][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_BLACK][C_NONE][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_NONE][C_BLACK][C_NONE][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_BLACK][C_NONE][C_NONE][C_BLACK][C_NONE][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_NONE][C_NONE][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_BLACK][C_NONE][C_BLACK][C_NONE][C_NONE][C_BOUND] =BLACK_SLEEP_2;

    chess_6_type[C_BLACK][C_BLACK][C_NONE][C_NONE][C_NONE][C_WHITE] =BLACK_SLEEP_2;
    chess_6_type[C_BLACK][C_BLACK][C_NONE][C_NONE][C_NONE][C_BOUND] =BLACK_SLEEP_2;


    

    chess_6_type[C_WHITE][C_NONE][C_NONE][C_NONE][C_BLACK][C_BLACK] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_NONE][C_NONE][C_BLACK][C_BLACK] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_NONE][C_BLACK][C_NONE][C_BLACK] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_NONE][C_BLACK][C_NONE][C_BLACK] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_BLACK][C_NONE][C_NONE][C_BLACK] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_BLACK][C_NONE][C_NONE][C_BLACK] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_BLACK][C_NONE][C_NONE][C_NONE][C_BLACK] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_BLACK][C_NONE][C_NONE][C_NONE][C_BLACK] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_NONE][C_BLACK][C_BLACK][C_NONE] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_NONE][C_BLACK][C_BLACK][C_NONE] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_NONE][C_BLACK][C_NONE][C_BLACK][C_NONE] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_NONE][C_BLACK][C_NONE][C_BLACK][C_NONE] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_BLACK][C_NONE][C_NONE][C_BLACK][C_NONE] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_BLACK][C_NONE][C_NONE][C_BLACK][C_NONE] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_BLACK][C_NONE][C_BLACK][C_NONE][C_NONE] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_BLACK][C_NONE][C_BLACK][C_NONE][C_NONE] =BLACK_SLEEP_2;

    chess_6_type[C_WHITE][C_BLACK][C_BLACK][C_NONE][C_NONE][C_NONE] =BLACK_SLEEP_2;
    chess_6_type[C_BOUND][C_BLACK][C_BLACK][C_NONE][C_NONE][C_NONE] =BLACK_SLEEP_2;

    //white_live_1
    chess_6_type[C_NONE][C_WHITE][C_NONE][C_NONE][C_NONE][C_NONE] =WHITE_LIVE_1;
    chess_6_type[C_NONE][C_NONE][C_WHITE][C_NONE][C_NONE][C_NONE] =WHITE_LIVE_1;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_WHITE][C_NONE][C_NONE] =WHITE_LIVE_1;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_NONE][C_WHITE][C_NONE] =WHITE_LIVE_1;
    
    
    //black_live_1
    chess_6_type[C_NONE][C_BLACK][C_NONE][C_NONE][C_NONE][C_NONE] =BLACK_LIVE_1;
    chess_6_type[C_NONE][C_NONE][C_BLACK][C_NONE][C_NONE][C_NONE] =BLACK_LIVE_1;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_BLACK][C_NONE][C_NONE] =BLACK_LIVE_1;
    chess_6_type[C_NONE][C_NONE][C_NONE][C_NONE][C_BLACK][C_NONE] =BLACK_LIVE_1;
}