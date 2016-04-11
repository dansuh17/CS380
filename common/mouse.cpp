#include "mouse.h"

MouseStatus::MouseStatus()
{
    is_pressed = false;
}

double MouseStatus::get_x()
{
    return mouse_x;
}

double MouseStatus::get_y()
{
    return mouse_y;
}

double MouseStatus::get_z()
{
    return mouse_z;
}

void MouseStatus::set_x(double xpos)
{
    mouse_x = xpos;
}

void MouseStatus::set_y(double ypos)
{
    mouse_y = ypos;
}

void MouseStatus::set_z(double zpos)
{
    mouse_z = zpos;
}

int MouseStatus::get_pressed()
{
    return pressed_button;
}

void MouseStatus::set_pressed(int button)
{
    pressed_button = button;
}

bool MouseStatus::get_isPressed()
{
    return is_pressed;
}

void MouseStatus::set_isPressed(bool status)
{
    is_pressed = status;
}

double MouseStatus::get_deltaX(double xpos)
{
    double delta_x = xpos - this->get_x();
    this->set_x(xpos);
    return delta_x;
}

double MouseStatus::get_deltaY(double ypos)
{
    double delta_y = ypos - this->get_y();
    this->set_y(ypos);
    return delta_y;
}

double MouseStatus::get_deltaZ(double zpos)
{
    double delta_z = zpos - this->get_z();
    this->set_z(zpos);
    return delta_z;
}
