	@ data/text/pc.inc:19 gText_AccessedLanettesPC
	.globl gText_Rom_243728
gText_Rom_243728: @ 0x08243728
	.string "マユミの パソコンに せつぞく した!$"
	.if (. - gText_Rom_243728) > 0x14
	.error "gText_Rom_243728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243728) < 0x14
	.space 0x14 - (. - gText_Rom_243728)
	.endif
