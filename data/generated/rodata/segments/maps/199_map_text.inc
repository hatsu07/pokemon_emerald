	@ data/maps/MauvilleCity_GameCorner/scripts.inc:659 MauvilleCity_GameCorner_Text_SendToYourHomePC (+1 aliases)
	.globl gText_Rom_5C9976
gText_Rom_5C9976: @ 0x085C9976
	.string "どうも ありがとう!\nじたくの パソコンに おくって おきますね!$"
	.if (. - gText_Rom_5C9976) > 0x22
	.error "gText_Rom_5C9976 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9976) < 0x22
	.space 0x22 - (. - gText_Rom_5C9976)
	.endif
	.globl gUnknown_85C9998
gUnknown_85C9998: @ 0x085C9998

	@ src/strings.c:231 gText_ThanksIllSendItHome
	.globl gText_Rom_5C9998
gText_Rom_5C9998: @ 0x085C9998
	.string "どうも ありがとう!\nじたくの パソコンに おくって おくね!$"
	.if (. - gText_Rom_5C9998) > 0x20
	.error "gText_Rom_5C9998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9998) < 0x20
	.space 0x20 - (. - gText_Rom_5C9998)
	.endif
	.globl gUnknown_85C99B8
gUnknown_85C99B8: @ 0x085C99B8

	@ src/strings.c:232 gText_YouDontHaveMoney
	.globl gText_Rom_5C99B8
gText_Rom_5C99B8: @ 0x085C99B8
	.string "おかねが たりないですよ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C99B8) > 0x10
	.error "gText_Rom_5C99B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99B8) < 0x10
	.space 0x10 - (. - gText_Rom_5C99B8)
	.endif
	.globl gUnknown_85C99C8
gUnknown_85C99C8: @ 0x085C99C8

	@ src/strings.c:233 gText_NoMoreRoomForThis
	.globl gText_Rom_5C99C8
gText_Rom_5C99C8: @ 0x085C99C8
	.string "それ いじょう\nもちきれない ですよ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C99C8) > 0x16
	.error "gText_Rom_5C99C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99C8) < 0x16
	.space 0x16 - (. - gText_Rom_5C99C8)
	.endif
	.globl gUnknown_85C99DE
gUnknown_85C99DE: @ 0x085C99DE

	@ src/strings.c:234 gText_SpaceForVar1Full
	.globl gText_Rom_5C99DE
gText_Rom_5C99DE: @ 0x085C99DE
	.string "{STR_VAR_1} を\nいれる ばしょが いっぱいです{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C99DE) > 0x17
	.error "gText_Rom_5C99DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99DE) < 0x17
	.space 0x17 - (. - gText_Rom_5C99DE)
	.endif
	.globl gUnknown_85C99F5
gUnknown_85C99F5: @ 0x085C99F5

	@ src/strings.c:235 gText_AnythingElseICanHelp
	.globl gText_Rom_5C99F5
gText_Rom_5C99F5: @ 0x085C99F5
	.string "その ほかに わたしどもで\nなにか おちからに なれることは?$"
	.if (. - gText_Rom_5C99F5) > 0x20
	.error "gText_Rom_5C99F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99F5) < 0x20
	.space 0x20 - (. - gText_Rom_5C99F5)
	.endif
	.globl gUnknown_85C9A15
gUnknown_85C9A15: @ 0x085C9A15

	@ src/strings.c:236 gText_CanIHelpWithAnythingElse
	.globl gText_Rom_5C9A15
gText_Rom_5C9A15: @ 0x085C9A15
	.string "その ほかに\nなにか ちからに なれることは?$"
	.if (. - gText_Rom_5C9A15) > 0x18
	.error "gText_Rom_5C9A15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A15) < 0x18
	.space 0x18 - (. - gText_Rom_5C9A15)
	.endif
	.globl gUnknown_85C9A2D
gUnknown_85C9A2D: @ 0x085C9A2D

	@ src/strings.c:237 gText_ThrowInPremierBall
	.globl gText_Rom_5C9A2D
gText_Rom_5C9A2D: @ 0x085C9A2D
	.string "プレミアボール 1コ\nおまけ しておきますね!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9A2D) > 0x1a
	.error "gText_Rom_5C9A2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A2D) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9A2D)
	.endif
	.globl gUnknown_85C9A47
gUnknown_85C9A47: @ 0x085C9A47

	@ src/strings.c:239 gText_CantBuyKeyItem
	.globl gText_Rom_5C9A47
gText_Rom_5C9A47: @ 0x085C9A47
	.string "{STR_VAR_2}を\nかいとるわけには いきません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9A47) > 0x16
	.error "gText_Rom_5C9A47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A47) < 0x16
	.space 0x16 - (. - gText_Rom_5C9A47)
	.endif
	.globl gUnknown_85C9A5D
gUnknown_85C9A5D: @ 0x085C9A5D

	@ src/strings.c:240 gText_HowManyToSell
	.globl gText_Rom_5C9A5D
gText_Rom_5C9A5D: @ 0x085C9A5D
	.string "{STR_VAR_2}を\nいくつ うりますか?$"
	.if (. - gText_Rom_5C9A5D) > 0xf
	.error "gText_Rom_5C9A5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A5D) < 0xf
	.space 0xf - (. - gText_Rom_5C9A5D)
	.endif
	.globl gUnknown_85C9A6C
gUnknown_85C9A6C: @ 0x085C9A6C

	@ src/strings.c:241 gText_ICanPayVar1
	.globl gText_Rom_5C9A6C
gText_Rom_5C9A6C: @ 0x085C9A6C
	.string "{STR_VAR_1}円で ひきとらせて いただきます\nよろしいですか?$"
	.if (. - gText_Rom_5C9A6C) > 0x1c
	.error "gText_Rom_5C9A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A6C) < 0x1c
	.space 0x1c - (. - gText_Rom_5C9A6C)
	.endif
	.globl gUnknown_85C9A88
gUnknown_85C9A88: @ 0x085C9A88

	@ src/strings.c:242 gText_TurnedOverVar1ForVar2
	.globl gText_Rom_5C9A88
gText_Rom_5C9A88: @ 0x085C9A88
	.string "{STR_VAR_2} を わたして\n{STR_VAR_1}円 うけとった!$"
	.if (. - gText_Rom_5C9A88) > 0x15
	.error "gText_Rom_5C9A88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A88) < 0x15
	.space 0x15 - (. - gText_Rom_5C9A88)
	.endif
	.globl gUnknown_85C9A9D
gUnknown_85C9A9D: @ 0x085C9A9D

	@ src/strings.c:243 gText_PokedollarVar1
	.globl gText_Rom_5C9A9D
gText_Rom_5C9A9D: @ 0x085C9A9D
	.string "{STR_VAR_1}円$"
	.if (. - gText_Rom_5C9A9D) > 0x4
	.error "gText_Rom_5C9A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A9D) < 0x4
	.space 0x4 - (. - gText_Rom_5C9A9D)
	.endif

