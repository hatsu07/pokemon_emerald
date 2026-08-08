	@ data/text/trainers.inc:2534 Route123_Text_JazmynPostBattle
	.globl gText_Rom_25FEF3
gText_Rom_25FEF3: @ 0x0825FEF3
	.string "ヒトは みためには よらないと いうけど\nけっこう みためどおりの ことも あるわね$"
	.if (. - gText_Rom_25FEF3) > 0x2b
	.error "gText_Rom_25FEF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FEF3) < 0x2b
	.space 0x2b - (. - gText_Rom_25FEF3)
	.endif
