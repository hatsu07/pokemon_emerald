	@ data/maps/MeteorFalls_1F_1R/scripts.inc:239 MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma
	.globl gText_Rom_212D96
gText_Rom_212D96: @ 0x08212D96
	.string "ウヒョ?\pだれだか しらないが\nマグマだんの ジャマを するきなら\lようしゃ しないぜ!$"
	.if (. - gText_Rom_212D96) > 0x2d
	.error "gText_Rom_212D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_212D96) < 0x2d
	.space 0x2d - (. - gText_Rom_212D96)
	.endif
