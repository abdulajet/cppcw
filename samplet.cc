// You can place the *definitions* of the generic methods here.



template <typename A_Type> void samplet < A_Type >::print(ostream &o) {
  // prints sample vector to an output stream
  o << "<" << numbers.size() << ": ";
   for(typename vector<A_Type>::iterator i = numbers.begin(); i!= numbers.end(); i++){
       o << *i << " ";
  }
   o << ">";
}


template <typename A_Type> A_Type samplet<A_Type>::minimum() {
  int n = numbers.size();
  A_Type min = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] < min){
      min = numbers[i];
    }
  }
  return min;
}


template <typename A_Type> A_Type samplet<A_Type>::maximum() {
  int n = numbers.size();
  A_Type max = numbers[0];

  for (int i = 0; i < n; i++){
    if (numbers[i] > max){
      max = numbers[i];
    }
  }
  return max;
}


template <typename A_Type> A_Type samplet<A_Type>::range() {
   A_Type max = maximum();
   A_Type min = minimum();
   A_Type range = max - min;

  return range;
}

template <typename A_Type> A_Type samplet<A_Type>::midrange() {
  A_Type max = maximum();
  A_Type min = minimum();
  A_Type midrange = (max + min)/2;

  return midrange;
}

template <typename A_Type> A_Type samplet<A_Type>::mean(){
  int n = numbers.size();
  A_Type total = 0;
  A_Type mean = 0;
  for (int i = 0; i < n; ++i){
    total = total + numbers[i];
  }
  mean = total/n;
  return mean;
}

template <typename A_Type> A_Type samplet<A_Type>::variance(){
  A_Type m = mean();
  int n = numbers.size();
  A_Type tmp = 0;

  for (int i = 0; i < n; i++){
    tmp += (numbers[i] - m)*(numbers[i] - m);
  }
  return tmp/n;
}


template <typename A_Type> A_Type samplet<A_Type>::std_deviation(){
  A_Type var = variance();
  A_Type std = sqrt(var);

  return std;
}

template <typename A_Type> A_Type samplet<A_Type>::median(){
  size_t n = numbers.size();
  A_Type median = 0;

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
	v.print(s);
  return s;
}

template <typename A_Type> istream & operator >> (istream& s, samplet<A_Type> &v){
  size_t len;
  char lchev, colon;
  A_Type temp;
  vector<A_Type> input;

  if (s >> lchev){
    if (s >> len >> colon && colon == ':'){
      while(s >> temp){
        if (temp != '>'){
          input.push_back(temp);
        }
      }
      if (input.size() == len){
        v = samplet<A_Type>(input);
      }else{
        s.setstate(ios::badbit);
      }
    }else{
      s.setstate(ios::badbit);
    }
  }else {
	  	s.setstate(ios::badbit);
	}
  return s;
}

