	@ data/text/check_furniture.inc:25 Text_Blueprint
	.globl gText_Rom_264313
gText_Rom_264313: @ 0x08264313
	.string "なにかの せっけいず……?\nみても チンプンカンプン!$"
	.if (. - gText_Rom_264313) > 0x1c
	.error "gText_Rom_264313 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264313) < 0x1c
	.space 0x1c - (. - gText_Rom_264313)
	.endif
	@ Embedded ROM bytes: file offset 0x26432F, size 0x10
	.byte 0x22, 0x40, 0x00, 0x00, 0x3F, 0x43, 0x26, 0x08, 0x00, 0x00, 0x19, 0x22, 0x40, 0x01, 0x00, 0x02
