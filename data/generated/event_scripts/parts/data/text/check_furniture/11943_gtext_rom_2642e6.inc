	@ data/text/check_furniture.inc:18 Text_EmptyTrashCan
	.globl gText_Rom_2642E6
gText_Rom_2642E6: @ 0x082642E6
	.string "なかは からっぽ だ!$"
	.if (. - gText_Rom_2642E6) > 0xc
	.error "gText_Rom_2642E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2642E6) < 0xc
	.space 0xc - (. - gText_Rom_2642E6)
	.endif
