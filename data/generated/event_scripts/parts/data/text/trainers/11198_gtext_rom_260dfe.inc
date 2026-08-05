	@ data/text/trainers.inc:2879 Route126_Text_IsobelPostBattle
	.globl gText_Rom_260DFE
gText_Rom_260DFE: @ 0x08260DFE
	.string "かいすいを ちょっと のんじゃった……!\nからいーッ にがいーッ!$"
	.if (. - gText_Rom_260DFE) > 0x22
	.error "gText_Rom_260DFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260DFE) < 0x22
	.space 0x22 - (. - gText_Rom_260DFE)
	.endif
