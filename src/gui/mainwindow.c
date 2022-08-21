#include <gtk/gtk.h>
#include <stdio.h>
#include "../../include/mainwindow.h"


void InitUI(GtkApplication *App, gpointer UserData) {
     
    GtkWidget *Window;
    GtkWidget *Toolbox; //Toolbox is a paned window that will hold a series of buttons that will allow for selecting a different tool such as a vector brush, raster brush, or anything else that is needed at the time.

    //These two labels are temporary. Will remove later.
    GtkWidget *TL01;
    GtkWidget *TL02;

    Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(Window), 800, 600);
    gtk_window_set_title(GTK_WINDOW(Window), "Avery");

    g_signal_connect(Window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    Toolbox = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add(GTK_CONTAINER(Window), Toolbox);
    TL01 = gtk_label_new("This space");
    TL02 = gtk_label_new("for rent.");

    gtk_paned_add1(GTK_PANED(Toolbox), TL01);
    gtk_paned_add2(GTK_PANED(Toolbox), TL02);



    gtk_widget_show_all(Window);





    gtk_main();


}
    
