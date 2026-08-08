	@ data/text/trainers.inc:404 Route106_Text_NedPostBattle
	.globl gText_Rom_25A714
gText_Rom_25A714: @ 0x0825A714
	.string "ああっ!\nおおものが つれそうな よかん……!$"
	.if (. - gText_Rom_25A714) > 0x18
	.error "gText_Rom_25A714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A714) < 0x18
	.space 0x18 - (. - gText_Rom_25A714)
	.endif
