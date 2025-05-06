// Deriving class from another class
class Base{
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

class Derived: public Base{
    // a remains public;
    // b remains protected;
    // c is not accessible
};

class Derived: protected Base{
    // a becomes protected;
    // b remains protected;
    // c is not accessible
};

class Derived: private Base{
    // a becomes private;
    // b becomes private;
    // c is not accesible;
};