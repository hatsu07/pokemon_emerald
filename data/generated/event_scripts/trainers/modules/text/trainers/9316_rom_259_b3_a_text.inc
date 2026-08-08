	@ data/text/trainers.inc:133 Route103_Text_MiguelRematchIntro (+1 aliases)
	.globl gText_Rom_259B3A
gText_Rom_259B3A: @ 0x08259B3A
	.string "きみ! わたしの ポケモンちゃん\nさらに かわいく なったのだ!"
	.byte EOS
	.if (. - gText_Rom_259B3A) > 0x21
	.error "gText_Rom_259B3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B3A) < 0x21
	.space 0x21 - (. - gText_Rom_259B3A)
	.endif
