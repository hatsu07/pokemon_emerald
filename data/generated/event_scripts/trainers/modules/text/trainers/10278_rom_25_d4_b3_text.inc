	@ data/text/trainers.inc:1523 Route115_Text_JaidenIntro (+1 aliases)
	.globl gText_Rom_25D4B3
gText_Rom_25D4B3: @ 0x0825D4B3
	.string "くらえーっ\nにんぽう すごポケモンの じゅつ!{EOS}"
	.if (. - gText_Rom_25D4B3) > 0x18
	.error "gText_Rom_25D4B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D4B3) < 0x18
	.space 0x18 - (. - gText_Rom_25D4B3)
	.endif
