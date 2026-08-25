.if .L__inc_fragment_select_b2cc841df96b == 1

	@ asm/party_menu.s:3711 sub_081B19A0
	.globl gText_Rom_5C9CC6
gText_Rom_5C9CC6: @ 0x085C9CC6
	.string "{0xFD}{0x02}から\n{0xFD}{0x03}を　あずかりました！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9CC6) > 0x14
	.error "gText_Rom_5C9CC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CC6) < 0x14
	.space 0x14 - (. - gText_Rom_5C9CC6)
	.endif

	@ src/strings.c:267 gText_MailTakenFromPkmn
	.globl gText_MailTakenFromPkmn
gText_MailTakenFromPkmn: @ 0x085C9CDA
	.string "ポケモンから メールを\nとりました!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_MailTakenFromPkmn) > 0x15
	.error "gText_MailTakenFromPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_MailTakenFromPkmn) < 0x15
	.space 0x15 - (. - gText_MailTakenFromPkmn)
	.endif

	@ src/strings.c:268 gText_SwitchedPkmnItem
	.globl gText_SwitchedPkmnItem
gText_SwitchedPkmnItem: @ 0x085C9CEF
	.string "{STR_VAR_2}を あずかって\nあらたに {STR_VAR_1}を もたせました!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_SwitchedPkmnItem) > 0x1d
	.error "gText_SwitchedPkmnItem may not grow beyond its original slot"
	.endif
	.if (. - gText_SwitchedPkmnItem) < 0x1d
	.space 0x1d - (. - gText_SwitchedPkmnItem)
	.endif

	@ src/strings.c:269 gText_PkmnHoldingItemCantHoldMail
	.globl gText_PkmnHoldingItemCantHoldMail
gText_PkmnHoldingItemCantHoldMail: @ 0x085C9D0C
	.string "すでに どうぐを もっているので\nメールを もたせることが できません{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnHoldingItemCantHoldMail) > 0x26
	.error "gText_PkmnHoldingItemCantHoldMail may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnHoldingItemCantHoldMail) < 0x26
	.space 0x26 - (. - gText_PkmnHoldingItemCantHoldMail)
	.endif

	@ src/strings.c:270 gText_MailTransferredFromMailbox
	.globl gText_MailTransferredFromMailbox
gText_MailTransferredFromMailbox: @ 0x085C9D32
	.string "ボックスから メールを うつしました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_MailTransferredFromMailbox) > 0x15
	.error "gText_MailTransferredFromMailbox may not grow beyond its original slot"
	.endif
	.if (. - gText_MailTransferredFromMailbox) < 0x15
	.space 0x15 - (. - gText_MailTransferredFromMailbox)
	.endif

	@ src/strings.c:271 gText_BagFullCouldNotRemoveItem
	.globl gText_BagFullCouldNotRemoveItem
gText_BagFullCouldNotRemoveItem: @ 0x085C9D47
	.string "バッグが いっぱいで\nポケモンの どうぐを うけとれません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_BagFullCouldNotRemoveItem) > 0x21
	.error "gText_BagFullCouldNotRemoveItem may not grow beyond its original slot"
	.endif
	.if (. - gText_BagFullCouldNotRemoveItem) < 0x21
	.space 0x21 - (. - gText_BagFullCouldNotRemoveItem)
	.endif

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_PkmnLearnedMove3
gText_PkmnLearnedMove3: @ 0x085C9D68
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!{EOS}"
	.if (. - gText_PkmnLearnedMove3) > 0x14
	.error "gText_PkmnLearnedMove3 may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnLearnedMove3) < 0x14
	.space 0x14 - (. - gText_PkmnLearnedMove3)
	.endif

	@ src/strings.c:274 gText_PkmnCantLearnMove
	.globl gText_PkmnCantLearnMove
gText_PkmnCantLearnMove: @ 0x085C9D7C
	.string "{STR_VAR_1}と {STR_VAR_2}は\nあいしょうが わるかった!\p{STR_VAR_2}は おぼえられない!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnCantLearnMove) > 0x25
	.error "gText_PkmnCantLearnMove may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnCantLearnMove) < 0x25
	.space 0x25 - (. - gText_PkmnCantLearnMove)
	.endif

	@ src/strings.c:275 gText_PkmnNeedsToReplaceMove (+1 aliases)
	.globl gText_PkmnNeedsToReplaceMove
