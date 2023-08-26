// write a c program for bubble sort?
class person
{
    public:
        string name;
        int age; 

    void SetInfo(const string _name, int _age)
    {
        name = _name;
        age = _age;
    }
    int getAge(){return age;}
};

   void bubblesort(person mylist[],int n)
    {
        for (int i = 1; i<n; i++)
        {

            for (int j = 0; j<n - 1; j++) //n is "undefined" should n be the number of objects in the list maybe?
            {
                if (mylist[j].getAge() > mylist[j + 1].getAge()) //the first mylist is "undefined".
                {
                    person temp;
                    temp = mylist[j];
                    mylist[j] = mylist[j + 1];
                    mylist[j + 1] = temp;
                }
            }
        }
    }
int main()//start of program
{
    person mylist[4];//List of people
    mylist[0].SetInfo("Calle", 22);
    mylist[1].SetInfo("Björn", 20);
    mylist[2].SetInfo("Larry", 60);
    mylist[3].SetInfo("Lena", 54);

    //calling bubblesort()
    bubblesort(mylist,4);

    //list.display(); //list is undefined.

    int index = Linesearch(mylist, 20);

    if (index == -1)
        cout << "person not found!";
    else
        cout << "the person you searched for " << mylist[index].name;

    cin.get();
    return 0;
    system("pause");
}




//Source: https://stackoverflow.com/questions/21991369


