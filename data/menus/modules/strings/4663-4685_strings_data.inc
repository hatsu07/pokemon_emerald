
	@ asm/fldeff_softboiled.s:234 sub_081615C4
	.globl gText_Rom_5C9E8F
gText_Rom_5C9E8F: @ 0x085C9E8F
	.string "{0xFD}{0x02}の　たいりょくが\n{0xFD}{0x03}　かいふくした{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9E8F) > 0x17
	.error "gText_Rom_5C9E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E8F) < 0x17
	.space 0x17 - (. - gText_Rom_5C9E8F)
	.endif

	@ asm/party_menu.s:12528 GetMedicineItemEffectMessage
	.globl gText_Rom_5C9EA6
gText_Rom_5C9EA6: @ 0x085C9EA6
	.string "{0xFD}{0x02}の　どくは\nきれい　さっぱり　なくなった！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9EA6) > 0x1a
	.error "gText_Rom_5C9EA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EA6) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9EA6)
	.endif

	@ src/strings.c:283 gText_PkmnCuredOfParalysis
	.globl gText_PkmnCuredOfParalysis
gText_PkmnCuredOfParalysis: @ 0x085C9EC0
	.string "{STR_VAR_1}の からだの\nしびれが とれた{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnCuredOfParalysis) > 0x14
	.error "gText_PkmnCuredOfParalysis may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnCuredOfParalysis) < 0x14
	.space 0x14 - (. - gText_PkmnCuredOfParalysis)
	.endif

	@ src/strings.c:284 gText_PkmnWokeUp2
	.globl gText_PkmnWokeUp2
gText_PkmnWokeUp2: @ 0x085C9ED4
	.string "{STR_VAR_1}は\nめを さました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnWokeUp2) > 0xe
	.error "gText_PkmnWokeUp2 may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnWokeUp2) < 0xe
	.space 0xe - (. - gText_PkmnWokeUp2)
	.endif

	@ src/strings.c:285 gText_PkmnBurnHealed
	.globl gText_PkmnBurnHealed
gText_PkmnBurnHealed: @ 0x085C9EE2
	.string "{STR_VAR_1}の\nやけどが なおった{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnBurnHealed) > 0x10
	.error "gText_PkmnBurnHealed may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnBurnHealed) < 0x10
	.space 0x10 - (. - gText_PkmnBurnHealed)
	.endif

	@ src/strings.c:287 gText_PkmnThawedOut
	.globl gText_PkmnThawedOut
gText_PkmnThawedOut: @ 0x085C9EF2
	.string "{STR_VAR_1}の からだの\nこおりが とけた{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnThawedOut) > 0x14
	.error "gText_PkmnThawedOut may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnThawedOut) < 0x14
	.space 0x14 - (. - gText_PkmnThawedOut)
	.endif

	@ src/strings.c:288 gText_PPWasRestored
	.globl gText_PPWasRestored
gText_PPWasRestored: @ 0x085C9F06
	.string "わざポイントが\nかいふくした!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PPWasRestored) > 0x12
	.error "gText_PPWasRestored may not grow beyond its original slot"
	.endif
	.if (. - gText_PPWasRestored) < 0x12
	.space 0x12 - (. - gText_PPWasRestored)
	.endif

	@ src/strings.c:289 gText_PkmnRegainhedHealth
	.globl gText_PkmnRegainhedHealth
gText_PkmnRegainhedHealth: @ 0x085C9F18
	.string "{STR_VAR_1}は\nげんきを とりもどした!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnRegainhedHealth) > 0x13
	.error "gText_PkmnRegainhedHealth may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnRegainhedHealth) < 0x13
	.space 0x13 - (. - gText_PkmnRegainhedHealth)
	.endif

	@ src/strings.c:290 gText_PkmnBecameHealthy
	.globl gText_PkmnBecameHealthy
gText_PkmnBecameHealthy: @ 0x085C9F2B
	.string "{STR_VAR_1}は\nけんこうになった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnBecameHealthy) > 0x10
	.error "gText_PkmnBecameHealthy may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnBecameHealthy) < 0x10
	.space 0x10 - (. - gText_PkmnBecameHealthy)
	.endif

	@ src/strings.c:291 gText_MovesPPIncreased
	.globl gText_MovesPPIncreased
gText_MovesPPIncreased: @ 0x085C9F3B
	.string "{STR_VAR_1}の\nわざポイントが ふえた!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_MovesPPIncreased) > 0x13
	.error "gText_MovesPPIncreased may not grow beyond its original slot"
	.endif
	.if (. - gText_MovesPPIncreased) < 0x13
	.space 0x13 - (. - gText_MovesPPIncreased)
	.endif

	@ src/strings.c:292 gText_PkmnElevatedToLvVar2
	.globl gText_PkmnElevatedToLvVar2
gText_PkmnElevatedToLvVar2: @ 0x085C9F4E
	.string "{STR_VAR_1}の\nレベルが {STR_VAR_2}になった!{EOS}"
	.if (. - gText_PkmnElevatedToLvVar2) > 0x11
	.error "gText_PkmnElevatedToLvVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnElevatedToLvVar2) < 0x11
	.space 0x11 - (. - gText_PkmnElevatedToLvVar2)
	.endif

	@ src/strings.c:295 gText_PkmnBaseVar2StatIncreased
	.globl gText_PkmnBaseVar2StatIncreased
gText_PkmnBaseVar2StatIncreased: @ 0x085C9F5F
	.string "{STR_VAR_1}の {STR_VAR_2}の\nきそ ポイントが あがった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnBaseVar2StatIncreased) > 0x19
	.error "gText_PkmnBaseVar2StatIncreased may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnBaseVar2StatIncreased) < 0x19
	.space 0x19 - (. - gText_PkmnBaseVar2StatIncreased)
	.endif

	@ src/strings.c:296 gText_PkmnFriendlyBaseVar2Fell
	.globl gText_PkmnFriendlyBaseVar2Fell
gText_PkmnFriendlyBaseVar2Fell: @ 0x085C9F78
	.string "{STR_VAR_1}が ちょっと なついた!\n{STR_VAR_2}の きそポイントが さがった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnFriendlyBaseVar2Fell) > 0x23
	.error "gText_PkmnFriendlyBaseVar2Fell may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnFriendlyBaseVar2Fell) < 0x23
	.space 0x23 - (. - gText_PkmnFriendlyBaseVar2Fell)
	.endif

	@ src/strings.c:297 gText_PkmnAdoresBaseVar2Fell
	.globl gText_PkmnAdoresBaseVar2Fell
gText_PkmnAdoresBaseVar2Fell: @ 0x085C9F9B
	.string "{STR_VAR_1}は さいこうに なついている!\n{STR_VAR_2}の きそポイントが さがった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnAdoresBaseVar2Fell) > 0x26
	.error "gText_PkmnAdoresBaseVar2Fell may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnAdoresBaseVar2Fell) < 0x26
	.space 0x26 - (. - gText_PkmnAdoresBaseVar2Fell)
	.endif
