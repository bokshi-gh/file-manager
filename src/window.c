#include "window.h"

GtkWindow *
fm_window_new(GtkApplication *application)
{
    GtkBuilder *builder;
    GtkWindow *window;

    builder = gtk_builder_new_from_file("resources/ui/window.ui");

    window = GTK_WINDOW(
        gtk_builder_get_object(builder, "main_window")
    );

    gtk_window_set_application(window, application);

    g_object_unref(builder);

    return window;
}
