	@ data/text/trainers.inc:124 Route103_Text_MiguelDefeated (+1 aliases)
	.globl gText_Rom_259AE3
gText_Rom_259AE3: @ 0x08259AE3
	.string "あわわ……\nわたしの ポケモンちゃん!"
	.byte EOS
	.if (. - gText_Rom_259AE3) > 0x14
	.error "gText_Rom_259AE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AE3) < 0x14
	.space 0x14 - (. - gText_Rom_259AE3)
	.endif
