	.globl gText_Rom_2E3686
	.set gText_Rom_2E3686, gText_Rom_2E3682 + 0x4
	.space 0x3, 0x00

	@ src/battle_main.c:329 battle_main_line_329 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E368D
gText_Rom_2E368D: @ 0x082E368D
	.string "ピクニックガール$"
	.if (. - gText_Rom_2E368D) != 0x9
	.error "gText_Rom_2E368D must retain its original byte length"
	.endif
	.globl gText_Rom_2E3692
	.set gText_Rom_2E3692, gText_Rom_2E368D + 0x5
	.space 0x2, 0x00

	@ src/battle_main.c:330 battle_main_line_330
	.globl gText_Rom_2E3698
gText_Rom_2E3698: @ 0x082E3698
	.string "こんちゅうマニア$"
	.if (. - gText_Rom_2E3698) > 0x9
	.error "gText_Rom_2E3698 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3698) < 0x9
	.space 0x9 - (. - gText_Rom_2E3698)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:331 battle_main_line_331 (+1 aliases)
	.globl gText_Rom_2E36A3
gText_Rom_2E36A3: @ 0x082E36A3
	.string "サイキッカー$"
	.if (. - gText_Rom_2E36A3) > 0x7
	.error "gText_Rom_2E36A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36A3) < 0x7
	.space 0x7 - (. - gText_Rom_2E36A3)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:332 battle_main_line_332 (+1 aliases)
	.globl gText_Rom_2E36AE
gText_Rom_2E36AE: @ 0x082E36AE
	.string "ジェントルマン$"
	.if (. - gText_Rom_2E36AE) > 0x8
	.error "gText_Rom_2E36AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36AE) < 0x8
	.space 0x8 - (. - gText_Rom_2E36AE)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
	.globl gText_Rom_2E36B9
gText_Rom_2E36B9: @ 0x082E36B9
	.string "してんのう$"
	.if (. - gText_Rom_2E36B9) > 0x6
	.error "gText_Rom_2E36B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36B9) < 0x6
	.space 0x6 - (. - gText_Rom_2E36B9)
	.endif
	.space 0x5, 0x00

	@ src/battle_main.c:334 battle_main_line_334 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E36C4
gText_Rom_2E36C4: @ 0x082E36C4
	.string "ジムリーダー$"
	.if (. - gText_Rom_2E36C4) != 0x7
	.error "gText_Rom_2E36C4 must retain its original byte length"
	.endif
	.globl gText_Rom_2E36C6
	.set gText_Rom_2E36C6, gText_Rom_2E36C4 + 0x2
	.space 0x4, 0x00

	@ src/battle_main.c:335 battle_main_line_335
	.globl gText_Rom_2E36CF
gText_Rom_2E36CF: @ 0x082E36CF
	.string "じゅくがえり$"
	.if (. - gText_Rom_2E36CF) > 0x7
	.error "gText_Rom_2E36CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36CF) < 0x7
	.space 0x7 - (. - gText_Rom_2E36CF)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:336 battle_main_line_336
	.globl gText_Rom_2E36DA
gText_Rom_2E36DA: @ 0x082E36DA
	.string "センパイとコウハイ$"
	.if (. - gText_Rom_2E36DA) > 0xa
	.error "gText_Rom_2E36DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36DA) < 0xa
	.space 0xa - (. - gText_Rom_2E36DA)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:337 battle_main_line_337
	.globl gText_Rom_2E36E5
gText_Rom_2E36E5: @ 0x082E36E5
	.string "カチヌキさんち$"
	.if (. - gText_Rom_2E36E5) > 0x8
	.error "gText_Rom_2E36E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36E5) < 0x8
	.space 0x8 - (. - gText_Rom_2E36E5)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:338 battle_main_line_338
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E36F0
gText_Rom_2E36F0: @ 0x082E36F0
	.string "だいすきクラブ$"
	.if (. - gText_Rom_2E36F0) != 0x8
	.error "gText_Rom_2E36F0 must retain its original byte length"
	.endif
	.globl gText_Rom_2E36F4
	.set gText_Rom_2E36F4, gText_Rom_2E36F0 + 0x4
	.space 0x3, 0x00

	@ src/battle_main.c:339 battle_main_line_339 (+1 aliases)
	.globl gText_Rom_2E36FB
gText_Rom_2E36FB: @ 0x082E36FB
	.string "たんぱんこぞう$"
	.if (. - gText_Rom_2E36FB) > 0x8
	.error "gText_Rom_2E36FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36FB) < 0x8
	.space 0x8 - (. - gText_Rom_2E36FB)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
	.globl gText_Rom_2E3706
gText_Rom_2E3706: @ 0x082E3706
	.string "チャンピオン$"
	.if (. - gText_Rom_2E3706) > 0x7
	.error "gText_Rom_2E3706 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3706) < 0x7
	.space 0x7 - (. - gText_Rom_2E3706)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:341 battle_main_line_341 (+1 aliases)
	.globl gText_Rom_2E3711
gText_Rom_2E3711: @ 0x082E3711
	.string "つりびと$"
	.if (. - gText_Rom_2E3711) > 0x5
	.error "gText_Rom_2E3711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3711) < 0x5
	.space 0x5 - (. - gText_Rom_2E3711)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:342 battle_main_line_342
	.globl gText_Rom_2E371C
gText_Rom_2E371C: @ 0x082E371C
	.string "トライアスリート$"
	.if (. - gText_Rom_2E371C) > 0x9
	.error "gText_Rom_2E371C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E371C) < 0x9
	.space 0x9 - (. - gText_Rom_2E371C)
	.endif
	.space 0x2, 0x00
