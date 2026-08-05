	@ src/pokedex_plus_hgss.c:6790 pokedex_plus_hgss_line_6790
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFCC
gText_Rom_5CAFCC: @ 0x085CAFCC
	.string " バッグ$"
	.if (. - gText_Rom_5CAFCC) != 0x5
	.error "gText_Rom_5CAFCC must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFCD
	.set gText_Rom_5CAFCD, gText_Rom_5CAFCC + 0x1
	@ Replaced baserom.gba range: offset=0x5CAFD1, size=0x5
	.byte 0x23, 0x10, 0x0E, 0x10, 0x00

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAFD6
gText_Rom_5CAFD6: @ 0x085CAFD6
	.string "どうぐ$"
	.if (. - gText_Rom_5CAFD6) > 0x4
	.error "gText_Rom_5CAFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFD6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAFD6)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAFDA, size=0xC
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x19, 0x00, 0x3D, 0x35, 0x2E, 0x46, 0x2E, 0xFF

	@ src/strings.c:510 gText_BattlePokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFE6
gText_Rom_5CAFE6: @ 0x085CAFE6
	.string "でてくるポケモン$"
	.if (. - gText_Rom_5CAFE6) != 0x9
	.error "gText_Rom_5CAFE6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFEA
	.set gText_Rom_5CAFEA, gText_Rom_5CAFE6 + 0x4

	@ src/strings.c:511 gText_BattleTrainers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFEF
gText_Rom_5CAFEF: @ 0x085CAFEF
	.string "たたかう トレーナー$"
	.if (. - gText_Rom_5CAFEF) != 0xb
	.error "gText_Rom_5CAFEF must retain its original byte length"
	.endif
	.globl gText_Rom_5CAFF4
	.set gText_Rom_5CAFF4, gText_Rom_5CAFEF + 0x5

