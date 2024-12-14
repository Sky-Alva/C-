class MyVector{
    private:
        int n;
        double* m;
    public:
        MyVector(); //Default Constructor
        MyVector(int dim, double v[]); //Overloading Constructor
        MyVector(const MyVector& v); //Copy Constructor
        ~MyVector();
        bool operator==(const MyVector& v) const;
        bool operator<(const MyVector& v) const;
        bool operator>(const MyVector& v) const;
        bool operator!=(const MyVector& v) const;
        MyVector& operator= (const MyVector& v);
        const MyVector operator+(const MyVector&v);
        const MyVector& operator+=(const MyVector&v);
        void print();
};