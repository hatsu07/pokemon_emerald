	@ src/strings.c:231 gText_ThanksIllSendItHome
	.globl gText_ThanksIllSendItHome
gText_ThanksIllSendItHome: @ 0x085C9998
	.string "どうも ありがとう!\nじたくの パソコンに おくって おくね!{EOS}"
	.if (. - gText_ThanksIllSendItHome) > 0x20
	.error "gText_ThanksIllSendItHome may not grow beyond its original slot"
	.endif
	.if (. - gText_ThanksIllSendItHome) < 0x20
	.space 0x20 - (. - gText_ThanksIllSendItHome)
	.endif

	@ src/strings.c:232 gText_YouDontHaveMoney
	.globl gText_YouDontHaveMoney
gText_YouDontHaveMoney: @ 0x085C99B8
	.string "おかねが たりないですよ!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_YouDontHaveMoney) > 0x10
	.error "gText_YouDontHaveMoney may not grow beyond its original slot"
	.endif
	.if (. - gText_YouDontHaveMoney) < 0x10
	.space 0x10 - (. - gText_YouDontHaveMoney)
	.endif

	@ src/strings.c:233 gText_NoMoreRoomForThis
	.globl gText_NoMoreRoomForThis
gText_NoMoreRoomForThis: @ 0x085C99C8
	.string "それ いじょう\nもちきれない ですよ!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoMoreRoomForThis) > 0x16
	.error "gText_NoMoreRoomForThis may not grow beyond its original slot"
	.endif
	.if (. - gText_NoMoreRoomForThis) < 0x16
	.space 0x16 - (. - gText_NoMoreRoomForThis)
	.endif

	@ src/strings.c:234 gText_SpaceForVar1Full
	.globl gText_SpaceForVar1Full
gText_SpaceForVar1Full: @ 0x085C99DE
	.string "{STR_VAR_1} を\nいれる ばしょが いっぱいです{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_SpaceForVar1Full) > 0x17
	.error "gText_SpaceForVar1Full may not grow beyond its original slot"
	.endif
	.if (. - gText_SpaceForVar1Full) < 0x17
	.space 0x17 - (. - gText_SpaceForVar1Full)
	.endif

	@ src/strings.c:235 gText_AnythingElseICanHelp
	.globl gText_AnythingElseICanHelp
gText_AnythingElseICanHelp: @ 0x085C99F5
	.string "その ほかに わたしどもで\nなにか おちからに なれることは?{EOS}"
	.if (. - gText_AnythingElseICanHelp) > 0x20
	.error "gText_AnythingElseICanHelp may not grow beyond its original slot"
	.endif
	.if (. - gText_AnythingElseICanHelp) < 0x20
	.space 0x20 - (. - gText_AnythingElseICanHelp)
	.endif

	@ src/strings.c:236 gText_CanIHelpWithAnythingElse
	.globl gText_CanIHelpWithAnythingElse
gText_CanIHelpWithAnythingElse: @ 0x085C9A15
	.string "その ほかに\nなにか ちからに なれることは?{EOS}"
	.if (. - gText_CanIHelpWithAnythingElse) > 0x18
	.error "gText_CanIHelpWithAnythingElse may not grow beyond its original slot"
	.endif
	.if (. - gText_CanIHelpWithAnythingElse) < 0x18
	.space 0x18 - (. - gText_CanIHelpWithAnythingElse)
	.endif

	@ src/strings.c:237 gText_ThrowInPremierBall
	.globl gText_ThrowInPremierBall
gText_ThrowInPremierBall: @ 0x085C9A2D
	.string "プレミアボール 1コ\nおまけ しておきますね!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_ThrowInPremierBall) > 0x1a
	.error "gText_ThrowInPremierBall may not grow beyond its original slot"
	.endif
	.if (. - gText_ThrowInPremierBall) < 0x1a
	.space 0x1a - (. - gText_ThrowInPremierBall)
	.endif

	@ src/strings.c:239 gText_CantBuyKeyItem
	.globl gText_CantBuyKeyItem
gText_CantBuyKeyItem: @ 0x085C9A47
	.string "{STR_VAR_2}を\nかいとるわけには いきません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_CantBuyKeyItem) > 0x16
	.error "gText_CantBuyKeyItem may not grow beyond its original slot"
	.endif
	.if (. - gText_CantBuyKeyItem) < 0x16
	.space 0x16 - (. - gText_CantBuyKeyItem)
	.endif

	@ src/strings.c:240 gText_HowManyToSell
	.globl gText_HowManyToSell
gText_HowManyToSell: @ 0x085C9A5D
	.string "{STR_VAR_2}を\nいくつ うりますか?{EOS}"
	.if (. - gText_HowManyToSell) > 0xf
	.error "gText_HowManyToSell may not grow beyond its original slot"
	.endif
	.if (. - gText_HowManyToSell) < 0xf
	.space 0xf - (. - gText_HowManyToSell)
	.endif

	@ src/strings.c:241 gText_ICanPayVar1
	.globl gText_ICanPayVar1
gText_ICanPayVar1: @ 0x085C9A6C
	.string "{STR_VAR_1}円で ひきとらせて いただきます\nよろしいですか?{EOS}"
	.if (. - gText_ICanPayVar1) > 0x1c
	.error "gText_ICanPayVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ICanPayVar1) < 0x1c
	.space 0x1c - (. - gText_ICanPayVar1)
	.endif

	@ src/strings.c:242 gText_TurnedOverVar1ForVar2
	.globl gText_TurnedOverVar1ForVar2
gText_TurnedOverVar1ForVar2: @ 0x085C9A88
	.string "{STR_VAR_2} を わたして\n{STR_VAR_1}円 うけとった!{EOS}"
	.if (. - gText_TurnedOverVar1ForVar2) > 0x15
	.error "gText_TurnedOverVar1ForVar2 may not grow beyond its original slot"
	.endif
	.if (. - gText_TurnedOverVar1ForVar2) < 0x15
	.space 0x15 - (. - gText_TurnedOverVar1ForVar2)
	.endif

	@ src/strings.c:243 gText_PokedollarVar1
	.globl gText_PokedollarVar1
gText_PokedollarVar1: @ 0x085C9A9D
	.string "{STR_VAR_1}円{EOS}"
	.if (. - gText_PokedollarVar1) > 0x4
	.error "gText_PokedollarVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_PokedollarVar1) < 0x4
	.space 0x4 - (. - gText_PokedollarVar1)
	.endif
