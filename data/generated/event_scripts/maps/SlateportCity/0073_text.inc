	@ data/maps/SlateportCity/scripts.inc:1101 SlateportCity_Text_BattleTentBuiltRecently
	.globl gText_Rom_1DD037
gText_Rom_1DD037: @ 0x081DD037
	.string "さいきん カイナには\nバトルテントが できたんだ\lジムも いいけど バトルテントも いいぜ!\pおまえも つよい ポケモン さがしに\nいって みなよ!$"
	.if (. - gText_Rom_1DD037) > 0x4b
	.error "gText_Rom_1DD037 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD037) < 0x4b
	.space 0x4b - (. - gText_Rom_1DD037)
	.endif
