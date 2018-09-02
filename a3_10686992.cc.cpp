#include <iostream>

using namespace std;


void GradeNow( float score)
{
   if (score >=80&&score<=100)
    {
        cout <<"you had A"<<endl;
    }
    else if (score >=75&&score<=79)
    {
        cout <<"you had B+"<<endl;
    }
    else if (score >=70&&score<=74)
    {
        cout <<"you had B"<<endl;
    }
    else if (score >=65&&score<=69)
    {
        cout <<"you had C+"<<endl;
    }
    else if (score >=60&&score<=64)
    {
        cout <<"you had C"<<endl;
    }
    else if (score >=55&&score<=59)
    {
        cout <<"you had D+"<<endl;
    }
    else if (score >=50&&score<=54)
    {
        cout <<"you had D"<<endl;
    }
    else if (score >=44&&score<=49)
    {
        cout <<"you had E"<<endl;
    }
    else
    {
        cout <<"you had F"<<endl;
    }
}
void GradeIt()
{
    cout <<"PLease enter your score for last semester"<<endl;
    float score;
    cin>>score;

    if (score>100 || score<0)
    {
        int i;
        for ( i=0; i<100; i++)
    {
        cout <<"Please enter your real score"<<endl;
        cin>>score;
        if (score > 0&&score<101)
            {
                GradeNow(score);
                break;

            }
    }
    }
    else
    {


    //cout<<"You had " <<score<<"%"<<endl;
    if (score >=80&&score<=100)
    {
        cout <<"you had A"<<endl;
    }
    else if (score >=75&&score<=79)
    {
        cout <<"you had B+"<<endl;
    }
    else if (score >=70&&score<=74)
    {
        cout <<"you had B"<<endl;
    }
    else if (score >=65&&score<=69)
    {
        cout <<"you had C+"<<endl;
    }
    else if (score >=60&&score<=64)
    {
        cout <<"you had C"<<endl;
    }
    else if (score >=55&&score<=59)
    {
        cout <<"you had D+"<<endl;
    }
    else if (score >=50&&score<=54)
    {
        cout <<"you had D"<<endl;
    }
    else if (score >=44&&score<=49)
    {
        cout <<"you had E"<<endl;
    }
    else
    {
        cout <<"you had F"<<endl;
    }
    }

}


int main(int argc, char **argv)
{

    GradeIt();

    return 0;

}
