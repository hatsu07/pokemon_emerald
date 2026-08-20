	@ data/text/trainers.inc:518 Route108_Text_MatthewDefeated (+1 aliases)
	.globl gText_Rom_25ABEB
gText_Rom_25ABEB: @ 0x0825ABEB
	.string "ああ ぼくが しずむ……\nぶくぶく……{EOS}"
	.if (. - gText_Rom_25ABEB) > 0x14
	.error "gText_Rom_25ABEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABEB) < 0x14
	.space 0x14 - (. - gText_Rom_25ABEB)
	.endif
