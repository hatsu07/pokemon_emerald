	@ data/maps/MossdeepCity_House4/scripts.inc:42 MossdeepCity_House4_Text_BrotherLikesToFindBases
	.globl gText_Rom_20CCB5
gText_Rom_20CCB5: @ 0x0820CCB5
	.string "おとうと ったら\nひとの ひみつきちを さがすのが\lたのしみ なんだって!$"
	.if (. - gText_Rom_20CCB5) > 0x26
	.error "gText_Rom_20CCB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20CCB5) < 0x26
	.space 0x26 - (. - gText_Rom_20CCB5)
	.endif
