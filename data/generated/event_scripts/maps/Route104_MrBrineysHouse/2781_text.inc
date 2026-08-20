	@ data/maps/Route104_MrBrineysHouse/scripts.inc:132 Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford
	.globl gText_Rom_2118C7
gText_Rom_2118C7: @ 0x082118C7
	.string "ハギ『きみの いいたいことは わかっとる!\pカイナの クスノキさんに\nにもつを とどけるんだろう\pそれくらい おやすい ごようだ!\nわしに まかせて おきなさい!\lでは まず ムロに むかうとするか!{EOS}"
	.if (. - gText_Rom_2118C7) > 0x65
	.error "gText_Rom_2118C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2118C7) < 0x65
	.space 0x65 - (. - gText_Rom_2118C7)
	.endif
