### Реализация arm linux БЕЗ ФАЙЛОВОЙ СИСТЕМЫ

### Запуск: 
QEMU_AUDIO_DRV=none qemu-system-arm -M vexpress-a9 -kernel zImage -dtb vexpress-v2p-ca9.dtb -append "console=ttyAMA0" -nographic

### Выход:
CTRL+A потом X