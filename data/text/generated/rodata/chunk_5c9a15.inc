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

	@ src/pokemon_storage_system.c:8081 pokemon_storage_system_line_8081
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AA1
gText_Rom_5C9AA1: @ 0x085C9AA1
	.string "いれかえる$"
	.if (. - gText_Rom_5C9AA1) != 0x6
	.error "gText_Rom_5C9AA1 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9AA3
	.set gText_Rom_5C9AA3, gText_Rom_5C9AA1 + 0x2
	.incbin "baserom.gba", 0x5c9aa7, 0x8

	@ src/data/party_menu.h:797 party_menu_line_797
	.globl gText_Rom_5C9AAF
gText_Rom_5C9AAF: @ 0x085C9AAF
	.string "ならびかえ$"
	.if (. - gText_Rom_5C9AAF) > 0x6
	.error "gText_Rom_5C9AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AAF) < 0x6
	.space 0x6 - (. - gText_Rom_5C9AAF)
	.endif

	@ src/data/party_menu.h:796 party_menu_line_796 (+2 aliases)
	.globl gText_Rom_5C9AB5
gText_Rom_5C9AB5: @ 0x085C9AB5
	.string "つよさをみる$"
	.if (. - gText_Rom_5C9AB5) > 0x7
	.error "gText_Rom_5C9AB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AB5) < 0x7
	.space 0x7 - (. - gText_Rom_5C9AB5)
	.endif
	.incbin "baserom.gba", 0x5c9abc, 0xd

	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AC9
gText_Rom_5C9AC9: @ 0x085C9AC9
	.string "さんかしない$"
	.if (. - gText_Rom_5C9AC9) != 0x7
	.error "gText_Rom_5C9AC9 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9ACC
	.set gText_Rom_5C9ACC, gText_Rom_5C9AC9 + 0x3

	@ src/data/party_menu.h:804 party_menu_line_804
	.globl gText_Rom_5C9AD0
gText_Rom_5C9AD0: @ 0x085C9AD0
	.string "メールを とる$"
	.if (. - gText_Rom_5C9AD0) > 0x8
	.error "gText_Rom_5C9AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AD0) < 0x8
	.space 0x8 - (. - gText_Rom_5C9AD0)
	.endif

	@ src/data/party_menu.h:805 party_menu_line_805
	.globl gText_Rom_5C9AD8
gText_Rom_5C9AD8: @ 0x085C9AD8
	.string "メールを よむ$"
	.if (. - gText_Rom_5C9AD8) > 0x8
	.error "gText_Rom_5C9AD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AD8) < 0x8
	.space 0x8 - (. - gText_Rom_5C9AD8)
	.endif
	.incbin "baserom.gba", 0x5c9ae0, 0x7
	.globl gUnknown_85C9AE7
gUnknown_85C9AE7: @ 0x085C9AE7

	@ src/battle_message.c:148 sText_HP (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AE7
gText_Rom_5C9AE7: @ 0x085C9AE7
	.string "たいりょく$"
	.if (. - gText_Rom_5C9AE7) != 0x6
	.error "gText_Rom_5C9AE7 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9AE8
	.set gText_Rom_5C9AE8, gText_Rom_5C9AE7 + 0x1
	.globl gUnknown_85C9AED
gUnknown_85C9AED: @ 0x085C9AED

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5C9AED
gText_Rom_5C9AED: @ 0x085C9AED
	.string "とくこう$"
	.if (. - gText_Rom_5C9AED) > 0x5
	.error "gText_Rom_5C9AED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AED) < 0x5
	.space 0x5 - (. - gText_Rom_5C9AED)
	.endif
	.globl gUnknown_85C9AF2
gUnknown_85C9AF2: @ 0x085C9AF2

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5C9AF2
gText_Rom_5C9AF2: @ 0x085C9AF2
	.string "とくぼう$"
	.if (. - gText_Rom_5C9AF2) > 0x5
	.error "gText_Rom_5C9AF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AF2) < 0x5
	.space 0x5 - (. - gText_Rom_5C9AF2)
	.endif
	.globl gUnknown_85C9AF7
gUnknown_85C9AF7: @ 0x085C9AF7

	@ src/strings.c:247 gText_WontHaveEffect
	.globl gText_Rom_5C9AF7
gText_Rom_5C9AF7: @ 0x085C9AF7
	.string "つかっても こうかがないよ{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9AF7) > 0x10
	.error "gText_Rom_5C9AF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AF7) < 0x10
	.space 0x10 - (. - gText_Rom_5C9AF7)
	.endif
	.globl gUnknown_85C9B07
gUnknown_85C9B07: @ 0x085C9B07
	.incbin "baserom.gba", 0x5c9b07, 0x13
	.globl gUnknown_85C9B1A
gUnknown_85C9B1A: @ 0x085C9B1A

	@ src/strings.c:250 gText_PkmnCantSwitchOut
	.globl gText_Rom_5C9B1A
gText_Rom_5C9B1A: @ 0x085C9B1A
	.string "{STR_VAR_1}を もどすことが\nできない!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B1A) > 0x13
	.error "gText_Rom_5C9B1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B1A) < 0x13
	.space 0x13 - (. - gText_Rom_5C9B1A)
	.endif
	.globl gUnknown_85C9B2D
gUnknown_85C9B2D: @ 0x085C9B2D

	@ src/strings.c:251 gText_PkmnAlreadyInBattle
	.globl gText_Rom_5C9B2D
gText_Rom_5C9B2D: @ 0x085C9B2D
	.string "{STR_VAR_1}は すでに\nせんとうに でています{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B2D) > 0x16
	.error "gText_Rom_5C9B2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B2D) < 0x16
	.space 0x16 - (. - gText_Rom_5C9B2D)
	.endif
	.globl gUnknown_85C9B43
gUnknown_85C9B43: @ 0x085C9B43

	@ src/strings.c:252 gText_PkmnAlreadySelected
	.globl gText_Rom_5C9B43
gText_Rom_5C9B43: @ 0x085C9B43
	.string "{STR_VAR_1}は すでに\nせんたく されています{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B43) > 0x16
	.error "gText_Rom_5C9B43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B43) < 0x16
	.space 0x16 - (. - gText_Rom_5C9B43)
	.endif
	.globl gUnknown_85C9B59
gUnknown_85C9B59: @ 0x085C9B59
	.incbin "baserom.gba", 0x5c9b59, 0x1d
	.globl gUnknown_85C9B76
gUnknown_85C9B76: @ 0x085C9B76

	@ src/strings.c:254 gText_CantSwitchWithAlly
	.globl gText_Rom_5C9B76
gText_Rom_5C9B76: @ 0x085C9B76
	.string "{STR_VAR_1}の ポケモンは じぶんの\nポケモンと いれかえることは できません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B76) > 0x27
	.error "gText_Rom_5C9B76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B76) < 0x27
	.space 0x27 - (. - gText_Rom_5C9B76)
	.endif
	.globl gUnknown_85C9B9D
gUnknown_85C9B9D: @ 0x085C9B9D

	@ src/strings.c:255 gText_EggCantBattle
	.globl gText_Rom_5C9B9D
gText_Rom_5C9B9D: @ 0x085C9B9D
	.string "タマゴを\nせんとうに だすことは できません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9B9D) > 0x1a
	.error "gText_Rom_5C9B9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9B9D) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9B9D)
	.endif
	.globl gUnknown_85C9BB7
gUnknown_85C9BB7: @ 0x085C9BB7

	@ src/strings.c:256 gText_CantUseUntilNewBadge
	.globl gText_Rom_5C9BB7
gText_Rom_5C9BB7: @ 0x085C9BB7
	.string "あたらしい バッジを てにするまで\nまだ つかえません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9BB7) > 0x1e
	.error "gText_Rom_5C9BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9BB7) < 0x1e
	.space 0x1e - (. - gText_Rom_5C9BB7)
	.endif
	.globl gUnknown_85C9BD5
gUnknown_85C9BD5: @ 0x085C9BD5

	@ src/strings.c:257 gText_NoMoreThanVar1Pkmn
	.globl gText_Rom_5C9BD5
gText_Rom_5C9BD5: @ 0x085C9BD5
	.string "さんか できる ポケモンは\n{STR_VAR_1}ひき まで です!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9BD5) > 0x1c
	.error "gText_Rom_5C9BD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9BD5) < 0x1c
	.space 0x1c - (. - gText_Rom_5C9BD5)
	.endif
	.globl gUnknown_85C9BF1
gUnknown_85C9BF1: @ 0x085C9BF1

	@ src/strings.c:258 gText_SendMailToPC
	.globl gText_Rom_5C9BF1
gText_Rom_5C9BF1: @ 0x085C9BF1
	.string "とった メールを パソコンに\nてんそうしますか?$"
	.if (. - gText_Rom_5C9BF1) > 0x19
	.error "gText_Rom_5C9BF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9BF1) < 0x19
	.space 0x19 - (. - gText_Rom_5C9BF1)
	.endif
	.globl gUnknown_85C9C0A
gUnknown_85C9C0A: @ 0x085C9C0A

	@ src/strings.c:259 gText_MailSentToPC
	.globl gText_Rom_5C9C0A
gText_Rom_5C9C0A: @ 0x085C9C0A
	.string "メールを パソコンに\nてんそうしました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C0A) > 0x16
	.error "gText_Rom_5C9C0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C0A) < 0x16
	.space 0x16 - (. - gText_Rom_5C9C0A)
	.endif
	.globl gUnknown_85C9C20
gUnknown_85C9C20: @ 0x085C9C20

	@ src/strings.c:260 gText_PCMailboxFull
	.globl gText_Rom_5C9C20
gText_Rom_5C9C20: @ 0x085C9C20
	.string "パソコンの メールボックスが\nいっぱいです!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C20) > 0x19
	.error "gText_Rom_5C9C20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C20) < 0x19
	.space 0x19 - (. - gText_Rom_5C9C20)
	.endif
	.globl gUnknown_85C9C39
gUnknown_85C9C39: @ 0x085C9C39

	@ src/strings.c:261 gText_MailMessageWillBeLost
	.globl gText_Rom_5C9C39
gText_Rom_5C9C39: @ 0x085C9C39
	.string "メールを とると メッセージが\nきえてしまいますが よろしいですか?$"
	.if (. - gText_Rom_5C9C39) > 0x23
	.error "gText_Rom_5C9C39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C39) < 0x23
	.space 0x23 - (. - gText_Rom_5C9C39)
	.endif
	.globl gUnknown_85C9C5C
gUnknown_85C9C5C: @ 0x085C9C5C

	@ src/strings.c:262 gText_RemoveMailBeforeItem
	.globl gText_Rom_5C9C5C
gText_Rom_5C9C5C: @ 0x085C9C5C
	.string "メールを はずさないと\nどうぐは もてません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C5C) > 0x1a
	.error "gText_Rom_5C9C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C5C) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9C5C)
	.endif
	.globl gUnknown_85C9C76
gUnknown_85C9C76: @ 0x085C9C76

	@ src/strings.c:263 gText_PkmnWasGivenItem
	.globl gText_Rom_5C9C76
gText_Rom_5C9C76: @ 0x085C9C76
	.string "{STR_VAR_1}に\n{STR_VAR_2}を もたせた!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C76) > 0x10
	.error "gText_Rom_5C9C76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C76) < 0x10
	.space 0x10 - (. - gText_Rom_5C9C76)
	.endif
	.globl gUnknown_85C9C86
gUnknown_85C9C86: @ 0x085C9C86

	@ src/strings.c:264 gText_PkmnAlreadyHoldingItemSwitch
	.globl gText_Rom_5C9C86
gText_Rom_5C9C86: @ 0x085C9C86
	.string "{STR_VAR_1}は すでに\n{STR_VAR_2}を もっています\pもっている どうぐを\nとりかえますか?$"
	.if (. - gText_Rom_5C9C86) > 0x27
	.error "gText_Rom_5C9C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C86) < 0x27
	.space 0x27 - (. - gText_Rom_5C9C86)
	.endif
	.globl gUnknown_85C9CAD
gUnknown_85C9CAD: @ 0x085C9CAD

	@ src/strings.c:265 gText_PkmnNotHolding
	.globl gText_Rom_5C9CAD
gText_Rom_5C9CAD: @ 0x085C9CAD
	.string "{STR_VAR_1}は なにも\nどうぐを もって いません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9CAD) > 0x19
	.error "gText_Rom_5C9CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9CAD) < 0x19
	.space 0x19 - (. - gText_Rom_5C9CAD)
	.endif
	.globl gUnknown_85C9CC6
gUnknown_85C9CC6: @ 0x085C9CC6

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

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5CA36F
gText_Rom_5CA36F: @ 0x085CA36F
	.string "こうげき$"
	.if (. - gText_Rom_5CA36F) > 0x5
	.error "gText_Rom_5CA36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA36F) < 0x5
	.space 0x5 - (. - gText_Rom_5CA36F)
	.endif
	.globl gUnknown_85CA374
gUnknown_85CA374: @ 0x085CA374

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5CA374
gText_Rom_5CA374: @ 0x085CA374
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5CA374) > 0x5
	.error "gText_Rom_5CA374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA374) < 0x5
	.space 0x5 - (. - gText_Rom_5CA374)
	.endif
	.globl gUnknown_85CA379
