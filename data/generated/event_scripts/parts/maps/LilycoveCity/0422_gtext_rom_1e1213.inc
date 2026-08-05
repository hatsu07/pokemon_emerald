	@ data/maps/LilycoveCity/scripts.inc:669 LilycoveCity_Text_ContestHallSign
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E1213
gText_Rom_1E1213: @ 0x081E1213
	.string "ポケモンコンテスト かいじょう\nあつまれ! ポケモン トレーナー$"
	.if (. - gText_Rom_1E1213) != 0x21
	.error "gText_Rom_1E1213 must retain its original byte length"
	.endif
