#!bin/bash

# 关闭笔记本自带键盘
xinput disable "AT Translated Set 2 keyboard"
xinput disable "UNIW0001:00 093A:1336 Touchpad"

while true
do
    bash ~/.dwm/sh/dwm-upstart.sh
#     ./Up.out
    sleep 0.1s
done
