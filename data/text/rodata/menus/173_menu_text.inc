	@ src/main_menu.c:264 gText_MainMenuNewGame
	.globl gText_Rom_5C8C70
gText_Rom_5C8C70: @ 0x085C8C70
	.string "さいしょから はじめる$"
	.if (. - gText_Rom_5C8C70) > 0xc
	.error "gText_Rom_5C8C70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C70) < 0xc
	.space 0xc - (. - gText_Rom_5C8C70)
	.endif
	.globl gUnknown_85C8C7C
gUnknown_85C8C7C: @ 0x085C8C7C

	@ src/main_menu.c:265 gText_MainMenuContinue
	.globl gText_Rom_5C8C7C
gText_Rom_5C8C7C: @ 0x085C8C7C
	.string "つづきから はじめる$"
	.if (. - gText_Rom_5C8C7C) > 0xb
	.error "gText_Rom_5C8C7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C7C) < 0xb
	.space 0xb - (. - gText_Rom_5C8C7C)
	.endif
	.globl gUnknown_85C8C87
gUnknown_85C8C87: @ 0x085C8C87

	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C87
gText_Rom_5C8C87: @ 0x085C8C87
	.string "せっていを かえる$"
	.if (. - gText_Rom_5C8C87) != 0xa
	.error "gText_Rom_5C8C87 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8C8D
	.set gText_Rom_5C8C8D, gText_Rom_5C8C87 + 0x6
	.globl gUnknown_85C8C91
gUnknown_85C8C91: @ 0x085C8C91

	@ src/main_menu.c:267 gText_MainMenuMysteryGift (+1 aliases)
	.globl gText_Rom_5C8C91
gText_Rom_5C8C91: @ 0x085C8C91
	.string "ふしぎな おくりもの$"
	.if (. - gText_Rom_5C8C91) > 0xb
	.error "gText_Rom_5C8C91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C91) < 0xb
	.space 0xb - (. - gText_Rom_5C8C91)
	.endif
	.globl gUnknown_85C8C9C
gUnknown_85C8C9C: @ 0x085C8C9C

	@ src/main_menu.c:268 gText_MainMenuMysteryGift2
	.globl gText_Rom_5C8C9C
gText_Rom_5C8C9C: @ 0x085C8C9C
	.string "ふしぎな もらいもの$"
	.if (. - gText_Rom_5C8C9C) > 0xb
	.error "gText_Rom_5C8C9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C9C) < 0xb
	.space 0xb - (. - gText_Rom_5C8C9C)
	.endif
	.globl gUnknown_85C8CA7
gUnknown_85C8CA7: @ 0x085C8CA7

	@ src/main_menu.c:269 gText_MainMenuMysteryEvents
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CA7
gText_Rom_5C8CA7: @ 0x085C8CA7
	.string "ふしぎな できごと$"
	.if (. - gText_Rom_5C8CA7) != 0xa
	.error "gText_Rom_5C8CA7 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8CAC
	.set gText_Rom_5C8CAC, gText_Rom_5C8CA7 + 0x5
	.globl gUnknown_85C8CB1
gUnknown_85C8CB1: @ 0x085C8CB1

	@ src/main_menu.c:270 gText_WirelessNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CB1
gText_Rom_5C8CB1: @ 0x085C8CB1
	.string "ワイヤレスアダプタ が\nつながっていません$"
	.if (. - gText_Rom_5C8CB1) != 0x16
	.error "gText_Rom_5C8CB1 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8CC3
	.set gText_Rom_5C8CC3, gText_Rom_5C8CB1 + 0x12
	.globl gUnknown_85C8CC7
gUnknown_85C8CC7: @ 0x085C8CC7

	@ src/main_menu.c:271 gText_MysteryGiftCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CC7
