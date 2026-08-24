	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:30 Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened
	.globl gText_Rom_2404BE
gText_Rom_2404BE: @ 0x082404BE
	.string "{PLAYER}は あいことばを\nとびらに かきつけた!\p「カラクリだいおう さま あいしてる」\p…… …… ……\pかぎの はずれる おとがした!{EOS}"
	.if (. - gText_Rom_2404BE) > 0x44
	.error "gText_Rom_2404BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2404BE) < 0x44
	.space 0x44 - (. - gText_Rom_2404BE)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:33 Route110_TrickHousePuzzle8_Text_VincentIntro (+1 aliases)
	.globl gText_Rom_240502
gText_Rom_240502: @ 0x08240502
	.string "ここまで こられる トレーナーは\nそうは いないよな!{EOS}"
	.if (. - gText_Rom_240502) > 0x1c
	.error "gText_Rom_240502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240502) < 0x1c
	.space 0x1c - (. - gText_Rom_240502)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:36 Route110_TrickHousePuzzle8_Text_VincentDefeat (+1 aliases)
	.globl gText_Rom_24051E
gText_Rom_24051E: @ 0x0824051E
	.string "つまり キミも\nすごいって ことだよな…{EOS}"
	.if (. - gText_Rom_24051E) > 0x15
	.error "gText_Rom_24051E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24051E) < 0x15
	.space 0x15 - (. - gText_Rom_24051E)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:39 Route110_TrickHousePuzzle8_Text_VincentPostBattle
	.globl gText_Rom_240533
gText_Rom_240533: @ 0x08240533
	.string "えっ ポケモンリーグの チャンピオンに\nかったって? す すごい……!{EOS}"
	.if (. - gText_Rom_240533) > 0x24
	.error "gText_Rom_240533 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240533) < 0x24
	.space 0x24 - (. - gText_Rom_240533)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:42 Route110_TrickHousePuzzle8_Text_KeiraIntro (+1 aliases)
	.globl gText_Rom_240557
gText_Rom_240557: @ 0x08240557
	.string "わたしと しょうぶ できるなんて\nあなた しあわせよ!{EOS}"
	.if (. - gText_Rom_240557) > 0x1c
	.error "gText_Rom_240557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240557) < 0x1c
	.space 0x1c - (. - gText_Rom_240557)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:45 Route110_TrickHousePuzzle8_Text_KeiraDefeat (+1 aliases)
	.globl gText_Rom_240573
gText_Rom_240573: @ 0x08240573
	.string "そんな わたしが\nまけるなんて……!{EOS}"
	.if (. - gText_Rom_240573) > 0x13
	.error "gText_Rom_240573 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240573) < 0x13
	.space 0x13 - (. - gText_Rom_240573)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:48 Route110_TrickHousePuzzle8_Text_KeiraPostBattle
	.globl gText_Rom_240586
gText_Rom_240586: @ 0x08240586
	.string "わたしに かつなんて きせきよ!\nじまん できる ことだわ!{EOS}"
	.if (. - gText_Rom_240586) > 0x1f
	.error "gText_Rom_240586 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240586) < 0x1f
	.space 0x1f - (. - gText_Rom_240586)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:51 Route110_TrickHousePuzzle8_Text_LeroyIntro (+1 aliases)
	.globl gText_Rom_2405A5
gText_Rom_2405A5: @ 0x082405A5
	.string "あなたも カラクリやしきに\nちょうせん しつづけて いるんですね!{EOS}"
	.if (. - gText_Rom_2405A5) > 0x22
	.error "gText_Rom_2405A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405A5) < 0x22
	.space 0x22 - (. - gText_Rom_2405A5)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:54 Route110_TrickHousePuzzle8_Text_LeroyDefeat (+1 aliases)
	.globl gText_Rom_2405C7
gText_Rom_2405C7: @ 0x082405C7
	.string "なるほど……\nすばらしい センスですね!{EOS}"
	.if (. - gText_Rom_2405C7) > 0x15
	.error "gText_Rom_2405C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405C7) < 0x15
	.space 0x15 - (. - gText_Rom_2405C7)
	.endif
	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:57 Route110_TrickHousePuzzle8_Text_LeroyPostBattle
	.globl gText_Rom_2405DC
gText_Rom_2405DC: @ 0x082405DC
	.string "あなた みたいな ひとが きてくれて\nカラクリだいおうも まんぞく でしょうね!{EOS}"
	.if (. - gText_Rom_2405DC) > 0x29
	.error "gText_Rom_2405DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405DC) < 0x29
	.space 0x29 - (. - gText_Rom_2405DC)
	.endif
	@ Embedded ROM bytes: file offset 0x240605, size 0x4A
	.byte 0x00, 0x6A, 0x5A, 0x0F, 0x00, 0x4F, 0x06, 0x24, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x69, 0x26, 0x0D
	.byte 0x80, 0xE3, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x2D, 0x06, 0x24, 0x08, 0x29, 0x8B
	.byte 0x08, 0x16, 0x01, 0x40, 0x01, 0x00, 0x6B, 0x02, 0x0F, 0x00, 0x90, 0x06, 0x24, 0x08, 0x09, 0x04
	.byte 0x68, 0x4F, 0xFF, 0x00, 0x42, 0x06, 0x24, 0x08, 0x51, 0x00, 0x00, 0x6B, 0x02, 0x0A, 0xFE, 0x69
	.byte 0x2A, 0x8B, 0x08, 0x16, 0x01, 0x40, 0x00, 0x00, 0x6B, 0x02
