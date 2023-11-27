# Mycode
1.开机自检（BOOTROM）

当开机时，系统首先由片上ROM（BOOTROM）加载固化在其内的第一个BootLoader程序（如U-Boot）。BootLoader程序是一个轻量级的程序，负责初始化硬件设备，加载内核和根文件系统。在加载内核和根文件系统之前，BootLoader程序要对设备进行一系列的自检和初始化工作，例如检测DRAM，初始化CPU，检测外设，设置串口等。初始化结束后，BootLoader程序将控制权转交给内核。
