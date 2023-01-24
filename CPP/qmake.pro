QT += widgets

SOURCES =   launcher.cpp \
            tp1.exe \

TARGET  = MENU

!exists( launcher.cpp ) {
    error("Le fichier [launcher.cpp] n'a pas été trouvé")
}

!exists( tp1.exe ) {
    error("Le fichier [tp1.exe] n'a pas été trouvé")
}
