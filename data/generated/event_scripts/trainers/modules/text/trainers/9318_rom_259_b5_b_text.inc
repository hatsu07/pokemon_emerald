	@ data/text/trainers.inc:136 Route103_Text_MiguelRematchDefeated (+1 aliases)
	.globl gText_Rom_259B5B
gText_Rom_259B5B: @ 0x08259B5B
	.string "ああ!\nわたしの ポケモンちゃん!"
	.byte EOS
	.if (. - gText_Rom_259B5B) > 0x12
	.error "gText_Rom_259B5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B5B) < 0x12
	.space 0x12 - (. - gText_Rom_259B5B)
	.endif
