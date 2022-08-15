//Initializing Three-Dimensional Array: Initialization in a Three-Dimensional array 
//is the same as that of Two-dimensional arrays. 
//The difference is as the number of dimensions increases 
//so the number of nested braces will also increase. 


//data_type array_name[size1][size2]....[sizeN];

//It can hold more data then 2 D
int x[2][3][4] = 
 { //number inside each col = 4 (0,1,2,3)
    //col 0       //col1    //col2                          //Total col=3 (0,1,2)
   { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },//row 0
   { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }//row 1   //Total rows=2 (0,1)
 };
//3 loops required to print, loops increases with dimension