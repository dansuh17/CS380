#ifndef CS380_MOUSE_H
#define CS380_MOUSE_H

#include <glm/glm.hpp>
#include <glm/ext.hpp>

class MouseStatus {
private:
    bool is_pressed;
    double mouse_x;
    double mouse_y;
    double mouse_z;
    int pressed_button;

public:
    MouseStatus();
    double get_x();
    double get_y();
    double get_z();
    void set_x(double);
    void set_y(double);
    void set_z(double);
    int get_pressed();
    void set_pressed(int);
    bool get_isPressed();
    void set_isPressed(bool);
    double get_deltaX(double);
    double get_deltaY(double);
    double get_deltaZ(double);




};

#endif //CS380_MOUSE_H
