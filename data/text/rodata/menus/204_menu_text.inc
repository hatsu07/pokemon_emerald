	@ asm/party_menu.s:3711 sub_081B19A0
	.globl gText_Rom_5C9CC6
gText_Rom_5C9CC6: @ 0x085C9CC6
	.string "{0xFD}{0x02}から\n{0xFD}{0x03}を　あずかりました！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CC6) > 0x14
	.error "gText_Rom_5C9CC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CC6) < 0x14
	.space 0x14 - (. - gText_Rom_5C9CC6)
	.endif
	.globl gUnknown_85C9CDA
gUnknown_85C9CDA: @ 0x085C9CDA

	@ src/strings.c:267 gText_MailTakenFromPkmn
	.globl gText_Rom_5C9CDA
gText_Rom_5C9CDA: @ 0x085C9CDA
	.string "ポケモンから メールを\nとりました!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CDA) > 0x15
	.error "gText_Rom_5C9CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CDA) < 0x15
	.space 0x15 - (. - gText_Rom_5C9CDA)
	.endif
	.globl gUnknown_85C9CEF
gUnknown_85C9CEF: @ 0x085C9CEF

	@ src/strings.c:268 gText_SwitchedPkmnItem
	.globl gText_Rom_5C9CEF
gText_Rom_5C9CEF: @ 0x085C9CEF
	.string "{STR_VAR_2}を あずかって\nあらたに {STR_VAR_1}を もたせました!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CEF) > 0x1d
	.error "gText_Rom_5C9CEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CEF) < 0x1d
	.space 0x1d - (. - gText_Rom_5C9CEF)
	.endif
	.globl gUnknown_85C9D0C
gUnknown_85C9D0C: @ 0x085C9D0C

	@ src/strings.c:269 gText_PkmnHoldingItemCantHoldMail
	.globl gText_Rom_5C9D0C
gText_Rom_5C9D0C: @ 0x085C9D0C
	.string "すでに どうぐを もっているので\nメールを もたせることが できません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D0C) > 0x26
	.error "gText_Rom_5C9D0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D0C) < 0x26
	.space 0x26 - (. - gText_Rom_5C9D0C)
	.endif
	.globl gUnknown_85C9D32
gUnknown_85C9D32: @ 0x085C9D32

	@ src/strings.c:270 gText_MailTransferredFromMailbox
	.globl gText_Rom_5C9D32
gText_Rom_5C9D32: @ 0x085C9D32
	.string "ボックスから メールを うつしました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D32) > 0x15
	.error "gText_Rom_5C9D32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D32) < 0x15
	.space 0x15 - (. - gText_Rom_5C9D32)
	.endif
	.globl gUnknown_85C9D47
gUnknown_85C9D47: @ 0x085C9D47

	@ src/strings.c:271 gText_BagFullCouldNotRemoveItem
	.globl gText_Rom_5C9D47
gText_Rom_5C9D47: @ 0x085C9D47
	.string "バッグが いっぱいで\nポケモンの どうぐを うけとれません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D47) > 0x21
	.error "gText_Rom_5C9D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D47) < 0x21
	.space 0x21 - (. - gText_Rom_5C9D47)
	.endif
	.globl gUnknown_85C9D68
gUnknown_85C9D68: @ 0x085C9D68

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5C9D68
gText_Rom_5C9D68: @ 0x085C9D68
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5C9D68) > 0x14
	.error "gText_Rom_5C9D68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D68) < 0x14
	.space 0x14 - (. - gText_Rom_5C9D68)
	.endif
	.globl gUnknown_85C9D7C
gUnknown_85C9D7C: @ 0x085C9D7C

	@ src/strings.c:274 gText_PkmnCantLearnMove
	.globl gText_Rom_5C9D7C
gText_Rom_5C9D7C: @ 0x085C9D7C
	.string "{STR_VAR_1}と {STR_VAR_2}は\nあいしょうが わるかった!\p{STR_VAR_2}は おぼえられない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D7C) > 0x25
	.error "gText_Rom_5C9D7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D7C) < 0x25
	.space 0x25 - (. - gText_Rom_5C9D7C)
	.endif
	.globl gUnknown_85C9DA1
gUnknown_85C9DA1: @ 0x085C9DA1

	@ src/strings.c:275 gText_PkmnNeedsToReplaceMove (+1 aliases)
	.globl gText_Rom_5C9DA1
