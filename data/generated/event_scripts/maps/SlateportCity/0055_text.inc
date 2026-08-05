	@ data/maps/SlateportCity/scripts.inc:1054 SlateportCity_Text_IllReadSignForYou
	.globl gText_Rom_1DCE7F
gText_Rom_1DCE7F: @ 0x081DCE7F
	.string "おまえ このカンバンが よみたいのか?\nなら オレが かわりに よんでやらぁ!$"
	.if (. - gText_Rom_1DCE7F) > 0x28
	.error "gText_Rom_1DCE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCE7F) < 0x28
	.space 0x28 - (. - gText_Rom_1DCE7F)
	.endif
