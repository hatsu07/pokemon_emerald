	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:39 Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened
	.globl Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened
Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened: @ 0x0823DF53
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま すてき」\p…… …… ……\pかぎの はずれる おとがした!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened) > 0x42
	.error "Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened) < 0x42
	.space 0x42 - (. - Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:42 Route110_TrickHousePuzzle1_Text_SallyIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle1_Text_SallyIntro
Route110_TrickHousePuzzle1_Text_SallyIntro: @ 0x0823DF95
	.string "おぼえさせた ばかりの いあいぎりで\nきって きって きりまくりよ!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_SallyIntro) > 0x23
	.error "Route110_TrickHousePuzzle1_Text_SallyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_SallyIntro) < 0x23
	.space 0x23 - (. - Route110_TrickHousePuzzle1_Text_SallyIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:45 Route110_TrickHousePuzzle1_Text_SallyDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle1_Text_SallyDefeat
Route110_TrickHousePuzzle1_Text_SallyDefeat: @ 0x0823DFB8
	.string "ほんき ださないでよー!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_SallyDefeat) > 0xd
	.error "Route110_TrickHousePuzzle1_Text_SallyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_SallyDefeat) < 0xd
	.space 0xd - (. - Route110_TrickHousePuzzle1_Text_SallyDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:48 Route110_TrickHousePuzzle1_Text_SallyPostBattle
	.globl Route110_TrickHousePuzzle1_Text_SallyPostBattle
Route110_TrickHousePuzzle1_Text_SallyPostBattle: @ 0x0823DFC5
	.string "きっても きっても あきないわ!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_SallyPostBattle) > 0x11
	.error "Route110_TrickHousePuzzle1_Text_SallyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_SallyPostBattle) < 0x11
	.space 0x11 - (. - Route110_TrickHousePuzzle1_Text_SallyPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:51 Route110_TrickHousePuzzle1_Text_EddieIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle1_Text_EddieIntro
Route110_TrickHousePuzzle1_Text_EddieIntro: @ 0x0823DFD6
	.string "へんな やしきに\nまよいこんじゃった……"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_EddieIntro) > 0x15
	.error "Route110_TrickHousePuzzle1_Text_EddieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_EddieIntro) < 0x15
	.space 0x15 - (. - Route110_TrickHousePuzzle1_Text_EddieIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:54 Route110_TrickHousePuzzle1_Text_EddieDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle1_Text_EddieDefeat
Route110_TrickHousePuzzle1_Text_EddieDefeat: @ 0x0823DFEB
	.string "おまけに まけちゃった……"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_EddieDefeat) > 0xe
	.error "Route110_TrickHousePuzzle1_Text_EddieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_EddieDefeat) < 0xe
	.space 0xe - (. - Route110_TrickHousePuzzle1_Text_EddieDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:57 Route110_TrickHousePuzzle1_Text_EddiePostBattle
	.globl Route110_TrickHousePuzzle1_Text_EddiePostBattle
Route110_TrickHousePuzzle1_Text_EddiePostBattle: @ 0x0823DFF9
	.string "さらに まよっちゃった……\nでられない……"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_EddiePostBattle) > 0x16
	.error "Route110_TrickHousePuzzle1_Text_EddiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_EddiePostBattle) < 0x16
	.space 0x16 - (. - Route110_TrickHousePuzzle1_Text_EddiePostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:60 Route110_TrickHousePuzzle1_Text_RobinIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle1_Text_RobinIntro
Route110_TrickHousePuzzle1_Text_RobinIntro: @ 0x0823E00F
	.string "カラクリだいおう って\nなにもの なのかしら?"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_RobinIntro) > 0x18
	.error "Route110_TrickHousePuzzle1_Text_RobinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_RobinIntro) < 0x18
	.space 0x18 - (. - Route110_TrickHousePuzzle1_Text_RobinIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:63 Route110_TrickHousePuzzle1_Text_RobinDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle1_Text_RobinDefeat
Route110_TrickHousePuzzle1_Text_RobinDefeat: @ 0x0823E027
	.string "きを とられていたら\nまけちゃったわ!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_RobinDefeat) > 0x14
	.error "Route110_TrickHousePuzzle1_Text_RobinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_RobinDefeat) < 0x14
	.space 0x14 - (. - Route110_TrickHousePuzzle1_Text_RobinDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle1/scripts.inc:66 Route110_TrickHousePuzzle1_Text_RobinPostBattle
	.globl Route110_TrickHousePuzzle1_Text_RobinPostBattle
Route110_TrickHousePuzzle1_Text_RobinPostBattle: @ 0x0823E03B
	.string "つよいわ!\nあなたも なにもの なの?"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle1_Text_RobinPostBattle) > 0x14
	.error "Route110_TrickHousePuzzle1_Text_RobinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle1_Text_RobinPostBattle) < 0x14
	.space 0x14 - (. - Route110_TrickHousePuzzle1_Text_RobinPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x23E04F, size 0x147
	.byte 0x05, 0x5A, 0xE0, 0x23, 0x08, 0x03, 0x87, 0xE0, 0x23, 0x08, 0x00, 0x21, 0x01, 0x40, 0x01, 0x00
	.byte 0x07, 0x01, 0x05, 0xE1, 0x23, 0x08, 0x21, 0x02, 0x40, 0x01, 0x00, 0x07, 0x01, 0x18, 0xE1, 0x23
	.byte 0x08, 0x21, 0x03, 0x40, 0x01, 0x00, 0x07, 0x01, 0x2B, 0xE1, 0x23, 0x08, 0x21, 0x04, 0x40, 0x01
	.byte 0x00, 0x07, 0x01, 0x3E, 0xE1, 0x23, 0x08, 0x02, 0x16, 0x01, 0x40, 0x00, 0x00, 0x16, 0x02, 0x40
	.byte 0x00, 0x00, 0x16, 0x03, 0x40, 0x00, 0x00, 0x16, 0x04, 0x40, 0x00, 0x00, 0x02, 0x69, 0x21, 0xAC
	.byte 0x40, 0x00, 0x00, 0x06, 0x01, 0xAE, 0xE0, 0x23, 0x08, 0x05, 0xAC, 0xD1, 0x23, 0x08, 0x02, 0x16
	.byte 0xAC, 0x40, 0x01, 0x00, 0x05, 0xB6, 0xD1, 0x23, 0x08, 0x02, 0x69, 0x16, 0x01, 0x40, 0x01, 0x00
	.byte 0x2F, 0x15, 0x00, 0x04, 0x05, 0xE1, 0x23, 0x08, 0x25, 0x8E, 0x00, 0x6B, 0x02, 0x69, 0x16, 0x02
	.byte 0x40, 0x01, 0x00, 0x2F, 0x15, 0x00, 0x04, 0x18, 0xE1, 0x23, 0x08, 0x25, 0x8E, 0x00, 0x6B, 0x02
	.byte 0x69, 0x16, 0x03, 0x40, 0x01, 0x00, 0x2F, 0x15, 0x00, 0x04, 0x2B, 0xE1, 0x23, 0x08, 0x25, 0x8E
	.byte 0x00, 0x6B, 0x02, 0x69, 0x16, 0x04, 0x40, 0x01, 0x00, 0x2F, 0x15, 0x00, 0x04, 0x3E, 0xE1, 0x23
	.byte 0x08, 0x25, 0x8E, 0x00, 0x6B, 0x02, 0xA2, 0x0B, 0x00, 0x0C, 0x00, 0x59, 0x02, 0x00, 0x00, 0xA2
	.byte 0x01, 0x00, 0x0D, 0x00, 0x6A, 0x02, 0x00, 0x00, 0x03, 0xA2, 0x00, 0x00, 0x04, 0x00, 0x59, 0x02
	.byte 0x00, 0x00, 0xA2, 0x05, 0x00, 0x06, 0x00, 0x6A, 0x02, 0x00, 0x00, 0x03, 0xA2, 0x0E, 0x00, 0x05
	.byte 0x00, 0x59, 0x02, 0x00, 0x00, 0xA2, 0x07, 0x00, 0x0F, 0x00, 0x6A, 0x02, 0x00, 0x00, 0x03, 0xA2
	.byte 0x07, 0x00, 0x0B, 0x00, 0x59, 0x02, 0x00, 0x00, 0xA2, 0x0E, 0x00, 0x0C, 0x00, 0x6A, 0x02, 0x00
	.byte 0x00, 0x03, 0x5C, 0x00, 0x12, 0x01, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle2_Text_TedIntro
	.4byte Route110_TrickHousePuzzle2_Text_TedDefeat
	.byte 0x0F, 0x00
	.4byte Route110_TrickHousePuzzle2_Text_TedPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x13, 0x01, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle2_Text_PaulIntro
	.4byte Route110_TrickHousePuzzle2_Text_PaulDefeat
	.byte 0x0F, 0x00, 0x55, 0xE2, 0x23, 0x08, 0x09, 0x06, 0x02
	.byte 0x5C, 0x00, 0x19, 0x01, 0x00, 0x00
	.4byte Route110_TrickHousePuzzle2_Text_GeorgiaIntro
	.4byte Route110_TrickHousePuzzle2_Text_GeorgiaDefeat
	.byte 0x0F, 0x00
	.byte 0xB7, 0xE2, 0x23, 0x08, 0x09, 0x06, 0x02
