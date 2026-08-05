	@ data/text/blend_master.inc:75 BerryBlender_Text_QualitiesOfBlendMaster
	.globl gText_Rom_274990
gText_Rom_274990: @ 0x08274990
	.string "やじるしを おっていく\nスキのない めの うごき!\pボタンを おすときの\nせいかくな ての うごき!\pこの ふたつを あわせもつ\nめいじんは ホント すごいね!$"
	.if (. - gText_Rom_274990) > 0x51
	.error "gText_Rom_274990 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274990) < 0x51
	.space 0x51 - (. - gText_Rom_274990)
	.endif
