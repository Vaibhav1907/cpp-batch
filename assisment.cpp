// #include <bits/stdc++.h>

// using namespace std;

// int main() {
    
//     vector<string> names = {"Alice", "Bob", "Charlie", "David", "Eve"};
//     vector<int> ages = {25, 30, 35, 40, 45};

   
//     vector<pair<int, string>> ageNamePairs;
//     for (int i = 0; i < names.size(); i++) {
//         ageNamePairs.emplace_back(ages[i], names[i]);
//     }
//     sort(ageNamePairs.begin(), ageNamePairs.end(), greater<>());

    
//     vector<int> sortedAge;
//     vector<string> sortedNames;
//     for (const auto& pair : ageNamePairs) {
//         sortedAge.push_back(pair.first);
//         sortedNames.push_back(pair.second);
//     }

    
//     cout << "Sorted Age: ";
//     for (int age : sortedAge) {
//         cout << age << " ";
//     }
//     cout << "\nSorted Names: ";
//     for (const string& name : sortedNames) {
//         cout << name << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     
//     map<string, string> nameGenderMap = {
//         {"Alice", "Female"},
//         {"Bob", "Male"},
//         {"Charlie", "Male"},
//         {"David", "Male"},
//         {"Eve", "Female"}
//     };

//     vector<string> names;
//     vector<string> genders;
//     for (const auto& pair : nameGenderMap) {
//         names.push_back(pair.first);
//         genders.push_back(pair.second);
//     }

   
//     cout << "Names: ";
//     for (const string& name : names) {
//         cout << name << " ";
//     }
//     cout << "\nGenders: ";
//     for (const string& gender : genders) {
//         cout << gender << " ";
//     }
//     cout << endl;

//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
   
//     vector<int> numbers = {3, 7, 10, 12, 8, 6, 11, 14, 9, 5};

   
//     vector<int> gt5, gt9, gt8;
//     for (int num : numbers) {
//         if (num > 5) {
//             gt5.push_back(num);
//         }
//         if (num > 9) {
//             gt9.push_back(num);
//         }
//         if (num > 8) {
//             gt8.push_back(num);
//         }
//     }

 
//     cout << "Numbers greater than 5: ";
//     for (int num : gt5) {
//         cout << num << " ";
//     }
//     cout << "\nNumbers greater than 9: ";
//     for (int num : gt9) {
//         cout << num << " ";
//     }
//     cout << "\nNumbers greater than 8: ";
//     for (int num : gt8) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
    
//     map<string, int> nameToSalary = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000}
//     };

    
//     int salaryToDelete;
//     cout << "Enter the salary to delete: ";
//     cin >> salaryToDelete;

  
//     auto it = nameToSalary.begin();
//     while (it != nameToSalary.end()) {
//         if (it->second == salaryToDelete) {
//             it = nameToSalary.erase(it);
//         } else {
//             ++it;
//         }
//     }

    
//     cout << "Updated map:\n";
//     for (const auto& pair : nameToSalary) {
//         cout << pair.first << ": " << pair.second << "\n";
//     }

//     return 0;
// }
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // Create a sample map of names and salaries
//     map<string, int> nameToSalary = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000}
//     };

//     // Get the name to search from the user
//     string nameToSearch;
//     cout << "Enter the name to search: ";
//     cin >> nameToSearch;


//     auto it = nameToSalary.find(nameToSearch);
//     if (it != nameToSalary.end()) {
//         cout << nameToSearch << " found in the map with salary: " << it->second << endl;
//     } else {
//         cout << nameToSearch << " not found in the map." << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // Create a sample map of names and salaries
//     map<string, int> nameToSalary = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000}
//     };

//   
//     int salaryToSearch;
//     cout << "Enter the salary to search for: ";
//     cin >> salaryToSearch;


//     cout << "Names with salary " << salaryToSearch << ":\n";
//     for (const auto& pair : nameToSalary) {
//         if (pair.second == salaryToSearch) {
//             cout << pair.first << ": " << pair.second << "\n";
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // Create a sample map of names and salaries
//     map<string, int> nameToSalary = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000}
//     };

    
//     double percentageIncrease;
//     cout << "Enter the percentage increase: ";
//     cin >> percentageIncrease;

   
//     for (auto& pair : nameToSalary) {
//         pair.second = static_cast<int>(pair.second * (1 + percentageIncrease / 100.0));
//     }

    
//     cout << "Updated map:\n";
//     for (const auto& pair : nameToSalary) {
//         cout << pair.first << ": " << pair.second << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
   
//     map<string, int> map1 = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000}
//     };

   
//     map<string, int> map2 = {
//         {"Alice", 45000},
//         {"Bob", 70000},
//         {"David", 60000},
//         {"Frank", 75000}
//     };

    
//     for (const auto& pair1 : map1) {
//         for (auto& pair2 : map2) {
//             if (pair1.first == pair2.first) {
//                 swap(pair1.second, pair2.second);
//             }
//         }
//     }

    
//     cout << "Updated Map 1:\n";
//     for (const auto& pair : map1) {
//         cout << pair.first << ": " << pair.second << "\n";
//     }

//     cout << "\nUpdated Map 2:\n";
//     for (const auto& pair : map2) {
//         cout << pair.first << ": " << pair.second << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
   
//     map<string, int> nameToSalary = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000},
//         {"Frank", 60000},
//         {"Grace", 55000},
//         {"Henry", 50000}
//     };

    
//     map<int, int> salaryFrequency;

    
//     for (const auto& pair : nameToSalary) {
//         salaryFrequency[pair.second]++;
//     }

   
//     cout << "Salary Frequency:\n";
//     for (const auto& pair : salaryFrequency) {
//         cout << "Salary: " << pair.first << ", Frequency: " << pair.second << "\n";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
   
//     map<string, int> nameToSalary = {
//         {"Alice", 50000},
//         {"Bob", 60000},
//         {"Charlie", 55000},
//         {"David", 65000},
//         {"Eve", 50000},
//         {"Frank", 60000},
//         {"Grace", 55000},
//         {"Henry", 50000}
//     };

    
//     vector<pair<int, string>> salaryToName;

   
//     for (const auto& pair : nameToSalary) {
//         salaryToName.emplace_back(pair.second, pair.first);
//     }

    
//     sort(salaryToName.begin(), salaryToName.end());

//     cout << "Names sorted by salaries in ascending order:\n";
//     for (const auto& pair : salaryToName) {
//         cout << pair.second << ": " << pair.first << "\n";
//     }

//     return 0;
// }