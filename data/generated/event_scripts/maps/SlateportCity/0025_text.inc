	@ data/maps/SlateportCity/scripts.inc:973 SlateportCity_Text_BuyBricksSoDecorWontGetDirty
	.globl gText_Rom_1DCB73
gText_Rom_1DCB73: @ 0x081DCB73
	.string "ぬいぐるみや クッションって\nゆかに おくと よごれちゃうでしょ?\pだから きれいなまま かざれるように\nぬいぐるみや クッションを おくための\lレンガを かいに きたの!$"
	.if (. - gText_Rom_1DCB73) > 0x57
	.error "gText_Rom_1DCB73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCB73) < 0x57
	.space 0x57 - (. - gText_Rom_1DCB73)
	.endif
