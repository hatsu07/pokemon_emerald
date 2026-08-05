	@ data/maps/MtChimney/scripts.inc:839 MtChimney_Text_SawyerRegister
	.globl gText_Rom_215A6C
gText_Rom_215A6C: @ 0x08215A6C
	.string "あつい トレーナーは すきだなあ!\nポケナビに とうろくしても いいかい$"
	.if (. - gText_Rom_215A6C) > 0x25
	.error "gText_Rom_215A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215A6C) < 0x25
	.space 0x25 - (. - gText_Rom_215A6C)
	.endif
