#include <vector>

int solution(std::vector<std::vector<int>> sizes) 
{
    int W = 0, H = 0;
    
    for(int i= 0; i < sizes.size(); ++i)
    {
        if(sizes[i][0] < sizes[i][1]) 
        {
            if(W < sizes[i][1]) W = sizes[i][1];
            if(H < sizes[i][0]) H = sizes[i][0];
        }
        
        else if(sizes[i][0] > sizes[i][1])
        {
            if(W < sizes[i][0]) W = sizes[i][0];
            if(H < sizes[i][1]) H = sizes[i][1];
        }
        
        else if(sizes[i][0] == sizes[i][1])
        {
            if(W < sizes[i][0]) W = sizes[i][0];
            if(H < sizes[i][1]) H = sizes[i][1];
        }
    }
    
    return W*H;
}