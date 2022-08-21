#include <gtk/gtk.h>
#include <stdio.h>
#include "../../include/mainwindow.h"

//What you will be drawing on
static cairo_t *Surface = NULL;


//The Cairo stuff right now is from an online example, will have to clean it up later because it's extremely basic.

//This clears the surface
static void SurfaceClear(void) {
    cairo_t *CR;

    CR = cairo_create(Surface);

    cairo_set_source_rgb(CR, 1, 1, 1);

    cairo_paint(CR);

    cairo_destroy(CR);
}

//Draws the surface
static gboolean ConfigureEventCB(GtkWidget *Widget, GdkEventConfigure *Event, gpointer UserData) {
    cairo_surface_t *OldSurface = Surface;
    cairo_t *CR;
    Surface = gdk_window_create_similar_surface(gtk_widget_get_window(Widget), CAIRO_CONTENT_COLOR, gdk_screen_width(), gdk_screen_height());

    //Initialize to white
    SurfaceClear();
    if (OldSurface) {
        CR = cairo_create(Surface);
        cairo_set_source_surface(CR, OldSurface, 0, 0);
        cairo_set_operator(CR, CAIRO_OPERATOR_SOURCE);

        cairo_paint(CR);
        cairo_destroy(CR);
        cairo_surface_destroy(OldSurface);
    }
    return TRUE;
}

static gboolean DrawCB(GtkWidget *Widget, cairo_t *CR,gpointer UserData) {
    cairo_set_source_surface(CR, Surface, 0, 0);
    cairo_paint(CR);

    return FALSE;
}



//Draw a rectangle on the surface on any given position
static void DrawingBrush(GtkWidget *Widget,
        gdouble x, gdouble y) {
    cairo_t *CR;

        CR = cairo_create(Surface);

        cairo_rectangle(CR, x - 3, y - 3, 6, 6);
        cairo_fill(CR);

        cairo_destroy(CR);

        gtk_widget_queue_draw_area(Widget, x - 3, y - 3, 6, 6);
}

static gboolean ButtonPressEventCB(GtkWidget *Widget,
        GdkEventButton *Event, gpointer UserData) {
    if (Surface == NULL) {
        return FALSE;
    }

    if (Event->button == GDK_BUTTON_PRIMARY) {
        DrawingBrush(Widget, Event->x, Event->y);
    }

    return TRUE;
}







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
    