gUnknown_85CA379: @ 0x085CA379

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5CA379
gText_Rom_5CA379: @ 0x085CA379
	.string "とくこう$"
	.if (. - gText_Rom_5CA379) > 0x5
	.error "gText_Rom_5CA379 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA379) < 0x5
	.space 0x5 - (. - gText_Rom_5CA379)
	.endif
	.globl gUnknown_85CA37E
gUnknown_85CA37E: @ 0x085CA37E

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5CA37E
gText_Rom_5CA37E: @ 0x085CA37E
	.string "とくぼう$"
	.if (. - gText_Rom_5CA37E) > 0x5
	.error "gText_Rom_5CA37E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA37E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA37E)
	.endif
	.globl gUnknown_85CA383
gUnknown_85CA383: @ 0x085CA383

	@ src/battle_debug.c:339 battle_debug_line_339 (+4 aliases)
	.globl gText_Rom_5CA383
gText_Rom_5CA383: @ 0x085CA383
	.string "すばやさ$"
	.if (. - gText_Rom_5CA383) > 0x5
	.error "gText_Rom_5CA383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA383) < 0x5
	.space 0x5 - (. - gText_Rom_5CA383)
	.endif
	.globl gUnknown_85CA388
gUnknown_85CA388: @ 0x085CA388
	.incbin "baserom.gba", 0x5ca388, 0x3
	.globl gUnknown_85CA38B
gUnknown_85CA38B: @ 0x085CA38B
	.incbin "baserom.gba", 0x5ca38b, 0x3
	.globl gUnknown_85CA38E
gUnknown_85CA38E: @ 0x085CA38E

	@ src/strings.c:375 gText_OTSlash
	.globl gText_Rom_5CA38E
gText_Rom_5CA38E: @ 0x085CA38E
	.string "おや/$"
	.if (. - gText_Rom_5CA38E) > 0x4
	.error "gText_Rom_5CA38E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA38E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA38E)
	.endif
	.globl gUnknown_85CA392
gUnknown_85CA392: @ 0x085CA392

	@ src/strings.c:376 gText_RentalPkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA392
gText_Rom_5CA392: @ 0x085CA392
	.string "レンタルポケモン$"
	.if (. - gText_Rom_5CA392) != 0x9
	.error "gText_Rom_5CA392 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA396
	.set gText_Rom_5CA396, gText_Rom_5CA392 + 0x4
	.globl gUnknown_85CA39B
gUnknown_85CA39B: @ 0x085CA39B

	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_Rom_5CA39B
gText_Rom_5CA39B: @ 0x085CA39B
	.string "タイプ/$"
	.if (. - gText_Rom_5CA39B) > 0x5
	.error "gText_Rom_5CA39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA39B) < 0x5
	.space 0x5 - (. - gText_Rom_5CA39B)
	.endif
	.globl gUnknown_85CA3A0
gUnknown_85CA3A0: @ 0x085CA3A0

	@ src/battle_controller_player.c:1843 battle_controller_player_line_1843 (+1 aliases)
	.globl gText_Rom_5CA3A0
gText_Rom_5CA3A0: @ 0x085CA3A0
	.string "いりょく$"
	.if (. - gText_Rom_5CA3A0) > 0x5
	.error "gText_Rom_5CA3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3A0) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3A0)
	.endif
	.globl gUnknown_85CA3A5
gUnknown_85CA3A5: @ 0x085CA3A5

	@ src/battle_controller_player.c:1844 battle_controller_player_line_1844 (+1 aliases)
	.globl gText_Rom_5CA3A5
gText_Rom_5CA3A5: @ 0x085CA3A5
	.string "めいちゅう$"
	.if (. - gText_Rom_5CA3A5) > 0x6
	.error "gText_Rom_5CA3A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3A5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA3A5)
	.endif
	.globl gUnknown_85CA3AB
gUnknown_85CA3AB: @ 0x085CA3AB

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_5CA3AB
gText_Rom_5CA3AB: @ 0x085CA3AB
	.string "アピール$"
	.if (. - gText_Rom_5CA3AB) > 0x5
	.error "gText_Rom_5CA3AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3AB) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3AB)
	.endif
	.globl gUnknown_85CA3B0
gUnknown_85CA3B0: @ 0x085CA3B0

	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_Rom_5CA3B0
gText_Rom_5CA3B0: @ 0x085CA3B0
	.string "ぼうがい$"
	.if (. - gText_Rom_5CA3B0) > 0x5
	.error "gText_Rom_5CA3B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3B0) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3B0)
	.endif
	.globl gUnknown_85CA3B5
gUnknown_85CA3B5: @ 0x085CA3B5

	@ src/battle_debug.c:321 battle_debug_line_321 (+2 aliases)
	.globl gText_Rom_5CA3B5
gText_Rom_5CA3B5: @ 0x085CA3B5
	.string "じょうたい$"
	.if (. - gText_Rom_5CA3B5) > 0x6
	.error "gText_Rom_5CA3B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3B5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA3B5)
	.endif
	.globl gUnknown_85CA3BB
gUnknown_85CA3BB: @ 0x085CA3BB

	@ src/strings.c:383 gText_ExpPoints
	.globl gText_Rom_5CA3BB
gText_Rom_5CA3BB: @ 0x085CA3BB
	.string "げんざいのけいけんち$"
	.if (. - gText_Rom_5CA3BB) > 0xb
	.error "gText_Rom_5CA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3BB) < 0xb
	.space 0xb - (. - gText_Rom_5CA3BB)
	.endif
	.globl gUnknown_85CA3C6
gUnknown_85CA3C6: @ 0x085CA3C6

	@ src/strings.c:384 gText_NextLv
	.globl gText_Rom_5CA3C6
gText_Rom_5CA3C6: @ 0x085CA3C6
	.string "レベルアップまで$"
	.if (. - gText_Rom_5CA3C6) > 0x9
	.error "gText_Rom_5CA3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3C6) < 0x9
	.space 0x9 - (. - gText_Rom_5CA3C6)
	.endif
	.globl gUnknown_85CA3CF
gUnknown_85CA3CF: @ 0x085CA3CF

	@ asm/pokemon_summary_screen.s:7441 PrintRibbonCount
	.globl gText_Rom_5CA3CF
gText_Rom_5CA3CF: @ 0x085CA3CF
	.string "げんざい　{0xFD}{0x02}こ$"
	.if (. - gText_Rom_5CA3CF) > 0x9
	.error "gText_Rom_5CA3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3CF) < 0x9
	.space 0x9 - (. - gText_Rom_5CA3CF)
	.endif
	.globl gUnknown_85CA3D8
gUnknown_85CA3D8: @ 0x085CA3D8
	.incbin "baserom.gba", 0x5ca3d8, 0x1
	.globl gUnknown_85CA3D9
gUnknown_85CA3D9: @ 0x085CA3D9
	.incbin "baserom.gba", 0x5ca3d9, 0x1

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_5CA3DA
gText_Rom_5CA3DA: @ 0x085CA3DA
	.string "イベント$"
	.if (. - gText_Rom_5CA3DA) > 0x5
	.error "gText_Rom_5CA3DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DA) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DA)
	.endif
	.globl gUnknown_85CA3DF
gUnknown_85CA3DF: @ 0x085CA3DF

	@ src/data/party_menu.h:807 party_menu_line_807 (+1 aliases)
	.globl gText_Rom_5CA3DF
gText_Rom_5CA3DF: @ 0x085CA3DF
	.string "いれかえ$"
	.if (. - gText_Rom_5CA3DF) > 0x5
	.error "gText_Rom_5CA3DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DF) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DF)
	.endif
	.globl gUnknown_85CA3E4
gUnknown_85CA3E4: @ 0x085CA3E4

	@ src/strings.c:389 gText_PkmnInfo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3E4
gText_Rom_5CA3E4: @ 0x085CA3E4
	.string "ポケモンじょうほう$"
	.if (. - gText_Rom_5CA3E4) != 0xa
	.error "gText_Rom_5CA3E4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA3E8
	.set gText_Rom_5CA3E8, gText_Rom_5CA3E4 + 0x4
	.globl gUnknown_85CA3EE
gUnknown_85CA3EE: @ 0x085CA3EE

	@ src/strings.c:390 gText_PkmnSkills
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3EE
gText_Rom_5CA3EE: @ 0x085CA3EE
	.string "ポケモンのうりょく$"
	.if (. - gText_Rom_5CA3EE) != 0xa
	.error "gText_Rom_5CA3EE must retain its original byte length"
	.endif
	.globl gText_Rom_5CA3F2
	.set gText_Rom_5CA3F2, gText_Rom_5CA3EE + 0x4
	.globl gUnknown_85CA3F8
gUnknown_85CA3F8: @ 0x085CA3F8

	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5CA3F8
gText_Rom_5CA3F8: @ 0x085CA3F8
	.string "たたかうわざ$"
	.if (. - gText_Rom_5CA3F8) > 0x7
	.error "gText_Rom_5CA3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3F8) < 0x7
	.space 0x7 - (. - gText_Rom_5CA3F8)
	.endif
	.globl gUnknown_85CA3FF
gUnknown_85CA3FF: @ 0x085CA3FF

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5CA3FF
gText_Rom_5CA3FF: @ 0x085CA3FF
	.string "コンテストわざ$"
	.if (. - gText_Rom_5CA3FF) > 0x8
	.error "gText_Rom_5CA3FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3FF) < 0x8
	.space 0x8 - (. - gText_Rom_5CA3FF)
	.endif
	.globl gUnknown_85CA407
gUnknown_85CA407: @ 0x085CA407

	@ src/strings.c:393 gText_Info
	.globl gText_Rom_5CA407
gText_Rom_5CA407: @ 0x085CA407
	.string "きりかえ$"
	.if (. - gText_Rom_5CA407) > 0x5
	.error "gText_Rom_5CA407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA407) < 0x5
	.space 0x5 - (. - gText_Rom_5CA407)
	.endif
	.globl gUnknown_85CA40C
gUnknown_85CA40C: @ 0x085CA40C

	@ src/strings.c:394 gText_EggWillTakeALongTime
	.globl gText_Rom_5CA40C
gText_Rom_5CA40C: @ 0x085CA40C
	.string "この タマゴは\nうまれるまで かなり かかりそう$"
	.if (. - gText_Rom_5CA40C) > 0x19
	.error "gText_Rom_5CA40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA40C) < 0x19
	.space 0x19 - (. - gText_Rom_5CA40C)
	.endif
	.globl gUnknown_85CA425
gUnknown_85CA425: @ 0x085CA425

	@ src/strings.c:395 gText_EggWillTakeSomeTime
	.globl gText_Rom_5CA425
gText_Rom_5CA425: @ 0x085CA425
	.string "なにが うまれて くるのかな?\nうまれる まで まだまだ かかりそう$"
	.if (. - gText_Rom_5CA425) > 0x23
	.error "gText_Rom_5CA425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA425) < 0x23
	.space 0x23 - (. - gText_Rom_5CA425)
	.endif
	.globl gUnknown_85CA448
