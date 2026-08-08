	@ data/maps/SlateportCity/scripts.inc:1196 SlateportCity_Text_BattleTentSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DD3F8
gText_Rom_1DD3F8: @ 0x081DD3F8
	.string "バトルテント カイナシティ かいじょう\nさがせ! さいきょう ポケモン$"
	.if (. - gText_Rom_1DD3F8) != 0x24
	.error "gText_Rom_1DD3F8 must retain its original byte length"
	.endif
