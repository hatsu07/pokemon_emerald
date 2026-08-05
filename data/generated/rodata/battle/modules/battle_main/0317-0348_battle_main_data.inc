	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3564
gText_Rom_2E3564: @ 0x082E3564
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E3564) != 0xa
	.error "gText_Rom_2E3564 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3568
	.set gText_Rom_2E3568, gText_Rom_2E3564 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E356F
gText_Rom_2E356F: @ 0x082E356F
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E356F) != 0xa
	.error "gText_Rom_2E356F must retain its original byte length"
	.endif
	.globl gText_Rom_2E3573
	.set gText_Rom_2E3573, gText_Rom_2E356F + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:304 battle_main_line_304 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E357A
gText_Rom_2E357A: @ 0x082E357A
	.string "やまおとこ$"
	.if (. - gText_Rom_2E357A) != 0x6
	.error "gText_Rom_2E357A must retain its original byte length"
	.endif
	.globl gText_Rom_2E357C
	.set gText_Rom_2E357C, gText_Rom_2E357A + 0x2
	.space 0x5, 0x00

	@ src/battle_main.c:305 battle_main_line_305 (+1 aliases)
	.globl gText_Rom_2E3585
gText_Rom_2E3585: @ 0x082E3585
	.string "アクアだん$"
	.if (. - gText_Rom_2E3585) > 0x6
	.error "gText_Rom_2E3585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3585) < 0x6
	.space 0x6 - (. - gText_Rom_2E3585)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:306 battle_main_line_306 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3590
gText_Rom_2E3590: @ 0x082E3590
	.string "ポケモンブリーダー$"
	.if (. - gText_Rom_2E3590) != 0xa
	.error "gText_Rom_2E3590 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3595
	.set gText_Rom_2E3595, gText_Rom_2E3590 + 0x5
	.space 0x1, 0x00

	@ src/battle_main.c:307 battle_main_line_307 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E359B
gText_Rom_2E359B: @ 0x082E359B
	.string "エリートトレーナー$"
	.if (. - gText_Rom_2E359B) != 0xa
	.error "gText_Rom_2E359B must retain its original byte length"
	.endif
	.globl gText_Rom_2E359F
	.set gText_Rom_2E359F, gText_Rom_2E359B + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:308 battle_main_line_308 (+1 aliases)
	.globl gText_Rom_2E35A6
gText_Rom_2E35A6: @ 0x082E35A6
	.string "とりつかい$"
	.if (. - gText_Rom_2E35A6) > 0x6
	.error "gText_Rom_2E35A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35A6) < 0x6
	.space 0x6 - (. - gText_Rom_2E35A6)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:309 battle_main_line_309
	.globl gText_Rom_2E35B1
gText_Rom_2E35B1: @ 0x082E35B1
	.string "ポケモンコレクター$"
	.if (. - gText_Rom_2E35B1) > 0xa
	.error "gText_Rom_2E35B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35B1) < 0xa
	.space 0xa - (. - gText_Rom_2E35B1)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:310 battle_main_line_310 (+1 aliases)
	.globl gText_Rom_2E35BC
gText_Rom_2E35BC: @ 0x082E35BC
	.string "かいパンやろう$"
	.if (. - gText_Rom_2E35BC) > 0x8
	.error "gText_Rom_2E35BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35BC) < 0x8
	.space 0x8 - (. - gText_Rom_2E35BC)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:311 battle_main_line_311 (+1 aliases)
	.globl gText_Rom_2E35C7
gText_Rom_2E35C7: @ 0x082E35C7
	.string "マグマだん$"
	.if (. - gText_Rom_2E35C7) > 0x6
	.error "gText_Rom_2E35C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35C7) < 0x6
	.space 0x6 - (. - gText_Rom_2E35C7)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:312 battle_main_line_312
	.globl gText_Rom_2E35D2
gText_Rom_2E35D2: @ 0x082E35D2
	.string "たつじん$"
	.if (. - gText_Rom_2E35D2) > 0x5
	.error "gText_Rom_2E35D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35D2) < 0x5
	.space 0x5 - (. - gText_Rom_2E35D2)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:313 battle_main_line_313
	.globl gText_Rom_2E35DD
gText_Rom_2E35DD: @ 0x082E35DD
	.string "アクアだんかんぶ$"
	.if (. - gText_Rom_2E35DD) > 0x9
	.error "gText_Rom_2E35DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35DD) < 0x9
	.space 0x9 - (. - gText_Rom_2E35DD)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:314 battle_main_line_314 (+1 aliases)
	.globl gText_Rom_2E35E8
gText_Rom_2E35E8: @ 0x082E35E8
	.string "カラテおう$"
	.if (. - gText_Rom_2E35E8) > 0x6
	.error "gText_Rom_2E35E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35E8) < 0x6
	.space 0x6 - (. - gText_Rom_2E35E8)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:315 battle_main_line_315
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E35F3
gText_Rom_2E35F3: @ 0x082E35F3
	.string "アクアだんリーダー$"
	.if (. - gText_Rom_2E35F3) != 0xa
	.error "gText_Rom_2E35F3 must retain its original byte length"
	.endif
