#pragma once
class Cars{
    private: 
    float speed;
    float fuel;
    int passengers;
    static int count;

    public: 
        Cars();
        ~Cars();
        Cars(float amount, int pass);
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassengers(int count);
        void Dashboard();
        static void total();
};


/*
There are different types of constructor 
Default --> automatically synthesized by the compiler if no constructor is defined
Parameterized
Copy
Delegating
Inheriting
*/