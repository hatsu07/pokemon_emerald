	@ data/text/trainers.inc:959 Route111_Text_TravisIntro (+1 aliases)
	.globl gText_Rom_25BD6C
gText_Rom_25BD6C: @ 0x0825BD6C
	.string "ぼくも げんき いっぱい!\nポケモンも げんき いっぱい だよ!$"
	.if (. - gText_Rom_25BD6C) > 0x21
	.error "gText_Rom_25BD6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD6C) < 0x21
	.space 0x21 - (. - gText_Rom_25BD6C)
	.endif
