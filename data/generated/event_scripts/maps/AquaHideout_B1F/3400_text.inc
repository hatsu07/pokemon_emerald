	@ data/maps/AquaHideout_B1F/scripts.inc:136 AquaHideout_B1F_Text_Grunt7Intro (+1 aliases)
	.globl gText_Rom_217F3A
gText_Rom_217F3A: @ 0x08217F3A
	.string "ちょっと そこの あんた!\pアクアだんと マグマだんの ユニフォーム\nどっちが かっこいいと おもう?{EOS}"
	.if (. - gText_Rom_217F3A) > 0x34
	.error "gText_Rom_217F3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F3A) < 0x34
	.space 0x34 - (. - gText_Rom_217F3A)
	.endif