gText_PkmnNeedsToReplaceMove: @ 0x085C9DA1
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえたい……!\pしかし {STR_VAR_1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p{STR_VAR_2}の かわりに\nほかの わざを わすれさせますか?{EOS}"
	.if (. - gText_PkmnNeedsToReplaceMove) > 0x51
	.error "gText_PkmnNeedsToReplaceMove may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnNeedsToReplaceMove) < 0x51
	.space 0x51 - (. - gText_PkmnNeedsToReplaceMove)
	.endif

	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_StopLearningMove2
gText_StopLearningMove2: @ 0x085C9DF2
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?{EOS}"
	.if (. - gText_StopLearningMove2) != 0x1b
	.error "gText_StopLearningMove2 must retain its original byte length"
	.endif

	@ src/strings.c:277 gText_MoveNotLearned
	.globl gText_MoveNotLearned
gText_MoveNotLearned: @ 0x085C9E0D
	.string "{STR_VAR_1}は {STR_VAR_2}を\nおぼえずに おわった!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_MoveNotLearned) > 0x16
	.error "gText_MoveNotLearned may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveNotLearned) < 0x16
	.space 0x16 - (. - gText_MoveNotLearned)
	.endif

	@ src/strings.c:278 gText_WhichMoveToForget
	.globl gText_WhichMoveToForget
gText_WhichMoveToForget: @ 0x085C9E23
	.string "どの わざを\nわすれさせたい?{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_WhichMoveToForget) > 0x12
	.error "gText_WhichMoveToForget may not grow beyond its original slot"
	.endif
	.if (. - gText_WhichMoveToForget) < 0x12
	.space 0x12 - (. - gText_WhichMoveToForget)
	.endif

	@ src/strings.c:279 gText_12PoofForgotMove
	.globl gText_12PoofForgotMove
gText_12PoofForgotMove: @ 0x085C9E35
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p{STR_VAR_1}は {STR_VAR_2}の\nつかいかたを きれいに わすれた!\pそして……!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_12PoofForgotMove) > 0x44
	.error "gText_12PoofForgotMove may not grow beyond its original slot"
	.endif
	.if (. - gText_12PoofForgotMove) < 0x44
	.space 0x44 - (. - gText_12PoofForgotMove)
	.endif

	@ src/strings.c:280 gText_PkmnAlreadyKnows
	.globl gText_PkmnAlreadyKnows
gText_PkmnAlreadyKnows: @ 0x085C9E79
	.string "{STR_VAR_1}は すでに\n{STR_VAR_2}を おぼえています{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnAlreadyKnows) > 0x16
	.error "gText_PkmnAlreadyKnows may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnAlreadyKnows) < 0x16
	.space 0x16 - (. - gText_PkmnAlreadyKnows)
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 2

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
.elseif .L__inc_fragment_select_b2cc841df96b == 3

	@ asm/party_menu.s:13150 sub_081B6468
	.globl gText_Rom_5C9FC1
gText_Rom_5C9FC1: @ 0x085C9FC1
	.string "{0xFD}{0x02}は　ちょっと　なついた！\n{0xFD}{0x03}の　きそポイントは　もうさがらない！{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5C9FC1) > 0x26
	.error "gText_Rom_5C9FC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9FC1) < 0x26
	.space 0x26 - (. - gText_Rom_5C9FC1)
	.endif

	@ src/strings.c:299 gText_PkmnSnappedOutOfConfusion
	.globl gText_PkmnSnappedOutOfConfusion
gText_PkmnSnappedOutOfConfusion: @ 0x085C9FE7
	.string "{STR_VAR_1}の\nこんらんが とけた{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnSnappedOutOfConfusion) > 0x10
	.error "gText_PkmnSnappedOutOfConfusion may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnSnappedOutOfConfusion) < 0x10
	.space 0x10 - (. - gText_PkmnSnappedOutOfConfusion)
	.endif

	@ src/strings.c:300 gText_PkmnGotOverInfatuation
	.globl gText_PkmnGotOverInfatuation