gText_Rom_5C9DA1: @ 0x085C9DA1
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえたい……!\pしかし {STR_VAR_1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p{STR_VAR_2}の かわりに\nほかの わざを わすれさせますか?$"
	.if (. - gText_Rom_5C9DA1) > 0x51
	.error "gText_Rom_5C9DA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9DA1) < 0x51
	.space 0x51 - (. - gText_Rom_5C9DA1)
	.endif
	.globl gUnknown_85C9DF2
gUnknown_85C9DF2: @ 0x085C9DF2

	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9DF2
gText_Rom_5C9DF2: @ 0x085C9DF2
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?$"
	.if (. - gText_Rom_5C9DF2) != 0x1b
	.error "gText_Rom_5C9DF2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9E04
	.set gText_Rom_5C9E04, gText_Rom_5C9DF2 + 0x12
	.globl gUnknown_85C9E0D
gUnknown_85C9E0D: @ 0x085C9E0D

	@ src/strings.c:277 gText_MoveNotLearned
	.globl gText_Rom_5C9E0D
gText_Rom_5C9E0D: @ 0x085C9E0D
	.string "{STR_VAR_1}は {STR_VAR_2}を\nおぼえずに おわった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E0D) > 0x16
	.error "gText_Rom_5C9E0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E0D) < 0x16
	.space 0x16 - (. - gText_Rom_5C9E0D)
	.endif
	.globl gUnknown_85C9E23
gUnknown_85C9E23: @ 0x085C9E23

	@ src/strings.c:278 gText_WhichMoveToForget
	.globl gText_Rom_5C9E23
gText_Rom_5C9E23: @ 0x085C9E23
	.string "どの わざを\nわすれさせたい?{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E23) > 0x12
	.error "gText_Rom_5C9E23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E23) < 0x12
	.space 0x12 - (. - gText_Rom_5C9E23)
	.endif
	.globl gUnknown_85C9E35
gUnknown_85C9E35: @ 0x085C9E35

	@ src/strings.c:279 gText_12PoofForgotMove
	.globl gText_Rom_5C9E35
gText_Rom_5C9E35: @ 0x085C9E35
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p{STR_VAR_1}は {STR_VAR_2}の\nつかいかたを きれいに わすれた!\pそして……!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E35) > 0x44
	.error "gText_Rom_5C9E35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E35) < 0x44
	.space 0x44 - (. - gText_Rom_5C9E35)
	.endif
	.globl gUnknown_85C9E79
gUnknown_85C9E79: @ 0x085C9E79

	@ src/strings.c:280 gText_PkmnAlreadyKnows
	.globl gText_Rom_5C9E79
gText_Rom_5C9E79: @ 0x085C9E79
	.string "{STR_VAR_1}は すでに\n{STR_VAR_2}を おぼえています{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E79) > 0x16
	.error "gText_Rom_5C9E79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E79) < 0x16
	.space 0x16 - (. - gText_Rom_5C9E79)
	.endif
	.globl gUnknown_85C9E8F
gUnknown_85C9E8F: @ 0x085C9E8F

	@ asm/fldeff_softboiled.s:234 sub_081615C4
	.globl gText_Rom_5C9E8F
gText_Rom_5C9E8F: @ 0x085C9E8F
	.string "{0xFD}{0x02}の　たいりょくが\n{0xFD}{0x03}　かいふくした{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9E8F) > 0x17
	.error "gText_Rom_5C9E8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9E8F) < 0x17
	.space 0x17 - (. - gText_Rom_5C9E8F)
	.endif
	.globl gUnknown_85C9EA6
gUnknown_85C9EA6: @ 0x085C9EA6

	@ asm/party_menu.s:12528 GetMedicineItemEffectMessage
	.globl gText_Rom_5C9EA6
gText_Rom_5C9EA6: @ 0x085C9EA6
	.string "{0xFD}{0x02}の　どくは\nきれい　さっぱり　なくなった！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9EA6) > 0x1a
	.error "gText_Rom_5C9EA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9EA6) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9EA6)
	.endif
	.globl gUnknown_85C9EC0
gUnknown_85C9EC0: @ 0x085C9EC0

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
	.globl gUnknown_85C9ED4
gUnknown_85C9ED4: @ 0x085C9ED4

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
	.globl gUnknown_85C9EE2
