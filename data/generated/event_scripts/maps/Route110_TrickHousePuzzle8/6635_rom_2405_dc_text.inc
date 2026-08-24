	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:30 Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened
	.globl Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened
Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened: @ 0x082404BE
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あいしてる」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened) > 0x44
	.error "Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened) < 0x44
	.space 0x44 - (. - Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:33 Route110_TrickHousePuzzle8_Text_VincentIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle8_Text_VincentIntro
Route110_TrickHousePuzzle8_Text_VincentIntro: @ 0x08240502
	.string "ここまで こられる トレーナーは\nそうは いないよな!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_VincentIntro) > 0x1c
	.error "Route110_TrickHousePuzzle8_Text_VincentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_VincentIntro) < 0x1c
	.space 0x1c - (. - Route110_TrickHousePuzzle8_Text_VincentIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:36 Route110_TrickHousePuzzle8_Text_VincentDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle8_Text_VincentDefeat
Route110_TrickHousePuzzle8_Text_VincentDefeat: @ 0x0824051E
	.string "つまり キミも\nすごいって ことだよな…{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_VincentDefeat) > 0x15
	.error "Route110_TrickHousePuzzle8_Text_VincentDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_VincentDefeat) < 0x15
	.space 0x15 - (. - Route110_TrickHousePuzzle8_Text_VincentDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:39 Route110_TrickHousePuzzle8_Text_VincentPostBattle
	.globl Route110_TrickHousePuzzle8_Text_VincentPostBattle
Route110_TrickHousePuzzle8_Text_VincentPostBattle: @ 0x08240533
	.string "えっ ポケモンリーグの チャンピオンに\nかったって? す すごい……!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_VincentPostBattle) > 0x24
	.error "Route110_TrickHousePuzzle8_Text_VincentPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_VincentPostBattle) < 0x24
	.space 0x24 - (. - Route110_TrickHousePuzzle8_Text_VincentPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:42 Route110_TrickHousePuzzle8_Text_KeiraIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle8_Text_KeiraIntro
Route110_TrickHousePuzzle8_Text_KeiraIntro: @ 0x08240557
	.string "わたしと しょうぶ できるなんて\nあなた しあわせよ!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_KeiraIntro) > 0x1c
	.error "Route110_TrickHousePuzzle8_Text_KeiraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_KeiraIntro) < 0x1c
	.space 0x1c - (. - Route110_TrickHousePuzzle8_Text_KeiraIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:45 Route110_TrickHousePuzzle8_Text_KeiraDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle8_Text_KeiraDefeat
Route110_TrickHousePuzzle8_Text_KeiraDefeat: @ 0x08240573
	.string "そんな わたしが\nまけるなんて……!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_KeiraDefeat) > 0x13
	.error "Route110_TrickHousePuzzle8_Text_KeiraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_KeiraDefeat) < 0x13
	.space 0x13 - (. - Route110_TrickHousePuzzle8_Text_KeiraDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:48 Route110_TrickHousePuzzle8_Text_KeiraPostBattle
	.globl Route110_TrickHousePuzzle8_Text_KeiraPostBattle
Route110_TrickHousePuzzle8_Text_KeiraPostBattle: @ 0x08240586
	.string "わたしに かつなんて きせきよ!\nじまん できる ことだわ!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_KeiraPostBattle) > 0x1f
	.error "Route110_TrickHousePuzzle8_Text_KeiraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_KeiraPostBattle) < 0x1f
	.space 0x1f - (. - Route110_TrickHousePuzzle8_Text_KeiraPostBattle)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:51 Route110_TrickHousePuzzle8_Text_LeroyIntro (+1 aliases)
	.globl Route110_TrickHousePuzzle8_Text_LeroyIntro
Route110_TrickHousePuzzle8_Text_LeroyIntro: @ 0x082405A5
	.string "あなたも カラクリやしきに\nちょうせん しつづけて いるんですね!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_LeroyIntro) > 0x22
	.error "Route110_TrickHousePuzzle8_Text_LeroyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_LeroyIntro) < 0x22
	.space 0x22 - (. - Route110_TrickHousePuzzle8_Text_LeroyIntro)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:54 Route110_TrickHousePuzzle8_Text_LeroyDefeat (+1 aliases)
	.globl Route110_TrickHousePuzzle8_Text_LeroyDefeat
Route110_TrickHousePuzzle8_Text_LeroyDefeat: @ 0x082405C7
	.string "なるほど……\nすばらしい センスですね!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_LeroyDefeat) > 0x15
	.error "Route110_TrickHousePuzzle8_Text_LeroyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_LeroyDefeat) < 0x15
	.space 0x15 - (. - Route110_TrickHousePuzzle8_Text_LeroyDefeat)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:57 Route110_TrickHousePuzzle8_Text_LeroyPostBattle
	.globl Route110_TrickHousePuzzle8_Text_LeroyPostBattle
Route110_TrickHousePuzzle8_Text_LeroyPostBattle: @ 0x082405DC
	.string "あなた みたいな ひとが きてくれて\nカラクリだいおうも まんぞく でしょうね!{EOS}"
	.if (. - Route110_TrickHousePuzzle8_Text_LeroyPostBattle) > 0x29
	.error "Route110_TrickHousePuzzle8_Text_LeroyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle8_Text_LeroyPostBattle) < 0x29
	.space 0x29 - (. - Route110_TrickHousePuzzle8_Text_LeroyPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x240605, size 0x4A
	.byte 0x00, 0x6A, 0x5A, 0x0F, 0x00, 0x4F, 0x06, 0x24, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x69, 0x26, 0x0D
	.byte 0x80, 0xE3, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x2D, 0x06, 0x24, 0x08, 0x29, 0x8B
	.byte 0x08, 0x16, 0x01, 0x40, 0x01, 0x00, 0x6B, 0x02, 0x0F, 0x00, 0x90, 0x06, 0x24, 0x08, 0x09, 0x04
	.byte 0x68, 0x4F, 0xFF, 0x00, 0x42, 0x06, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x02, 0x0A, 0xFE, 0x69
	.byte 0x2A, 0x8B, 0x08, 0x16, 0x01, 0x40, 0x00, 0x00, 0x6B, 0x02
