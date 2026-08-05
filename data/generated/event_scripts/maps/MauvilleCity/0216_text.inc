	@ data/maps/MauvilleCity/scripts.inc:650 MauvilleCity_Text_GameCornerSign
	.globl gText_Rom_1DE608
gText_Rom_1DE608: @ 0x081DE608
	.string "だれもが あそべる すてきな スポット!\n「キンセツ ゲームコーナー」$"
	.if (. - gText_Rom_1DE608) > 0x24
	.error "gText_Rom_1DE608 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE608) < 0x24
	.space 0x24 - (. - gText_Rom_1DE608)
	.endif