gText_Rom_5C8CC7: @ 0x085C8CC7
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなもらいもの は できません$"
	.if (. - gText_Rom_5C8CC7) != 0x24
	.error "gText_Rom_5C8CC7 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8CE7
	.set gText_Rom_5C8CE7, gText_Rom_5C8CC7 + 0x20
	.globl gUnknown_85C8CEB
gUnknown_85C8CEB: @ 0x085C8CEB

	@ src/main_menu.c:272 gText_MysteryEventsCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CEB
gText_Rom_5C8CEB: @ 0x085C8CEB
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなできごと は できません$"
	.if (. - gText_Rom_5C8CEB) != 0x23
	.error "gText_Rom_5C8CEB must retain its original byte length"
	.endif
	.globl gText_Rom_5C8D0A
	.set gText_Rom_5C8D0A, gText_Rom_5C8CEB + 0x1f
	.incbin "baserom.gba", 0x5c8d0e, 0x18

	@ src/strings.c:875 gJPText_PleaseWaitAMoment
	.globl gText_Rom_5C8D26
gText_Rom_5C8D26: @ 0x085C8D26
	.string "しばらく おまちください$"
	.if (. - gText_Rom_5C8D26) > 0xd
	.error "gText_Rom_5C8D26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D26) < 0xd
	.space 0xd - (. - gText_Rom_5C8D26)
	.endif
	.incbin "baserom.gba", 0x5c8d33, 0x11
	.globl gUnknown_85C8D44
gUnknown_85C8D44: @ 0x085C8D44

	@ src/main_menu.c:259 gText_SaveFileCorrupted
	.globl gText_Rom_5C8D44
gText_Rom_5C8D44: @ 0x085C8D44
	.string "レポートが せいかくに かかれていないので\nそのまえのレポートを よみます!$"
	.if (. - gText_Rom_5C8D44) > 0x27
	.error "gText_Rom_5C8D44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D44) < 0x27
	.space 0x27 - (. - gText_Rom_5C8D44)
	.endif
	.globl gUnknown_85C8D6B
gUnknown_85C8D6B: @ 0x085C8D6B

	@ src/main_menu.c:260 gText_SaveFileErased
	.globl gText_Rom_5C8D6B
gText_Rom_5C8D6B: @ 0x085C8D6B
	.string "レポートの ないようが きえてしまった!$"
	.if (. - gText_Rom_5C8D6B) > 0x15
	.error "gText_Rom_5C8D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D6B) < 0x15
	.space 0x15 - (. - gText_Rom_5C8D6B)
	.endif
	.globl gUnknown_85C8D80
gUnknown_85C8D80: @ 0x085C8D80

	@ src/main_menu.c:261 gJPText_No1MSubCircuit
	.globl gText_Rom_5C8D80
gText_Rom_5C8D80: @ 0x085C8D80
	.string "1Mサブきばんが ささっていません!$"
	.if (. - gText_Rom_5C8D80) > 0x13
	.error "gText_Rom_5C8D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D80) < 0x13
	.space 0x13 - (. - gText_Rom_5C8D80)
	.endif
	.globl gUnknown_85C8D93
gUnknown_85C8D93: @ 0x085C8D93

	@ src/main_menu.c:262 gText_BatteryRunDry
	.globl gText_Rom_5C8D93
gText_Rom_5C8D93: @ 0x085C8D93
	.string "でんちぎれの ために\nとけいが うごかなくなりました\pとけいに かんけいする できごとは おきませんが\nゲームを つづけて あそぶことは できます$"
	.if (. - gText_Rom_5C8D93) > 0x4a
	.error "gText_Rom_5C8D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D93) < 0x4a
	.space 0x4a - (. - gText_Rom_5C8D93)
	.endif

	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_5C8DDD
gText_Rom_5C8DDD: @ 0x085C8DDD
	.string "しゅじんこう$"
	.if (. - gText_Rom_5C8DDD) > 0x7
	.error "gText_Rom_5C8DDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DDD) < 0x7
	.space 0x7 - (. - gText_Rom_5C8DDD)
	.endif

