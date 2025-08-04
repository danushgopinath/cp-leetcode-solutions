class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = 4*students.size();
        
        while(n>0){
            if(students.size()==0){
                return 0;
            }else if(students[0]==sandwiches[0]){
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                n--;
            }else{
                int x = students[0];
                students.erase(students.begin());
                students.push_back(x);
                n--;
            }
        }
        return students.size();
    }
};