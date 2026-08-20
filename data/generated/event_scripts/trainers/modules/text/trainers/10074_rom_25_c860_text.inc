	@ data/text/trainers.inc:1226 Route113_Text_ToriIntro (+1 aliases)
	.globl gText_Rom_25C860
gText_Rom_25C860: @ 0x0825C860
	.string "ナナ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!{EOS}"
	.if (. - gText_Rom_25C860) > 0x29
	.error "gText_Rom_25C860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C860) < 0x29
	.space 0x29 - (. - gText_Rom_25C860)
	.endif
