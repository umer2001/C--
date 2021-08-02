/*
	*1. To the Distance class in the ENGLPLUS program in this chapter, add an overloaded
	- operator that subtracts two distances. It should allow statements like dist3=
	dist1-dist2;. Assume that the operator will never be used to subtract a larger number
	from a smaller one (that is, negative distances are not allowed).
	*2. Write a program that substitutes an overloaded += operator for the overloaded + operator
	in the STRPLUS program in this chapter. This operator should allow statements like
	s1 += s2;
	where s2 is added (concatenated) to s1 and the result is left in s1. The operator should
	also permit the results of the operation to be used in other calculations, as in
	s3 = s1 += s2;
*/

class Distance
{
private:
    int feet;
    float inches;

public: //constructor (no args)
    Distance() : feet(0), inches(0.0)
    {
    } //constructor (two args)
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void setdist() //get length from user
    {
        cout << "\nEnter feet : ";
        cin >> feet;
        cout << "Enter inches : ";
        cin >> inches;
    }

    void showdist() const //display distance
    {
        cout << "feet : " << feet << endl;
        cout << "inches : " << inches << endl;
    }

    Distance operator-(Distance a)
    {
        if (feet >= a.feet && inches >= a.inches)
        {
            Distance temp;
            temp.feet = feet - a.feet;
            temp.inches = inches - a.inches;
            return temp;
        }
        else
        {
            cout << "Distance can't be negative";
        }
    }
};
int main()
{

    Distance a(10, 15.5), b(5, 7.9), c;

    c = a - b;

    c.showdist();

    getch();
}

/*
	*2. Write a program that substitutes an overloaded += operator for the overloaded + operator
	in the STRPLUS program in this chapter. This operator should allow statements like
	s1 += s2;
	where s2 is added (concatenated) to s1 and the result is left in s1. The operator should
	also permit the results of the operation to be used in other calculations, as in
	s3 = s1 += s2;
*/
class String //user-defined string type
{
private:
    enum
    {
        SZ = 80
    };            //size of String objects
    char str[SZ]; //holds a string
public:
    String() //constructor, no args
    {
        strcpy(str, "");
    }
    String(char s[]) //constructor, one arg
    {
        strcpy(str, s);
    }
    void display() const //display the String
    {
        cout << str;
    }
    String operator+(String ss) const //add Strings
    {
        String temp; //make a temporary String
        if (strlen(str) + strlen(ss.str) < SZ)
        {
            strcpy(temp.str, str);    //copy this string to temp
            strcat(temp.str, ss.str); //add the argument string
        }
        else
        {
            cout << "\nString overflow";
            exit(1);
        }
        return temp; //return temp String
    }

    String operator+=(String ss)
    {
        String temp; //make a temporary String
        if (strlen(str) + strlen(ss.str) < SZ)
        {
            strcpy(temp.str, str);    //copy this string to temp
            strcat(temp.str, ss.str); //add the argument string
            strcpy(str, temp.str);
        }
        else
        {
            cout << "\nString overflow";
            exit(1);
        }
        return temp; //return temp String
    }
};

int main()
{
    char a[] = "lol";
    String s1(a), s2("porti"), s3;
    s1 += s2;
    s3 = s1 + s2;
    s1.display();
    cout << "\n";
    s3.display();
    getch();
}
