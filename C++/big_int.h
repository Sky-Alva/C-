class BigInt{
    public:
        BigInt(char *string, int N);
        BigInt(int N);
        ~BigInt();
        BigInt add(const BigInt&, const BigInt&);
        void print();
    private:
        char *digits;
        
};