gUnknown_85CA448: @ 0x085CA448

	@ src/strings.c:396 gText_EggWillHatchSoon
	.globl gText_Rom_5CA448
gText_Rom_5CA448: @ 0x085CA448
	.string "ときどき うごいて いるようだ\nうまれる まで もうちょっと かな?$"
	.if (. - gText_Rom_5CA448) > 0x23
	.error "gText_Rom_5CA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA448) < 0x23
	.space 0x23 - (. - gText_Rom_5CA448)
	.endif
	.globl gUnknown_85CA46B
gUnknown_85CA46B: @ 0x085CA46B

	@ src/strings.c:397 gText_EggAboutToHatch
	.globl gText_Rom_5CA46B
gText_Rom_5CA46B: @ 0x085CA46B
	.string "なかから おとが きこえてくる\nもうすぐ うまれそう!$"
	.if (. - gText_Rom_5CA46B) > 0x1c
	.error "gText_Rom_5CA46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA46B) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA46B)
	.endif
	.globl gUnknown_85CA487
gUnknown_85CA487: @ 0x085CA487

	@ src/strings.c:398 gText_HMMovesCantBeForgotten2
	.globl gText_Rom_5CA487
gText_Rom_5CA487: @ 0x085CA487
	.string "それは たいせつなわざです\nわすれさせることは できません!$"
	.if (. - gText_Rom_5CA487) > 0x1f
	.error "gText_Rom_5CA487 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA487) < 0x1f
	.space 0x1f - (. - gText_Rom_5CA487)
	.endif
	.globl gUnknown_85CA4A6
gUnknown_85CA4A6: @ 0x085CA4A6

	@ src/strings.c:399 gText_XNatureMetAtYZ
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA4A6
gText_Rom_5CA4A6: @ 0x085CA4A6
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で であった$"
	.if (. - gText_Rom_5CA4A6) != 0x26
	.error "gText_Rom_5CA4A6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA4C8
	.set gText_Rom_5CA4C8, gText_Rom_5CA4A6 + 0x22
	.globl gUnknown_85CA4CC
gUnknown_85CA4CC: @ 0x085CA4CC

	@ src/strings.c:400 gText_XNatureHatchedAtYZ
	.globl gText_Rom_5CA4CC
gText_Rom_5CA4CC: @ 0x085CA4CC
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\n{DYNAMIC 0}{DYNAMIC 4}{DYNAMIC 1}で かえった$"
	.if (. - gText_Rom_5CA4CC) > 0x26
	.error "gText_Rom_5CA4CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA4CC) < 0x26
	.space 0x26 - (. - gText_Rom_5CA4CC)
	.endif
	.globl gUnknown_85CA4F2
gUnknown_85CA4F2: @ 0x085CA4F2
	.incbin "baserom.gba", 0x5ca4f2, 0x1c

	@ src/data/easy_chat/easy_chat_group_conditions.h:10 easy_chat_group_conditions_line_10
	.globl gText_Rom_5CA50E
gText_Rom_5CA50E: @ 0x085CA50E
	.string "あった$"
	.if (. - gText_Rom_5CA50E) > 0x4
	.error "gText_Rom_5CA50E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA50E) < 0x4
	.space 0x4 - (. - gText_Rom_5CA50E)
	.endif
	.globl gUnknown_85CA512
gUnknown_85CA512: @ 0x085CA512

	@ src/strings.c:402 gText_XNatureFatefulEncounter
	.globl gText_Rom_5CA512
gText_Rom_5CA512: @ 0x085CA512
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nうんめいてきな であいを した$"
	.if (. - gText_Rom_5CA512) > 0x29
	.error "gText_Rom_5CA512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA512) < 0x29
	.space 0x29 - (. - gText_Rom_5CA512)
	.endif
	.globl gUnknown_85CA53B
gUnknown_85CA53B: @ 0x085CA53B
	.incbin "baserom.gba", 0x5ca53b, 0x28
	.globl gUnknown_85CA563
gUnknown_85CA563: @ 0x085CA563

	@ src/strings.c:404 gText_XNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA563
gText_Rom_5CA563: @ 0x085CA563
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく$"
	.if (. - gText_Rom_5CA563) != 0xd
	.error "gText_Rom_5CA563 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA56B
	.set gText_Rom_5CA56B, gText_Rom_5CA563 + 0x8
	.globl gText_Rom_5CA56C
	.set gText_Rom_5CA56C, gText_Rom_5CA563 + 0x9
	.globl gUnknown_85CA570
gUnknown_85CA570: @ 0x085CA570

	@ src/strings.c:405 gText_XNatureMetSomewhereAt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA570
gText_Rom_5CA570: @ 0x085CA570
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで であった$"
	.if (. - gText_Rom_5CA570) != 0x23
	.error "gText_Rom_5CA570 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA58F
	.set gText_Rom_5CA58F, gText_Rom_5CA570 + 0x1f
	.globl gUnknown_85CA593
gUnknown_85CA593: @ 0x085CA593

	@ src/strings.c:406 gText_XNatureHatchedSomewhereAt
	.globl gText_Rom_5CA593
gText_Rom_5CA593: @ 0x085CA593
	.string "{DYNAMIC 0}{DYNAMIC 2}{DYNAMIC 1}{DYNAMIC 5}せいかく {LV_2}{DYNAMIC 0}{DYNAMIC 3}{DYNAMIC 1}のとき\nどこかで かえった$"
	.if (. - gText_Rom_5CA593) > 0x23
	.error "gText_Rom_5CA593 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA593) < 0x23
	.space 0x23 - (. - gText_Rom_5CA593)
	.endif
	.globl gUnknown_85CA5B6
gUnknown_85CA5B6: @ 0x085CA5B6

	@ src/strings.c:407 gText_OddEggFoundByCouple
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5B6
gText_Rom_5CA5B6: @ 0x085CA5B6
	.string "そだてや ふうふ から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5B6) != 0x1f
	.error "gText_Rom_5CA5B6 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA5D1
	.set gText_Rom_5CA5D1, gText_Rom_5CA5B6 + 0x1b
	.globl gUnknown_85CA5D5
gUnknown_85CA5D5: @ 0x085CA5D5

	@ src/strings.c:408 gText_PeculiarEggNicePlace
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5D5
gText_Rom_5CA5D5: @ 0x085CA5D5
	.string "ステキな ばしょで てにいれた\nふしぎな ふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5D5) != 0x23
	.error "gText_Rom_5CA5D5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA5F4
	.set gText_Rom_5CA5F4, gText_Rom_5CA5D5 + 0x1f
	.globl gUnknown_85CA5F8
gUnknown_85CA5F8: @ 0x085CA5F8

	@ src/strings.c:409 gText_PeculiarEggTrade
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5F8
gText_Rom_5CA5F8: @ 0x085CA5F8
	.string "つうしんこうかんで てにいれた\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5F8) != 0x1e
	.error "gText_Rom_5CA5F8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA612
	.set gText_Rom_5CA612, gText_Rom_5CA5F8 + 0x1a
	.globl gUnknown_85CA616
gUnknown_85CA616: @ 0x085CA616

	@ src/strings.c:410 gText_EggFromHotSprings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA616
gText_Rom_5CA616: @ 0x085CA616
	.string "おんせんばあさん から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA616) != 0x1f
	.error "gText_Rom_5CA616 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA631
	.set gText_Rom_5CA631, gText_Rom_5CA616 + 0x1b
	.globl gUnknown_85CA635
gUnknown_85CA635: @ 0x085CA635

	@ src/strings.c:411 gText_EggFromTraveler
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA635
gText_Rom_5CA635: @ 0x085CA635
	.string "たびの おじさん から もらった\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA635) != 0x1f
	.error "gText_Rom_5CA635 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA650
	.set gText_Rom_5CA650, gText_Rom_5CA635 + 0x1b
	.globl gUnknown_85CA654
gUnknown_85CA654: @ 0x085CA654

	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_5CA654
gText_Rom_5CA654: @ 0x085CA654
	.string " きち$"
	.if (. - gText_Rom_5CA654) > 0x4
	.error "gText_Rom_5CA654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA654) < 0x4
	.space 0x4 - (. - gText_Rom_5CA654)
	.endif
	.globl gUnknown_85CA658
gUnknown_85CA658: @ 0x085CA658

	@ src/strings.c:413 gText_OkayToDeleteFromRegistry
	.globl gText_Rom_5CA658
gText_Rom_5CA658: @ 0x085CA658
	.string "{STR_VAR_1} の とうろくを\nかいじょ しても よろしい ですか?$"
	.if (. - gText_Rom_5CA658) > 0x1e
	.error "gText_Rom_5CA658 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA658) < 0x1e
	.space 0x1e - (. - gText_Rom_5CA658)
	.endif
	.globl gUnknown_85CA676
gUnknown_85CA676: @ 0x085CA676

	@ src/strings.c:414 gText_RegisteredDataDeleted
	.globl gText_Rom_5CA676
gText_Rom_5CA676: @ 0x085CA676
	.string "とうろくを かいじょ しました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA676) > 0x12
	.error "gText_Rom_5CA676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA676) < 0x12
	.space 0x12 - (. - gText_Rom_5CA676)
	.endif
	.globl gUnknown_85CA688
gUnknown_85CA688: @ 0x085CA688

	@ src/strings.c:415 gText_NoRegistry
	.globl gText_Rom_5CA688
gText_Rom_5CA688: @ 0x085CA688
	.string "とうろく リストは ありません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA688) > 0x12
	.error "gText_Rom_5CA688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA688) < 0x12
	.space 0x12 - (. - gText_Rom_5CA688)
	.endif

	@ src/strings.c:416 gText_DelRegist
	.globl gText_Rom_5CA69A
gText_Rom_5CA69A: @ 0x085CA69A
	.string "とうろく かいじょ$"
	.if (. - gText_Rom_5CA69A) > 0xa
	.error "gText_Rom_5CA69A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA69A) < 0xa
	.space 0xa - (. - gText_Rom_5CA69A)
	.endif
	.globl gUnknown_85CA6A4
gUnknown_85CA6A4: @ 0x085CA6A4

	@ src/strings.c:417 gText_Var3Var1SlashVar2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6A4
gText_Rom_5CA6A4: @ 0x085CA6A4
	.string "{STR_VAR_3}{STR_VAR_1}/{STR_VAR_2}$"
	.if (. - gText_Rom_5CA6A4) != 0x8
	.error "gText_Rom_5CA6A4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA6A6
	.set gText_Rom_5CA6A6, gText_Rom_5CA6A4 + 0x2

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA6AC
gText_Rom_5CA6AC: @ 0x085CA6AC
	.string "グッズを　おく$"
	.if (. - gText_Rom_5CA6AC) > 0x8
	.error "gText_Rom_5CA6AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6AC) < 0x8
	.space 0x8 - (. - gText_Rom_5CA6AC)
	.endif

	@ src/strings.c:419 gText_PutAway
	.globl gText_Rom_5CA6B4
gText_Rom_5CA6B4: @ 0x085CA6B4
	.string "グッズを もどす$"
	.if (. - gText_Rom_5CA6B4) > 0x9
	.error "gText_Rom_5CA6B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6B4) < 0x9
	.space 0x9 - (. - gText_Rom_5CA6B4)
	.endif

	@ src/strings.c:420 gText_Toss2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA6BD
gText_Rom_5CA6BD: @ 0x085CA6BD
	.string "グッズを すてる$"
	.if (. - gText_Rom_5CA6BD) != 0x9
	.error "gText_Rom_5CA6BD must retain its original byte length"
	.endif
	.globl gText_Rom_5CA6C2
	.set gText_Rom_5CA6C2, gText_Rom_5CA6BD + 0x5
	.globl gUnknown_85CA6C6
gUnknown_85CA6C6: @ 0x085CA6C6

	@ src/strings.c:421 gText_Color161Shadow161
	.globl gText_Rom_5CA6C6
gText_Rom_5CA6C6: @ 0x085CA6C6
	.string "{COLOR 161}{SHADOW 161}$"
	.if (. - gText_Rom_5CA6C6) > 0x7
	.error "gText_Rom_5CA6C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6C6) < 0x7
	.space 0x7 - (. - gText_Rom_5CA6C6)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6CD