gUnknown_85C9EE2: @ 0x085C9EE2

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
	.globl gUnknown_85C9EF2
gUnknown_85C9EF2: @ 0x085C9EF2

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
	.globl gUnknown_85C9F06
gUnknown_85C9F06: @ 0x085C9F06

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
	.globl gUnknown_85C9F2B
gUnknown_85C9F2B: @ 0x085C9F2B

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
	.globl gUnknown_85C9F3B
gUnknown_85C9F3B: @ 0x085C9F3B

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
	.globl gUnknown_85C9F4E
gUnknown_85C9F4E: @ 0x085C9F4E

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
	.globl gUnknown_85C9F5F
gUnknown_85C9F5F: @ 0x085C9F5F

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
	.globl gUnknown_85C9F78
gUnknown_85C9F78: @ 0x085C9F78

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
	.globl gUnknown_85C9F9B
gUnknown_85C9F9B: @ 0x085C9F9B

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
	.globl gUnknown_85C9FC1
gUnknown_85C9FC1: @ 0x085C9FC1

	@ asm/party_menu.s:13150 sub_081B6468
	.globl gText_Rom_5C9FC1
gText_Rom_5C9FC1: @ 0x085C9FC1
	.string "{0xFD}{0x02}は　ちょっと　なついた！\n{0xFD}{0x03}の　きそポイントは　もうさがらない！{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FC1) > 0x26
	.error "gText_Rom_5C9FC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FC1) < 0x26
	.space 0x26 - (. - gText_Rom_5C9FC1)
	.endif
	.globl gUnknown_85C9FE7
gUnknown_85C9FE7: @ 0x085C9FE7

	@ src/strings.c:299 gText_PkmnSnappedOutOfConfusion
	.globl gText_Rom_5C9FE7
gText_Rom_5C9FE7: @ 0x085C9FE7
	.string "{STR_VAR_1}の\nこんらんが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FE7) > 0x10
	.error "gText_Rom_5C9FE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FE7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9FE7)
	.endif
	.globl gUnknown_85C9FF7
gUnknown_85C9FF7: @ 0x085C9FF7

	@ src/strings.c:300 gText_PkmnGotOverInfatuation
	.globl gText_Rom_5C9FF7
gText_Rom_5C9FF7: @ 0x085C9FF7
	.string "{STR_VAR_1}の\nメロメロが とけた{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9FF7) > 0x10
	.error "gText_Rom_5C9FF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FF7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9FF7)
	.endif
	.globl gUnknown_85CA007
gUnknown_85CA007: @ 0x085CA007

	@ src/strings.c:302 gText_ThrowAwayItem
	.globl gText_Rom_5CA007
gText_Rom_5CA007: @ 0x085CA007
	.string "{STR_VAR_1}を\nすてても よろしいですか$"
	.if (. - gText_Rom_5CA007) > 0x11
	.error "gText_Rom_5CA007 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA007) < 0x11
	.space 0x11 - (. - gText_Rom_5CA007)
	.endif
	.globl gUnknown_85CA018
gUnknown_85CA018: @ 0x085CA018

	@ src/strings.c:303 gText_ItemThrownAway
	.globl gText_Rom_5CA018
gText_Rom_5CA018: @ 0x085CA018
	.string "{STR_VAR_1}を\nすてました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA018) > 0xc
	.error "gText_Rom_5CA018 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA018) < 0xc
	.space 0xc - (. - gText_Rom_5CA018)
	.endif

	@ src/strings.c:304 gText_TeachWhichPokemon2
	.globl gText_Rom_5CA024
gText_Rom_5CA024: @ 0x085CA024
	.string "どのポケモンに おぼえさせますか?$"
	.if (. - gText_Rom_5CA024) > 0x12
	.error "gText_Rom_5CA024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA024) < 0x12
	.space 0x12 - (. - gText_Rom_5CA024)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA036
gText_Rom_5CA036: @ 0x085CA036
	.string "ポケモンを　えらんで　ください$"
	.if (. - gText_Rom_5CA036) > 0x10
	.error "gText_Rom_5CA036 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA036) < 0x10
	.space 0x10 - (. - gText_Rom_5CA036)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA046
