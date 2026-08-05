	@ data/text/trainers.inc:1718 Route117_Text_LydiaPostRematch
	.globl gText_Rom_25DCD5
gText_Rom_25DCD5: @ 0x0825DCD5
	.string "ポケモンの せいかくに よって\nすきな ポロックが あるみたいなの$"
	.if (. - gText_Rom_25DCD5) > 0x22
	.error "gText_Rom_25DCD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCD5) < 0x22
	.space 0x22 - (. - gText_Rom_25DCD5)
	.endif
