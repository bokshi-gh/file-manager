#include "window.h"

GtkWindow *
fm_window_new(GtkApplication *application)
{
    GtkWindow *window;

    window = GTK_WINDOW(
        gtk_application_window_new(application)
    );

    gtk_window_set_title(
        window,
        "Home - File Manager"
    );

    gtk_window_set_default_size(
        window,
        1280,
        720
    );

    return window;
}
