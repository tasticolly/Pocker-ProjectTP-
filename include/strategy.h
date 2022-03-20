
virtual class Strategy{
  virtual void Fold();
  virtual void Pass();
  virtual void Raise(int bet);
  virtual void All_in();
};

class User_driving: Strategy{};
class Bot: Strategy{};