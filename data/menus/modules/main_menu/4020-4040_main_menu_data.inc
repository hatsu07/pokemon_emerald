	@ src/main_menu.c:264 gText_MainMenuNewGame
	.globl gText_MainMenuNewGame
gText_MainMenuNewGame: @ 0x085C8C70
	.string "さいしょから はじめる{EOS}"
	.if (. - gText_MainMenuNewGame) > 0xc
	.error "gText_MainMenuNewGame may not grow beyond its original slot"
	.endif
	.if (. - gText_MainMenuNewGame) < 0xc
	.space 0xc - (. - gText_MainMenuNewGame)
	.endif

	@ src/main_menu.c:265 gText_MainMenuContinue
	.globl gText_MainMenuContinue
gText_MainMenuContinue: @ 0x085C8C7C
	.string "つづきから はじめる{EOS}"
	.if (. - gText_MainMenuContinue) > 0xb
	.error "gText_MainMenuContinue may not grow beyond its original slot"
	.endif
	.if (. - gText_MainMenuContinue) < 0xb
	.space 0xb - (. - gText_MainMenuContinue)
	.endif

	@ src/main_menu.c:266 gText_MainMenuOption
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C87
gText_Rom_5C8C87: @ 0x085C8C87
	.string "せっていを かえる{EOS}"
	.if (. - gText_Rom_5C8C87) != 0xa
	.error "gText_Rom_5C8C87 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8C8D
	.set gText_Rom_5C8C8D, gText_Rom_5C8C87 + 0x6

	@ src/main_menu.c:267 gText_MainMenuMysteryGift (+1 aliases)
	.globl gText_MainMenuMysteryGift
gText_MainMenuMysteryGift: @ 0x085C8C91
	.string "ふしぎな おくりもの{EOS}"
	.if (. - gText_MainMenuMysteryGift) > 0xb
	.error "gText_MainMenuMysteryGift may not grow beyond its original slot"
	.endif
	.if (. - gText_MainMenuMysteryGift) < 0xb
	.space 0xb - (. - gText_MainMenuMysteryGift)
	.endif

	@ src/main_menu.c:268 gText_MainMenuMysteryGift2
	.globl gText_MainMenuMysteryGift2
gText_MainMenuMysteryGift2: @ 0x085C8C9C
	.string "ふしぎな もらいもの{EOS}"
	.if (. - gText_MainMenuMysteryGift2) > 0xb
	.error "gText_MainMenuMysteryGift2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MainMenuMysteryGift2) < 0xb
	.space 0xb - (. - gText_MainMenuMysteryGift2)
	.endif

	@ src/main_menu.c:269 gText_MainMenuMysteryEvents
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MainMenuMysteryEvents
gText_MainMenuMysteryEvents: @ 0x085C8CA7
	.string "ふしぎな できごと{EOS}"
	.if (. - gText_MainMenuMysteryEvents) != 0xa
	.error "gText_MainMenuMysteryEvents must retain its original byte length"
	.endif
	.globl gText_Rom_5C8CAC
	.set gText_Rom_5C8CAC, gText_MainMenuMysteryEvents + 0x5

	@ src/main_menu.c:270 gText_WirelessNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_WirelessNotConnected
gText_WirelessNotConnected: @ 0x085C8CB1
	.string "ワイヤレスアダプタ が\nつながっていません{EOS}"
	.if (. - gText_WirelessNotConnected) != 0x16
	.error "gText_WirelessNotConnected must retain its original byte length"
	.endif
	.globl gText_Rom_5C8CC3
	.set gText_Rom_5C8CC3, gText_WirelessNotConnected + 0x12

	@ src/main_menu.c:271 gText_MysteryGiftCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MysteryGiftCantUse
gText_MysteryGiftCantUse: @ 0x085C8CC7
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなもらいもの は できません{EOS}"
	.if (. - gText_MysteryGiftCantUse) != 0x24
	.error "gText_MysteryGiftCantUse must retain its original byte length"
	.endif
	.globl gText_Rom_5C8CE7
	.set gText_Rom_5C8CE7, gText_MysteryGiftCantUse + 0x20

	@ src/main_menu.c:272 gText_MysteryEventsCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MysteryEventsCantUse
gText_MysteryEventsCantUse: @ 0x085C8CEB
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなできごと は できません{EOS}"
	.if (. - gText_MysteryEventsCantUse) != 0x23
	.error "gText_MysteryEventsCantUse must retain its original byte length"
	.endif
