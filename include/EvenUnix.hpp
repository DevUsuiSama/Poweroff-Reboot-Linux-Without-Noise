/*
 * Created on Mon Oct 25 2021 07:51:40
 *
 * Copyright (c) 2021 UsuiSama
 */

#ifndef _GTKMM_H
#include <gtkmm-3.0/gtkmm.h>
#endif // !_GTKMM_H

#include <iostream>

#ifndef __EVENWIN_HPP__
#define __EVENWIN_HPP__

class EvenUnix : public Gtk::ApplicationWindow
{
private:
    Gtk::Window *win;
    Gtk::Button *btnApagar, *btnReiniciar;
    Glib::RefPtr<Gtk::Builder> build;

public:
    EvenUnix(Gtk::Window *win, Glib::RefPtr<Gtk::Builder> build);
    void on_create();
    void on_btnApagar();
    void on_btnReiniciar();
    Gtk::Window *get_window();
};

#endif // !__EVENWIN_HPP__