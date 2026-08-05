	@ data/text/trainers.inc:121 Route103_Text_MiguelIntro (+1 aliases)
	.globl gText_Rom_259AC2
gText_Rom_259AC2: @ 0x08259AC2
	.string "わたしの ポケモンちゃん\nすごく かわいいから みていきたまえ!"
	.byte EOS
	.if (. - gText_Rom_259AC2) > 0x21
	.error "gText_Rom_259AC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AC2) < 0x21
	.space 0x21 - (. - gText_Rom_259AC2)
	.endif
