
class Month{

    public:
        enum Type {
            january, february, march, april, may, june, july, august, september, november, october, december

        };
        Month(Type m);
        int getMaxDays(int year);
        
    private:
        Type value;

};