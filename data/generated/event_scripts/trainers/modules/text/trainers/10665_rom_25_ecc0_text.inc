	@ data/text/trainers.inc:2087 Route119_Text_FabianIntro (+1 aliases)
	.globl gText_Rom_25ECC0
gText_Rom_25ECC0: @ 0x0825ECC0
	.string "デケデケデケデケ\nかつぜーヘ おれたちーヒ かつぜーヘ{EOS}"
	.if (. - gText_Rom_25ECC0) > 0x1c
	.error "gText_Rom_25ECC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ECC0) < 0x1c
	.space 0x1c - (. - gText_Rom_25ECC0)
	.endif
