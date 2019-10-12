/*
Question Provided:

Some numbers have funny properties. For example:

89 --> 8¹ + 9² = 89 * 1

695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2

46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51

Given a positive integer n written as abcd... (a, b, c, d... being digits) and a positive integer p

we want to find a positive integer k, if it exists, such as the sum of the digits of n taken to the successive powers of p is equal to k * n.
In other words:

Is there an integer k such as : (a ^ p + b ^ (p+1) + c ^(p+2) + d ^ (p+3) + ...) = n * k

If it is the case we will return k, if not return -1.

Note: n and p will always be given as strictly positive integers.
*/


//My code, the only thing provided thas the public declaration with its parameters
//Andrew Beechko
//10/11/2019

#include<cmath>

using namespace std;


class DigPow
{
public:
  static int digPow(int n, int p);

};

int DigPow:: digPow(int n, int p)
{
  vector<int> numbvector;
  int in = n;
  while(in) //First, convert your input n into a vector of ints 
  {
    int digit = in % 10;
    in = in / 10;
    numbvector.push_back(digit);
    cout<< "numvec "<<digit<<endl;
  }
  int k = 0;
  //then, find k which is the result of a ^ p + b ^ (p+1) + ...
  for(int i = numbvector.size() - 1; i >= 0 ; i--)
  {
    k = k + pow(numbvector[i],  p);
    p = p + 1;
    cout<<"K: "<<k<<endl;
    cout<<"P: "<<p<<endl;
  }
  //then, check to see if k is divisible by n
  int res = k % n;
  if(res == 0)//if it is, output the multiple of n that works
    return k / n;
  else
    return -1;//fail statement
};

//--------------------------------------------------------------------------------
//Test File that was provided

void testequal(int ans, int sol) {
      Assert::That(ans, Equals(sol));
}
void dotest(int n, int p, int expected)
{
    testequal(DigPow::digPow(n, p), expected);
}

Describe(digPow_Tests)
{
    It(Fixed__Tests)
    {
      dotest(89, 1, 1);
      dotest(92, 1, -1);
      dotest(46288, 3, 51);
      dotest(114, 3, 9);
    }
};  