gText_Rom_5CA046: @ 0x085CA046
	.string "どこに　いどうしますか？$"
	.if (. - gText_Rom_5CA046) > 0xd
	.error "gText_Rom_5CA046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA046) < 0xd
	.space 0xd - (. - gText_Rom_5CA046)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA053
gText_Rom_5CA053: @ 0x085CA053
	.string "どのポケモンに　おしえますか？$"
	.if (. - gText_Rom_5CA053) > 0x10
	.error "gText_Rom_5CA053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA053) < 0x10
	.space 0x10 - (. - gText_Rom_5CA053)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA063
gText_Rom_5CA063: @ 0x085CA063
	.string "どのポケモンに　つかいますか？$"
	.if (. - gText_Rom_5CA063) > 0x10
	.error "gText_Rom_5CA063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA063) < 0x10
	.space 0x10 - (. - gText_Rom_5CA063)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA073
gText_Rom_5CA073: @ 0x085CA073
	.string "どのポケモンに　もたせますか？$"
	.if (. - gText_Rom_5CA073) > 0x10
	.error "gText_Rom_5CA073 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA073) < 0x10
	.space 0x10 - (. - gText_Rom_5CA073)
	.endif

	@ src/strings.c:310 gText_DoWhatWithPokemon
	.globl gText_Rom_5CA083
gText_Rom_5CA083: @ 0x085CA083
	.string "{STR_VAR_1}を どうする?$"
	.if (. - gText_Rom_5CA083) > 0xa
	.error "gText_Rom_5CA083 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA083) < 0xa
	.space 0xa - (. - gText_Rom_5CA083)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA08D
gText_Rom_5CA08D: @ 0x085CA08D
	.string "きれるものが　ありません！$"
	.if (. - gText_Rom_5CA08D) > 0xe
	.error "gText_Rom_5CA08D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA08D) < 0xe
	.space 0xe - (. - gText_Rom_5CA08D)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA09B
gText_Rom_5CA09B: @ 0x085CA09B
	.string "ここでは　のれません$"
	.if (. - gText_Rom_5CA09B) != 0xb
	.error "gText_Rom_5CA09B must retain its original byte length"
	.endif
	.globl gText_Rom_5CA0A2
	.set gText_Rom_5CA0A2, gText_Rom_5CA09B + 0x7

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0A6
gText_Rom_5CA0A6: @ 0x085CA0A6
	.string "すでに　なみのり　しています$"
	.if (. - gText_Rom_5CA0A6) > 0xf
	.error "gText_Rom_5CA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0A6) < 0xf
	.space 0xf - (. - gText_Rom_5CA0A6)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA0B5
gText_Rom_5CA0B5: @ 0x085CA0B5
	.string "ここでは　つかえません$"
	.if (. - gText_Rom_5CA0B5) != 0xc
	.error "gText_Rom_5CA0B5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA0BA
	.set gText_Rom_5CA0BA, gText_Rom_5CA0B5 + 0x5
	.globl gText_Rom_5CA0BD
	.set gText_Rom_5CA0BD, gText_Rom_5CA0B5 + 0x8

	@ src/strings.c:315 gText_RestoreWhichMove
	.globl gText_Rom_5CA0C1
gText_Rom_5CA0C1: @ 0x085CA0C1
	.string "どれを かいふくする?$"
	.if (. - gText_Rom_5CA0C1) > 0xc
	.error "gText_Rom_5CA0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0C1) < 0xc
	.space 0xc - (. - gText_Rom_5CA0C1)
	.endif

	@ src/strings.c:316 gText_BoostPp
	.globl gText_Rom_5CA0CD
gText_Rom_5CA0CD: @ 0x085CA0CD
	.string "どれを ふやす?$"
	.if (. - gText_Rom_5CA0CD) > 0x9
	.error "gText_Rom_5CA0CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0CD) < 0x9
	.space 0x9 - (. - gText_Rom_5CA0CD)
	.endif

	@ src/strings.c:317 gText_DoWhatWithItem
	.globl gText_Rom_5CA0D6
gText_Rom_5CA0D6: @ 0x085CA0D6
	.string "もちものを どうしますか?$"
	.if (. - gText_Rom_5CA0D6) > 0xe
	.error "gText_Rom_5CA0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0D6) < 0xe
	.space 0xe - (. - gText_Rom_5CA0D6)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0E4