gText_PkmnGotOverInfatuation: @ 0x085C9FF7
	.string "{STR_VAR_1}の\nメロメロが とけた{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_PkmnGotOverInfatuation) > 0x10
	.error "gText_PkmnGotOverInfatuation may not grow beyond its original slot"
	.endif
	.if (. - gText_PkmnGotOverInfatuation) < 0x10
	.space 0x10 - (. - gText_PkmnGotOverInfatuation)
	.endif

	@ src/strings.c:302 gText_ThrowAwayItem
	.globl gText_ThrowAwayItem
gText_ThrowAwayItem: @ 0x085CA007
	.string "{STR_VAR_1}を\nすてても よろしいですか{EOS}"
	.if (. - gText_ThrowAwayItem) > 0x11
	.error "gText_ThrowAwayItem may not grow beyond its original slot"
	.endif
	.if (. - gText_ThrowAwayItem) < 0x11
	.space 0x11 - (. - gText_ThrowAwayItem)
	.endif

	@ src/strings.c:303 gText_ItemThrownAway
	.globl gText_ItemThrownAway
gText_ItemThrownAway: @ 0x085CA018
	.string "{STR_VAR_1}を\nすてました{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_ItemThrownAway) > 0xc
	.error "gText_ItemThrownAway may not grow beyond its original slot"
	.endif
	.if (. - gText_ItemThrownAway) < 0xc
	.space 0xc - (. - gText_ItemThrownAway)
	.endif

	@ src/strings.c:304 gText_TeachWhichPokemon2
	.globl gText_TeachWhichPokemon2
gText_TeachWhichPokemon2: @ 0x085CA024
	.string "どのポケモンに おぼえさせますか?{EOS}"
	.if (. - gText_TeachWhichPokemon2) > 0x12
	.error "gText_TeachWhichPokemon2 may not grow beyond its original slot"
	.endif
	.if (. - gText_TeachWhichPokemon2) < 0x12
	.space 0x12 - (. - gText_TeachWhichPokemon2)
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 4
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

	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Able
gText_Able: @ 0x085CA1AB
	.string "さんかしない{EOS}"
	.if (. - gText_Able) != 0x7
	.error "gText_Able must retain its original byte length"
	.endif

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

	@ src/strings.c:347 gText_DontHave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DontHave
gText_DontHave: @ 0x085CA1EE
	.string "もっていない{EOS}"
	.if (. - gText_DontHave) != 0x7
	.error "gText_DontHave must retain its original byte length"
	.endif

.elseif .L__inc_fragment_select_b2cc841df96b == 5

	@ src/strings.c:416 gText_DelRegist
	.globl gText_DelRegist
gText_DelRegist: @ 0x085CA69A
	.string "とうろく かいじょ{EOS}"
	.if (. - gText_DelRegist) > 0xa
	.error "gText_DelRegist may not grow beyond its original slot"
	.endif
	.if (. - gText_DelRegist) < 0xa
	.space 0xa - (. - gText_DelRegist)
	.endif

	@ src/strings.c:417 gText_Var3Var1SlashVar2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Var3Var1SlashVar2
gText_Var3Var1SlashVar2: @ 0x085CA6A4
	.string "{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}{EOS}"
	.if (. - gText_Var3Var1SlashVar2) != 0x8
	.error "gText_Var3Var1SlashVar2 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 6
	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA6AC
gText_Rom_5CA6AC: @ 0x085CA6AC
	.string "グッズを　おく{EOS}"
	.if (. - gText_Rom_5CA6AC) > 0x8
	.error "gText_Rom_5CA6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6AC) < 0x8
	.space 0x8 - (. - gText_Rom_5CA6AC)
	.endif
	@ src/strings.c:419 gText_PutAway
	.globl gText_PutAway
gText_PutAway: @ 0x085CA6B4
	.string "グッズを もどす{EOS}"
	.if (. - gText_PutAway) > 0x9
	.error "gText_PutAway may not grow beyond its original slot"
	.endif
	.if (. - gText_PutAway) < 0x9
	.space 0x9 - (. - gText_PutAway)
	.endif

	@ src/strings.c:420 gText_Toss2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Toss2
