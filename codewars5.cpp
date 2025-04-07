int mango(int quantity, int price)
{   //find out how many we pay for
    int paid = quantity - (quantity / 3);
    //Find out the cost 
    int cost = paid * price;
    //return
    return cost;
}