gText_Rom_5CA6CD: @ 0x085CA6CD
	.string "えらんだ　グッズを　へやに　おきます！$"
	.if (. - gText_Rom_5CA6CD) > 0x14
	.error "gText_Rom_5CA6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6CD) < 0x14
	.space 0x14 - (. - gText_Rom_5CA6CD)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6E1
gText_Rom_5CA6E1: @ 0x085CA6E1
	.string "えらんだ　グッズを　パソコンに　もどします！$"
	.if (. - gText_Rom_5CA6E1) > 0x17
	.error "gText_Rom_5CA6E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6E1) < 0x17
	.space 0x17 - (. - gText_Rom_5CA6E1)
	.endif

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6F8
gText_Rom_5CA6F8: @ 0x085CA6F8
	.string "いらなくなった　グッズを　すてます！$"
	.if (. - gText_Rom_5CA6F8) > 0x13
	.error "gText_Rom_5CA6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6F8) < 0x13
	.space 0x13 - (. - gText_Rom_5CA6F8)
	.endif
	.globl gUnknown_85CA70B
gUnknown_85CA70B: @ 0x085CA70B

	@ src/strings.c:425 gText_NoDecorations
	.globl gText_Rom_5CA70B
gText_Rom_5CA70B: @ 0x085CA70B
	.string "グッズは ありません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA70B) > 0xe
	.error "gText_Rom_5CA70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA70B) < 0xe
	.space 0xe - (. - gText_Rom_5CA70B)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA719
gText_Rom_5CA719: @ 0x085CA719
	.string "つくえ$"
	.if (. - gText_Rom_5CA719) > 0x4
	.error "gText_Rom_5CA719 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA719) < 0x4
	.space 0x4 - (. - gText_Rom_5CA719)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA71D
gText_Rom_5CA71D: @ 0x085CA71D
	.string "いす$"
	.if (. - gText_Rom_5CA71D) > 0x3
	.error "gText_Rom_5CA71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA71D) < 0x3
	.space 0x3 - (. - gText_Rom_5CA71D)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem
	.globl gText_Rom_5CA720
gText_Rom_5CA720: @ 0x085CA720
	.string "はちうえ$"
	.if (. - gText_Rom_5CA720) > 0x5
	.error "gText_Rom_5CA720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA720) < 0x5
	.space 0x5 - (. - gText_Rom_5CA720)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA725
gText_Rom_5CA725: @ 0x085CA725
	.string "おきもの$"
	.if (. - gText_Rom_5CA725) > 0x5
	.error "gText_Rom_5CA725 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA725) < 0x5
	.space 0x5 - (. - gText_Rom_5CA725)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72A
gText_Rom_5CA72A: @ 0x085CA72A
	.string "マット$"
	.if (. - gText_Rom_5CA72A) > 0x4
	.error "gText_Rom_5CA72A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72A) < 0x4
	.space 0x4 - (. - gText_Rom_5CA72A)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA72E
gText_Rom_5CA72E: @ 0x085CA72E
	.string "ポスター$"
	.if (. - gText_Rom_5CA72E) > 0x5
	.error "gText_Rom_5CA72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA72E) < 0x5
	.space 0x5 - (. - gText_Rom_5CA72E)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+2 aliases)
	.globl gText_Rom_5CA733
gText_Rom_5CA733: @ 0x085CA733
	.string "ぬいぐるみ$"
	.if (. - gText_Rom_5CA733) > 0x6
	.error "gText_Rom_5CA733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA733) < 0x6
	.space 0x6 - (. - gText_Rom_5CA733)
	.endif

	@ asm/decoration.s:769 PrintDecorationCategoryMenuItem (+1 aliases)
	.globl gText_Rom_5CA739
gText_Rom_5CA739: @ 0x085CA739
	.string "クッション$"
	.if (. - gText_Rom_5CA739) > 0x6
	.error "gText_Rom_5CA739 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA739) < 0x6
	.space 0x6 - (. - gText_Rom_5CA739)
	.endif
	.globl gUnknown_85CA73F
gUnknown_85CA73F: @ 0x085CA73F

	@ asm/fldeff_misc.s:2181 GetShieldToyTVDecorationInfo
	.globl gText_Rom_5CA73F
gText_Rom_5CA73F: @ 0x085CA73F
	.string "きん$"
	.if (. - gText_Rom_5CA73F) > 0x3
	.error "gText_Rom_5CA73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA73F) < 0x3
	.space 0x3 - (. - gText_Rom_5CA73F)
	.endif
	.globl gUnknown_85CA742
gUnknown_85CA742: @ 0x085CA742

	@ src/strings.c:435 gText_Silver
	.globl gText_Rom_5CA742
gText_Rom_5CA742: @ 0x085CA742
	.string "ぎん$"
	.if (. - gText_Rom_5CA742) > 0x3
	.error "gText_Rom_5CA742 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA742) < 0x3
	.space 0x3 - (. - gText_Rom_5CA742)
	.endif
	.globl gUnknown_85CA745
gUnknown_85CA745: @ 0x085CA745

	@ src/strings.c:436 gText_PlaceItHere
	.globl gText_Rom_5CA745
gText_Rom_5CA745: @ 0x085CA745
	.string "ここに おきますか?$"
	.if (. - gText_Rom_5CA745) > 0xb
	.error "gText_Rom_5CA745 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA745) < 0xb
	.space 0xb - (. - gText_Rom_5CA745)
	.endif
	.globl gUnknown_85CA750
gUnknown_85CA750: @ 0x085CA750

	@ src/strings.c:437 gText_CantBePlacedHere
	.globl gText_Rom_5CA750
gText_Rom_5CA750: @ 0x085CA750
	.string "ここには おけません!$"
	.if (. - gText_Rom_5CA750) > 0xc
	.error "gText_Rom_5CA750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA750) < 0xc
	.space 0xc - (. - gText_Rom_5CA750)
	.endif
	.globl gUnknown_85CA75C
gUnknown_85CA75C: @ 0x085CA75C

	@ src/strings.c:438 gText_CancelDecorating
	.globl gText_Rom_5CA75C
gText_Rom_5CA75C: @ 0x085CA75C
	.string "おくのを やめますか?$"
	.if (. - gText_Rom_5CA75C) > 0xc
	.error "gText_Rom_5CA75C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA75C) < 0xc
	.space 0xc - (. - gText_Rom_5CA75C)
	.endif
	.globl gUnknown_85CA768
gUnknown_85CA768: @ 0x085CA768

	@ src/strings.c:439 gText_InUseAlready
	.globl gText_Rom_5CA768
gText_Rom_5CA768: @ 0x085CA768
	.string "すでに おかれて います!$"
	.if (. - gText_Rom_5CA768) > 0xe
	.error "gText_Rom_5CA768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA768) < 0xe
	.space 0xe - (. - gText_Rom_5CA768)
	.endif
	.globl gUnknown_85CA776
gUnknown_85CA776: @ 0x085CA776

	@ src/strings.c:440 gText_NoMoreDecorations
	.globl gText_Rom_5CA776
gText_Rom_5CA776: @ 0x085CA776
	.string "これいじょう おけません\nひみつきちに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA776) > 0x23
	.error "gText_Rom_5CA776 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA776) < 0x23
	.space 0x23 - (. - gText_Rom_5CA776)
	.endif
	.globl gUnknown_85CA799
gUnknown_85CA799: @ 0x085CA799

	@ src/strings.c:441 gText_NoMoreDecorations2
	.globl gText_Rom_5CA799
gText_Rom_5CA799: @ 0x085CA799
	.string "これいじょう おけません\nへやに おけるのは {STR_VAR_1}こ までです$"
	.if (. - gText_Rom_5CA799) > 0x20
	.error "gText_Rom_5CA799 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA799) < 0x20
	.space 0x20 - (. - gText_Rom_5CA799)
	.endif

	@ src/strings.c:442 gText_MustBePlacedOnDesk
	.globl gText_Rom_5CA7B9
gText_Rom_5CA7B9: @ 0x085CA7B9
	.string "ここには おけません!\nつくえの うえなどに おいてください!$"
	.if (. - gText_Rom_5CA7B9) > 0x20
	.error "gText_Rom_5CA7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7B9) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7B9)
	.endif
	.globl gUnknown_85CA7D9
gUnknown_85CA7D9: @ 0x085CA7D9

	@ src/strings.c:443 gText_CantPlaceInRoom
	.globl gText_Rom_5CA7D9
gText_Rom_5CA7D9: @ 0x085CA7D9
	.string "この グッズは\nじぶんの へやには おけません!$"
	.if (. - gText_Rom_5CA7D9) > 0x19
	.error "gText_Rom_5CA7D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7D9) < 0x19
	.space 0x19 - (. - gText_Rom_5CA7D9)
	.endif
	.globl gUnknown_85CA7F2
gUnknown_85CA7F2: @ 0x085CA7F2

	@ src/strings.c:444 gText_CantThrowAwayInUse
	.globl gText_Rom_5CA7F2
gText_Rom_5CA7F2: @ 0x085CA7F2
	.string "このグッズは おかれて いるので\nすてる ことが できません!$"
	.if (. - gText_Rom_5CA7F2) > 0x20
	.error "gText_Rom_5CA7F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA7F2) < 0x20
	.space 0x20 - (. - gText_Rom_5CA7F2)
	.endif
	.globl gUnknown_85CA812
gUnknown_85CA812: @ 0x085CA812

	@ src/strings.c:445 gText_DecorationWillBeDiscarded
	.globl gText_Rom_5CA812
gText_Rom_5CA812: @ 0x085CA812
	.string "{STR_VAR_1} は なくなりますが\nよろしい ですか?$"
	.if (. - gText_Rom_5CA812) > 0x17
	.error "gText_Rom_5CA812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA812) < 0x17
	.space 0x17 - (. - gText_Rom_5CA812)
	.endif
	.globl gUnknown_85CA829
gUnknown_85CA829: @ 0x085CA829

	@ src/strings.c:446 gText_DecorationThrownAway
	.globl gText_Rom_5CA829
gText_Rom_5CA829: @ 0x085CA829
	.string "グッズを すてました!$"
	.if (. - gText_Rom_5CA829) > 0xc
	.error "gText_Rom_5CA829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA829) < 0xc
	.space 0xc - (. - gText_Rom_5CA829)
	.endif
	.globl gUnknown_85CA835
gUnknown_85CA835: @ 0x085CA835

	@ src/strings.c:447 gText_StopPuttingAwayDecorations
	.globl gText_Rom_5CA835
gText_Rom_5CA835: @ 0x085CA835
	.string "もどすのを やめますか?$"
	.if (. - gText_Rom_5CA835) > 0xd
	.error "gText_Rom_5CA835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA835) < 0xd
	.space 0xd - (. - gText_Rom_5CA835)
	.endif
	.globl gUnknown_85CA842
gUnknown_85CA842: @ 0x085CA842

	@ src/strings.c:448 gText_NoDecorationHere
	.globl gText_Rom_5CA842
gText_Rom_5CA842: @ 0x085CA842
	.string "ここに グッズは ありません!$"
	.if (. - gText_Rom_5CA842) > 0x10
	.error "gText_Rom_5CA842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA842) < 0x10
	.space 0x10 - (. - gText_Rom_5CA842)
	.endif
	.globl gUnknown_85CA852
gUnknown_85CA852: @ 0x085CA852

	@ src/strings.c:449 gText_ReturnDecorationToPC
	.globl gText_Rom_5CA852
gText_Rom_5CA852: @ 0x085CA852
	.string "このグッズを パソコンに もどしますか?$"
	.if (. - gText_Rom_5CA852) > 0x15
	.error "gText_Rom_5CA852 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA852) < 0x15
	.space 0x15 - (. - gText_Rom_5CA852)
	.endif
	.globl gUnknown_85CA867
gUnknown_85CA867: @ 0x085CA867

	@ src/strings.c:450 gText_DecorationReturnedToPC
	.globl gText_Rom_5CA867
