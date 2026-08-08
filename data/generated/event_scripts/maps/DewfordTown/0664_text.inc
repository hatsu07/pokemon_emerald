	@ data/maps/DewfordTown/scripts.inc:642 Route104_Text_LandedInDewfordDeliverLetter
	.globl gText_Rom_1E5191
gText_Rom_1E5191: @ 0x081E5191
	.string "ハギ『ほい! ムロに とうちゃく!\pたしか ダイゴとやらに\nてがみを とどけるんだったな!$"
	.if (. - gText_Rom_1E5191) > 0x2e
	.error "gText_Rom_1E5191 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5191) < 0x2e
	.space 0x2e - (. - gText_Rom_1E5191)
	.endif
