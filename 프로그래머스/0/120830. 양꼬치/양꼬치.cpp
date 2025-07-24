int solution(int n, int k) 
{
    int DrinkPrice = 2000 * (k- (n/10));
    int FoodPrice = 12000 * n;
    
    return DrinkPrice + FoodPrice;
}