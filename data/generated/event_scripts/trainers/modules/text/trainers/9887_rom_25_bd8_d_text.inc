	@ data/text/trainers.inc:962 Route111_Text_TravisDefeat (+1 aliases)
	.globl gText_Rom_25BD8D
gText_Rom_25BD8D: @ 0x0825BD8D
	.string "ポケモンの げんき なくなったよ{EOS}"
	.if (. - gText_Rom_25BD8D) > 0x11
	.error "gText_Rom_25BD8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD8D) < 0x11
	.space 0x11 - (. - gText_Rom_25BD8D)
	.endif
