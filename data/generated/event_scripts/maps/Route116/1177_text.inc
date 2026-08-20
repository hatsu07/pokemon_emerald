	@ data/maps/Route116/scripts.inc:423 Route116_Text_MayISeeThoseGlasses
	.globl gText_Rom_1EC26A
gText_Rom_1EC26A: @ 0x081EC26A
	.string "その メガネ……?\nちょっと みせてよ!{EOS}"
	.if (. - gText_Rom_1EC26A) > 0x15
	.error "gText_Rom_1EC26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC26A) < 0x15
	.space 0x15 - (. - gText_Rom_1EC26A)
	.endif
