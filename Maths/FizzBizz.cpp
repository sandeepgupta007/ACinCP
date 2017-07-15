vector<string> Solution::fizzBuzz(int A) {
    vector < string > vec;
    for (int i=1;i<=A;i++){
        if(i%3 == 0 && i %5 == 0){
            vec.push_back("FizzBuzz");
            //cout << "FizzBuzz\n" << " ";
        }
        else if(i%3 == 0){
            vec.push_back("Fizz");
            //cout << "Fizz\n" << " ";
        }
        else if(i%5 == 0){
            vec.push_back("Buzz");
            //cout<< "Buzz\n" << " ";
        }
        else{
            vec.push_back(to_string(i));
        //    cout << i << " ";
        }
    }
    return vec;
}

