	@ data/maps/DewfordTown/scripts.inc:654 DewfordTown_Text_BrineyLandedInDewford
	.globl gText_Rom_1E522C
gText_Rom_1E522C: @ 0x081E522C
	.string "ハギ『ほい! ムロタウンに とうちゃく!\pふねに のりたくなったら\nまた わしに こえを かけておくれ!$"
	.if (. - gText_Rom_1E522C) > 0x35
	.error "gText_Rom_1E522C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E522C) < 0x35
	.space 0x35 - (. - gText_Rom_1E522C)
	.endif