gText_Rom_5CA867: @ 0x085CA867
	.string "グッズを パソコンに もどしました!$"
	.if (. - gText_Rom_5CA867) > 0x13
	.error "gText_Rom_5CA867 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA867) < 0x13
	.space 0x13 - (. - gText_Rom_5CA867)
	.endif
	.globl gUnknown_85CA87A
gUnknown_85CA87A: @ 0x085CA87A

	@ src/strings.c:451 gText_NoDecorationsInUse
	.globl gText_Rom_5CA87A
gText_Rom_5CA87A: @ 0x085CA87A
	.string "グッズは おかれて いません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA87A) > 0x12
	.error "gText_Rom_5CA87A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA87A) < 0x12
	.space 0x12 - (. - gText_Rom_5CA87A)
	.endif

	@ src/data/trainers.h:2702 trainers_line_2702 (+1 aliases)
	.globl gText_Rom_5CA88C
gText_Rom_5CA88C: @ 0x085CA88C
	.string "ヒロミ$"
	.if (. - gText_Rom_5CA88C) > 0x4
	.error "gText_Rom_5CA88C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA88C) < 0x4
	.space 0x4 - (. - gText_Rom_5CA88C)
	.endif

	@ src/data/trainers.h:38007 trainers_line_38007
	.globl gText_Rom_5CA890
gText_Rom_5CA890: @ 0x085CA890
	.string "ユウリ$"
	.if (. - gText_Rom_5CA890) > 0x4
	.error "gText_Rom_5CA890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA890) < 0x4
	.space 0x4 - (. - gText_Rom_5CA890)
	.endif

	@ src/data/trainers.h:3442 trainers_line_3442
	.globl gText_Rom_5CA894
gText_Rom_5CA894: @ 0x085CA894
	.string "ヨシオ$"
	.if (. - gText_Rom_5CA894) > 0x4
	.error "gText_Rom_5CA894 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA894) < 0x4
	.space 0x4 - (. - gText_Rom_5CA894)
	.endif
	.incbin "baserom.gba", 0x5ca898, 0x5

	@ src/player_pc.c:194 player_pc_line_194
	.globl gText_Rom_5CA89D
gText_Rom_5CA89D: @ 0x085CA89D
	.string "せつぞくを きる$"
	.if (. - gText_Rom_5CA89D) > 0x9
	.error "gText_Rom_5CA89D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA89D) < 0x9
	.space 0x9 - (. - gText_Rom_5CA89D)
	.endif

	@ src/player_pc.c:193 player_pc_line_193
	.globl gText_Rom_5CA8A6
gText_Rom_5CA8A6: @ 0x085CA8A6
	.string "もようがえ$"
	.if (. - gText_Rom_5CA8A6) > 0x6
	.error "gText_Rom_5CA8A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8A6) < 0x6
	.space 0x6 - (. - gText_Rom_5CA8A6)
	.endif

	@ src/player_pc.c:191 player_pc_line_191
	.globl gText_Rom_5CA8AC
gText_Rom_5CA8AC: @ 0x085CA8AC
	.string "どうぐ あずかり$"
	.if (. - gText_Rom_5CA8AC) > 0x9
	.error "gText_Rom_5CA8AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8AC) < 0x9
	.space 0x9 - (. - gText_Rom_5CA8AC)
	.endif
	.globl gUnknown_85CA8B5
gUnknown_85CA8B5: @ 0x085CA8B5

	@ src/player_pc.c:174 sText_Mailbox
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8B5
gText_Rom_5CA8B5: @ 0x085CA8B5
	.string "メールボックス$"
	.if (. - gText_Rom_5CA8B5) != 0x8
	.error "gText_Rom_5CA8B5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8B8
	.set gText_Rom_5CA8B8, gText_Rom_5CA8B5 + 0x3

	@ src/player_pc.c:172 sText_DepositItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8BD
gText_Rom_5CA8BD: @ 0x085CA8BD
	.string "どうぐを あずける$"
	.if (. - gText_Rom_5CA8BD) != 0xa
	.error "gText_Rom_5CA8BD must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8C2
	.set gText_Rom_5CA8C2, gText_Rom_5CA8BD + 0x5
	.globl gUnknown_85CA8C7
gUnknown_85CA8C7: @ 0x085CA8C7

	@ src/player_pc.c:171 sText_WithdrawItem
	.globl gText_Rom_5CA8C7
gText_Rom_5CA8C7: @ 0x085CA8C7
	.string "どうぐを ひきだす$"
	.if (. - gText_Rom_5CA8C7) > 0xa
	.error "gText_Rom_5CA8C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8C7) < 0xa
	.space 0xa - (. - gText_Rom_5CA8C7)
	.endif
	.globl gUnknown_85CA8D1
gUnknown_85CA8D1: @ 0x085CA8D1

	@ src/player_pc.c:173 sText_TossItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8D1
gText_Rom_5CA8D1: @ 0x085CA8D1
	.string "どうぐを すてる$"
	.if (. - gText_Rom_5CA8D1) != 0x9
	.error "gText_Rom_5CA8D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8D6
	.set gText_Rom_5CA8D6, gText_Rom_5CA8D1 + 0x5

	@ src/player_pc.c:184 player_pc_line_184
	.globl gText_Rom_5CA8DA
gText_Rom_5CA8DA: @ 0x085CA8DA
	.string "パソコン に\nどうぐを あずけます$"
	.if (. - gText_Rom_5CA8DA) > 0x12
	.error "gText_Rom_5CA8DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8DA) < 0x12
	.space 0x12 - (. - gText_Rom_5CA8DA)
	.endif

	@ src/player_pc.c:183 player_pc_line_183
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8EC
gText_Rom_5CA8EC: @ 0x085CA8EC
	.string "パソコン から\nどうぐを ひきだします$"
	.if (. - gText_Rom_5CA8EC) != 0x14
	.error "gText_Rom_5CA8EC must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8FC
	.set gText_Rom_5CA8FC, gText_Rom_5CA8EC + 0x10

	@ src/player_pc.c:185 player_pc_line_185
	.globl gText_Rom_5CA900
gText_Rom_5CA900: @ 0x085CA900
	.string "パソコン に あずけている\nどうぐを すてます$"
	.if (. - gText_Rom_5CA900) > 0x18
	.error "gText_Rom_5CA900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA900) < 0x18
	.space 0x18 - (. - gText_Rom_5CA900)
	.endif
	.globl gUnknown_85CA918
gUnknown_85CA918: @ 0x085CA918

	@ src/strings.c:452 gText_NoItems
	.globl gText_Rom_5CA918
gText_Rom_5CA918: @ 0x085CA918
	.string "なにも ありません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA918) > 0xd
	.error "gText_Rom_5CA918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA918) < 0xd
	.space 0xd - (. - gText_Rom_5CA918)
	.endif
	.globl gUnknown_85CA925
gUnknown_85CA925: @ 0x085CA925

	@ src/player_pc.c:178 sText_NoRoomInBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA925
gText_Rom_5CA925: @ 0x085CA925
	.string "これいじょう\nバッグに はいりません$"
	.if (. - gText_Rom_5CA925) != 0x13
	.error "gText_Rom_5CA925 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA932
	.set gText_Rom_5CA932, gText_Rom_5CA925 + 0xd
	.globl gText_Rom_5CA934
	.set gText_Rom_5CA934, gText_Rom_5CA925 + 0xf
	.globl gUnknown_85CA938
gUnknown_85CA938: @ 0x085CA938

	@ src/player_pc.c:176 sText_WithdrawHowManyItems
	.globl gText_Rom_5CA938
gText_Rom_5CA938: @ 0x085CA938
	.string "{STR_VAR_1}を\nいくつ ひきだしますか?$"
	.if (. - gText_Rom_5CA938) > 0x11
	.error "gText_Rom_5CA938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA938) < 0x11
	.space 0x11 - (. - gText_Rom_5CA938)
	.endif
	.globl gUnknown_85CA949
gUnknown_85CA949: @ 0x085CA949

	@ src/player_pc.c:177 sText_WithdrawXItems
	.globl gText_Rom_5CA949
gText_Rom_5CA949: @ 0x085CA949
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ ひきだしました$"
	.if (. - gText_Rom_5CA949) > 0x10
	.error "gText_Rom_5CA949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA949) < 0x10
	.space 0x10 - (. - gText_Rom_5CA949)
	.endif

	@ src/player_pc.c:230 player_pc_line_230
	.globl gText_Rom_5CA959
gText_Rom_5CA959: @ 0x085CA959
	.string "ないようを よむ$"
	.if (. - gText_Rom_5CA959) > 0x9
	.error "gText_Rom_5CA959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA959) < 0x9
	.space 0x9 - (. - gText_Rom_5CA959)
	.endif

	@ src/player_pc.c:231 player_pc_line_231
	.globl gText_Rom_5CA962
gText_Rom_5CA962: @ 0x085CA962
	.string "バッグに もどす$"
	.if (. - gText_Rom_5CA962) > 0x9
	.error "gText_Rom_5CA962 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA962) < 0x9
	.space 0x9 - (. - gText_Rom_5CA962)
	.endif

	@ src/player_pc.c:232 player_pc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA96B
gText_Rom_5CA96B: @ 0x085CA96B
	.string "ポケモンに もたせる$"
	.if (. - gText_Rom_5CA96B) != 0xb
	.error "gText_Rom_5CA96B must retain its original byte length"
	.endif
	.globl gText_Rom_5CA971
	.set gText_Rom_5CA971, gText_Rom_5CA96B + 0x6
	.globl gUnknown_85CA976
gUnknown_85CA976: @ 0x085CA976

	@ src/strings.c:453 gText_NoMailHere
	.globl gText_Rom_5CA976
gText_Rom_5CA976: @ 0x085CA976
	.string "メールは 1つうも ありません{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA976) > 0x12
	.error "gText_Rom_5CA976 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA976) < 0x12
	.space 0x12 - (. - gText_Rom_5CA976)
	.endif
	.globl gUnknown_85CA988
gUnknown_85CA988: @ 0x085CA988

	@ src/strings.c:454 gText_WhatToDoWithVar1sMail
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA988
gText_Rom_5CA988: @ 0x085CA988
	.string "{STR_VAR_1} の\nメールを どうしますか?$"
	.if (. - gText_Rom_5CA988) != 0x12
	.error "gText_Rom_5CA988 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA98D
	.set gText_Rom_5CA98D, gText_Rom_5CA988 + 0x5
	.globl gUnknown_85CA99A
gUnknown_85CA99A: @ 0x085CA99A

	@ src/strings.c:455 gText_MessageWillBeLost
	.globl gText_Rom_5CA99A
gText_Rom_5CA99A: @ 0x085CA99A
	.string "ないようは きえてしまいますが\nよろしいですか?$"
	.if (. - gText_Rom_5CA99A) > 0x19
	.error "gText_Rom_5CA99A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA99A) < 0x19
	.space 0x19 - (. - gText_Rom_5CA99A)
	.endif
	.globl gUnknown_85CA9B3
gUnknown_85CA9B3: @ 0x085CA9B3

	@ src/strings.c:456 gText_BagIsFull
	.globl gText_Rom_5CA9B3
gText_Rom_5CA9B3: @ 0x085CA9B3
	.string "バッグが いっぱいです!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA9B3) > 0xf
	.error "gText_Rom_5CA9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9B3) < 0xf
	.space 0xf - (. - gText_Rom_5CA9B3)
	.endif
	.globl gUnknown_85CA9C2
gUnknown_85CA9C2: @ 0x085CA9C2

	@ src/strings.c:457 gText_MailToBagMessageErased
	.globl gText_Rom_5CA9C2
gText_Rom_5CA9C2: @ 0x085CA9C2
	.string "ないようを けした メールを\nバッグに いれました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA9C2) > 0x1c
	.error "gText_Rom_5CA9C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9C2) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA9C2)
	.endif
	.globl gUnknown_85CA9DE
gUnknown_85CA9DE: @ 0x085CA9DE

	@ asm/tv.s:8388 GetMomOrDadStringForTVMessage
	.globl gText_Rom_5CA9DE
gText_Rom_5CA9DE: @ 0x085CA9DE
	.string "パパ$"
	.if (. - gText_Rom_5CA9DE) > 0x3
	.error "gText_Rom_5CA9DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9DE) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9DE)
	.endif
	.globl gUnknown_85CA9E1
