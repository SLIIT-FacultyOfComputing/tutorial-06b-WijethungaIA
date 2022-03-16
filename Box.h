class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
    void setlength(int l);
    void setwidth(int w);
    void setheight(int h);

       // write prototypes of getters for length, width and height

    int getlength();
    int getwidth();
    int getheight();
       int calcVolume();
};
