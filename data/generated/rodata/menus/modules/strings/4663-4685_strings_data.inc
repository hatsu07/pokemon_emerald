	@ src/strings.c:283 gText_PkmnCuredOfParalysis
	.globl gText_Rom_5C9EC0
gText_Rom_5C9EC0: @ 0x085C9EC0
	.string "{STR_VAR_1}の からだの\nしびれが とれた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EC0) > 0x14
	.error "gText_Rom_5C9EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EC0) < 0x14
	.space 0x14 - (. - gText_Rom_5C9EC0)
	.endif

	@ src/strings.c:284 gText_PkmnWokeUp2
	.globl gText_Rom_5C9ED4
gText_Rom_5C9ED4: @ 0x085C9ED4
	.string "{STR_VAR_1}は\nめを さました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9ED4) > 0xe
	.error "gText_Rom_5C9ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9ED4) < 0xe
	.space 0xe - (. - gText_Rom_5C9ED4)
	.endif

	@ src/strings.c:285 gText_PkmnBurnHealed
	.globl gText_Rom_5C9EE2
gText_Rom_5C9EE2: @ 0x085C9EE2
	.string "{STR_VAR_1}の\nやけどが なおった{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EE2) > 0x10
	.error "gText_Rom_5C9EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EE2) < 0x10
	.space 0x10 - (. - gText_Rom_5C9EE2)
	.endif

	@ src/strings.c:287 gText_PkmnThawedOut
	.globl gText_Rom_5C9EF2
gText_Rom_5C9EF2: @ 0x085C9EF2
	.string "{STR_VAR_1}の からだの\nこおりが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EF2) > 0x14
	.error "gText_Rom_5C9EF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EF2) < 0x14
	.space 0x14 - (. - gText_Rom_5C9EF2)
	.endif

	@ src/strings.c:288 gText_PPWasRestored
	.globl gText_Rom_5C9F06
gText_Rom_5C9F06: @ 0x085C9F06
	.string "わざポイントが\nかいふくした!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F06) > 0x12
	.error "gText_Rom_5C9F06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F06) < 0x12
	.space 0x12 - (. - gText_Rom_5C9F06)
	.endif

	@ src/strings.c:289 gText_PkmnRegainhedHealth
	.globl gText_Rom_5C9F18
gText_Rom_5C9F18: @ 0x085C9F18
	.string "{STR_VAR_1}は\nげんきを とりもどした!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F18) > 0x13
	.error "gText_Rom_5C9F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F18) < 0x13
	.space 0x13 - (. - gText_Rom_5C9F18)
	.endif

	@ src/strings.c:290 gText_PkmnBecameHealthy
	.globl gText_Rom_5C9F2B
gText_Rom_5C9F2B: @ 0x085C9F2B
	.string "{STR_VAR_1}は\nけんこうになった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F2B) > 0x10
	.error "gText_Rom_5C9F2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F2B) < 0x10
	.space 0x10 - (. - gText_Rom_5C9F2B)
	.endif

	@ src/strings.c:291 gText_MovesPPIncreased
	.globl gText_Rom_5C9F3B
gText_Rom_5C9F3B: @ 0x085C9F3B
	.string "{STR_VAR_1}の\nわざポイントが ふえた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F3B) > 0x13
	.error "gText_Rom_5C9F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F3B) < 0x13
	.space 0x13 - (. - gText_Rom_5C9F3B)
	.endif

	@ src/strings.c:292 gText_PkmnElevatedToLvVar2
	.globl gText_Rom_5C9F4E
gText_Rom_5C9F4E: @ 0x085C9F4E
	.string "{STR_VAR_1}の\nレベルが {STR_VAR_2}になった!$"
	.if (. - gText_Rom_5C9F4E) > 0x11
	.error "gText_Rom_5C9F4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F4E) < 0x11
	.space 0x11 - (. - gText_Rom_5C9F4E)
	.endif

	@ src/strings.c:295 gText_PkmnBaseVar2StatIncreased
	.globl gText_Rom_5C9F5F
gText_Rom_5C9F5F: @ 0x085C9F5F
	.string "{STR_VAR_1}の {STR_VAR_2}の\nきそ ポイントが あがった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F5F) > 0x19
	.error "gText_Rom_5C9F5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F5F) < 0x19
	.space 0x19 - (. - gText_Rom_5C9F5F)
	.endif

	@ src/strings.c:296 gText_PkmnFriendlyBaseVar2Fell
	.globl gText_Rom_5C9F78
gText_Rom_5C9F78: @ 0x085C9F78
	.string "{STR_VAR_1}が ちょっと なついた!\n{STR_VAR_2}の きそポイントが さがった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F78) > 0x23
	.error "gText_Rom_5C9F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F78) < 0x23
	.space 0x23 - (. - gText_Rom_5C9F78)
	.endif

	@ src/strings.c:297 gText_PkmnAdoresBaseVar2Fell
	.globl gText_Rom_5C9F9B
gText_Rom_5C9F9B: @ 0x085C9F9B
	.string "{STR_VAR_1}は さいこうに なついている!\n{STR_VAR_2}の きそポイントが さがった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F9B) > 0x26
	.error "gText_Rom_5C9F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F9B) < 0x26
	.space 0x26 - (. - gText_Rom_5C9F9B)
	.endif