gText_Toss2: @ 0x085CA6BD
	.string "グッズを すてる{EOS}"
	.if (. - gText_Toss2) != 0x9
	.error "gText_Toss2 must retain its original byte length"
	.endif

	@ src/strings.c:421 gText_Color161Shadow161
	.globl gText_Color161Shadow161
gText_Color161Shadow161: @ 0x085CA6C6
	.string "{COLOR 161}{SHADOW 161}{EOS}"
	.if (. - gText_Color161Shadow161) > 0x7
	.error "gText_Color161Shadow161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Color161Shadow161) < 0x7
	.space 0x7 - (. - gText_Color161Shadow161)
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 7

	@ asm/fldeff_misc.s:2181 GetShieldToyTVDecorationInfo
	.globl gText_Rom_5CA73F
gText_Rom_5CA73F: @ 0x085CA73F
	.string "きん{EOS}"
	.if (. - gText_Rom_5CA73F) > 0x3
	.error "gText_Rom_5CA73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA73F) < 0x3
	.space 0x3 - (. - gText_Rom_5CA73F)
	.endif

	@ src/strings.c:435 gText_Silver
	.globl gText_Silver
gText_Silver: @ 0x085CA742
	.string "ぎん{EOS}"
	.if (. - gText_Silver) > 0x3
	.error "gText_Silver may not grow beyond its original slot"
	.endif
	.if (. - gText_Silver) < 0x3
	.space 0x3 - (. - gText_Silver)
	.endif

	@ src/strings.c:436 gText_PlaceItHere
	.globl gText_PlaceItHere
gText_PlaceItHere: @ 0x085CA745
	.string "ここに おきますか?{EOS}"
	.if (. - gText_PlaceItHere) > 0xb
	.error "gText_PlaceItHere may not grow beyond its original slot"
	.endif
	.if (. - gText_PlaceItHere) < 0xb
	.space 0xb - (. - gText_PlaceItHere)
	.endif

	@ src/strings.c:437 gText_CantBePlacedHere
	.globl gText_CantBePlacedHere
gText_CantBePlacedHere: @ 0x085CA750
	.string "ここには おけません!{EOS}"
	.if (. - gText_CantBePlacedHere) > 0xc
	.error "gText_CantBePlacedHere may not grow beyond its original slot"
	.endif
	.if (. - gText_CantBePlacedHere) < 0xc
	.space 0xc - (. - gText_CantBePlacedHere)
	.endif

	@ src/strings.c:438 gText_CancelDecorating
	.globl gText_CancelDecorating
gText_CancelDecorating: @ 0x085CA75C
	.string "おくのを やめますか?{EOS}"
	.if (. - gText_CancelDecorating) > 0xc
	.error "gText_CancelDecorating may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelDecorating) < 0xc
	.space 0xc - (. - gText_CancelDecorating)
	.endif

	@ src/strings.c:439 gText_InUseAlready
	.globl gText_InUseAlready
gText_InUseAlready: @ 0x085CA768
	.string "すでに おかれて います!{EOS}"
	.if (. - gText_InUseAlready) > 0xe
	.error "gText_InUseAlready may not grow beyond its original slot"
	.endif
	.if (. - gText_InUseAlready) < 0xe
	.space 0xe - (. - gText_InUseAlready)
	.endif

	@ src/strings.c:440 gText_NoMoreDecorations
	.globl gText_NoMoreDecorations
gText_NoMoreDecorations: @ 0x085CA776
	.string "これいじょう おけません\nひみつきちに おけるのは {STR_VAR_1}こ までです{EOS}"
	.if (. - gText_NoMoreDecorations) > 0x23
	.error "gText_NoMoreDecorations may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMoreDecorations) < 0x23
	.space 0x23 - (. - gText_NoMoreDecorations)
	.endif

	@ src/strings.c:441 gText_NoMoreDecorations2
	.globl gText_NoMoreDecorations2
gText_NoMoreDecorations2: @ 0x085CA799
	.string "これいじょう おけません\nへやに おけるのは {STR_VAR_1}こ までです{EOS}"
	.if (. - gText_NoMoreDecorations2) > 0x20
	.error "gText_NoMoreDecorations2 may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMoreDecorations2) < 0x20
	.space 0x20 - (. - gText_NoMoreDecorations2)
	.endif

	@ src/strings.c:442 gText_MustBePlacedOnDesk
	.globl gText_MustBePlacedOnDesk
