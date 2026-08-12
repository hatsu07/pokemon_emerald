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
