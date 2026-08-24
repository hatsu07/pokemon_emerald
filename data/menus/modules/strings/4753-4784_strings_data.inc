	@ src/strings.c:334 gText_AlreadyHoldingOne
	.globl gText_AlreadyHoldingOne
gText_AlreadyHoldingOne: @ 0x085CA195
	.string "{STR_VAR_1}は\n{STR_VAR_2}を もっています{EOS}"
	.if (. - gText_AlreadyHoldingOne) > 0xf
	.error "gText_AlreadyHoldingOne may not grow beyond its original slot"
	.endif
	.if (. - gText_AlreadyHoldingOne) < 0xf
	.space 0xf - (. - gText_AlreadyHoldingOne)
	.endif

	@ src/strings.c:336 gText_NoUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NoUse
gText_NoUse: @ 0x085CA1A4
	.string "つかえません{EOS}"
	.if (. - gText_NoUse) != 0x7
	.error "gText_NoUse must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1A7
	.set gText_Rom_5CA1A7, gText_NoUse + 0x3

	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA1AB
gText_Rom_5CA1AB: @ 0x085CA1AB
	.string "さんかしない{EOS}"
	.if (. - gText_Rom_5CA1AB) != 0x7
	.error "gText_Rom_5CA1AB must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1AE
	.set gText_Rom_5CA1AE, gText_Rom_5CA1AB + 0x3

	@ src/strings.c:338 gText_First_PM
	.globl gText_First_PM
gText_First_PM: @ 0x085CA1B2
	.string "いちばんめ{EOS}"
	.if (. - gText_First_PM) > 0x6
	.error "gText_First_PM may not grow beyond its original slot"
	.endif
	.if (. - gText_First_PM) < 0x6
	.space 0x6 - (. - gText_First_PM)
	.endif

	@ src/strings.c:339 gText_Second_PM
	.globl gText_Second_PM
gText_Second_PM: @ 0x085CA1B8
	.string "にばんめ{EOS}"
	.if (. - gText_Second_PM) > 0x5
	.error "gText_Second_PM may not grow beyond its original slot"
	.endif
	.if (. - gText_Second_PM) < 0x5
	.space 0x5 - (. - gText_Second_PM)
	.endif

	@ src/strings.c:340 gText_Third_PM
	.globl gText_Third_PM
gText_Third_PM: @ 0x085CA1BD
	.string "さんばんめ{EOS}"
	.if (. - gText_Third_PM) > 0x6
	.error "gText_Third_PM may not grow beyond its original slot"
	.endif
	.if (. - gText_Third_PM) < 0x6
	.space 0x6 - (. - gText_Third_PM)
	.endif

	@ src/strings.c:341 gText_Able2
	.globl gText_Able2
gText_Able2: @ 0x085CA1C3
	.string "でられます{EOS}"
	.if (. - gText_Able2) > 0x6
	.error "gText_Able2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Able2) < 0x6
	.space 0x6 - (. - gText_Able2)
	.endif

	@ src/strings.c:342 gText_NotAble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NotAble
gText_NotAble: @ 0x085CA1C9
	.string "でられません{EOS}"
	.if (. - gText_NotAble) != 0x7
	.error "gText_NotAble must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1CC
	.set gText_Rom_5CA1CC, gText_NotAble + 0x3

	@ src/strings.c:343 gText_Able3
	.globl gText_Able3
gText_Able3: @ 0x085CA1D0
	.string "おぼえられる!{EOS}"
	.if (. - gText_Able3) > 0x8
	.error "gText_Able3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Able3) < 0x8
	.space 0x8 - (. - gText_Able3)
	.endif

	@ src/strings.c:344 gText_NotAble2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_NotAble2
gText_NotAble2: @ 0x085CA1D8
	.string "おぼえられない{EOS}"
	.if (. - gText_NotAble2) != 0x8
	.error "gText_NotAble2 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1DB
	.set gText_Rom_5CA1DB, gText_NotAble2 + 0x3

	@ src/strings.c:345 gText_Learned
	.globl gText_Learned
gText_Learned: @ 0x085CA1E0
	.string "もうおぼえてる{EOS}"
	.if (. - gText_Learned) > 0x8
	.error "gText_Learned may not grow beyond its original slot"
	.endif
	.if (. - gText_Learned) < 0x8
	.space 0x8 - (. - gText_Learned)
	.endif

	@ src/strings.c:346 gText_Have
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Have
gText_Have: @ 0x085CA1E8
	.string "もっている{EOS}"
	.if (. - gText_Have) != 0x6
	.error "gText_Have must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1EA
	.set gText_Rom_5CA1EA, gText_Have + 0x2

	@ src/strings.c:347 gText_DontHave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DontHave
gText_DontHave: @ 0x085CA1EE
	.string "もっていない{EOS}"
	.if (. - gText_DontHave) != 0x7
	.error "gText_DontHave must retain its original byte length"
	.endif
	.globl gText_Rom_5CA1F0
	.set gText_Rom_5CA1F0, gText_DontHave + 0x2
	.globl gText_Rom_5CA1F1
	.set gText_Rom_5CA1F1, gText_DontHave + 0x3

