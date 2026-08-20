	@ data/maps/MauvilleCity/scripts.inc:515 MauvilleCity_Text_WallyDefeat (+1 aliases)
	.globl gText_Rom_1DE05D
gText_Rom_1DE05D: @ 0x081DE05D
	.string "ミツル『…… …… …… ……\p…… …… …… ……\pぼくの まけ です……{EOS}"
	.if (. - gText_Rom_1DE05D) > 0x28
	.error "gText_Rom_1DE05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE05D) < 0x28
	.space 0x28 - (. - gText_Rom_1DE05D)
	.endif
