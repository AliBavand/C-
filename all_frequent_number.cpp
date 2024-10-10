#include<iostream>
#include<vector>
using namespace std;

vector<int> uniqueNumbers(vector<int> numbers){
    vector<int> uniq;
    for(int i=0; i<numbers.size(); i++){
        bool found = false;

        for(int j=0; j<uniq.size(); j++){
            if(numbers[i]==uniq[j]){
                found = true;
                break;
            }
        }
        if(!found){
        uniq.push_back(numbers[i]);
        }
    }
    return uniq;
}

vector<int> most_frequent(vector<int> numbers, vector<int> uniq){
    vector<vector<int>> twod(uniq.size(), vector<int>(2));
    int vector_index = 0;
    int result;
    for(int i=0; i<numbers.size(); i++){
        bool found = false;
        for(int j=0; j<uniq.size(); j++){
            if(numbers[i]==twod[j][0]){
                found = true;
                break;
            }
        }
        if(!found){
            int counter = 0;
            for(int k=i; k<numbers.size(); k++){
                if(numbers[i]==numbers[k]){
                    counter++;
                }
            }
            if(vector_index<uniq.size()){
                //twod.push_back({numbers[i], counter});
                twod[vector_index][0] = numbers[i];
                twod[vector_index][1] = counter;
                vector_index++;
            }
        }
    }
    int max_number = twod[0][0]; //Find the number, which is most frequent
    int max_index = 0;
    vector<int> all_frequnt_number_index;
    for(int i = 1; i<uniq.size(); i++){
        if(twod[i][1]>max_number){
            max_number = twod[i][1];
            max_index = i;
        }
    }
    for(int i = 0; i<uniq.size(); i++){
        if(twod[i][1] == twod[max_index][1]){
            all_frequnt_number_index.push_back(twod[i][0]);
        }

    }
    return all_frequnt_number_index;

}

int main(){

    int number;
    int in_number;
    vector<int> numbers;
    vector<int> uniq_num;
    vector<int> result;
    //int result;
    cout << "Enter the number of nembers:"<< endl;
    cin >> number;
    while(number > 0){
        cout << "Enter nembers:";
        cin >> in_number;
        numbers.push_back(in_number);
        number = number - 1;
    }
    uniq_num = uniqueNumbers(numbers);
    result = most_frequent(numbers, uniq_num);

    cout << "Find all numbers, which are most frequent: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}