gUnknown_85CA9E1: @ 0x085CA9E1

	@ asm/tv.s:8326 GetMomOrDadStringForTVMessage
	.globl gText_Rom_5CA9E1
gText_Rom_5CA9E1: @ 0x085CA9E1
	.string "ママ$"
	.if (. - gText_Rom_5CA9E1) > 0x3
	.error "gText_Rom_5CA9E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E1) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9E1)
	.endif
	.globl gUnknown_85CA9E4
gUnknown_85CA9E4: @ 0x085CA9E4

	@ src/data/trainers.h:16880 trainers_line_16880 (+2 aliases)
	.globl gText_Rom_5CA9E4
gText_Rom_5CA9E4: @ 0x085CA9E4
	.string "ミクリ$"
	.if (. - gText_Rom_5CA9E4) > 0x4
	.error "gText_Rom_5CA9E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E4) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E4)
	.endif
	.globl gUnknown_85CA9E8
gUnknown_85CA9E8: @ 0x085CA9E8

	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5CA9E8
gText_Rom_5CA9E8: @ 0x085CA9E8
	.string "ダイゴ$"
	.if (. - gText_Rom_5CA9E8) > 0x4
	.error "gText_Rom_5CA9E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9E8) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9E8)
	.endif
	.globl gUnknown_85CA9EC
gUnknown_85CA9EC: @ 0x085CA9EC

	@ src/data/trainers.h:13049 trainers_line_13049 (+6 aliases)
	.globl gText_Rom_5CA9EC
gText_Rom_5CA9EC: @ 0x085CA9EC
	.string "トウキ$"
	.if (. - gText_Rom_5CA9EC) > 0x4
	.error "gText_Rom_5CA9EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9EC) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9EC)
	.endif
	.globl gUnknown_85CA9F0
gUnknown_85CA9F0: @ 0x085CA9F0

	@ asm/field_specials.s:8549 sub_0813BE68
	.globl gText_Rom_5CA9F0
gText_Rom_5CA9F0: @ 0x085CA9F0
	.string "ナギ$"
	.if (. - gText_Rom_5CA9F0) > 0x3
	.error "gText_Rom_5CA9F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F0) < 0x3
	.space 0x3 - (. - gText_Rom_5CA9F0)
	.endif
	.globl gUnknown_85CA9F3
gUnknown_85CA9F3: @ 0x085CA9F3

	@ src/data/trainers.h:12589 trainers_line_12589 (+1 aliases)
	.globl gText_Rom_5CA9F3
gText_Rom_5CA9F3: @ 0x085CA9F3
	.string "フヨウ$"
	.if (. - gText_Rom_5CA9F3) > 0x4
	.error "gText_Rom_5CA9F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F3) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9F3)
	.endif
	.globl gUnknown_85CA9F7
gUnknown_85CA9F7: @ 0x085CA9F7

	@ src/data/trainers.h:12714 trainers_line_12714 (+1 aliases)
	.globl gText_Rom_5CA9F7
gText_Rom_5CA9F7: @ 0x085CA9F7
	.string "プリム$"
	.if (. - gText_Rom_5CA9F7) > 0x4
	.error "gText_Rom_5CA9F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9F7)
	.endif

	@ src/data/script_menu.h:4 script_menu_line_4
	.globl gText_Rom_5CA9FB
gText_Rom_5CA9FB: @ 0x085CA9FB
	.string "トウカ$"
	.if (. - gText_Rom_5CA9FB) > 0x4
	.error "gText_Rom_5CA9FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FB) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FB)
	.endif

	@ src/data/script_menu.h:5 script_menu_line_5
	.globl gText_Rom_5CA9FF
gText_Rom_5CA9FF: @ 0x085CA9FF
	.string "カイナ$"
	.if (. - gText_Rom_5CA9FF) > 0x4
	.error "gText_Rom_5CA9FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9FF) < 0x4
	.space 0x4 - (. - gText_Rom_5CA9FF)
	.endif
	.incbin "baserom.gba", 0x5caa03, 0x8

	@ src/data/script_menu.h:81 script_menu_line_81
	.globl gText_Rom_5CAA0B
gText_Rom_5CAA0B: @ 0x085CAA0B
	.string "ムロ$"
	.if (. - gText_Rom_5CAA0B) > 0x3
	.error "gText_Rom_5CAA0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA0B) < 0x3
	.space 0x3 - (. - gText_Rom_5CAA0B)
	.endif
	.incbin "baserom.gba", 0x5caa0e, 0x1c

	@ src/data/script_menu.h:21 script_menu_line_21
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA2A
gText_Rom_5CAA2A: @ 0x085CAA2A
	.string "コンテストの しゅるい$"
	.if (. - gText_Rom_5CAA2A) != 0xc
	.error "gText_Rom_5CAA2A must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA31
	.set gText_Rom_5CAA31, gText_Rom_5CAA2A + 0x7
	.incbin "baserom.gba", 0x5caa36, 0x14

	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA4A
gText_Rom_5CAA4A: @ 0x085CAA4A
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_5CAA4A) != 0xb
	.error "gText_Rom_5CAA4A must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA4F
	.set gText_Rom_5CAA4F, gText_Rom_5CAA4A + 0x5
	.globl gText_Rom_5CAA51
	.set gText_Rom_5CAA51, gText_Rom_5CAA4A + 0x7

	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA55
gText_Rom_5CAA55: @ 0x085CAA55
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_5CAA55) != 0xb
	.error "gText_Rom_5CAA55 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA5A
	.set gText_Rom_5CAA5A, gText_Rom_5CAA55 + 0x5
	.globl gText_Rom_5CAA5C
	.set gText_Rom_5CAA5C, gText_Rom_5CAA55 + 0x7

	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA60
gText_Rom_5CAA60: @ 0x085CAA60
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_5CAA60) != 0xa
	.error "gText_Rom_5CAA60 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA64
	.set gText_Rom_5CAA64, gText_Rom_5CAA60 + 0x4
	.globl gText_Rom_5CAA66
	.set gText_Rom_5CAA66, gText_Rom_5CAA60 + 0x6

	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA6A
gText_Rom_5CAA6A: @ 0x085CAA6A
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_5CAA6A) != 0xa
	.error "gText_Rom_5CAA6A must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA6E
	.set gText_Rom_5CAA6E, gText_Rom_5CAA6A + 0x4
	.globl gText_Rom_5CAA70
	.set gText_Rom_5CAA70, gText_Rom_5CAA6A + 0x6

	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAA74
gText_Rom_5CAA74: @ 0x085CAA74
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_5CAA74) != 0xb
	.error "gText_Rom_5CAA74 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAA79
	.set gText_Rom_5CAA79, gText_Rom_5CAA74 + 0x5
	.globl gText_Rom_5CAA7B
	.set gText_Rom_5CAA7B, gText_Rom_5CAA74 + 0x7

	@ src/player_pc.c:193 player_pc_line_193
	.globl gText_Rom_5CAA7F
gText_Rom_5CAA7F: @ 0x085CAA7F
	.string "もようがえ$"
	.if (. - gText_Rom_5CAA7F) > 0x6
	.error "gText_Rom_5CAA7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA7F) < 0x6
	.space 0x6 - (. - gText_Rom_5CAA7F)
	.endif
	.incbin "baserom.gba", 0x5caa85, 0x18

	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CAA9D
gText_Rom_5CAA9D: @ 0x085CAA9D
	.string "せつめい$"
	.if (. - gText_Rom_5CAA9D) > 0x5
	.error "gText_Rom_5CAA9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAA9D) < 0x5
	.space 0x5 - (. - gText_Rom_5CAA9D)
	.endif

	@ src/data/script_menu.h:65 script_menu_line_65
	.globl gText_Rom_5CAAA2
gText_Rom_5CAAA2: @ 0x085CAAA2
	.string "マッハ$"
	.if (. - gText_Rom_5CAAA2) > 0x4
	.error "gText_Rom_5CAAA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAA2) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAA2)
	.endif

	@ src/data/script_menu.h:66 script_menu_line_66
	.globl gText_Rom_5CAAA6
gText_Rom_5CAAA6: @ 0x085CAAA6
	.string "ダート$"
	.if (. - gText_Rom_5CAAA6) > 0x4
	.error "gText_Rom_5CAAA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAA6) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAA6)
	.endif
	.incbin "baserom.gba", 0x5caaaa, 0x6

	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl gText_Rom_5CAAB0
gText_Rom_5CAAB0: @ 0x085CAAB0
	.string "ねむり$"
	.if (. - gText_Rom_5CAAB0) > 0x4
	.error "gText_Rom_5CAAB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB0) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB0)
	.endif

	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5CAAB4
gText_Rom_5CAAB4: @ 0x085CAAB4
	.string "やけど$"
	.if (. - gText_Rom_5CAAB4) > 0x4
	.error "gText_Rom_5CAAB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB4) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB4)
	.endif

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5CAAB8
gText_Rom_5CAAB8: @ 0x085CAAB8
	.string "こおり$"
	.if (. - gText_Rom_5CAAB8) > 0x4
	.error "gText_Rom_5CAAB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAB8) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAB8)
	.endif

	@ src/data/moves_info.h:2252 moves_info_line_2252
	.globl gText_Rom_5CAABC
gText_Rom_5CAABC: @ 0x085CAABC
	.string "どくどく$"
	.if (. - gText_Rom_5CAABC) > 0x5
	.error "gText_Rom_5CAABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAABC) < 0x5
	.space 0x5 - (. - gText_Rom_5CAABC)
	.endif

	@ src/pokedex_plus_hgss.c:160 sText_Stats_CatchRate_Medium
	.globl gText_Rom_5CAAC1
gText_Rom_5CAAC1: @ 0x085CAAC1
	.string "ふつう$"
	.if (. - gText_Rom_5CAAC1) > 0x4
	.error "gText_Rom_5CAAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAC1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAC1)
	.endif
	.incbin "baserom.gba", 0x5caac5, 0x5

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CAACA
gText_Rom_5CAACA: @ 0x085CAACA
	.string "やめる$"
	.if (. - gText_Rom_5CAACA) > 0x4
	.error "gText_Rom_5CAACA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAACA) < 0x4
	.space 0x4 - (. - gText_Rom_5CAACA)
	.endif
	.incbin "baserom.gba", 0x5caace, 0xa
	.globl gUnknown_85CAAD8
gUnknown_85CAAD8: @ 0x085CAAD8

	@ asm/dodrio_berry_picking.s:11294 sub_08029D28
	.globl gText_Rom_5CAAD8
gText_Rom_5CAAD8: @ 0x085CAAD8
	.string "はい$"
	.if (. - gText_Rom_5CAAD8) > 0x3
	.error "gText_Rom_5CAAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAD8) < 0x3
	.space 0x3 - (. - gText_Rom_5CAAD8)
	.endif
	.globl gUnknown_85CAADB
gUnknown_85CAADB: @ 0x085CAADB

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5CAADB
gText_Rom_5CAADB: @ 0x085CAADB
	.string "いいえ$"
	.if (. - gText_Rom_5CAADB) > 0x4
	.error "gText_Rom_5CAADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADB) < 0x4
	.space 0x4 - (. - gText_Rom_5CAADB)
	.endif

	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Rom_5CAADF
gText_Rom_5CAADF: @ 0x085CAADF
	.string "せつめい$"
	.if (. - gText_Rom_5CAADF) > 0x5
	.error "gText_Rom_5CAADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADF) < 0x5
	.space 0x5 - (. - gText_Rom_5CAADF)
	.endif

	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAE4
gText_Rom_5CAAE4: @ 0x085CAAE4
	.string "シングルバトル$"
	.if (. - gText_Rom_5CAAE4) != 0x8
	.error "gText_Rom_5CAAE4 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAAE8
	.set gText_Rom_5CAAE8, gText_Rom_5CAAE4 + 0x4

	@ src/battle_debug.c:431 battle_debug_line_431 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAEC
