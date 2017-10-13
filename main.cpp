#include <cstdlib>
#include <iostream>

using namespace std;
//Base class of the drawing method that draws a normal tree
class BaseDrawing
{
public:
    BaseDrawing(){};
    virtual void Draw(){cout << "The Base Drawing: " << endl << "   /\\" << endl << "  /  \\" << endl << " /    \\" << endl;};
};

//A new drawing theat overwrites the base drawing
class FirstDrawing : public BaseDrawing
{
public: 
    FirstDrawing(){};
    void Draw(){cout << "The First Drawing: " << endl << "   /\\" << endl << "  /**\\" << endl << " /****\\" << endl;};
};

//A new drawing theat overwrites the base drawing
class SecondDrawing : public BaseDrawing
{
public:
    SecondDrawing(){};
    void Draw(){cout << "The Second Drawing: " << endl << "   /\\" << endl << "  /''\\" << endl << " /''''\\" << endl;};
};

//A new drawing theat overwrites the base drawing
class ThirdDrawing : public BaseDrawing
{
public:
    ThirdDrawing(){};
    void Draw(){cout << "The Third Drawing: " << endl << "   /\\" << endl << "  /00\\" << endl << " /0000\\" << endl;};
};

int main(void)
{ 
    //Pointers for each type of drawing
    FirstDrawing *first_tree;
    SecondDrawing *second_tree;
    ThirdDrawing *third_tree;
    
    //pointing the pointers to new drawings
    first_tree = new FirstDrawing;
    second_tree = new SecondDrawing;
    third_tree = new ThirdDrawing;
    
    int SIZE = 3;
    //an array of pointers of type BaseDrawing
    BaseDrawing* arrayOfTrees[SIZE];
    
    //adding all of the pointers for all the other drawings to the array
    arrayOfTrees[0] = first_tree;
    arrayOfTrees[1] = second_tree;
    arrayOfTrees[2] = third_tree;
    
    //prints all of the drawings
    for (BaseDrawing* Tree: arrayOfTrees)
    {
        Tree->Draw();
    }
}
