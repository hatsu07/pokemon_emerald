
	@ src/battle_main.c:343 battle_main_line_343
	.globl gText_Rom_2E3727
gText_Rom_2E3727: @ 0x082E3727
	.string "ドラゴンつかい$"
	.if (. - gText_Rom_2E3727) > 0x8
	.error "gText_Rom_2E3727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3727) < 0x8
	.space 0x8 - (. - gText_Rom_2E3727)
	.endif
	.space 0x3, 0x00

	@ src/battle_main.c:344 battle_main_line_344
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3732
gText_Rom_2E3732: @ 0x082E3732
	.string "ニンジャごっこ$"
	.if (. - gText_Rom_2E3732) != 0x8
	.error "gText_Rom_2E3732 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3736
	.set gText_Rom_2E3736, gText_Rom_2E3732 + 0x4
	.space 0x3, 0x00

	@ src/battle_main.c:345 battle_main_line_345
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E373D
gText_Rom_2E373D: @ 0x082E373D
	.string "バトルガール$"
	.if (. - gText_Rom_2E373D) != 0x7
	.error "gText_Rom_2E373D must retain its original byte length"
	.endif
	.globl gText_Rom_2E3740
	.set gText_Rom_2E3740, gText_Rom_2E373D + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:346 battle_main_line_346
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3748
gText_Rom_2E3748: @ 0x082E3748
	.string "パラソルおねえさん$"
	.if (. - gText_Rom_2E3748) != 0xa
	.error "gText_Rom_2E3748 must retain its original byte length"
	.endif
	.globl gText_Rom_2E374C
	.set gText_Rom_2E374C, gText_Rom_2E3748 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:347 battle_main_line_347 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3753
gText_Rom_2E3753: @ 0x082E3753
	.string "ビキニのおねえさん$"
	.if (. - gText_Rom_2E3753) != 0xa
	.error "gText_Rom_2E3753 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3757
	.set gText_Rom_2E3757, gText_Rom_2E3753 + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:348 battle_main_line_348 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E375E
gText_Rom_2E375E: @ 0x082E375E
	.string "ふたごちゃん$"
	.if (. - gText_Rom_2E375E) != 0x7
	.error "gText_Rom_2E375E must retain its original byte length"
	.endif
	.globl gText_Rom_2E3761
	.set gText_Rom_2E3761, gText_Rom_2E375E + 0x3
	.space 0x4, 0x00

	@ src/battle_main.c:349 battle_main_line_349 (+1 aliases)
	.globl gText_Rom_2E3769
gText_Rom_2E3769: @ 0x082E3769
	.string "ふなのり$"
	.if (. - gText_Rom_2E3769) > 0x5
	.error "gText_Rom_2E3769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3769) < 0x5
	.space 0x5 - (. - gText_Rom_2E3769)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:350 battle_main_line_350
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E3774
gText_Rom_2E3774: @ 0x082E3774
	.string "エリートレーナー$"
	.if (. - gText_Rom_2E3774) != 0x9
	.error "gText_Rom_2E3774 must retain its original byte length"
	.endif
	.globl gText_Rom_2E3777
	.set gText_Rom_2E3777, gText_Rom_2E3774 + 0x3
	.space 0x2, 0x00

	@ src/battle_main.c:351 battle_main_line_351
	.globl gText_Rom_2E377F
gText_Rom_2E377F: @ 0x082E377F
	.string "マグマだんかんぶ$"
	.if (. - gText_Rom_2E377F) > 0x9
	.error "gText_Rom_2E377F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E377F) < 0x9
	.space 0x9 - (. - gText_Rom_2E377F)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E378A
gText_Rom_2E378A: @ 0x082E378A
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E378A) != 0xa
	.error "gText_Rom_2E378A must retain its original byte length"
	.endif
	.globl gText_Rom_2E378E
	.set gText_Rom_2E378E, gText_Rom_2E378A + 0x4
	.space 0x1, 0x00

	@ src/battle_main.c:353 battle_main_line_353 (+1 aliases)
	.globl gText_Rom_2E3795
gText_Rom_2E3795: @ 0x082E3795
	.string "むしとりしょうねん$"
	.if (. - gText_Rom_2E3795) > 0xa
	.error "gText_Rom_2E3795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3795) < 0xa
	.space 0xa - (. - gText_Rom_2E3795)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:354 battle_main_line_354 (+1 aliases)
	.globl gText_Rom_2E37A0
gText_Rom_2E37A0: @ 0x082E37A0
	.string "ポケモンレンジャー$"
	.if (. - gText_Rom_2E37A0) > 0xa
	.error "gText_Rom_2E37A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37A0) < 0xa
	.space 0xa - (. - gText_Rom_2E37A0)
	.endif
	.space 0x1, 0x00

