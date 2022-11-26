 /* T04: Drawing with C-Turtles!
 * 
 * C-Turtle Author: Jesse Walker-Schalder (https://github.com/walkerje/C-Turtle)

 * Modified by: <Alejandro Ramos>
 * Modified by: <student2-FIXME>
 * Modified by: <student3-FIXME>
 * Modified by: <Justin Roberts>
 */

#include "CTurtle.hpp";  //This brings in the CTurtle library for use
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::

int main(){

    ct::TurtleScreen scr;
    scr.bgcolor({ "white" });
 
    /* Student 1 area below */
    ct::Turtle turt1(scr); // turtle for student 1

    turt1.pencolor({ "black" });
    turt1.speed(ct::TS_FASTEST);
    turt1.right(90);
    turt1.forward(200); // change as desired!
    turt1.right(90);
    turt1.forward(150);
    turt1.circle(30);
    turt1.stamp();
    turt1.hideturtle();
    /* Student 1 area above */

    /* Student 2 area below*/
    ct::Turtle turt2(scr); // turtle for student 2

    turt2.pencolor({ "black" }); // change as desired!
    turt2.speed(ct::TS_FASTEST);

    turt2.penup();
    turt2.forward(150);
    turt2.right(90);
    turt2.forward(200);
    turt2.pendown();
    turt2.circle(100);


    turt2.hideturtle();
    /* Student 2 area above */

    /* Student 3 area below*/
    ct::Turtle turt3(scr); // turtle for student 3

    turt3.pencolor({ "red" }); // change as desired!
    turt3.speed(ct::TS_FASTEST);

    turt3.forward(200);
    turt3.right(90);
    turt3.forward(200);
    turt3.right(90);
    turt3.forward(400);
    turt3.right(90);
    turt3.forward(200);
    turt3.right(90);
    turt3.forward(400);


    /* Student 3 area above */

    /* Student 4 area below (if needed) */
    ct::Turtle bacon(scr); //Turtle for student 4
    bacon.pencolor({ "pink" }); 
    bacon.speed(ct::TS_FASTEST);

    bacon.pendown();
    bacon.forward(100);
    bacon.left(90);
    bacon.forward(35);
    bacon.left(90);
    bacon.forward(200);
    bacon.left(90);
    bacon.forward(35);
    bacon.left(90);
    bacon.forward(100);
    bacon.hideturtle();
    /* Student 4 area above (if needed) */






    scr.exitonclick();
}
