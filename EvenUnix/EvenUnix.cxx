/*
 * Created on Mon Oct 25 2021 07:51:40
 *
 * Copyright (c) 2021 UsuiSama
 */
#include "EvenUnix.hpp"

EvenUnix::EvenUnix(Gtk::Window *win, Glib::RefPtr<Gtk::Builder> build)
{
    this->win = win;
    this->build = build;
}

void EvenUnix::on_create()
{
    build->get_widget<Gtk::Button>("btnApagar", btnApagar);
    if (btnApagar) btnApagar->signal_clicked().connect([this](){ on_btnApagar(); });
    win->add(*btnApagar);
    build->get_widget<Gtk::Button>("btnReiniciar", btnReiniciar);
    if (btnReiniciar) btnReiniciar->signal_clicked().connect([this](){ on_btnReiniciar(); });
}

void EvenUnix::on_btnApagar()
{
    system("poweroff --no-wall");
}

void EvenUnix::on_btnReiniciar()
{
    system("reboot --no-wall");
}

Gtk::Window *EvenUnix::get_window()
{
    return this->win;
}