#include<iostream>

using namespace std;

bool checkValidString(string s) {
        
        int leftmin=0;
        int leftmax=0;

        for(int i =0;i<s.size();i++)//(())
        {
            if(s[i]=='(')//(
            {
                leftmin++;//2
                leftmax++;//2
            }

            else if(s[i]==')')
            {
                leftmin--;//0
                leftmax--;//0
            }
            else{
                leftmin--;//
                leftmax++;//

            }

            if(leftmax<0) return false;
            if(leftmin<0) leftmin=0;
        }

        return leftmin==0;
}

int main()
{
    string s = "(())";

    int ans = checkValidString(s);

    if(ans = 1)
    {
            cout << "True";
    }
    else
    {
            cout << "False";
    }


}