	@ data/text/trainers.inc:3254 Route132_Text_MakaylaPostBattle
	.globl gText_Rom_261CDD
gText_Rom_261CDD: @ 0x08261CDD
	.string "あの わかい おとこのこ\nじいさんの わかい ころに そっくりじゃ\lポッ……$"
	.if (. - gText_Rom_261CDD) > 0x27
	.error "gText_Rom_261CDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261CDD) < 0x27
	.space 0x27 - (. - gText_Rom_261CDD)
	.endif
