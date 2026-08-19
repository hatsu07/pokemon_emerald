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
	@ pret/pokeemerald-jp direct xref for 0x085C9B07: fldeff_softboiled.s: sub_081616BC
	.globl gFldeffSoftboiledData_085C9B07
gFldeffSoftboiledData_085C9B07: @ 0x085C9B07
	@ analyzed canonical ROM range 0x085C9B07-0x085C9B19
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x13 bytes=19
	.byte 0x0F, 0x19, 0x9F, 0x59, 0x73, 0x7E, 0x16, 0x1A, 0xFE, 0x12, 0x06, 0x04, 0x1F, 0x0E, 0x2E, 0xAB
	.byte 0xFC, 0x09, 0xFF

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
	@ pret/pokeemerald-jp direct xref for 0x085C9B59: party_menu.s: sub_081B871C
	.globl gPartyMenuData_085C9B59
gPartyMenuData_085C9B59: @ 0x085C9B59
	@ analyzed canonical ROM range 0x085C9B59-0x085C9B75
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1D bytes=29
	.byte 0xFD, 0x02, 0x1A, 0x00, 0x10, 0x10, 0x06, 0x03, 0x10, 0x22, 0x19, 0xFE, 0x3A, 0x2E, 0x07, 0x37
	.byte 0x00, 0x19, 0x0A, 0x50, 0x13, 0x02, 0x1F, 0x0E, 0x2E, 0xAB, 0xFC, 0x09, 0xFF

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
