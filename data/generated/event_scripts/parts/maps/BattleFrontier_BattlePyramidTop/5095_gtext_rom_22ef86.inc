	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:234 BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease
	.globl gText_Rom_22EF86
gText_Rom_22EF86: @ 0x0822EF86
	.string "ジンダイ『はっはっは!\nいやぁー じつに すばらしい!\pいいぞ! きみを みとめようじゃ ないか!!\nフロンティアパスを かすんだ!"
	.byte EOS
	.if (. - gText_Rom_22EF86) > 0x43
	.error "gText_Rom_22EF86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EF86) < 0x43
	.space 0x43 - (. - gText_Rom_22EF86)
	.endif
