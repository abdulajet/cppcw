// You can place the *definitions* of the generic methods here.

template <class A_Type> void sample::print() {
  // prints sample vector to an output stream
  cout << "<" << numbers.size() << ": ";
   for(vector<long double>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       cout << *i << " ";
  }
   cout << ">";
}

template <class A_Type> A_Type sample<A_Type>::minimum() {
  long double n = numbers.size();
  long double min = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] < min){
      min = numbers[i];
    }
  }
  return min;
}

template <class A_Type> A_Type sample<A_Type>::maximum() {
  long double n = numbers.size();
  long double max = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] > max){
      max = numbers[i];
    }
  }
  return max;
}

template <class A_Type> A_Type sample<A_Type>::range() {
   long double max = maximum();
   long double min = minimum();
  long double range = max - min;

  return range;
}

template <class A_Type> A_Type sample<A_Type>::midrange() {
  long double max = maximum();
  long double min = minimum();
  long double midrange = (max + min)/2;

  return midrange;
}

template <class A_Type> A_Type sample<A_Type>::mean(){
  long double n = numbers.size();
  long double total = 0;
  long double mean = 0;
  for (int i = 0; i < n; ++i){
    total = total + numbers[i];
  }
  mean = total/n;
  return mean;
}

template <class A_Type> A_Type sample<A_Type>::variance(){
  long double m = mean();
  long double n = numbers.size();
  long double tmp = 0;

  for (int i = 0; i < n; i++){
    tmp += (numbers[i] - m)*(numbers[i] - m);
  }
  return tmp/n;
}

template <class A_Type> A_Type sample<A_Type>::std_deviation(){
  long double var = variance();
  long double std = sqrt(var);

  return std;
}

template <class A_Type> A_Type sample<A_Type>::median(){
  size_t n = numbers.size();
  long double median = 0;

  sort(numbers.begin(), numbers.end());

  if (n % 2 == 0){
    median = (numbers[n/2 - 1] + numbers[n/2])/2;
	      }
  else {
    median = numbers[n/2];
    }
    return median;
}
