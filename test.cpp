// #include <bits/stdc++.h>
// using namespace std;

// vector<int> findNextNumber(vector<int> arr) {
//     int n = arr.size();
//     if (n < 2) {
//         return arr;
//     }
    
//     vector<int> diffs(n - 1);
//     for (int i = 1; i < n; i++) {
//         diffs[i - 1] = arr[i] - arr[i - 1];
//     }
    
//     vector<int> pattern = {diffs[0]};
//     for (int i = 1; i < diffs.size(); i++) {
//         pattern.push_back(pattern.back() * 3);
//     }
    
//     int nextNum = arr.back() + pattern.back();
//     arr.push_back(nextNum);
//     return arr;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 6, 18, 108};
//     vector<int> result = findNextNumber(arr);
    
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// map<int, int> countDigitFrequency(const string& sequence) {
//     map<int, int> freqMap;
//     for (char c : sequence) {
//         int digit = c - '0';
//         freqMap[digit]++;
//     }
//     return freqMap;
// }

// int main() {
//     string sequence = "2313131346465";
//     map<int, int> freqMap = countDigitFrequency(sequence);

//     cout << "Digit Frequency:" << endl;
//     for (auto [digit, freq] : freqMap) {
//         cout << "Digit " << digit << ": " << freq << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int num=5;
//   cout<<"num: "<<num<<endl;
//   cout <<"addres of num"<<&num;
//    int * ptr =&num;
//   cout<<"value is: "<<*ptr<<endl;
//   cout <<"addres of num"<<*ptr<<endl;
//    double d =4.3;
//     double *p2=&d;
//    cout <<"adress is : "<<p2<<endl;
//    cout <<"value is : "<<*p2<<endl;
//  return 0
//  cout <<"size of integer is : "<<sizeof(num)<<endl;
//   cout <<"size of pointer is : "<<sizeof(ptr)<<endl;
//    cout <<"size of pointer is : "<<sizeof(p)<<endl;

// int *p=0;
// cout <<*p<<endl;

// int i=5;
// // int*p=&i;
// int *p=0;
// p=&i;
// cout<<p<<endl;








// }


// #include<bits/stdc++.h>

// using namespace std;
// int  main(){
//     int number [21];
//     cout<<"everything is working"<<endl <<endl;
//     cout<<"value at 15 index is"<<number [15]<<endl;
//     cout<<"value at 20 index is"<<number [20]<<endl;
    
   
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i=5;
//     int *ptr= &i;
//     cout<<"value is "<<ptr<<endl;
//     cout<<"value is "<<*ptr<<endl;
//     int num = 5;
//    int a = num;
//    cout << "a before " << num << endl;
//    a++;
//    cout << "a after " << num << endl;


//    int *p  = &num;
//    cout << "before " << num << endl;
//    (*p)++;
//    cout << "after " << num << endl;
   
//    int *q = p;
//    cout << p <<" - " << q << endl;
//    cout << *p <<" - " << *q << endl;
//     double d = 4.3;
//     double *p2 = &d;

//     cout << "Address is : " << p2 << endl;
//     cout << "value is : " << *p2 << endl;

//     cout << " size of integer is " << sizeof(num) << endl;
//     cout << " size of pointer is " << sizeof(ptr) << endl;
//     cout << " size of pointer is " << sizeof(p2) << endl;




    
// }

// #include <bits/stdc++.h>

// std::vector<int> createFrequencyArray(const std::vector<int>& arr) {
    
//     int maxValue = *std::max_element(arr.begin(), arr.end());

 
//     std::vector<int> freqArray(maxValue + 1, 0);

   
//     for (int num : arr) {
//         freqArray[num]++;
//     }

//     return freqArray;
// }
// int main() {
//     std::vector<int> inputArray = {1, 2, 3, 2, 1, 3, 4, 2, 1, 5};
//     std::vector<int> frequencyArray = createFrequencyArray(inputArray);

//     for (int i = 0; i < frequencyArray.size(); i++) {
//         std::cout << "The integer " << i << " appears " << frequencyArray[i] << " times." << std::endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// std::vector<int> findElementsAboveThreshold(const std::vector<int>& arr, int threshold) {
    
