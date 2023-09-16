/*
 * Created on Sun Oct 24 2021 22:50:06
 *
 * Copyright (c) 2021 UsuiSama
 */
#include <gtkmm-3.0/gtkmm.h>

#ifndef __INITWIN_HPP__
#define __INITWIN_HPP__ 1

class InitUnix : public Gtk::Application
{
private:
    Gtk::Window *win;
    Glib::RefPtr<Gtk::Builder> build;

public:
    void init();
    Gtk::Window* get_window();
    Glib::RefPtr<Gtk::Builder> get_build();
};

#endif // !__INITWIN_HPP__