gText_Rom_5CAAEC: @ 0x085CAAEC
	.string "ダブルバトル$"
	.if (. - gText_Rom_5CAAEC) != 0x7
	.error "gText_Rom_5CAAEC must retain its original byte length"
	.endif
	.globl gText_Rom_5CAAEF
	.set gText_Rom_5CAAEF, gText_Rom_5CAAEC + 0x3

	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAAF3
gText_Rom_5CAAF3: @ 0x085CAAF3
	.string "マルチバトル$"
	.if (. - gText_Rom_5CAAF3) != 0x7
	.error "gText_Rom_5CAAF3 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAAF6
	.set gText_Rom_5CAAF6, gText_Rom_5CAAF3 + 0x3
	.incbin "baserom.gba", 0x5caafa, 0x13
	.globl gUnknown_85CAB0D
gUnknown_85CAB0D: @ 0x085CAB0D

	@ src/strings.c:468 gText_Lv50
	.globl gText_Rom_5CAB0D
gText_Rom_5CAB0D: @ 0x085CAB0D
	.string "レベル50$"
	.if (. - gText_Rom_5CAB0D) > 0x6
	.error "gText_Rom_5CAB0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB0D) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB0D)
	.endif
	.globl gUnknown_85CAB13
gUnknown_85CAB13: @ 0x085CAB13

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAB13
gText_Rom_5CAB13: @ 0x085CAB13
	.string "オープンレベル$"
	.if (. - gText_Rom_5CAB13) != 0x8
	.error "gText_Rom_5CAB13 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAB17
	.set gText_Rom_5CAB17, gText_Rom_5CAB13 + 0x4
	.incbin "baserom.gba", 0x5cab1b, 0x30

	@ src/data/script_menu.h:229 script_menu_line_229
	.globl gText_Rom_5CAB4B
gText_Rom_5CAB4B: @ 0x085CAB4B
	.string "すなのさか$"
	.if (. - gText_Rom_5CAB4B) > 0x6
	.error "gText_Rom_5CAB4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB4B) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB4B)
	.endif

	@ src/data/script_menu.h:235 script_menu_line_235
	.globl gText_Rom_5CAB51
gText_Rom_5CAB51: @ 0x085CAB51
	.string "ウイリー$"
	.if (. - gText_Rom_5CAB51) > 0x5
	.error "gText_Rom_5CAB51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB51) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB51)
	.endif

	@ src/main_menu.c:489 main_menu_line_489
	.globl gText_Rom_5CAB56
gText_Rom_5CAB56: @ 0x085CAB56
	.string "ダニエル$"
	.if (. - gText_Rom_5CAB56) > 0x5
	.error "gText_Rom_5CAB56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB56) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB56)
	.endif

	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CAB5B
gText_Rom_5CAB5B: @ 0x085CAB5B
	.string "ジャンプ$"
	.if (. - gText_Rom_5CAB5B) > 0x5
	.error "gText_Rom_5CAB5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB5B) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB5B)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_5CAB60
gText_Rom_5CAB60: @ 0x085CAB60
	.string "まんぞく$"
	.if (. - gText_Rom_5CAB60) > 0x5
	.error "gText_Rom_5CAB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB60) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB60)
	.endif

	@ src/data/script_menu.h:244 script_menu_line_244
	.globl gText_Rom_5CAB65
gText_Rom_5CAB65: @ 0x085CAB65
	.string "ふまん$"
	.if (. - gText_Rom_5CAB65) > 0x4
	.error "gText_Rom_5CAB65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB65) < 0x4
	.space 0x4 - (. - gText_Rom_5CAB65)
	.endif

	@ src/data/script_menu.h:249 script_menu_line_249
	.globl gText_Rom_5CAB69
gText_Rom_5CAB69: @ 0x085CAB69
	.string "しんかいのキバ$"
	.if (. - gText_Rom_5CAB69) > 0x8
	.error "gText_Rom_5CAB69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB69) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB69)
	.endif

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl gText_Rom_5CAB71
gText_Rom_5CAB71: @ 0x085CAB71
	.string "しんかいのウロコ$"
	.if (. - gText_Rom_5CAB71) > 0x9
	.error "gText_Rom_5CAB71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB71) < 0x9
	.space 0x9 - (. - gText_Rom_5CAB71)
	.endif

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CAB7A
gText_Rom_5CAB7A: @ 0x085CAB7A
	.string "あおいビードロ$"
	.if (. - gText_Rom_5CAB7A) > 0x8
	.error "gText_Rom_5CAB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB7A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB7A)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CAB82
gText_Rom_5CAB82: @ 0x085CAB82
	.string "きいろビードロ$"
	.if (. - gText_Rom_5CAB82) > 0x8
	.error "gText_Rom_5CAB82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB82) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB82)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CAB8A
gText_Rom_5CAB8A: @ 0x085CAB8A
	.string "あかいビードロ$"
	.if (. - gText_Rom_5CAB8A) > 0x8
	.error "gText_Rom_5CAB8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB8A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB8A)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CAB92
gText_Rom_5CAB92: @ 0x085CAB92
	.string "しろいビードロ$"
	.if (. - gText_Rom_5CAB92) > 0x8
	.error "gText_Rom_5CAB92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB92) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB92)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CAB9A
gText_Rom_5CAB9A: @ 0x085CAB9A
	.string "くろいビードロ$"
	.if (. - gText_Rom_5CAB9A) > 0x8
	.error "gText_Rom_5CAB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB9A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB9A)
	.endif
	.incbin "baserom.gba", 0x5caba2, 0x7

	@ src/data/script_menu.h:262 script_menu_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CABA9
gText_Rom_5CABA9: @ 0x085CABA9
	.string "ガラスのつくえ$"
	.if (. - gText_Rom_5CABA9) != 0x8
	.error "gText_Rom_5CABA9 must retain its original byte length"
	.endif
	.globl gText_Rom_5CABAD
	.set gText_Rom_5CABAD, gText_Rom_5CABA9 + 0x4
	.incbin "baserom.gba", 0x5cabb1, 0x4f

	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl gText_Rom_5CAC00
gText_Rom_5CAC00: @ 0x085CAC00
	.string "あんまり$"
	.if (. - gText_Rom_5CAC00) > 0x5
	.error "gText_Rom_5CAC00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC00) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC00)
	.endif

	@ src/data/script_menu.h:335 gText_RedShard
	.globl gText_Rom_5CAC05
gText_Rom_5CAC05: @ 0x085CAC05
	.string "あかいかけら$"
	.if (. - gText_Rom_5CAC05) > 0x7
	.error "gText_Rom_5CAC05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC05) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC05)
	.endif

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl gText_Rom_5CAC0C
gText_Rom_5CAC0C: @ 0x085CAC0C
	.string "きいろいかけら$"
	.if (. - gText_Rom_5CAC0C) > 0x8
	.error "gText_Rom_5CAC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC0C) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC0C)
	.endif

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl gText_Rom_5CAC14
gText_Rom_5CAC14: @ 0x085CAC14
	.string "あおいかけら$"
	.if (. - gText_Rom_5CAC14) > 0x7
	.error "gText_Rom_5CAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC14) < 0x7
	.space 0x7 - (. - gText_Rom_5CAC14)
	.endif

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl gText_Rom_5CAC1B
gText_Rom_5CAC1B: @ 0x085CAC1B
	.string "みどりのかけら$"
	.if (. - gText_Rom_5CAC1B) > 0x8
	.error "gText_Rom_5CAC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC1B) < 0x8
	.space 0x8 - (. - gText_Rom_5CAC1B)
	.endif

	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAC23
gText_Rom_5CAC23: @ 0x085CAC23
	.string "バトルフロンティア$"
	.if (. - gText_Rom_5CAC23) != 0xa
	.error "gText_Rom_5CAC23 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAC26
	.set gText_Rom_5CAC26, gText_Rom_5CAC23 + 0x3
	.incbin "baserom.gba", 0x5cac2d, 0x3

	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl gText_Rom_5CAC30
gText_Rom_5CAC30: @ 0x085CAC30
	.string "ひだり$"
	.if (. - gText_Rom_5CAC30) > 0x4
	.error "gText_Rom_5CAC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC30) < 0x4
	.space 0x4 - (. - gText_Rom_5CAC30)
	.endif
	.incbin "baserom.gba", 0x5cac34, 0x50
	.globl gUnknown_85CAC84
gUnknown_85CAC84: @ 0x085CAC84

	@ src/data/easy_chat/easy_chat_group_status.h:136 easy_chat_group_status_line_136 (+2 aliases)
	.globl gText_Rom_5CAC84
gText_Rom_5CAC84: @ 0x085CAC84
	.string "かっこよさ$"
	.if (. - gText_Rom_5CAC84) > 0x6
	.error "gText_Rom_5CAC84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC84) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC84)
	.endif
	.globl gUnknown_85CAC8A
gUnknown_85CAC8A: @ 0x085CAC8A

	@ src/data/easy_chat/easy_chat_group_status.h:76 easy_chat_group_status_line_76 (+2 aliases)
	.globl gText_Rom_5CAC8A
gText_Rom_5CAC8A: @ 0x085CAC8A
	.string "うつくしさ$"
	.if (. - gText_Rom_5CAC8A) > 0x6
	.error "gText_Rom_5CAC8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC8A) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC8A)
	.endif
	.globl gUnknown_85CAC90
gUnknown_85CAC90: @ 0x085CAC90

	@ src/data/easy_chat/easy_chat_group_status.h:154 easy_chat_group_status_line_154 (+2 aliases)
	.globl gText_Rom_5CAC90
gText_Rom_5CAC90: @ 0x085CAC90
	.string "かわいさ$"
	.if (. - gText_Rom_5CAC90) > 0x5
	.error "gText_Rom_5CAC90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC90) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC90)
	.endif
	.globl gUnknown_85CAC95
gUnknown_85CAC95: @ 0x085CAC95

	@ src/data/easy_chat/easy_chat_group_status.h:118 easy_chat_group_status_line_118 (+2 aliases)
	.globl gText_Rom_5CAC95
gText_Rom_5CAC95: @ 0x085CAC95
	.string "かしこさ$"
	.if (. - gText_Rom_5CAC95) > 0x5
	.error "gText_Rom_5CAC95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC95) < 0x5
	.space 0x5 - (. - gText_Rom_5CAC95)
	.endif
	.globl gUnknown_85CAC9A
gUnknown_85CAC9A: @ 0x085CAC9A

	@ src/data/easy_chat/easy_chat_group_status.h:316 easy_chat_group_status_line_316 (+2 aliases)
	.globl gText_Rom_5CAC9A
gText_Rom_5CAC9A: @ 0x085CAC9A
	.string "たくましさ$"
	.if (. - gText_Rom_5CAC9A) > 0x6
	.error "gText_Rom_5CAC9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC9A) < 0x6
	.space 0x6 - (. - gText_Rom_5CAC9A)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_5CACA0
gText_Rom_5CACA0: @ 0x085CACA0
	.string "ノーマル$"
	.if (. - gText_Rom_5CACA0) > 0x5
	.error "gText_Rom_5CACA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_5CACA5
gText_Rom_5CACA5: @ 0x085CACA5
	.string "スーパー$"
	.if (. - gText_Rom_5CACA5) > 0x5
	.error "gText_Rom_5CACA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACA5) < 0x5
	.space 0x5 - (. - gText_Rom_5CACA5)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_5CACAA
gText_Rom_5CACAA: @ 0x085CACAA
	.string "ハイパー$"
	.if (. - gText_Rom_5CACAA) > 0x5
	.error "gText_Rom_5CACAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAA) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAA)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_5CACAF
gText_Rom_5CACAF: @ 0x085CACAF
	.string "マスター$"
	.if (. - gText_Rom_5CACAF) > 0x5
	.error "gText_Rom_5CACAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACAF) < 0x5
	.space 0x5 - (. - gText_Rom_5CACAF)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:130 easy_chat_group_status_line_130
	.globl gText_Rom_5CACB4