gText_MustBePlacedOnDesk: @ 0x085CA7B9
	.string "ここには おけません!\nつくえの うえなどに おいてください!{EOS}"
	.if (. - gText_MustBePlacedOnDesk) > 0x20
	.error "gText_MustBePlacedOnDesk may not grow beyond its original slot"
	.endif
	.if (. - gText_MustBePlacedOnDesk) < 0x20
	.space 0x20 - (. - gText_MustBePlacedOnDesk)
	.endif

	@ src/strings.c:443 gText_CantPlaceInRoom
	.globl gText_CantPlaceInRoom
gText_CantPlaceInRoom: @ 0x085CA7D9
	.string "この グッズは\nじぶんの へやには おけません!{EOS}"
	.if (. - gText_CantPlaceInRoom) > 0x19
	.error "gText_CantPlaceInRoom may not grow beyond its original slot"
	.endif
	.if (. - gText_CantPlaceInRoom) < 0x19
	.space 0x19 - (. - gText_CantPlaceInRoom)
	.endif

	@ src/strings.c:444 gText_CantThrowAwayInUse
	.globl gText_CantThrowAwayInUse
gText_CantThrowAwayInUse: @ 0x085CA7F2
	.string "このグッズは おかれて いるので\nすてる ことが できません!{EOS}"
	.if (. - gText_CantThrowAwayInUse) > 0x20
	.error "gText_CantThrowAwayInUse may not grow beyond its original slot"
	.endif
	.if (. - gText_CantThrowAwayInUse) < 0x20
	.space 0x20 - (. - gText_CantThrowAwayInUse)
	.endif

	@ src/strings.c:445 gText_DecorationWillBeDiscarded
	.globl gText_DecorationWillBeDiscarded
gText_DecorationWillBeDiscarded: @ 0x085CA812
	.string "{STR_VAR_1} は なくなりますが\nよろしい ですか?{EOS}"
	.if (. - gText_DecorationWillBeDiscarded) > 0x17
	.error "gText_DecorationWillBeDiscarded may not grow beyond its original slot"
	.endif
	.if (. - gText_DecorationWillBeDiscarded) < 0x17
	.space 0x17 - (. - gText_DecorationWillBeDiscarded)
	.endif

	@ src/strings.c:446 gText_DecorationThrownAway
	.globl gText_DecorationThrownAway
gText_DecorationThrownAway: @ 0x085CA829
	.string "グッズを すてました!{EOS}"
	.if (. - gText_DecorationThrownAway) > 0xc
	.error "gText_DecorationThrownAway may not grow beyond its original slot"
	.endif
	.if (. - gText_DecorationThrownAway) < 0xc
	.space 0xc - (. - gText_DecorationThrownAway)
	.endif

	@ src/strings.c:447 gText_StopPuttingAwayDecorations
	.globl gText_StopPuttingAwayDecorations
gText_StopPuttingAwayDecorations: @ 0x085CA835
	.string "もどすのを やめますか?{EOS}"
	.if (. - gText_StopPuttingAwayDecorations) > 0xd
	.error "gText_StopPuttingAwayDecorations may not grow beyond its original slot"
	.endif
	.if (. - gText_StopPuttingAwayDecorations) < 0xd
	.space 0xd - (. - gText_StopPuttingAwayDecorations)
	.endif

	@ src/strings.c:448 gText_NoDecorationHere
	.globl gText_NoDecorationHere
gText_NoDecorationHere: @ 0x085CA842
	.string "ここに グッズは ありません!{EOS}"
	.if (. - gText_NoDecorationHere) > 0x10
	.error "gText_NoDecorationHere may not grow beyond its original slot"
	.endif
	.if (. - gText_NoDecorationHere) < 0x10
	.space 0x10 - (. - gText_NoDecorationHere)
	.endif

	@ src/strings.c:449 gText_ReturnDecorationToPC
	.globl gText_ReturnDecorationToPC
