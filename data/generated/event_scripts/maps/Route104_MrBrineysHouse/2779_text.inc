	@ data/maps/Route104_MrBrineysHouse/scripts.inc:124 Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford
	.globl gText_Rom_21185C
gText_Rom_21185C: @ 0x0821185C
	.string "ハギ『きみの いいたいことは わかっとる!\pムロに てがみを とどけて\nカイナへ にもつを とどけるんだろう\pそれくらい おやすい ごようだ!\nわしに まかせて おきなさい!\lでは まず ムロに むかうとするか!{EOS}"
	.if (. - gText_Rom_21185C) > 0x6b
	.error "gText_Rom_21185C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21185C) < 0x6b
	.space 0x6b - (. - gText_Rom_21185C)
	.endif
