TEMPLATE = subdirs

CONFIG += ordered

SUBMODULES_DIR = $$PWD/submodules

SUBDIRS += \
    uhuntqt \
    QScintilla-gpl-2.9/qscintilla \
    src \
    app \
    tests

src.depends = uhuntqt QScintilla-gpl-2.9/qscintilla
app.depends = src
tests.depends = src

