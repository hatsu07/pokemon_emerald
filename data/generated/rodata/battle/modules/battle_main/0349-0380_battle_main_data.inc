	.globl gText_Rom_2E35F8
	.set gText_Rom_2E35F8, gText_Rom_2E35F3 + 0x5
	.space 0x1, 0x00

	@ src/battle_main.c:316 battle_main_line_316
	.globl gText_Rom_2E35FE
gText_Rom_2E35FE: @ 0x082E35FE
	.string "オカルトマニア$"
	.if (. - gText_Rom_2E35FE) > 0x8
	.error "gText_Rom_2E35FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E35FE) < 0x8
	.space 0x8 - (. - gText_Rom_2E35FE)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:317 battle_main_line_317 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3609
gText_Rom_2E3609: @ 0x082E3609
	.string "アロマなおねえさん$"
	.if (. - gText_Rom_2E3609) != 0xa
	.error "gText_Rom_2E3609 must retain its original byte length"
	.endif
	.globl gText_Rom_2E360D
	.set gText_Rom_2E360D, gText_Rom_2E3609 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:318 battle_main_line_318 (+1 aliases)
	.globl gText_Rom_2E3614
gText_Rom_2E3614: @ 0x082E3614
	.string "いせきマニア$"
	.if (. - gText_Rom_2E3614) > 0x7
	.error "gText_Rom_2E3614 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3614) < 0x7
	.space 0x7 - (. - gText_Rom_2E3614)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:319 battle_main_line_319
	.globl gText_Rom_2E361F
gText_Rom_2E361F: @ 0x082E361F
	.string "インタビュアー$"
	.if (. - gText_Rom_2E361F) > 0x8
	.error "gText_Rom_2E361F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E361F) < 0x8
	.space 0x8 - (. - gText_Rom_2E361F)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:320 battle_main_line_320 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E362A
gText_Rom_2E362A: @ 0x082E362A
	.string "うきわガール$"
	.if (. - gText_Rom_2E362A) != 0x7
	.error "gText_Rom_2E362A must retain its original byte length"
	.endif
	.globl gText_Rom_2E362D
	.set gText_Rom_2E362D, gText_Rom_2E362A + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:321 battle_main_line_321
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3635
gText_Rom_2E3635: @ 0x082E3635
	.string "うきわボーイ$"
	.if (. - gText_Rom_2E3635) != 0x7
	.error "gText_Rom_2E3635 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3638
	.set gText_Rom_2E3638, gText_Rom_2E3635 + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:322 battle_main_line_322 (+1 aliases)
	.globl gText_Rom_2E3640
gText_Rom_2E3640: @ 0x082E3640
	.string "おじょうさま$"
	.if (. - gText_Rom_2E3640) > 0x7
	.error "gText_Rom_2E3640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3640) < 0x7
	.space 0x7 - (. - gText_Rom_2E3640)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:323 battle_main_line_323 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E364B
gText_Rom_2E364B: @ 0x082E364B
	.string "おとなのおねえさん$"
	.if (. - gText_Rom_2E364B) != 0xa
	.error "gText_Rom_2E364B must retain its original byte length"
	.endif
	.globl gText_Rom_2E364F
	.set gText_Rom_2E364F, gText_Rom_2E364B + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:324 battle_main_line_324
	.globl gText_Rom_2E3656
gText_Rom_2E3656: @ 0x082E3656
	.string "おぼっちゃま$"
	.if (. - gText_Rom_2E3656) > 0x7
	.error "gText_Rom_2E3656 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3656) < 0x7
	.space 0x7 - (. - gText_Rom_2E3656)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:325 battle_main_line_325 (+1 aliases)
	.globl gText_Rom_2E3661
gText_Rom_2E3661: @ 0x082E3661
	.string "かいじゅうマニア$"
	.if (. - gText_Rom_2E3661) > 0x9
	.error "gText_Rom_2E3661 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3661) < 0x9
	.space 0x9 - (. - gText_Rom_2E3661)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:326 battle_main_line_326
	.globl gText_Rom_2E366C
gText_Rom_2E366C: @ 0x082E366C
	.string "ギタリスト$"
	.if (. - gText_Rom_2E366C) > 0x6
	.error "gText_Rom_2E366C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E366C) < 0x6
	.space 0x6 - (. - gText_Rom_2E366C)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:327 battle_main_line_327
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3677
gText_Rom_2E3677: @ 0x082E3677
	.string "キャンプファイヤー$"
	.if (. - gText_Rom_2E3677) != 0xa
	.error "gText_Rom_2E3677 must retain its original byte length"
	.endif
	.globl gText_Rom_2E367B
	.set gText_Rom_2E367B, gText_Rom_2E3677 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:328 battle_main_line_328 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3682
gText_Rom_2E3682: @ 0x082E3682
	.string "キャンプボーイ$"
	.if (. - gText_Rom_2E3682) != 0x8
	.error "gText_Rom_2E3682 must retain its original byte length"
	.endif
