	@ data/text/trainers.inc:3371 Route134_Text_AlexPostBattle
	.globl gText_Rom_26211F
gText_Rom_26211F: @ 0x0826211F
	.string "オレの とりポケモンたち……\nながいあいだ とぶと すぐに バテるんだ$"
	.if (. - gText_Rom_26211F) > 0x24
	.error "gText_Rom_26211F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26211F) < 0x24
	.space 0x24 - (. - gText_Rom_26211F)
	.endif
