.if .L__inc_fragment_select_fedab3ea4f48 == 1
	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_ContinueMenuPlayer_Copy_MainMenu
gText_ContinueMenuPlayer_Copy_MainMenu: @ 0x084E8CB0
	.string "しゅじんこう{EOS}"
	.if (. - gText_ContinueMenuPlayer_Copy_MainMenu) > 0x7
	.error "gText_ContinueMenuPlayer_Copy_MainMenu may not grow beyond its original slot"
	.endif
	.if (. - gText_ContinueMenuPlayer_Copy_MainMenu) < 0x7
	.space 0x7 - (. - gText_ContinueMenuPlayer_Copy_MainMenu)
	.endif

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_ContinueMenuBadges
gText_ContinueMenuBadges: @ 0x084E8CB7
	.string "もっているバッジ{EOS}"
	.if (. - gText_ContinueMenuBadges) > 0x9
	.error "gText_ContinueMenuBadges may not grow beyond its original slot"
	.endif
	.if (. - gText_ContinueMenuBadges) < 0x9
	.space 0x9 - (. - gText_ContinueMenuBadges)
	.endif
.elseif .L__inc_fragment_select_fedab3ea4f48 == 2
	@ src/fame_checker.c:502 sText_FameCheckerName_Birch (+1 aliases)
	.globl sText_FameCheckerName_Birch
sText_FameCheckerName_Birch: @ 0x085C8C6B
	.string "オダマキ{EOS}"
	.if (. - sText_FameCheckerName_Birch) > 0x5
	.error "sText_FameCheckerName_Birch may not grow beyond its original slot"
	.endif
	.if (. - sText_FameCheckerName_Birch) < 0x5
	.space 0x5 - (. - sText_FameCheckerName_Birch)
	.endif

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
	.globl gText_MainMenuOption
gText_MainMenuOption: @ 0x085C8C87
	.string "せっていを かえる{EOS}"
	.if (. - gText_MainMenuOption) != 0xa
	.error "gText_MainMenuOption must retain its original byte length"
	.endif

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

	@ src/main_menu.c:270 gText_WirelessNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_WirelessNotConnected
gText_WirelessNotConnected: @ 0x085C8CB1
	.string "ワイヤレスアダプタ が\nつながっていません{EOS}"
	.if (. - gText_WirelessNotConnected) != 0x16
	.error "gText_WirelessNotConnected must retain its original byte length"
	.endif

	@ src/main_menu.c:271 gText_MysteryGiftCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MysteryGiftCantUse
gText_MysteryGiftCantUse: @ 0x085C8CC7
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなもらいもの は できません{EOS}"
	.if (. - gText_MysteryGiftCantUse) != 0x24
	.error "gText_MysteryGiftCantUse must retain its original byte length"
	.endif

	@ src/main_menu.c:272 gText_MysteryEventsCantUse
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MysteryEventsCantUse
gText_MysteryEventsCantUse: @ 0x085C8CEB
	.string "ワイヤレスアダプタ を さしたまま\nふしぎなできごと は できません{EOS}"
	.if (. - gText_MysteryEventsCantUse) != 0x23
	.error "gText_MysteryEventsCantUse must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_fedab3ea4f48 == 3

	@ src/main_menu.c:259 gText_SaveFileCorrupted
	.globl gText_SaveFileCorrupted
gText_SaveFileCorrupted: @ 0x085C8D44
	.string "レポートが せいかくに かかれていないので\nそのまえのレポートを よみます!{EOS}"
	.if (. - gText_SaveFileCorrupted) > 0x27
	.error "gText_SaveFileCorrupted may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveFileCorrupted) < 0x27
	.space 0x27 - (. - gText_SaveFileCorrupted)
	.endif

	@ src/main_menu.c:260 gText_SaveFileErased
	.globl gText_SaveFileErased
gText_SaveFileErased: @ 0x085C8D6B
	.string "レポートの ないようが きえてしまった!{EOS}"
	.if (. - gText_SaveFileErased) > 0x15
	.error "gText_SaveFileErased may not grow beyond its original slot"
	.endif
	.if (. - gText_SaveFileErased) < 0x15
	.space 0x15 - (. - gText_SaveFileErased)
	.endif

	@ src/main_menu.c:261 gJPText_No1MSubCircuit
	.globl gJPText_No1MSubCircuit
gJPText_No1MSubCircuit: @ 0x085C8D80
	.string "1Mサブきばんが ささっていません!{EOS}"
	.if (. - gJPText_No1MSubCircuit) > 0x13
	.error "gJPText_No1MSubCircuit may not grow beyond its original slot"
	.endif
	.if (. - gJPText_No1MSubCircuit) < 0x13
	.space 0x13 - (. - gJPText_No1MSubCircuit)
	.endif

	@ src/main_menu.c:262 gText_BatteryRunDry
	.globl gText_BatteryRunDry
