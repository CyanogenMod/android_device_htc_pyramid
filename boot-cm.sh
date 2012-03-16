#!/bin/sh

su
mount -o remount,rw rootfs /
mkdir /cm-system
mount -t ext4 -o noatime,data=ordered /dev/block/mmcblk1p2 /cm-system
chmod 4755 /cm-system/xbin/su
stop
stop servicemanager
stop vold
stop netd
stop media
stop wpa_supplicant
stop dhcpcd
stop debuggerd
stop dbus
stop installd
stop keystore
stop akmd
stop rmt_storage
pkill htc_ebdlogd
pkill logcat2
mount -o bind -t ext4 /cm-system /system
mount -o bind -t ext4 /system/data /data
chmod 777 /cache
chmod 777 /cache/dalvik-cache
start rmt_storage
start htc_ebdlogd
start servicemanager
start vold
start netd
start dbus
start installd
start keystore
start akmd
start media
start