//     std::map<int, int> freqMap;

   
//     for (int num : arr) {
//         freqMap[num]++;
//     }

 
//     std::vector<int> result;

//     // Iterate through the frequency map and add the elements above the threshold to the result vector
//     for (const auto& [element, freq] : freqMap) {
//         if (freq > threshold) {
//             result.push_back(element);
//         }
//     }

//     return result;
// }

// int main() {
//     std::vector<int> inputArray = {1, 2, 3, 2, 1, 3, 4, 2, 1, 5};
//     int threshold = 2;

//     std::vector<int> elementsAboveThreshold = findElementsAboveThreshold(inputArray, threshold);

//     std::cout << "Elements with frequency above " << threshold << ": ";
//     for (int element : elementsAboveThreshold) {
//         std::cout << element << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }


// #include <bits/stdc++.h>

// std::unordered_map<std::string, int> getWordFrequency(const std::string& sentence) {
//     // Split the sentence into words
//     std::istringstream iss(sentence);
//     std::vector<std::string> words;
//     std::string word;
//     while (iss >> word) {
//         words.push_back(word);
//     }

//     // Create the frequency dictionary
//     std::unordered_map<std::string, int> wordFreq;
//     for (const auto& w : words) {
//         wordFreq[w]++;
//     }

//     return wordFreq;
// }
// int main() {
//     std::string sentence = "The quick brown fox jumps over the lazy dog. The dog barks.";
//     std::unordered_map<std::string, int> wordFreq = getWordFrequency(sentence);

//     std::cout << "Word frequencies:" << std::endl;
//     for (const auto& [word, freq] : wordFreq) {
//         std::cout << word << ": " << freq << std::endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool iseven(int n)
// {
//     if(n%2==0)
//         return true;
//     else
//         return false;
// }

// //even: 2 6 4 8 6 4 vector
// map<string,vector<int>> getevenodd(vector<int>&arr)
// {
//     map<string,vector<int>>maparr;
//     for(auto it:arr)
//     {
//         //it =>ek value jo ki ek even value ya fir ek odd value hogi
//         if(iseven(it))
//             maparr["even"].push_back(it);
//         else
//           maparr["odd"].push_back(it);
//     }
//     return maparr;
// }
// int main()
// {
//     vector<int>arr={3,1,2,3,1,6,46,5,4,6,4,3,1,3,1,3,1,5,6,4,6,1,2,3};
//     map<string,vector<int>>ans=getevenodd(arr);
//     for(auto it:ans)
//     {
//         cout<<it.first<<" ";
       
//         for(auto ele:it.second)
//         {
//             cout<<ele<<" ";
//         }
//         cout<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      vector<string> names = {"Ajay Nitish", "Abhay", "Ram", "Ranjit", "Rohan", "Nirbhay", "Nisha", "Mohini", "Kamini", "Pushpa", "Phulkumari"};
//     map<char, vector<string>> nameGroups;

//     for (const auto& name : names) {
//         char firstLetter = tolower(name[0]);
//         nameGroups[firstLetter].push_back(name);
//     }

//     for (const auto& group : nameGroups) {
//         cout << "Names starting with '" << group.first << "':" << endl;
//         for (const auto& name : group.second) {
//             cout << "- " << name << endl;
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> products = {"Sprite", "Pizza", "Motorola3G", "Samsung", "Iphone", "Iodex", "Pudinhara", "Tootpaste", "Lux"};
    map<string, vector<string>> categories = {
        {"health", {}},
        {"food", {}},
        {"electronics", {}}
    };

    for (const auto& product : products) {
        if (product == "Iodex" || product == "Lux" || product == "Tootpaste" || product == "Pudinhara") {
            categories["health"].push_back(product);
        } else if (product == "Sprite" || product == "Pizza") {
            categories["food"].push_back(product);
        } else {
            categories["electronics"].push_back(product);
        }
    }

    for (const auto& category : categories) {
        cout << category.first << ":" << endl;
        for (const auto& item : category.second) {
            cout << "- " << item << endl;
        }
        cout << endl;
    }

    return 0;
}