gText_BatteryRunDry: @ 0x085C8D93
	.string "でんちぎれの ために\nとけいが うごかなくなりました\pとけいに かんけいする できごとは おきませんが\nゲームを つづけて あそぶことは できます{EOS}"
	.if (. - gText_BatteryRunDry) > 0x4a
	.error "gText_BatteryRunDry may not grow beyond its original slot"
	.endif
	.if (. - gText_BatteryRunDry) < 0x4a
	.space 0x4a - (. - gText_BatteryRunDry)
	.endif

	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_ContinueMenuPlayer
gText_ContinueMenuPlayer: @ 0x085C8DDD
	.string "しゅじんこう{EOS}"
	.if (. - gText_ContinueMenuPlayer) > 0x7
	.error "gText_ContinueMenuPlayer may not grow beyond its original slot"
	.endif
	.if (. - gText_ContinueMenuPlayer) < 0x7
	.space 0x7 - (. - gText_ContinueMenuPlayer)
	.endif
.elseif .L__inc_fragment_select_fedab3ea4f48 == 4
	@ src/main_menu.c:522 main_menu_line_522
	.globl gText_Rom_5C8F7C
gText_Rom_5C8F7C: @ 0x085C8F7C
	.string "モニカ{EOS}"
	.if (. - gText_Rom_5C8F7C) > 0x4
	.error "gText_Rom_5C8F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F7C) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F7C)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:523 main_menu_line_523
	.globl gText_Rom_5C8F82
gText_Rom_5C8F82: @ 0x085C8F82
	.string "ユウメ{EOS}"
	.if (. - gText_Rom_5C8F82) > 0x4
	.error "gText_Rom_5C8F82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F82) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F82)
	.endif
	.space 0x2, 0xFF

	@ asm/main_menu.s:2379 Task_NewGameBirchSpeech_ThisIsAPokemon
	.globl gText_Rom_5C8F88
gText_Rom_5C8F88: @ 0x085C8F88
	.string "ポケットモンスター\n……すなわち　ポケモン{PAUSE}{0x60}\p{EOS}"
	.if (. - gText_Rom_5C8F88) > 0x1a
	.error "gText_Rom_5C8F88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F88) < 0x1a
	.space 0x1a - (. - gText_Rom_5C8F88)
	.endif
.elseif .L__inc_fragment_select_fedab3ea4f48 == 5

	@ asm/main_menu.s:4999 MainMenu_FormatSavegamePlayer
	.globl gText_Rom_5CCCBD
gText_Rom_5CCCBD: @ 0x085CCCBD
	.string "しゅじんこう　{0xFD}{0x02}{EOS}"
	.if (. - gText_Rom_5CCCBD) > 0xa
	.error "gText_Rom_5CCCBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCBD) < 0xa
	.space 0xa - (. - gText_Rom_5CCCBD)
	.endif

	@ asm/main_menu.s:5043 MainMenu_FormatSavegameTime
	.globl gText_Rom_5CCCC7
gText_Rom_5CCCC7: @ 0x085CCCC7
	.string "プレイじかん　{0xFD}{0x02}:{0xFD}{0x03}{EOS}"
	.if (. - gText_Rom_5CCCC7) > 0xd
	.error "gText_Rom_5CCCC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCC7) < 0xd
	.space 0xd - (. - gText_Rom_5CCCC7)
	.endif

	@ asm/main_menu.s:5099 MainMenu_FormatSavegamePokedex
	.globl gText_Rom_5CCCD4
gText_Rom_5CCCD4: @ 0x085CCCD4
	.string "ポケモンずかん　{0xFD}{0x02}ひき{EOS}"
	.if (. - gText_Rom_5CCCD4) > 0xd
	.error "gText_Rom_5CCCD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCD4) < 0xd
	.space 0xd - (. - gText_Rom_5CCCD4)
	.endif

	@ asm/main_menu.s:5152 MainMenu_FormatSavegameBadges
	.globl gText_Rom_5CCCE1
gText_Rom_5CCCE1: @ 0x085CCCE1
	.string "もっているバッジ　{0xFD}{0x02}こ{EOS}"
	.if (. - gText_Rom_5CCCE1) > 0xd
	.error "gText_Rom_5CCCE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCE1) < 0xd
	.space 0xd - (. - gText_Rom_5CCCE1)
	.endif
.endif
