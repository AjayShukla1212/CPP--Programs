class Polynomial {
    public:
    int *degCoeff;
    int capacity;

    public:
    Polynomial()
    {
        capacity=100;
        degCoeff=new int[100];
        for(int i=0;i<capacity;i++)
        {
            degCoeff[i]=0;
        }
    }

    Polynomial(Polynomial const &p)
    {
        capacity=p.capacity;
        degCoeff=new int[p.capacity];
        for(int i=0;i<p.capacity;i++)
        {
            degCoeff[i]=p.degCoeff[i];
        }
    }

    void setCoefficient(int degree,int coefficient)
    {
         if(capacity<=degree)
         {
             int *newdata=new int[2*capacity];
             for(int i=0;i<capacity;i++)
             {
                 newdata[i]=degCoeff[i];
             }
             for(int i=capacity;i<2*capacity;i++)
             {
                 newdata[i]=0;
             }
             delete []degCoeff;
             degCoeff=newdata;
             capacity=capacity*2;
         }
        degCoeff[degree]=coefficient;
    }

    Polynomial operator+(Polynomial const &p){
        int i=0;
        int j=0;
        Polynomial pnew;
        while(i< this->capacity && j< p.capacity)
        {
            int sum=this->degCoeff[i]+p.degCoeff[j];
            pnew.setCoefficient(i,sum);
            i++;
            j++;

        }
        while(i< this->capacity)
        {
            pnew.setCoefficient(i,this->degCoeff[i]);
            i++;
        }
        while(j< p.capacity)
        {
            pnew.setCoefficient(j,p.degCoeff[j]);
            j++;
        }
        return pnew;
    }

    Polynomial operator-(Polynomial const &p){
        int i=0;
        int j=0;
        Polynomial pnew;
        while(i<this->capacity && j<p.capacity)
        {
            int sum=(this->degCoeff[i])-(p.degCoeff[j]);
            pnew.setCoefficient(i,sum);
            i++;
            j++;
        }

        while(i<this->capacity)
        {
            pnew.setCoefficient(i,this->degCoeff[i]);
            i++;
        }

        while(j<p.capacity)
        {
            pnew.setCoefficient(j,p.degCoeff[j]);
            j++;
        }
        return pnew;
    }

    Polynomial operator*(Polynomial const &p){

        Polynomial pnew;
        for(int i=0;i<capacity;i++)
        {
            if(degCoeff[i]!=0)
            {
                for(int j=0;j<p.capacity;j++)
                {
                  if(p.degCoeff[j]!=0){
                    int mul=degCoeff[i]*p.degCoeff[j];
                    int sum=pnew.degCoeff[i+j]+mul;
                    pnew.setCoefficient(i+j,sum);
                }
               }
           }
        }
        return pnew;

    }

    Polynomial operator=(Polynomial const &p){
      capacity=p.capacity;
      degCoeff=new int[p.capacity];
        for(int i=0;i<p.capacity;i++)
        {
            degCoeff[i]=p.degCoeff[i];
        }
    }

    void print() const{
        for(int i=0;i<capacity;i++)
        {
           if(this->degCoeff[i]!=0)
            cout << this->degCoeff[i] << "x" << i <<" ";
        }
    }


};
