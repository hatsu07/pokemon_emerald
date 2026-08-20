	@ data/text/trainers.inc:683 Route109_Text_PaulPostBattle
	.globl gText_Rom_25B197
gText_Rom_25B197: @ 0x0825B197
	.string "リキ『やあ ぼくたちが ここに いること\nだれにも いわないで くれよ!\lふたりっきりの せかい なんだからさ!{EOS}"
	.if (. - gText_Rom_25B197) > 0x39
	.error "gText_Rom_25B197 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B197) < 0x39
	.space 0x39 - (. - gText_Rom_25B197)
	.endif
