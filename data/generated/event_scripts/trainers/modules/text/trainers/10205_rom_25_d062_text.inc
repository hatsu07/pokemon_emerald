	@ data/text/trainers.inc:1421 Route114_Text_CharlottePostBattle
	.globl gText_Rom_25D062
gText_Rom_25D062: @ 0x0825D062
	.string "かわいい だけの ポケモンなんて いや!\nかわいくて ひとクセ あるコが すき!$"
	.if (. - gText_Rom_25D062) > 0x29
	.error "gText_Rom_25D062 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D062) < 0x29
	.space 0x29 - (. - gText_Rom_25D062)
	.endif