gText_ReturnDecorationToPC: @ 0x085CA852
	.string "このグッズを パソコンに もどしますか?{EOS}"
	.if (. - gText_ReturnDecorationToPC) > 0x15
	.error "gText_ReturnDecorationToPC may not grow beyond its original slot"
	.endif
	.if (. - gText_ReturnDecorationToPC) < 0x15
	.space 0x15 - (. - gText_ReturnDecorationToPC)
	.endif

	@ src/strings.c:450 gText_DecorationReturnedToPC
	.globl gText_DecorationReturnedToPC
gText_DecorationReturnedToPC: @ 0x085CA867
	.string "グッズを パソコンに もどしました!{EOS}"
	.if (. - gText_DecorationReturnedToPC) > 0x13
	.error "gText_DecorationReturnedToPC may not grow beyond its original slot"
	.endif
	.if (. - gText_DecorationReturnedToPC) < 0x13
	.space 0x13 - (. - gText_DecorationReturnedToPC)
	.endif
	.globl gText_NoDecorationsInUse
.elseif .L__inc_fragment_select_b2cc841df96b == 8
	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_OpenLevel3
sScriptMenuText_OpenLevel3: @ 0x085CAF64
	.string "オープンレベル{EOS}"
	.if (. - sScriptMenuText_OpenLevel3) != 0x8
	.error "sScriptMenuText_OpenLevel3 must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5CAF6C, size=0x9
	.string "たたかいのきほん{EOS}"
	@ src/strings.c:506 gText_PokemonNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_PokemonNature
sScriptMenuText_PokemonNature: @ 0x085CAF75
	.string "ポケモンのせいかく{EOS}"
	.if (. - sScriptMenuText_PokemonNature) != 0xa
	.error "sScriptMenuText_PokemonNature must retain its original byte length"
	.endif

	@ src/strings.c:507 gText_PokemonMoves
	.globl sScriptMenuText_PokemonMoves
sScriptMenuText_PokemonMoves: @ 0x085CAF7F
	.string "ポケモンのわざ{EOS}"
	.if (. - sScriptMenuText_PokemonMoves) > 0x8
	.error "sScriptMenuText_PokemonMoves may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_PokemonMoves) < 0x8
	.space 0x8 - (. - sScriptMenuText_PokemonMoves)
	.endif

	@ src/strings.c:508 gText_Underpowered
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_Underpowered
sScriptMenuText_Underpowered: @ 0x085CAF87
	.string "ちからをはっきできない{EOS}"
	.if (. - sScriptMenuText_Underpowered) != 0xc
	.error "sScriptMenuText_Underpowered must retain its original byte length"
	.endif

	@ src/strings.c:509 gText_WhenInDanger
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_WhenInDanger
sScriptMenuText_WhenInDanger: @ 0x085CAF93
	.string "ピンチになったら{EOS}"
	.if (. - sScriptMenuText_WhenInDanger) != 0x9
	.error "sScriptMenuText_WhenInDanger must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 9

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BerryCrush2
gText_BerryCrush2: @ 0x085CCA70
	.string "きのみクラッシュ{EOS}"
	.if (. - gText_BerryCrush2) != 0x9
	.error "gText_BerryCrush2 must retain its original byte length"
	.endif
	@ src/strings.c:785 gText_PressingSpeedRankings
	@ Preserve exact byte length: internal label.
	.globl gText_PressingSpeedRankings
gText_PressingSpeedRankings: @ 0x085CCA79
	.string "   おすはやさ ランキング!{EOS}"
	.if (. - gText_PressingSpeedRankings) != 0x10
	.error "gText_PressingSpeedRankings must retain its original byte length"
	.endif

	@ src/strings.c:786 gText_Var1Players
	@ Preserve exact byte length: internal label.
	.globl gText_Var1Players
gText_Var1Players: @ 0x085CCA89
	.string "   {STR_VAR_1}にんよう{EOS}"
	.if (. - gText_Var1Players) != 0xa
	.error "gText_Var1Players must retain its original byte length"
	.endif

	@ src/strings.c:787 gText_SymbolsEarned
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SymbolsEarned
gText_SymbolsEarned: @ 0x085CCA93
	.string "てにいれた シンボル{EOS}"
	.if (. - gText_SymbolsEarned) != 0xb
	.error "gText_SymbolsEarned must retain its original byte length"
	.endif

	@ src/strings.c:788 gText_BattleRecord
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BattleRecord
gText_BattleRecord: @ 0x085CCA9E
	.string "たいせんの きろく{EOS}"
	.if (. - gText_BattleRecord) != 0xa
	.error "gText_BattleRecord must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 10

	@ src/strings.c:820 gText_Powder
	.globl gText_Powder
