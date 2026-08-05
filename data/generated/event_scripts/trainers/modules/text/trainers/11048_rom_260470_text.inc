	@ data/text/trainers.inc:2657 Route124_Text_RoyPostBattle
	.globl gText_Rom_260470
gText_Rom_260470: @ 0x08260470
	.string "コウ『オレの ねえちゃん\nおこると むちゃくちゃ こわいんだ……\pだから こいびと いないんだぜ……$"
	.if (. - gText_Rom_260470) > 0x33
	.error "gText_Rom_260470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260470) < 0x33
	.space 0x33 - (. - gText_Rom_260470)
	.endif
