	@ data/maps/SootopolisCity/scripts.inc:1402 SootopolisCity_Text_TwoPokemonArentAngry
	.globl gText_Rom_1E2D60
gText_Rom_1E2D60: @ 0x081E2D60
	.string "なんとなく かんじるよ…… あの2ひき\nおこってる わけじゃ ないみたい\pたぶん…… じぶんの ちからを\nコントロール できなく なってるんだ……$"
	.if (. - gText_Rom_1E2D60) > 0x4a
	.error "gText_Rom_1E2D60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2D60) < 0x4a
	.space 0x4a - (. - gText_Rom_1E2D60)
	.endif
