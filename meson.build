project(
    'fm',
    'c',
    version: '0.1.0',
    default_options: [
        'c_std=c17',
        'warning_level=3',
    ],
)

gtk = dependency('gtk4')

gnome = import('gnome')

resources = gnome.compile_resources(
    'fm-resources',
    'resources/fm.gresource.xml',
    source_dir: 'resources',
)

executable(
    'fm',
    [
        'src/main.c',
        'src/application.c',
        'src/window.c',
        resources,
    ],
    include_directories: include_directories('include'),
    dependencies: gtk,
    install: true,
)
