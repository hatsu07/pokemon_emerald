	@ data/text/trainers.inc:1238 Route113_Text_TiaIntro (+1 aliases)
	.globl gText_Rom_25C8FA
gText_Rom_25C8FA: @ 0x0825C8FA
	.string "ネネ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!$"
	.if (. - gText_Rom_25C8FA) > 0x29
	.error "gText_Rom_25C8FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C8FA) < 0x29
	.space 0x29 - (. - gText_Rom_25C8FA)
	.endif
