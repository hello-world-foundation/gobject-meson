// example.c
#include "example.h"

G_DEFINE_TYPE(ExampleObject, example_object, G_TYPE_OBJECT)

static void example_object_class_init(ExampleObjectClass *klass) {
    // Class initialization goes here
}

static void example_object_init(ExampleObject *self) {
    // Instance initialization goes here
}

void example_object_print_msg(ExampleObject *self, gchar* msg) {
    g_print(msg);
}

ExampleObject *example_object_new(void) {
    return g_object_new(EXAMPLE_TYPE_OBJECT, NULL);
}
