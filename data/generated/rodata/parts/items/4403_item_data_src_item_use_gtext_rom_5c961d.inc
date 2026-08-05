	@ src/item_use.c:96 sText_TMHMContainedVar1
	.globl gText_Rom_5C961D
gText_Rom_5C961D: @ 0x085C961D
	.string "なかには {STR_VAR_1}が\nきろくされていた!\p{STR_VAR_1}を\nポケモンに おぼえさせますか?$"
	.if (. - gText_Rom_5C961D) > 0x27
	.error "gText_Rom_5C961D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C961D) < 0x27
	.space 0x27 - (. - gText_Rom_5C961D)
	.endif
