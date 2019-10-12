/*
Original prompt:

Create a function taking a positive integer as its parameter and returning a string containing the Roman Numeral 
representation of that integer.

Modern Roman numerals are written by expressing each digit separately starting with the left most digit and skipping 
any digit with a value of zero. In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 
is written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending order: MDCLXVI.

*/

//My Code
using namespace std;

string solution(int num){
  int M, D, C, L, X, V, I;
  M = num/ 1000;
  num = num - M * 1000;
  D = num/ 500;
  num = num - D * 500;
  C = num/ 100;
  num = num - C * 100;
  L = num / 50;
  num = num - L * 50;
  X = num / 10;
  num = num - X * 10;
  V = num / 5;
  num = num - V * 5;
  I = num;
  //-------------------
  string result = "";
  for(int i = 1; i<= M; i++)
    result.push_back('M');
  cout<<result<<endl;
  //---MDC
  if(D == 1 && C == 4)
  {
    result.push_back('C');
    result.push_back('M');
    C -= 4;
  }
  else
  {
    for(int i = 1; i<= D; i++)
      result.push_back('D');
  }
  
  if(C==4)
  {
    result.push_back('C');
    result.push_back('D');
  }
  else
  {
    for(int i = 1; i<= C; i++)
      result.push_back('C');
  }
  //---CLX
  if(L == 1 && X == 4)
  {
    result.push_back('X');
    result.push_back('C');
    X -= 4;
  }
  else
  {
    for(int i = 1; i<= L; i++)
      result.push_back('L');
  }
  
  if(X == 4)
  {
    result.push_back('X');
    result.push_back('L');
  }
  else
  {
  for(int i = 1; i<=X; i++)
    result.push_back('X');
  }
  //---XVI
  if(V == 1 && I == 4)
  {
    result.push_back('I');
    result.push_back('X');
    I -= 4;
  }
  else
  {
    for(int i = 1; i<= V; i++)
      result.push_back('V');
  }
  
  if(I == 4)
  {
    result.push_back('I');
    result.push_back('V');
  }
  else
  {
  for(int i = 1; i<=I; i++)
    result.push_back('I');
  }
  
  return result;
  
}
//-------------------------------
//Their Test Bench
Describe(Kata)
{
    It(Fixed_Test)
    {
    Assert::That(solution(182) , Equals("CLXXXII"));
    Assert::That(solution(1990) , Equals("MCMXC"));
    Assert::That(solution(1875) , Equals("MDCCCLXXV"));
    }
};
