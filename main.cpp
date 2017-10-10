#include <cstdlib>
#include <iostream>

using namespace std;
class BaseDrawing
{
public:
    BaseDrawing(){};
    virtual void Draw(){cout << "   /\\" << endl << "  /  \\" << endl << " /    \\" << endl;};
};

class FirstDrawing : public BaseDrawing
{
public: 
    FirstDrawing(){};
    void Draw(){cout << "   /\\" << endl << "  /**\\" << endl << " /****\\" << endl;};
};

class SecondDrawing : public BaseDrawing
{
public:
    SecondDrawing(){};
    void Draw(){cout << "   /\\" << endl << "  /''\\" << endl << " /''''\\" << endl;};
};

class ThirdDrawing : public BaseDrawing
{
public:
    ThirdDrawing(){};
    void Draw(){cout << "   /\\" << endl << "  /00\\" << endl << " /0000\\" << endl;};
};

int main(void)
{ 
    FirstDrawing *first_tree;
    SecondDrawing *second_tree;
    ThirdDrawing *third_tree;
    
    first_tree = new FirstDrawing;
    second_tree = new SecondDrawing;
    third_tree = new ThirdDrawing;
    
    int SIZE = 3;
    BaseDrawing* arrayOfTrees[SIZE];
    
    arrayOfTrees[0] = first_tree;
    arrayOfTrees[1] = second_tree;
    arrayOfTrees[2] = third_tree;
    
    for (BaseDrawing* Tree: arrayOfTrees)
    {
        Tree->Draw();
    }
}
