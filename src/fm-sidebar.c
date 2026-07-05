#include "fm-sidebar.h"

GtkWidget *
fm_sidebar_new(void)
{
    GtkWidget *scrolled_window;
    GtkWidget *sidebar;

    scrolled_window = gtk_scrolled_window_new();

    gtk_widget_set_size_request(scrolled_window, 220, -1);

    sidebar = gtk_list_box_new();

    gtk_scrolled_window_set_child(
        GTK_SCROLLED_WINDOW(scrolled_window),
        sidebar
    );

    return scrolled_window;
}