gText_Rom_5CA0E4: @ 0x085CA0E4
	.string "これでは　たたかえません！$"
	.if (. - gText_Rom_5CA0E4) > 0xe
	.error "gText_Rom_5CA0E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0E4) < 0xe
	.space 0xe - (. - gText_Rom_5CA0E4)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA0F2
gText_Rom_5CA0F2: @ 0x085CA0F2
	.string "どのポケモンを　あずけますか？$"
	.if (. - gText_Rom_5CA0F2) > 0x10
	.error "gText_Rom_5CA0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0F2) < 0x10
	.space 0x10 - (. - gText_Rom_5CA0F2)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA102
gText_Rom_5CA102: @ 0x085CA102
	.string "たいりょくが　たりません……$"
	.if (. - gText_Rom_5CA102) > 0xf
	.error "gText_Rom_5CA102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA102) < 0xf
	.space 0xf - (. - gText_Rom_5CA102)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA111
gText_Rom_5CA111: @ 0x085CA111
	.string "{0xFD}{0x02}ひき　そろっていません$"
	.if (. - gText_Rom_5CA111) != 0xe
	.error "gText_Rom_5CA111 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA11B
	.set gText_Rom_5CA11B, gText_Rom_5CA111 + 0xa

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA11F
gText_Rom_5CA11F: @ 0x085CA11F
	.string "おなじ　ポケモンが　います！$"
	.if (. - gText_Rom_5CA11F) > 0xf
	.error "gText_Rom_5CA11F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA11F) < 0xf
	.space 0xf - (. - gText_Rom_5CA11F)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA12E
gText_Rom_5CA12E: @ 0x085CA12E
	.string "おなじ　どうぐを　もってます$"
	.if (. - gText_Rom_5CA12E) > 0xf
	.error "gText_Rom_5CA12E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA12E) < 0xf
	.space 0xf - (. - gText_Rom_5CA12E)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA13D
gText_Rom_5CA13D: @ 0x085CA13D
	.string "ながれが　はやくて　ダメだ！$"
	.if (. - gText_Rom_5CA13D) > 0xf
	.error "gText_Rom_5CA13D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA13D) < 0xf
	.space 0xf - (. - gText_Rom_5CA13D)
	.endif

	@ src/strings.c:325 gText_DoWhatWithMail
	.globl gText_Rom_5CA14C
gText_Rom_5CA14C: @ 0x085CA14C
	.string "メールを どうしますか?$"
	.if (. - gText_Rom_5CA14C) > 0xd
	.error "gText_Rom_5CA14C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA14C) < 0xd
	.space 0xd - (. - gText_Rom_5CA14C)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA159
gText_Rom_5CA159: @ 0x085CA159
	.string "ポケモンか　もどるを　せんたく$"
	.if (. - gText_Rom_5CA159) > 0x10
	.error "gText_Rom_5CA159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA159) < 0x10
	.space 0x10 - (. - gText_Rom_5CA159)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA169
gText_Rom_5CA169: @ 0x085CA169
	.string "ポケモンを　えらんで　けってい$"
	.if (. - gText_Rom_5CA169) != 0x10
	.error "gText_Rom_5CA169 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA174
	.set gText_Rom_5CA174, gText_Rom_5CA169 + 0xb

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA179
gText_Rom_5CA179: @ 0x085CA179
	.string "サイクリングを　たのしもう！$"
	.if (. - gText_Rom_5CA179) > 0xf
	.error "gText_Rom_5CA179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA179) < 0xf
	.space 0xf - (. - gText_Rom_5CA179)
	.endif

	@ asm/party_menu.s:6232 display_pokemon_menu_message (+1 aliases)
	.globl gText_Rom_5CA188
gText_Rom_5CA188: @ 0x085CA188
	.string "すでに　つかっています！$"
	.if (. - gText_Rom_5CA188) > 0xd
	.error "gText_Rom_5CA188 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA188) < 0xd
	.space 0xd - (. - gText_Rom_5CA188)
	.endif

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

	@ src/strings.c:348 gText_Fourth
	.globl gText_Rom_5CA1F5
gText_Rom_5CA1F5: @ 0x085CA1F5
	.string "よんばんめ$"
	.if (. - gText_Rom_5CA1F5) > 0x6
	.error "gText_Rom_5CA1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1F5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1F5)
	.endif
	.globl gUnknown_85CA1FB
