	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl gText_Rom_25E5EB
gText_Rom_25E5EB: @ 0x0825E5EB
	.string "ルー ルルルー$"
	.if (. - gText_Rom_25E5EB) > 0x8
	.error "gText_Rom_25E5EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E5EB) < 0x8
	.space 0x8 - (. - gText_Rom_25E5EB)
	.endif
