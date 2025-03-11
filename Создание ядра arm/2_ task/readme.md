### Реализация arm linux c минимальной фапловой системой

### Запуск: 
QEMU_AUDIO_DRV=none qemu-system-arm -M vexpress-a9 -kernel zImage -dtb vexpress-v2p-ca9.dtb -initrd initramfs.cpio.gz -append "console=ttyAMA0" -nographic

### Выход:
CTRL+A потом X
