## gk's build of suckless' st

Warning: This build contains annaisms and is annaware  
Avoid at all costs.

## Installing:

    $ git clone https://github.com/GaugeK/st
    $ cd st/
    $ sudo make clean install

#### Patches:

- Bold Is Not Bright

- Boxdraw

- Disable Bold, Italic, and Roman fonts

- Scrollback

- Scrollback-Mouse

- Xresources

- [Live-reload](https://github.com/PaxPlay/st) (Modified to reload more than just colours)

#### Other stuff:

- color16 and 17 for accent / accent2

- live reload
  - SIGUSR1 reload only reloads on focus & makes ^d not work in zsh unless you ^c first
  - [cmessage](https://github.com/GaugeK/stmessage) works perfectly
