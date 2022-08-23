#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtk/gtk.h>

//Initial creation of the drawing area for painting on
static gboolean DrawingAreaCB(GtkWidget *Widget, GdkEventConfigure *Event, gpointer UserData);

//Used for redrawing the screen
static gboolean DrawCB(GtkWidget *Widget, cairo_t *CR, gpointer UserData);

//Draw a rectangle at the given position
static void DrawingBrush(GtkWidget *Widget, gdouble X, gdouble Y);

//Handles whenever the mouse button is pressed
static gboolean ButtonPressEventCB(GtkWidget *Widget, GdkEventButton *Event,
				   gpointer UserData);

//Initalizes and sets up the main user interface
void InitUI(GtkApplication *App, gpointer UserData);

#endif
