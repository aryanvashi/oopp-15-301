// wap for input of any student like name branch, roll no and marks of five subjects. find out the total and percentage of marks with the help of modular programming
// #include <bits/stdc++.h>
// using namespace std;
// int total(int a,int b,int c,int d,int e){
//     int sum=a+b+c+d+e;
//     return sum;
// };
// float percent(float sum){
//     return sum/5.0;
// };
// int main(){
//     int a,b,c,d,e;
//     cin>>a>>b>>c>>d>>e;
//     int sum = total(a,b,c,d,e);
//     cout<< "total=" << sum<<endl;
//     cout<<"percent="<< percent(sum)<<endl;
// }
#include <iostream>
using namespace std;
void input(string name, string branch, int rollNo, int marks[5]) {
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student branch: ";
    cin >> branch;
    cout << "Enter student roll number: ";
    cin >> rollNo;
    cout << "Enter marks of five subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
}
void findSum(int marks[5], int *sum) {
    *sum = 0;
    for (int i = 0; i < 5; i++) {
        *sum += marks[i];
    }
}
void show(int sum) {
    cout << "Total marks: " << sum << endl;
    cout << "Percentage: " << (sum / 5.0) << "%" << endl;
}
int main() {
    string name, branch;
    int rollNo;
    int marks[5];
    input(name, branch, rollNo, marks);
    int sum;
    findSum(marks, &sum);
    show(sum);
    return 0;
}