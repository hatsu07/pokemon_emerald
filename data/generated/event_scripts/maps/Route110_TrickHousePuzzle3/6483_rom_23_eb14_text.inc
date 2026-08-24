	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:304 Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened
	.globl Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened
Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened: @ 0x0823EA05
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あこがれ」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened) > 0x43
	.error "Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened) < 0x43
	.space 0x43 - (. - Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:307 Route110_TrickHousePuzzle3_Text_JustinIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle3_Text_JustinIntro
Route110_TrickHousePuzzle3_Text_JustinIntro: @ 0x0823EA48
	.string "なんども おなじ ところに\nもどって きちゃうよー!{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_JustinIntro) > 0x1b
	.error "Route110_TrickHousePuzzle3_Text_JustinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_JustinIntro) < 0x1b
	.space 0x1b - (. - Route110_TrickHousePuzzle3_Text_JustinIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:310 Route110_TrickHousePuzzle3_Text_JustinDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle3_Text_JustinDefeat
Route110_TrickHousePuzzle3_Text_JustinDefeat: @ 0x0823EA63
	.string "ぼくが こまってるのに\nダメおしで かつなんて ひどいよー!{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_JustinDefeat) > 0x1f
	.error "Route110_TrickHousePuzzle3_Text_JustinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_JustinDefeat) < 0x1f
	.space 0x1f - (. - Route110_TrickHousePuzzle3_Text_JustinDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:313 Route110_TrickHousePuzzle3_Text_JustinPostBattle
	.globl Route110_TrickHousePuzzle3_Text_JustinPostBattle
Route110_TrickHousePuzzle3_Text_JustinPostBattle: @ 0x0823EA82
	.string "とびら だらけで\nせまくて こわいよー!{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_JustinPostBattle) > 0x15
	.error "Route110_TrickHousePuzzle3_Text_JustinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_JustinPostBattle) < 0x15
	.space 0x15 - (. - Route110_TrickHousePuzzle3_Text_JustinPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:316 Route110_TrickHousePuzzle3_Text_MarthaIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle3_Text_MarthaIntro
Route110_TrickHousePuzzle3_Text_MarthaIntro: @ 0x0823EA97
	.string "なにが なんだか わからなくて\nかなしく なってきたわ……{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_MarthaIntro) > 0x1e
	.error "Route110_TrickHousePuzzle3_Text_MarthaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_MarthaIntro) < 0x1e
	.space 0x1e - (. - Route110_TrickHousePuzzle3_Text_MarthaIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:319 Route110_TrickHousePuzzle3_Text_MarthaDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle3_Text_MarthaDefeat
Route110_TrickHousePuzzle3_Text_MarthaDefeat: @ 0x0823EAB5
	.string "ひっ ひどいわ……{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_MarthaDefeat) > 0xa
	.error "Route110_TrickHousePuzzle3_Text_MarthaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_MarthaDefeat) < 0xa
	.space 0xa - (. - Route110_TrickHousePuzzle3_Text_MarthaDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:322 Route110_TrickHousePuzzle3_Text_MarthaPostBattle
	.globl Route110_TrickHousePuzzle3_Text_MarthaPostBattle
Route110_TrickHousePuzzle3_Text_MarthaPostBattle: @ 0x0823EABF
	.string "どうせ あたしは よわいし\nほうこうおんちよー!{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_MarthaPostBattle) > 0x19
	.error "Route110_TrickHousePuzzle3_Text_MarthaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_MarthaPostBattle) < 0x19
	.space 0x19 - (. - Route110_TrickHousePuzzle3_Text_MarthaPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:325 Route110_TrickHousePuzzle3_Text_AlanIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle3_Text_AlanIntro
Route110_TrickHousePuzzle3_Text_AlanIntro: @ 0x0823EAD8
	.string "いったい なんの ために\nこんな やしきが あるんだろう……?{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_AlanIntro) > 0x20
	.error "Route110_TrickHousePuzzle3_Text_AlanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_AlanIntro) < 0x20
	.space 0x20 - (. - Route110_TrickHousePuzzle3_Text_AlanIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:328 Route110_TrickHousePuzzle3_Text_AlanDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle3_Text_AlanDefeat
Route110_TrickHousePuzzle3_Text_AlanDefeat: @ 0x0823EAF8
	.string "いったい なぜ\nわしは まけて しまったんだろう……?{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_AlanDefeat) > 0x1c
	.error "Route110_TrickHousePuzzle3_Text_AlanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_AlanDefeat) < 0x1c
	.space 0x1c - (. - Route110_TrickHousePuzzle3_Text_AlanDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:331 Route110_TrickHousePuzzle3_Text_AlanPostBattle
	.globl Route110_TrickHousePuzzle3_Text_AlanPostBattle
Route110_TrickHousePuzzle3_Text_AlanPostBattle: @ 0x0823EB14
	.string "いったい どれくらいの しかけが\nこの やしきに あるんだろう…?\pきみなら わかるかもな{EOS}"
	.if (. - Route110_TrickHousePuzzle3_Text_AlanPostBattle) > 0x2e
	.error "Route110_TrickHousePuzzle3_Text_AlanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle3_Text_AlanPostBattle) < 0x2e
	.space 0x2e - (. - Route110_TrickHousePuzzle3_Text_AlanPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x23EB42, size 0x63
	.byte 0x00, 0x69, 0x21, 0xAE, 0x40, 0x00, 0x00, 0x06, 0x01, 0x55, 0xEB, 0x23, 0x08, 0x05, 0xAC, 0xD1
	.byte 0x23, 0x08, 0x02, 0x16, 0xAE, 0x40, 0x01, 0x00, 0x05, 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00
	.byte 0xAC, 0x01, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle4_Text_CoraIntro
	.4byte Route110_TrickHousePuzzle4_Text_CoraDefeat
	.byte 0x0F, 0x00, 0x32, 0xEC
	.byte 0x23, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xBC, 0x00, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle4_Text_YujiIntro
	.byte 0x73
	.byte 0xEC, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHousePuzzle4_Text_YujiPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xAD, 0x01
	.byte 0x00, 0x00, 0xA7, 0xEC, 0x23, 0x08, 0xC4, 0xEC, 0x23, 0x08, 0x0F, 0x00, 0xC9, 0xEC, 0x23, 0x08
	.byte 0x09, 0x06, 0x02
