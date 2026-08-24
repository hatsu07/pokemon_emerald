	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:304 Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_23EA05
gText_Rom_23EA05: @ 0x0823EA05
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あこがれ」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_23EA05) > 0x43
	.error "gText_Rom_23EA05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA05) < 0x43
	.space 0x43 - (. - gText_Rom_23EA05)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:307 Route110_TrickHousePuzzle3_Text_JustinIntro (+1 aliases)
	.globl gText_Rom_23EA48
gText_Rom_23EA48: @ 0x0823EA48
	.string "なんども おなじ ところに\nもどって きちゃうよー!{EOS}"
	.if (. - gText_Rom_23EA48) > 0x1b
	.error "gText_Rom_23EA48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA48) < 0x1b
	.space 0x1b - (. - gText_Rom_23EA48)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:310 Route110_TrickHousePuzzle3_Text_JustinDefeat (+1 aliases)
	.globl gText_Rom_23EA63
gText_Rom_23EA63: @ 0x0823EA63
	.string "ぼくが こまってるのに\nダメおしで かつなんて ひどいよー!{EOS}"
	.if (. - gText_Rom_23EA63) > 0x1f
	.error "gText_Rom_23EA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA63) < 0x1f
	.space 0x1f - (. - gText_Rom_23EA63)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:313 Route110_TrickHousePuzzle3_Text_JustinPostBattle
	.globl gText_Rom_23EA82
gText_Rom_23EA82: @ 0x0823EA82
	.string "とびら だらけで\nせまくて こわいよー!{EOS}"
	.if (. - gText_Rom_23EA82) > 0x15
	.error "gText_Rom_23EA82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA82) < 0x15
	.space 0x15 - (. - gText_Rom_23EA82)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:316 Route110_TrickHousePuzzle3_Text_MarthaIntro (+1 aliases)
	.globl gText_Rom_23EA97
gText_Rom_23EA97: @ 0x0823EA97
	.string "なにが なんだか わからなくて\nかなしく なってきたわ……{EOS}"
	.if (. - gText_Rom_23EA97) > 0x1e
	.error "gText_Rom_23EA97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EA97) < 0x1e
	.space 0x1e - (. - gText_Rom_23EA97)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:319 Route110_TrickHousePuzzle3_Text_MarthaDefeat (+1 aliases)
	.globl gText_Rom_23EAB5
gText_Rom_23EAB5: @ 0x0823EAB5
	.string "ひっ ひどいわ……{EOS}"
	.if (. - gText_Rom_23EAB5) > 0xa
	.error "gText_Rom_23EAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAB5) < 0xa
	.space 0xa - (. - gText_Rom_23EAB5)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:322 Route110_TrickHousePuzzle3_Text_MarthaPostBattle
	.globl gText_Rom_23EABF
gText_Rom_23EABF: @ 0x0823EABF
	.string "どうせ あたしは よわいし\nほうこうおんちよー!{EOS}"
	.if (. - gText_Rom_23EABF) > 0x19
	.error "gText_Rom_23EABF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EABF) < 0x19
	.space 0x19 - (. - gText_Rom_23EABF)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:325 Route110_TrickHousePuzzle3_Text_AlanIntro (+1 aliases)
	.globl gText_Rom_23EAD8
gText_Rom_23EAD8: @ 0x0823EAD8
	.string "いったい なんの ために\nこんな やしきが あるんだろう……?{EOS}"
	.if (. - gText_Rom_23EAD8) > 0x20
	.error "gText_Rom_23EAD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAD8) < 0x20
	.space 0x20 - (. - gText_Rom_23EAD8)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:328 Route110_TrickHousePuzzle3_Text_AlanDefeat (+1 aliases)
	.globl gText_Rom_23EAF8
gText_Rom_23EAF8: @ 0x0823EAF8
	.string "いったい なぜ\nわしは まけて しまったんだろう……?{EOS}"
	.if (. - gText_Rom_23EAF8) > 0x1c
	.error "gText_Rom_23EAF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EAF8) < 0x1c
	.space 0x1c - (. - gText_Rom_23EAF8)
	.endif
	@ data/maps/Route110_TrickHousePuzzle3/scripts.inc:331 Route110_TrickHousePuzzle3_Text_AlanPostBattle
	.globl gText_Rom_23EB14
gText_Rom_23EB14: @ 0x0823EB14
	.string "いったい どれくらいの しかけが\nこの やしきに あるんだろう…?\pきみなら わかるかもな{EOS}"
	.if (. - gText_Rom_23EB14) > 0x2e
	.error "gText_Rom_23EB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EB14) < 0x2e
	.space 0x2e - (. - gText_Rom_23EB14)
	.endif
	@ Embedded ROM bytes: file offset 0x23EB42, size 0x63
	.byte 0x00, 0x69, 0x21, 0xAE, 0x40, 0x00, 0x00, 0x06, 0x01, 0x55, 0xEB, 0x23, 0x08, 0x05, 0xAC, 0xD1
	.byte 0x23, 0x08, 0x02, 0x16, 0xAE, 0x40, 0x01, 0x00, 0x05, 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x5C, 0x00
	.byte 0xAC, 0x01, 0x00, 0x00, 0xE9, 0xEB, 0x23, 0x08, 0x12, 0xEC, 0x23, 0x08, 0x0F, 0x00, 0x32, 0xEC
	.byte 0x23, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xBC, 0x00, 0x00, 0x00, 0x55, 0xEC, 0x23, 0x08, 0x73
	.byte 0xEC, 0x23, 0x08, 0x0F, 0x00, 0x88, 0xEC, 0x23, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0xAD, 0x01
	.byte 0x00, 0x00, 0xA7, 0xEC, 0x23, 0x08, 0xC4, 0xEC, 0x23, 0x08, 0x0F, 0x00, 0xC9, 0xEC, 0x23, 0x08
	.byte 0x09, 0x06, 0x02
