	@ data/maps/Route109/scripts.inc:491 DewfordTown_Text_BrineyLandedInSlateport
	.globl gText_Rom_1E8BC7
gText_Rom_1E8BC7: @ 0x081E8BC7
	.string "ハギ『ほい! カイナに とうちゃく!\pふねに のりたくなったら\nまた わしに こえを かけておくれ!{EOS}"
	.if (. - gText_Rom_1E8BC7) > 0x33
	.error "gText_Rom_1E8BC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8BC7) < 0x33
	.space 0x33 - (. - gText_Rom_1E8BC7)
	.endif