gText_Rom_5CACB4: @ 0x085CACB4
	.string "かっこいい$"
	.if (. - gText_Rom_5CACB4) > 0x6
	.error "gText_Rom_5CACB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACB4) < 0x6
	.space 0x6 - (. - gText_Rom_5CACB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:70 easy_chat_group_status_line_70
	.globl gText_Rom_5CACBA
gText_Rom_5CACBA: @ 0x085CACBA
	.string "うつくしい$"
	.if (. - gText_Rom_5CACBA) > 0x6
	.error "gText_Rom_5CACBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACBA) < 0x6
	.space 0x6 - (. - gText_Rom_5CACBA)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:148 easy_chat_group_status_line_148
	.globl gText_Rom_5CACC0
gText_Rom_5CACC0: @ 0x085CACC0
	.string "かわいい$"
	.if (. - gText_Rom_5CACC0) > 0x5
	.error "gText_Rom_5CACC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACC0) < 0x5
	.space 0x5 - (. - gText_Rom_5CACC0)
	.endif
	.incbin "baserom.gba", 0x5cacc5, 0x7

	@ src/data/easy_chat/easy_chat_group_status.h:310 easy_chat_group_status_line_310
	.globl gText_Rom_5CACCC
gText_Rom_5CACCC: @ 0x085CACCC
	.string "たくましい$"
	.if (. - gText_Rom_5CACCC) > 0x6
	.error "gText_Rom_5CACCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACCC) < 0x6
	.space 0x6 - (. - gText_Rom_5CACCC)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CACD2
gText_Rom_5CACD2: @ 0x085CACD2
	.string "どうぐ$"
	.if (. - gText_Rom_5CACD2) > 0x4
	.error "gText_Rom_5CACD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD2) < 0x4
	.space 0x4 - (. - gText_Rom_5CACD2)
	.endif

	@ src/data/script_menu.h:1326 script_menu_line_1326
	.globl gText_Rom_5CACD6
gText_Rom_5CACD6: @ 0x085CACD6
	.string "たいせつなもの$"
	.if (. - gText_Rom_5CACD6) > 0x8
	.error "gText_Rom_5CACD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACD6) < 0x8
	.space 0x8 - (. - gText_Rom_5CACD6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_5CACDE
gText_Rom_5CACDE: @ 0x085CACDE
	.string "ボール$"
	.if (. - gText_Rom_5CACDE) > 0x4
	.error "gText_Rom_5CACDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACDE) < 0x4
	.space 0x4 - (. - gText_Rom_5CACDE)
	.endif

	@ src/data/script_menu.h:1328 script_menu_line_1328
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACE2
gText_Rom_5CACE2: @ 0x085CACE2
	.string "わざマシン$"
	.if (. - gText_Rom_5CACE2) != 0x6
	.error "gText_Rom_5CACE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5CACE4
	.set gText_Rom_5CACE4, gText_Rom_5CACE2 + 0x2

	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gText_Rom_5CACE8
gText_Rom_5CACE8: @ 0x085CACE8
	.string "きのみ$"
	.if (. - gText_Rom_5CACE8) > 0x4
	.error "gText_Rom_5CACE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CACE8) < 0x4
	.space 0x4 - (. - gText_Rom_5CACE8)
	.endif
	.globl gUnknown_85CACEC
gUnknown_85CACEC: @ 0x085CACEC

	@ src/strings.c:480 gText_SomeonesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACEC
gText_Rom_5CACEC: @ 0x085CACEC
	.string "だれかのパソコン$"
	.if (. - gText_Rom_5CACEC) != 0x9
	.error "gText_Rom_5CACEC must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF0
	.set gText_Rom_5CACF0, gText_Rom_5CACEC + 0x4
	.globl gUnknown_85CACF5
gUnknown_85CACF5: @ 0x085CACF5

	@ src/strings.c:481 gText_LanettesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACF5
gText_Rom_5CACF5: @ 0x085CACF5
	.string "マユミのパソコン$"
	.if (. - gText_Rom_5CACF5) != 0x9
	.error "gText_Rom_5CACF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF9
	.set gText_Rom_5CACF9, gText_Rom_5CACF5 + 0x4
	.globl gUnknown_85CACFE
gUnknown_85CACFE: @ 0x085CACFE

	@ src/strings.c:483 gText_PlayersPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACFE
gText_Rom_5CACFE: @ 0x085CACFE
	.string "{PLAYER}のパソコン$"
	.if (. - gText_Rom_5CACFE) != 0x8
	.error "gText_Rom_5CACFE must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD01
	.set gText_Rom_5CAD01, gText_Rom_5CACFE + 0x3
	.globl gUnknown_85CAD06
gUnknown_85CAD06: @ 0x085CAD06

	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gText_Rom_5CAD06
gText_Rom_5CAD06: @ 0x085CAD06
	.string "でんどういり$"
	.if (. - gText_Rom_5CAD06) > 0x7
	.error "gText_Rom_5CAD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD06) < 0x7
	.space 0x7 - (. - gText_Rom_5CAD06)
	.endif
	.globl gUnknown_85CAD0D
gUnknown_85CAD0D: @ 0x085CAD0D

	@ src/strings.c:485 gText_LogOff
	.globl gText_Rom_5CAD0D
gText_Rom_5CAD0D: @ 0x085CAD0D
	.string "スイッチをきる$"
	.if (. - gText_Rom_5CAD0D) > 0x8
	.error "gText_Rom_5CAD0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD0D) < 0x8
	.space 0x8 - (. - gText_Rom_5CAD0D)
	.endif
	.incbin "baserom.gba", 0x5cad15, 0x5

	@ src/data/easy_chat/easy_chat_group_people.h:4 easy_chat_group_people_line_4 (+1 aliases)
	.globl gText_Rom_5CAD1A
gText_Rom_5CAD1A: @ 0x085CAD1A
	.string "あいて$"
	.if (. - gText_Rom_5CAD1A) > 0x4
	.error "gText_Rom_5CAD1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD1A) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD1A)
	.endif
	.incbin "baserom.gba", 0x5cad1e, 0x15

	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD33
gText_Rom_5CAD33: @ 0x085CAD33
	.string "ノーマルランク$"
	.if (. - gText_Rom_5CAD33) != 0x8
	.error "gText_Rom_5CAD33 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD37
	.set gText_Rom_5CAD37, gText_Rom_5CAD33 + 0x4

	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD3B
gText_Rom_5CAD3B: @ 0x085CAD3B
	.string "スーパーランク$"
	.if (. - gText_Rom_5CAD3B) != 0x8
	.error "gText_Rom_5CAD3B must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD3F
	.set gText_Rom_5CAD3F, gText_Rom_5CAD3B + 0x4

	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD43
gText_Rom_5CAD43: @ 0x085CAD43
	.string "ハイパーランク$"
	.if (. - gText_Rom_5CAD43) != 0x8
	.error "gText_Rom_5CAD43 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD47
	.set gText_Rom_5CAD47, gText_Rom_5CAD43 + 0x4

	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD4B
gText_Rom_5CAD4B: @ 0x085CAD4B
	.string "マスターランク$"
	.if (. - gText_Rom_5CAD4B) != 0x8
	.error "gText_Rom_5CAD4B must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD4F
	.set gText_Rom_5CAD4F, gText_Rom_5CAD4B + 0x4

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CAD53
gText_Rom_5CAD53: @ 0x085CAD53
	.string "シングル$"
	.if (. - gText_Rom_5CAD53) > 0x5
	.error "gText_Rom_5CAD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD53) < 0x5
	.space 0x5 - (. - gText_Rom_5CAD53)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CAD58
gText_Rom_5CAD58: @ 0x085CAD58
	.string "ダブル$"
	.if (. - gText_Rom_5CAD58) > 0x4
	.error "gText_Rom_5CAD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD58) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD58)
	.endif

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gText_Rom_5CAD5C
gText_Rom_5CAD5C: @ 0x085CAD5C
	.string "マルチ$"
	.if (. - gText_Rom_5CAD5C) > 0x4
	.error "gText_Rom_5CAD5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD5C) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD5C)
	.endif

	@ src/strings.c:489 gText_MultiLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD60
gText_Rom_5CAD60: @ 0x085CAD60
	.string "つうしん マルチ$"
	.if (. - gText_Rom_5CAD60) != 0x9
	.error "gText_Rom_5CAD60 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD65
	.set gText_Rom_5CAD65, gText_Rom_5CAD60 + 0x5

	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD69
gText_Rom_5CAD69: @ 0x085CAD69
	.string "バトルバッグ$"
	.if (. - gText_Rom_5CAD69) != 0x7
	.error "gText_Rom_5CAD69 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD6C
	.set gText_Rom_5CAD6C, gText_Rom_5CAD69 + 0x3
	.incbin "baserom.gba", 0x5cad70, 0x4

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAD74
gText_Rom_5CAD74: @ 0x085CAD74
	.string "どうぐ$"
	.if (. - gText_Rom_5CAD74) > 0x4
	.error "gText_Rom_5CAD74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD74) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD74)
	.endif

	@ src/data/script_menu.h:565 script_menu_line_565
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD78
gText_Rom_5CAD78: @ 0x085CAD78
	.string "つうしんコンテスト$"
	.if (. - gText_Rom_5CAD78) != 0xa
	.error "gText_Rom_5CAD78 must retain its original byte length"
	.endif
	.globl gText_Rom_5CAD7C
	.set gText_Rom_5CAD7C, gText_Rom_5CAD78 + 0x4
	.globl gText_Rom_5CAD7E
	.set gText_Rom_5CAD7E, gText_Rom_5CAD78 + 0x6
	.incbin "baserom.gba", 0x5cad82, 0x1f

	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADA1
gText_Rom_5CADA1: @ 0x085CADA1
	.string "モード$"
	.if (. - gText_Rom_5CADA1) > 0x4
	.error "gText_Rom_5CADA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADA1) < 0x4
	.space 0x4 - (. - gText_Rom_5CADA1)
	.endif
	.incbin "baserom.gba", 0x5cada5, 0x5

	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADAA
gText_Rom_5CADAA: @ 0x085CADAA
	.string "モード$"
	.if (. - gText_Rom_5CADAA) > 0x4
	.error "gText_Rom_5CADAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADAA) < 0x4
	.space 0x4 - (. - gText_Rom_5CADAA)
	.endif
	.globl gUnknown_85CADAE
gUnknown_85CADAE: @ 0x085CADAE

	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_5CADAE
gText_Rom_5CADAE: @ 0x085CADAE
	.string "ずかん$"
	.if (. - gText_Rom_5CADAE) > 0x4
	.error "gText_Rom_5CADAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADAE) < 0x4
	.space 0x4 - (. - gText_Rom_5CADAE)
	.endif
	.globl gUnknown_85CADB2
gUnknown_85CADB2: @ 0x085CADB2

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CADB2
gText_Rom_5CADB2: @ 0x085CADB2
	.string "ポケモン$"
	.if (. - gText_Rom_5CADB2) > 0x5
	.error "gText_Rom_5CADB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADB2) < 0x5
	.space 0x5 - (. - gText_Rom_5CADB2)
	.endif
	.globl gUnknown_85CADB7
gUnknown_85CADB7: @ 0x085CADB7

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_5CADB7
gText_Rom_5CADB7: @ 0x085CADB7
	.string "バッグ$"
	.if (. - gText_Rom_5CADB7) > 0x4
	.error "gText_Rom_5CADB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADB7) < 0x4
	.space 0x4 - (. - gText_Rom_5CADB7)
	.endif
	.globl gUnknown_85CADBB
gUnknown_85CADBB: @ 0x085CADBB

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_5CADBB
gText_Rom_5CADBB: @ 0x085CADBB
	.string "ポケナビ$"
	.if (. - gText_Rom_5CADBB) > 0x5
	.error "gText_Rom_5CADBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CADBB)
	.endif
	.incbin "baserom.gba", 0x5cadc0, 0x6
	.globl gUnknown_85CADC6
gUnknown_85CADC6: @ 0x085CADC6

	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl gText_Rom_5CADC6
gText_Rom_5CADC6: @ 0x085CADC6
	.string "レポート$"
	.if (. - gText_Rom_5CADC6) > 0x5
	.error "gText_Rom_5CADC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADC6) < 0x5
	.space 0x5 - (. - gText_Rom_5CADC6)
	.endif
	.globl gUnknown_85CADCB
gUnknown_85CADCB: @ 0x085CADCB