gUnknown_85CA1FB: @ 0x085CA1FB

	@ src/strings.c:349 gText_PkmnCantParticipate
	.globl gText_Rom_5CA1FB
gText_Rom_5CA1FB: @ 0x085CA1FB
	.string "その ポケモンは さんか できません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA1FB) > 0x15
	.error "gText_Rom_5CA1FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1FB) < 0x15
	.space 0x15 - (. - gText_Rom_5CA1FB)
	.endif
	.globl gUnknown_85CA210
gUnknown_85CA210: @ 0x085CA210

	@ src/strings.c:350 gText_CancelParticipation
	.globl gText_Rom_5CA210
gText_Rom_5CA210: @ 0x085CA210
	.string "さんかを やめますか?$"
	.if (. - gText_Rom_5CA210) > 0xc
	.error "gText_Rom_5CA210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA210) < 0xc
	.space 0xc - (. - gText_Rom_5CA210)
	.endif
	.globl gUnknown_85CA21C
gUnknown_85CA21C: @ 0x085CA21C

	@ src/strings.c:351 gText_CancelBattle
	.globl gText_Rom_5CA21C
gText_Rom_5CA21C: @ 0x085CA21C
	.string "たいせんを やめますか?$"
	.if (. - gText_Rom_5CA21C) > 0xd
	.error "gText_Rom_5CA21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA21C) < 0xd
	.space 0xd - (. - gText_Rom_5CA21C)
	.endif
	.globl gUnknown_85CA229
gUnknown_85CA229: @ 0x085CA229

	@ src/strings.c:352 gText_ReturnToWaitingRoom
	.globl gText_Rom_5CA229
gText_Rom_5CA229: @ 0x085CA229
	.string "ひかえしつに もどりますか?$"
	.if (. - gText_Rom_5CA229) > 0xf
	.error "gText_Rom_5CA229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA229) < 0xf
	.space 0xf - (. - gText_Rom_5CA229)
	.endif
	.globl gUnknown_85CA238
gUnknown_85CA238: @ 0x085CA238

	@ src/strings.c:353 gText_CancelChallenge
	.globl gText_Rom_5CA238
gText_Rom_5CA238: @ 0x085CA238
	.string "ちょうせんを やめますか?$"
	.if (. - gText_Rom_5CA238) > 0xe
	.error "gText_Rom_5CA238 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA238) < 0xe
	.space 0xe - (. - gText_Rom_5CA238)
	.endif
	.globl gUnknown_85CA246
gUnknown_85CA246: @ 0x085CA246

	@ src/strings.c:354 gText_EscapeFromHere
	.globl gText_Rom_5CA246
gText_Rom_5CA246: @ 0x085CA246
	.string "ここを だっしゅつ して\n{STR_VAR_1}に もどる?$"
	.if (. - gText_Rom_5CA246) > 0x16
	.error "gText_Rom_5CA246 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA246) < 0x16
	.space 0x16 - (. - gText_Rom_5CA246)
	.endif
	.globl gUnknown_85CA25C
gUnknown_85CA25C: @ 0x085CA25C

	@ src/strings.c:355 gText_ReturnToHealingSpot
	.globl gText_Rom_5CA25C
gText_Rom_5CA25C: @ 0x085CA25C
	.string "さいごに やすんだ\n{STR_VAR_1}に テレポートする?$"
	.if (. - gText_Rom_5CA25C) > 0x17
	.error "gText_Rom_5CA25C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA25C) < 0x17
	.space 0x17 - (. - gText_Rom_5CA25C)
	.endif
	.globl gUnknown_85CA273
gUnknown_85CA273: @ 0x085CA273
	.incbin "baserom.gba", 0x5ca273, 0x3
	.globl gUnknown_85CA276
gUnknown_85CA276: @ 0x085CA276

	@ src/strings.c:357 gJPText_AreYouSureYouWantToSpinTradeMon
	.globl gText_Rom_5CA276
gText_Rom_5CA276: @ 0x085CA276
	.string "{STR_VAR_1}を ぐるぐるこうかんに\nだして よろしいですか?$"
	.if (. - gText_Rom_5CA276) > 0x1b
	.error "gText_Rom_5CA276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA276) < 0x1b
	.space 0x1b - (. - gText_Rom_5CA276)
	.endif
	.incbin "baserom.gba", 0x5ca291, 0x3
	.globl gUnknown_85CA294
