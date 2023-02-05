# Using TFT_eSPI and Arduino in a ESP-IDF project

This example will help you build your arduino projects using esp-idf build system. 

It assumes that esp-idf is already installed and on your system. Refer to [this](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/index.html) article.

Start by importing the esp-idf environment

```bash
cd esp-idf; . ./export.sh; cd ..
```

Don't forget to install and enable ccache - this saves time compiling:

```bash
export IDF_CCACHE_ENABLE=1
```

Then configure the project using

```bash
idf.py menuconfig
```

In "Arduino Configuration" select "Autostart Arduino setup and loop on boot" to be fully Arduino compatible.

In "ComponentConfig --> TFT_eSPI" configure the pins of your display (I've tested with TTGO T-Display ST7789V)

Then build, flash and start monitoring with:

```bash
idf.py flash monitor
```
In montiotor press `Ctrl-T` `Ctrl-X` to exit.
