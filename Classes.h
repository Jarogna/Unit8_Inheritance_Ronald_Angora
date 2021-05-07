class Cost
{
  Private: 
    double tuition;
    double roomAndBoard;
    double travelCost;
    double foodCost;
    double bookCost;
  
  Public:
    Cost() = default;
    void setTution(double t) = { tuition = t; }
    void setRoomAndBoard(double rB) = { roomAndBoard = rB; }
    void setTravelCost(double tC) = { travelCost = tC; }
    void setFoodCost(double fC) = { foodCost = fC; }
    void setBookCost(double bC) = { bookCost = bC; }
    double getTution() const { return tution; }
    double getRoomAndBoard() const { return roomAndBoard; }
    double getTravelCost() const { return travelCost; }
    double getFoodCost() const { return foodCost; }
    double getBookCost() const { return bookCost; } 

  void values()
  {

  }
}

class Semester: public Cost
{

}