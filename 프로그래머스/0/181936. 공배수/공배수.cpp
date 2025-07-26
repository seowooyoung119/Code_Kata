int solution(int number, int n, int m) 
{
    return (0 == number %n && 0 == number % m) ? 1 : 0;  
}