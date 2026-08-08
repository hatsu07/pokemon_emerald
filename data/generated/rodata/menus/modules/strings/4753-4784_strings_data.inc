	@ src/strings.c:334 gText_AlreadyHoldingOne
	.globl gText_Rom_5CA195
gText_Rom_5CA195: @ 0x085CA195
	.string "{STR_VAR_1}は\n{STR_VAR_2}を もっています$"
	.if (. - gText_Rom_5CA195) > 0xf
	.error "gText_Rom_5CA195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA195) < 0xf
	.space 0xf - (. - gText_Rom_5CA195)
	.endif

	@ src/strings.c:336 gText_NoUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1A4
gText_Rom_5CA1A4: @ 0x085CA1A4
	.string "つかえません$"
	.if (. - gText_Rom_5CA1A4) != 0x7
	.error "gText_Rom_5CA1A4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1A7
	.set gText_Rom_5CA1A7, gText_Rom_5CA1A4 + 0x3

	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1AB
gText_Rom_5CA1AB: @ 0x085CA1AB
	.string "さんかしない$"
	.if (. - gText_Rom_5CA1AB) != 0x7
	.error "gText_Rom_5CA1AB must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1AE
	.set gText_Rom_5CA1AE, gText_Rom_5CA1AB + 0x3

	@ src/strings.c:338 gText_First_PM
	.globl gText_Rom_5CA1B2
gText_Rom_5CA1B2: @ 0x085CA1B2
	.string "いちばんめ$"
	.if (. - gText_Rom_5CA1B2) > 0x6
	.error "gText_Rom_5CA1B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1B2) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1B2)
	.endif

	@ src/strings.c:339 gText_Second_PM
	.globl gText_Rom_5CA1B8
gText_Rom_5CA1B8: @ 0x085CA1B8
	.string "にばんめ$"
	.if (. - gText_Rom_5CA1B8) > 0x5
	.error "gText_Rom_5CA1B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1B8) < 0x5
	.space 0x5 - (. - gText_Rom_5CA1B8)
	.endif

	@ src/strings.c:340 gText_Third_PM
	.globl gText_Rom_5CA1BD
gText_Rom_5CA1BD: @ 0x085CA1BD
	.string "さんばんめ$"
	.if (. - gText_Rom_5CA1BD) > 0x6
	.error "gText_Rom_5CA1BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1BD) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1BD)
	.endif

	@ src/strings.c:341 gText_Able2
	.globl gText_Rom_5CA1C3
gText_Rom_5CA1C3: @ 0x085CA1C3
	.string "でられます$"
	.if (. - gText_Rom_5CA1C3) > 0x6
	.error "gText_Rom_5CA1C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1C3) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1C3)
	.endif

	@ src/strings.c:342 gText_NotAble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1C9
gText_Rom_5CA1C9: @ 0x085CA1C9
	.string "でられません$"
	.if (. - gText_Rom_5CA1C9) != 0x7
	.error "gText_Rom_5CA1C9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1CC
	.set gText_Rom_5CA1CC, gText_Rom_5CA1C9 + 0x3

	@ src/strings.c:343 gText_Able3
	.globl gText_Rom_5CA1D0
gText_Rom_5CA1D0: @ 0x085CA1D0
	.string "おぼえられる!$"
	.if (. - gText_Rom_5CA1D0) > 0x8
	.error "gText_Rom_5CA1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1D0) < 0x8
	.space 0x8 - (. - gText_Rom_5CA1D0)
	.endif

	@ src/strings.c:344 gText_NotAble2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1D8
gText_Rom_5CA1D8: @ 0x085CA1D8
	.string "おぼえられない$"
	.if (. - gText_Rom_5CA1D8) != 0x8
	.error "gText_Rom_5CA1D8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1DB
	.set gText_Rom_5CA1DB, gText_Rom_5CA1D8 + 0x3

	@ src/strings.c:345 gText_Learned
	.globl gText_Rom_5CA1E0
gText_Rom_5CA1E0: @ 0x085CA1E0
	.string "もうおぼえてる$"
	.if (. - gText_Rom_5CA1E0) > 0x8
	.error "gText_Rom_5CA1E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1E0) < 0x8
	.space 0x8 - (. - gText_Rom_5CA1E0)
	.endif

	@ src/strings.c:346 gText_Have
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1E8
gText_Rom_5CA1E8: @ 0x085CA1E8
	.string "もっている$"
	.if (. - gText_Rom_5CA1E8) != 0x6
	.error "gText_Rom_5CA1E8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1EA
	.set gText_Rom_5CA1EA, gText_Rom_5CA1E8 + 0x2

	@ src/strings.c:347 gText_DontHave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1EE
gText_Rom_5CA1EE: @ 0x085CA1EE
	.string "もっていない$"
	.if (. - gText_Rom_5CA1EE) != 0x7
	.error "gText_Rom_5CA1EE must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1F0
	.set gText_Rom_5CA1F0, gText_Rom_5CA1EE + 0x2
	.globl gText_Rom_5CA1F1
	.set gText_Rom_5CA1F1, gText_Rom_5CA1EE + 0x3

