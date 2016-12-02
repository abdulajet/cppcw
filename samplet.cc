// You can place the *definitions* of the generic methods here.

// You can place the *definitions* of the generic methods here.

template <typename A_Type> void samplet < A_Type >::print() {
  // prints sample vector to an output stream
  cout << "<" << numbers.size() << ": ";
   for(typename vector<A_Type>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       cout << *i << " ";
  }
   cout << ">";
}

template <typename A_Type> A_Type samplet<A_Type>::minimum() {
  long double n = numbers.size();
  long double min = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] < min){
      min = numbers[i];
    }
  }
  return min;
}

template <typename A_Type> A_Type samplet<A_Type>::maximum() {
  long double n = numbers.size();
  long double max = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] > max){
      max = numbers[i];
    }
  }
  return max;
}

template <typename A_Type> A_Type samplet<A_Type>::range() {
   long double max = maximum();
   long double min = minimum();
  long double range = max - min;

  return range;
}

template <typename A_Type> A_Type samplet<A_Type>::midrange() {
  long double max = maximum();
  long double min = minimum();
  long double midrange = (max + min)/2;

  return midrange;
}

template <typename A_Type> A_Type samplet<A_Type>::mean(){
  long double n = numbers.size();
  long double total = 0;
  long double mean = 0;
  for (int i = 0; i < n; ++i){
    total = total + numbers[i];
  }
  mean = total/n;
  return mean;
}

template <typename A_Type> A_Type samplet<A_Type>::variance(){
  long double m = mean();
  long double n = numbers.size();
  long double tmp = 0;

  for (int i = 0; i < n; i++){
    tmp += (numbers[i] - m)*(numbers[i] - m);
  }
  return tmp/n;
}

template <typename A_Type> A_Type samplet<A_Type>::std_deviation(){
  long double var = variance();
  long double std = sqrt(var);

  return std;
}

template <typename A_Type> A_Type samplet<A_Type>::median(){
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

template <typename A_Type> ostream & operator<< (ostream& s, samplet<A_Type> v){
	v.print();
  return s;
}
