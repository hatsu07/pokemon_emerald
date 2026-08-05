	@ data/text/trainers.inc:1904 Route118_Text_WadePostBattle
	.globl gText_Rom_25E532
gText_Rom_25E532: @ 0x0825E532
	.string "つり というのも\nひとと ポケモンとの\lしんけん しょうぶ だな!$"
	.if (. - gText_Rom_25E532) > 0x22
	.error "gText_Rom_25E532 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E532) < 0x22
	.space 0x22 - (. - gText_Rom_25E532)
	.endif
