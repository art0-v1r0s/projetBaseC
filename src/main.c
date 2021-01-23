#include <gtk/gtk.h>

int main(int argc, char *argv[])
{
    GtkBuilder      *builder;
    GtkWidget       *window;

    gtk_init(&argc, &argv);

    builder = gtk_builder_new_from_file("glade/window_main.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder, "window_main"));
    gtk_builder_connect_signals(builder, NULL);

    g_object_unref(builder);

    gtk_widget_show(window);
    gtk_main();

    return 0;
}

void inscription(GtkButton * button,GtkStack * stack){

    //printf("ta cliqué bonhomme\n");
    //printf(gtk_stack_get_visible_child_name (stack));
    gtk_stack_set_visible_child_name (stack,"page2");
    
    
}
void connexion(GtkButton * button,GtkLabel * label_title){

    gtk_label_set_text(label_title, "bonjour mr vous avez cliqué sur connexion");
}

// called when window is closed
void on_window_main_destroy()
{
    gtk_main_quit();
}

