	@ data/text/blend_master.inc:1 BerryBlender_Text_BlendWithTheBlendMaster
	.globl gText_Rom_274705
gText_Rom_274705: @ 0x08274705
	.string "めいじん『いかにも!\nわしが ブレンドめいじん じゃ!\pいっしょに まわして\nわしの すごい わざを みるがよい$"
	.if (. - gText_Rom_274705) > 0x39
	.error "gText_Rom_274705 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274705) < 0x39
	.space 0x39 - (. - gText_Rom_274705)
	.endif