gText_Powder: @ 0x085CCCEE
	.string "きのみのこな{EOS}"
	.if (. - gText_Powder) > 0x7
	.error "gText_Powder may not grow beyond its original slot"
	.endif
	.if (. - gText_Powder) < 0x7
	.space 0x7 - (. - gText_Powder)
	.endif

	@ src/strings.c:821 gText_BerryPickingRecords
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BerryPickingRecords
gText_BerryPickingRecords: @ 0x085CCCF5
	.string "ドードリオのきのみどりの きろく{EOS}"
	.if (. - gText_BerryPickingRecords) != 0x11
	.error "gText_BerryPickingRecords must retain its original byte length"
	.endif

	@ src/strings.c:822 gText_BerriesPicked
	.globl gText_BerriesPicked
gText_BerriesPicked: @ 0x085CCD06
	.string "きのみをとった かいすう{EOS}"
	.if (. - gText_BerriesPicked) > 0xd
	.error "gText_BerriesPicked may not grow beyond its original slot"
	.endif
	.if (. - gText_BerriesPicked) < 0xd
	.space 0xd - (. - gText_BerriesPicked)
	.endif

	@ src/strings.c:823 gText_BestScore (+1 aliases)
	.globl gText_BestScore
gText_BestScore: @ 0x085CCD13
	.string "さいこう とくてん{EOS}"
	.if (. - gText_BestScore) > 0xa
	.error "gText_BestScore may not grow beyond its original slot"
	.endif
	.if (. - gText_BestScore) < 0xa
	.space 0xa - (. - gText_BestScore)
	.endif

	@ src/strings.c:824 gText_BerriesInRowFivePlayers
	.globl gText_BerriesInRowFivePlayers
gText_BerriesInRowFivePlayers: @ 0x085CCD1D
	.string "5にんで きのみを\nつづけてとった かいすう{EOS}"
	.if (. - gText_BerriesInRowFivePlayers) > 0x17
	.error "gText_BerriesInRowFivePlayers may not grow beyond its original slot"
	.endif
	.if (. - gText_BerriesInRowFivePlayers) < 0x17
	.space 0x17 - (. - gText_BerriesInRowFivePlayers)
	.endif

	@ src/strings.c:825 gText_BerryPickingResults
	.globl gText_BerryPickingResults
gText_BerryPickingResults: @ 0x085CCD34
	.string "きのみの けっか はっぴょう!!{EOS}"
	.if (. - gText_BerryPickingResults) > 0x11
	.error "gText_BerryPickingResults may not grow beyond its original slot"
	.endif
	.if (. - gText_BerryPickingResults) < 0x11
	.space 0x11 - (. - gText_BerryPickingResults)
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 11

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5DC0ED
gText_Rom_5DC0ED: @ 0x085DC0ED
	.string "つよさをみる{EOS}"
	.if (. - gText_Rom_5DC0ED) > 0x7
	.error "gText_Rom_5DC0ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0ED) < 0x7
	.space 0x7 - (. - gText_Rom_5DC0ED)
	.endif

	@ src/strings.c:998 gText_Others2 (+1 aliases)
@ SEMANTIC_ROLE: gText_Rechoose (Battle Factory Swap_PrintMenuOptions third slot; duplicate provenance gText_Others2)
	.globl gText_Rechoose
gText_Rechoose: @ 0x085DC0F4
	.string "べつのにする{EOS}"
	.if (. - gText_Rechoose) > 0x7
	.error "gText_Rechoose may not grow beyond its original slot"
	.endif
	.if (. - gText_Rechoose) < 0x7
	.space 0x7 - (. - gText_Rechoose)
	.endif

	@ src/strings.c:1010 gText_QuitSwapping
	.globl gText_QuitSwapping
gText_QuitSwapping: @ 0x085DC0FB
	.string "こうかんを ちゅうし しますか?{EOS}"
	.if (. - gText_QuitSwapping) > 0x11
	.error "gText_QuitSwapping may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitSwapping) < 0x11
	.space 0x11 - (. - gText_QuitSwapping)
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 12
	.globl gText_Rom_5DC10C
