#include <gtk/gtk.h>
#include <stdio.h>
#include "../../include/mainwindow.h"


void InitUI(GtkApplication *App, gpointer UserData) {
     
    GtkWidget *Window;
    GtkWidget *Toolbox; //The current idea behind Toolbox is to hold a series of brushes and tools. Will implement later.
    GtkWidget *Button; 
    GtkWidget *VBox;
    GtkWidget *MenuBar;
    GtkWidget *FileMenu; //Not sure why this is required, consider removing later.

    GtkWidget *FMI; //File Menu Entry
    GtkWidget *QMI; //Quit Menu Entry
    
    VBox = gtk_vbox_new(FALSE, 0);
    Window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_default_size(GTK_WINDOW(Window), 800, 600);
    gtk_window_set_title(GTK_WINDOW(Window), "Avery");
    gtk_container_add(GTK_CONTAINER(Window), VBox);
    g_signal_connect(Window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    Button = gtk_button_new_with_label("TESTING!");
    Toolbox = gtk_grid_new();
    MenuBar = gtk_menu_bar_new();
    FileMenu = gtk_menu_new();

    FMI = gtk_menu_item_new_with_label("File");
    QMI = gtk_menu_item_new_with_label("Quit");

    gtk_menu_item_set_submenu(GTK_MENU_ITEM(FMI), FileMenu); //Rewrite this later. Seriously.
    gtk_menu_shell_append(GTK_MENU_SHELL(FileMenu), QMI);
    gtk_menu_shell_append(GTK_MENU_SHELL(MenuBar), FMI);
    gtk_box_pack_start(GTK_BOX(VBox), MenuBar, FALSE, FALSE, 0);

    gtk_container_add(GTK_CONTAINER(VBox), Toolbox);

    gtk_alignment_set(Toolbox, 1, 0, 1, 1);

    g_signal_connect(G_OBJECT(QMI), "activate",
            G_CALLBACK(gtk_main_quit), NULL); //Clean this up later.


    gtk_container_add(GTK_CONTAINER(Toolbox), Button); //This is temporary, will remove later.
    gtk_widget_show_all(Window);





    gtk_main();


}
    
