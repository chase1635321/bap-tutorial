# Disassembly

bap can be used to disassemble binaries similar to objdump.

### Basic ir dump

```
bap -d binaries/input
```

### Print with address
```
bap binaries/input -d --print-bir-attr=address
```

### Print strings

```
chase@chase:~/github/bap-tutorial$ bap binaries/input --strings
/lib64/ld-linux-x86-64.so.2
libc.so.6
puts
__cxa_finalize
__libc_start_main
GLIBC_2.2.5
_ITM_deregisterTMCloneTable
__gmon_start__
_ITM_registerTMCloneTable
=i\n 
5b\n 
AWAVI
AUATL
[]A\A]A^A_
Running main
Set local variable
;*3$"
```

### Objdump

```
chase@chase:~/github/bap-tutorial$ bap --objdump-help
```

```
chase@chase:~/github/bap-tutorial$ bap binaries/input --dump-symbols
(.plt 1280 1291)
(__cxa_finalize 1312 1317)
(__do_global_dtors_aux 1520 1528)
(__do_global_dtors_aux 1576 1577)
(__do_global_dtors_aux 1529 1542)
(__do_global_dtors_aux 1543 1554)
(__do_global_dtors_aux 1555 1559)
(__do_global_dtors_aux 1560 1568)
(__libc_csu_fini 1872 1873)
(__libc_csu_init 1760 1808)
(__libc_csu_init 1809 1813)
(__libc_csu_init 1814 1823)
(__libc_csu_init 1824 1836)
(__libc_csu_init 1837 1845)
(__libc_csu_init 1846 1860)
(_fini 1876 1884)
(_init 1256 1271)
(_init 1272 1273)
(_init 1274 1278)
(_start 1328 1369)
(_start 1370 1375)
(a 1594 1608)
(b 1609 1622)
(c 1623 1637)
(d 1638 1658)
(deregister_tm_clones 1376 1398)
(deregister_tm_clones 1399 1410)
(deregister_tm_clones 1424 1425)
(deregister_tm_clones 1411 1413)
(frame_dummy 1584 1593)
(main 1659 1679)
(main 1680 1698)
(main 1699 1711)
(main 1712 1718)
(main 1719 1730)
(main 1731 1737)
(main 1738 1746)
(puts 1296 1301)
(register_tm_clones 1440 1479)
(register_tm_clones 1480 1491)
(register_tm_clones 1504 1505)
(register_tm_clones 1492 1494)
```

### Disassemble

Dump the disassembly

```
chase@chase:~/github/bap-tutorial$ bap binaries/input -d
```

Dump the disassembly in ssa form

```
chase@chase:~/github/bap-tutorial$ bap binaries/input -d --ssa
```

