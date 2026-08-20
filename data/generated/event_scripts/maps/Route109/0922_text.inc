	@ data/maps/Route109/scripts.inc:479 DewfordTown_Text_BrineyLandedInSlateportDeliverGoods
	.globl gText_Rom_1E8B34
gText_Rom_1E8B34: @ 0x081E8B34
	.string "ハギ『ほい! カイナに とうちゃく!\pたしか クスノキさんに\nデボンのにもつを とどけるんだったな!{EOS}"
	.if (. - gText_Rom_1E8B34) > 0x33
	.error "gText_Rom_1E8B34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8B34) < 0x33
	.space 0x33 - (. - gText_Rom_1E8B34)
	.endif
