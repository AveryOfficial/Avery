#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtk/gtk.h>

//Clears the surface
static void SurfaceClear(void);

//Creates a brand new surface
static gboolean ConfigureEventCB(GtkWidget *Widget, GdkEventConfigure *Event, gpointer UserData);

static gboolean DrawCB(GtkWidget *Widget, cairo_t *CR, gpointer UserData);

static gboolean ButtonPressEventCB(GtkWidget *Widget, GdkEventButton *Event, gpointer UserData);





void InitUI(GtkApplication *App, gpointer UserData);

#endif
