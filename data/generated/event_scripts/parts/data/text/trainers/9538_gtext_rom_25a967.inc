	@ data/text/trainers.inc:461 Route107_Text_DenisePostBattle
	.globl gText_Rom_25A967
gText_Rom_25A967: @ 0x0825A967
	.string "ムロタウンの しゅうかいじょで\nふしぎな ことばが はやって いるのよ!$"
	.if (. - gText_Rom_25A967) > 0x25
	.error "gText_Rom_25A967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A967) < 0x25
	.space 0x25 - (. - gText_Rom_25A967)
	.endif
