int solution(int n) 
{
    if(0 != n%2) n -= 1;
    
    if(n <= 2) return n;
    
    n += solution(n-2); 
    
    return n; 
}