	@ data/text/tv.inc:1159 GabbyAndTy_Text_TyPostBattle
	.globl gText_Rom_25333E
gText_Rom_25333E: @ 0x0825333E
	.string "ダイ『さすがだな!\nいい えいぞうを とることが できたよ!"
	.byte EOS
	.if (. - gText_Rom_25333E) > 0x1f
	.error "gText_Rom_25333E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25333E) < 0x1f
	.space 0x1f - (. - gText_Rom_25333E)
	.endif
