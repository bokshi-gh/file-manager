#include <gtk/gtk.h>

#include "application.h"
#include "window.h"

static void
on_activate(GtkApplication *application, gpointer user_data)
{
    GtkWindow *window;

    (void)user_data;

    window = fm_window_new(application);

    gtk_window_present(window);
}

int
fm_application_run(int argc, char *argv[])
{
    GtkApplication *application;
    int status;

    application = gtk_application_new(
        "io.github.bokshi_gh.file_manager",
        G_APPLICATION_DEFAULT_FLAGS
    );

    g_signal_connect(
        application,
        "activate",
        G_CALLBACK(on_activate),
        NULL
    );

    status = g_application_run(
        G_APPLICATION(application),
        argc,
        argv
    );

    g_object_unref(application);

    return status;
}
