#include <gtk/gtk.h>
#include <stdio.h>
#include "../../include/mainwindow.h"

void InitUI(GtkApplication *App, gpointer UserData) {
     
    GtkWidget *Window;

    Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title(GTK_WINDOW(Window), "Avery");

    g_signal_connect(Window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(Window);

    gtk_main();


}
    
