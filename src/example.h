// example.h
#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define EXAMPLE_TYPE_OBJECT (example_object_get_type())

G_DECLARE_DERIVABLE_TYPE(ExampleObject, example_object, EXAMPLE, OBJECT, GObject)

struct _ExampleObjectClass {
    GObjectClass parent_class;

    // Class members go here
};

ExampleObject *example_object_new(void);
void example_object_print_msg(ExampleObject *self, gchar* msg);

G_END_DECLS
