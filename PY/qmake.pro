SOURCES =   launcher.cpp \
            tp1.exe \
            tp2.exe \
            tp3.exe \

TARGET  = MENU

!exists( launcher.cpp || tp1.exe || tp2.exe || tp3.exe ) {
    error("No launcher.cpp file found )
}