gText_Rom_5DC10C: @ 0x085DC10C
	@ Decoded text from ROM range: offset=0x5DC10C, size=0x3
	.string "はい{EOS}"

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5DC10F
gText_Rom_5DC10F: @ 0x085DC10F
	.string "いいえ{EOS}"
	.if (. - gText_Rom_5DC10F) > 0x4
	.error "gText_Rom_5DC10F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC10F) < 0x4
	.space 0x4 - (. - gText_Rom_5DC10F)
	.endif

	@ src/strings.c:1013 gText_PkmnForSwap
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PkmnForSwap
gText_PkmnForSwap: @ 0x085DC113
	.string "てばなすポケモン{EOS}"
	.if (. - gText_PkmnForSwap) != 0x9
	.error "gText_PkmnForSwap must retain its original byte length"
	.endif

	@ src/strings.c:1014 gText_Cancel3
	.globl gText_Cancel3
gText_Cancel3: @ 0x085DC11C
	.string "ちゅうし{EOS}"
	.if (. - gText_Cancel3) > 0x5
	.error "gText_Cancel3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Cancel3) < 0x5
	.space 0x5 - (. - gText_Cancel3)
	.endif

	@ src/strings.c:1007 gText_Swap (+1 aliases)
	.globl gText_SwapAction
gText_SwapAction: @ 0x085DC121
	.string "てばなす{EOS}"
	.if (. - gText_SwapAction) > 0x5
	.error "gText_SwapAction may not grow beyond its original slot"
	.endif
	.if (. - gText_SwapAction) < 0x5
	.space 0x5 - (. - gText_SwapAction)
	.endif

	@ src/strings.c:1016 gText_Accept (+1 aliases)
	.globl gText_Accept
gText_Accept: @ 0x085DC126
	.string "うけとる{EOS}"
	.if (. - gText_Accept) > 0x5
	.error "gText_Accept may not grow beyond its original slot"
	.endif
	.if (. - gText_Accept) < 0x5
	.space 0x5 - (. - gText_Accept)
	.endif

	@ src/strings.c:1017 gText_AcceptThisPkmn
	.globl gText_AcceptThisPkmn
gText_AcceptThisPkmn: @ 0x085DC12B
	.string "このポケモンを うけとりますか?{EOS}"
	.if (. - gText_AcceptThisPkmn) > 0x11
	.error "gText_AcceptThisPkmn may not grow beyond its original slot"
	.endif
	.if (. - gText_AcceptThisPkmn) < 0x11
	.space 0x11 - (. - gText_AcceptThisPkmn)
	.endif
.elseif .L__inc_fragment_select_b2cc841df96b == 13

	@ src/strings.c:890 gText_Lv502 (+1 aliases)
	.globl gText_Lv502
gText_Lv502: @ 0x085DD40E
	.string "レベル 50{EOS}"
	.if (. - gText_Lv502) > 0x7
	.error "gText_Lv502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Lv502) < 0x7
	.space 0x7 - (. - gText_Lv502)
	.endif

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD415
gText_Rom_5DD415: @ 0x085DD415
	.string "オープンレベル{EOS}"
	.if (. - gText_Rom_5DD415) != 0x8
	.error "gText_Rom_5DD415 must retain its original byte length"
	.endif

	@ src/strings.c:892 gText_WinStreak
	.globl gText_WinStreak
gText_WinStreak: @ 0x085DD41D
	.string "{STR_VAR_1}れんしょう{EOS}"
	.if (. - gText_WinStreak) > 0x8
	.error "gText_WinStreak may not grow beyond its original slot"
	.endif
	.if (. - gText_WinStreak) < 0x8
	.space 0x8 - (. - gText_WinStreak)
	.endif

	@ src/strings.c:893 gText_Current
	.globl gText_Current
gText_Current: @ 0x085DD425
	.string "げんざい{EOS}"
	.if (. - gText_Current) > 0x5
	.error "gText_Current may not grow beyond its original slot"
	.endif
	.if (. - gText_Current) < 0x5
	.space 0x5 - (. - gText_Current)
	.endif
.endif
