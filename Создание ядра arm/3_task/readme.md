### Реализация arm linux c фапловой системой busybox
### Запуск: 
QEMU_AUDIO_DRV=none qemu-system-arm -nographic -machine vexpress-a9 -kernel zImage -dtb vexpress-v2p-ca9.dtb -append "console=ttyAMA0 rdinit=/bin/ash" -initrd initramfs.cpio.gz

### Выход:
CTRL+A потом X
