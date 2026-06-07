/*******************************************************************************/
/* Посчитайте количество единиц в произвольном числе.                          */
/*******************************************************************************/

#include <iostream>
#include <algorithm>
int main()
{
    int a = 109411;
    
    std::string str = std::to_string(a);
    
    int count_ones = std::count(str.begin(), str.end(), '1');
    
    std::cout<< count_ones<<std::endl;
    

    return 0;
}
