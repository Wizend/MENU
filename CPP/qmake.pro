QT += widgets

SOURCES =   launcher.cpp \

TARGET  = MENU

!exists( launcher.cpp ) {
    error("Le fichier [launcher.cpp] n'a pas été trouvé")
}
