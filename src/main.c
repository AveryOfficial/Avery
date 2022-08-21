#include <stdio.h>
#include <gtk/gtk.h>
#include "../include/mainwindow.h"

int main(int argc, char *argv[]) {
    GtkApplication *App;
    int status;

    App = gtk_application_new ("gtk.app.Avery", G_APPLICATION_FLAGS_NONE);
    g_signal_connect (App, "activate", G_CALLBACK (InitUI), NULL);
    status = g_application_run (G_APPLICATION (App), argc, argv);
    g_object_unref (App);

    return status;
}
