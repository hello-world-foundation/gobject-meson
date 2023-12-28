project('example', 'c')

glib = [
    dependency('glib-2.0'),
    dependency('gobject-2.0')
]

sources = files('src/example.c')

lib = shared_library('example', sources, dependencies: glib)
gnome = import('gnome')
gnome.generate_gir(lib,
  sources: sources + files('src/example.h'),
  namespace: 'Example',
  includes: 'GObject-2.0',
  nsversion: '1.0',
  install: true,
)


