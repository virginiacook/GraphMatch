
// normal_distribution
#include <iostream>
#include <random>

int main()
{
  const int trials=10000;  // number of experiments
  const int speed=100;    // maximum number of stars to distribute

  std::default_random_engine generator;
  std::normal_distribution<double> distribution(9.0,1.0);

  int p[20]={};

  for (int i=0; i<trials; ++i) {
    double number = distribution(generator);
    if ((number>=0.0)&&(number<20.0)) ++p[int(number)];
  }

  std::cout << "normal_distribution (40.0,2.0):" << std::endl;

  for (int i=0; i<20; ++i) {
    std::cout << i << "-" << (i+1) << ": ";
    std::cout << std::string(p[i]*speed/trials,'*') << std::endl;
  }

  return 0;
}

/*
#include <algorithm>
#include <cstdlib>
#include <iostream>

int main()
{
    int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    std::srand(unsigned(std::time(0)));

    std::random_shuffle(a, a + 8);

    for (int i=0; i<8; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
}
*/
//current plan = to have 10 increments with random slopes from 1-10 to match
//this will probably be easier than gaussian blur, etc.
/*
#include <cstdlib>
#include <algorithm>
#include <iterator>
 
template<typename RandomAccessIterator>
void knuthShuffle(RandomAccessIterator begin, RandomAccessIterator end) {
  for(unsigned int n = end - begin - 1; n >= 1; --n) {
    unsigned int k = rand() % (n + 1);
    if(k != n) {
      std::iter_swap(begin + k, begin + n);
    }
  }

  #include <algorithm>
#include <vector>
 
int main()
{
    int array[] = { 1,2,3,4,5,6,7,8,9 }; // C-style array of integers
    std::vector<int> vec(array, array + 9); // build STL container from int array
 
    std::random_shuffle(array, array + 9); // shuffle C-style array
    std::random_shuffle(vec.begin(), vec.end()); // shuffle STL container
}
}
*/