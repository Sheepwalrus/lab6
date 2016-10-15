#include <iostream>

using namespace std;


  enum class bookStatus{open,closed};
  enum class lampStatus{on,off};



    class book

    {


     int numofPages;
     double width,length;
     string title;
     double area;
     bookStatus status;
     void calcArea()
     {
        area = length * width;
     }



        book (bookStatus tempstatus, double tempnumofPages, double tempwidth, double templength, string temptitle)
        {

           numofPages = tempnumofPages;
           width = tempwidth;
           status = tempstatus;
           length = templength;
           title = temptitle;

           if (status == bookStatus::open)
           {
               length = length * 2;
           }


        }

        ~book(){};

    };


    class lamp
    {
        string color;
        double width, length, area;
        lampStatus status;
        void calcArea()
        {

            area = width * length;
        };

            lamp (string tempcolor, double tempwidth, double templength, lampStatus tempstatus)
                {

                    color = tempcolor;
                    width = tempwidth;
                    length = templength;
                    status = tempstatus;
                    calcArea();

                }

                ~lamp(){};

    };


