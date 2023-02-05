# Example how to use TFT_eSPI and arduino in a ESP-IDF project

This example will help you build your arduino projects using esp-idf build system. It assumes that esp-idf is already installed on your system.

Start by importing the esp-idf environment

  cd esp-idf; . ./export.sh; cd ..

Don't forget to install enable ccache - this saves time compiling:

  export IDF_CCACHE_ENABLE=1

Then configure the project using

  idf.py menuconfig

In "Arduino Configuration" select "Autostart Arduino setup and loop on boot" to be arduino compatible

In "ComponentConfig --> TFT_eSPI" configure the pins of your display (I've tested with TTGO T-Display ST7789V)

Then build, flash and start monitoring with (exit terminal with Ctrl-T Ctrl-X):

  idf.py flash monitor