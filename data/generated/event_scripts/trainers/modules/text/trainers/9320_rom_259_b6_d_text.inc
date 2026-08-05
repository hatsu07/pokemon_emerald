	@ data/text/trainers.inc:139 Route103_Text_MiguelRematchPostBattle
	.globl gText_Rom_259B6D
gText_Rom_259B6D: @ 0x08259B6D
	.string "いっしょに いれば いるほど\nポケモンが かわいくなって たまらん!"
	.byte EOS
	.if (. - gText_Rom_259B6D) > 0x23
	.error "gText_Rom_259B6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B6D) < 0x23
	.space 0x23 - (. - gText_Rom_259B6D)
	.endif