gUnknown_85CA294: @ 0x085CA294

	@ asm/trade.s:5988 sub_08079BD4 (+1 aliases)
	.globl gText_Rom_5CA294
gText_Rom_5CA294: @ 0x085CA294
	.string "そのポケモンを　こうかんすると\nせんとうできなくなっちゃうよ！$"
	.if (. - gText_Rom_5CA294) > 0x20
	.error "gText_Rom_5CA294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA294) < 0x20
	.space 0x20 - (. - gText_Rom_5CA294)
	.endif
	.globl gUnknown_85CA2B4
gUnknown_85CA2B4: @ 0x085CA2B4

	@ asm/trade.s:5988 sub_08079BD4 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2B4
gText_Rom_5CA2B4: @ 0x085CA2B4
	.string "その　ポケモンは　いま\nこうかんに　だせません$"
	.if (. - gText_Rom_5CA2B4) != 0x18
	.error "gText_Rom_5CA2B4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA2C8
	.set gText_Rom_5CA2C8, gText_Rom_5CA2B4 + 0x14
	.globl gUnknown_85CA2CC
gUnknown_85CA2CC: @ 0x085CA2CC

	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2CC
gText_Rom_5CA2CC: @ 0x085CA2CC
	.string "タマゴは　いま\nこうかんに　だせません$"
	.if (. - gText_Rom_5CA2CC) != 0x14
	.error "gText_Rom_5CA2CC must retain its original byte length"
	.endif
	.globl gText_Rom_5CA2DC
	.set gText_Rom_5CA2DC, gText_Rom_5CA2CC + 0x10

	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2E0
gText_Rom_5CA2E0: @ 0x085CA2E0
	.string "あいての　ポケモンとは\nいまは　こうかん　できません$"
	.if (. - gText_Rom_5CA2E0) != 0x1b
	.error "gText_Rom_5CA2E0 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA2F7
	.set gText_Rom_5CA2F7, gText_Rom_5CA2E0 + 0x17
	.incbin "baserom.gba", 0x5ca2fb, 0x1

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2FC
gText_Rom_5CA2FC: @ 0x085CA2FC
	.string "いまは　そのポケモンを　\nあいては　うけとることが　できません$"
	.if (. - gText_Rom_5CA2FC) != 0x20
	.error "gText_Rom_5CA2FC must retain its original byte length"
	.endif
	.globl gText_Rom_5CA318
	.set gText_Rom_5CA318, gText_Rom_5CA2FC + 0x1c

	@ asm/party_menu.s:10323 CursorCb_Trade1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA31C
gText_Rom_5CA31C: @ 0x085CA31C
	.string "その　あいてとは　いまは　\nこうかん　できません$"
	.if (. - gText_Rom_5CA31C) != 0x19
	.error "gText_Rom_5CA31C must retain its original byte length"
	.endif
	.globl gText_Rom_5CA331
	.set gText_Rom_5CA331, gText_Rom_5CA31C + 0x15
	.incbin "baserom.gba", 0x5ca335, 0x3

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA338
gText_Rom_5CA338: @ 0x085CA338
	.string "あいての　ほしがっている　タイプの\nポケモンでは　ありません$"
	.if (. - gText_Rom_5CA338) != 0x1f
	.error "gText_Rom_5CA338 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA353
	.set gText_Rom_5CA353, gText_Rom_5CA338 + 0x1b
	.incbin "baserom.gba", 0x5ca357, 0x1

	@ asm/party_menu.s:10323 CursorCb_Trade1 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA358
gText_Rom_5CA358: @ 0x085CA358
	.string "それは　タマゴでは　ありません$"
	.if (. - gText_Rom_5CA358) != 0x10
	.error "gText_Rom_5CA358 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA364
	.set gText_Rom_5CA364, gText_Rom_5CA358 + 0xc

	@ src/strings.c:367 gText_Register
	.globl gText_Rom_5CA368
gText_Rom_5CA368: @ 0x085CA368
	.string "とうろくする$"
	.if (. - gText_Rom_5CA368) > 0x7
	.error "gText_Rom_5CA368 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA368) < 0x7
	.space 0x7 - (. - gText_Rom_5CA368)
	.endif
	.globl gUnknown_85CA36F
gUnknown_85CA36F: @ 0x085CA36F

