/*
 * Created on Sun Oct 24 2021 22:50:06
 *
 * Copyright (c) 2021 UsuiSama
 */
#include "InitUnix.hpp"

void InitUnix::init()
{
    build = Gtk::Builder::create_from_file("SistemaSinRuido.glade");
    build->get_widget<Gtk::Window>("wSistemaSinRuido", win);
    add_window(*win);
}

Gtk::Window* InitUnix::get_window()
{
    return win;
}

Glib::RefPtr<Gtk::Builder> InitUnix::get_build()
{
    return build;
}