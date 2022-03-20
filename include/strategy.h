
virtual class Strategy{
  virtual void Fold();
  virtual void Pass();
  virtual void Raise(int bet);
};

class User_driving: Strategy{};
class Bot: Strategy{};