	@ data/text/trainers.inc:3203 Route131_Text_KevinIntro (+1 aliases)
	.globl gText_Rom_261AD0
gText_Rom_261AD0: @ 0x08261AD0
	.string "キナギには おおらかな やつ ばかりだぜ!\nぜったい おこったり しないんだ\lもちろん オレもな$"
	.if (. - gText_Rom_261AD0) > 0x31
	.error "gText_Rom_261AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261AD0) < 0x31
	.space 0x31 - (. - gText_Rom_261AD0)
	.endif
