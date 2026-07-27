	@ src/battle_message.c:409 battle_message_line_409
	.globl gText_Rom_5AABCF
gText_Rom_5AABCF: @ 0x085AABCF
	.string "すべての ステータスが\nもとに もどった!$"
	.if (. - gText_Rom_5AABCF) > 0x16
	.error "gText_Rom_5AABCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABCF) < 0x16
	.space 0x16 - (. - gText_Rom_5AABCF)
	.endif

	@ src/battle_message.c:410 battle_message_line_410
	.globl gText_Rom_5AABE5
gText_Rom_5AABE5: @ 0x085AABE5
	.string "こばんが あたりに ちらばった!$"
	.if (. - gText_Rom_5AABE5) > 0x11
	.error "gText_Rom_5AABE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABE5) < 0x11
	.space 0x11 - (. - gText_Rom_5AABE5)
	.endif

	@ src/battle_message.c:411 battle_message_line_411
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AABF6
gText_Rom_5AABF6: @ 0x085AABF6
	.string "しかし ぶんしんを だすには\nたいりょくが たりなかった!$"
	.if (. - gText_Rom_5AABF6) != 0x1e
	.error "gText_Rom_5AABF6 must retain its original byte length"
	.endif
	.globl gText_Rom_5AAC0F
	.set gText_Rom_5AAC0F, gText_Rom_5AABF6 + 0x19

	@ src/battle_message.c:412 battle_message_line_412
	.globl gText_Rom_5AAC14
gText_Rom_5AAC14: @ 0x085AAC14
	.string "おたがいの たいりょくを\nわかちあった!$"
	.if (. - gText_Rom_5AAC14) > 0x15
	.error "gText_Rom_5AAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC14) < 0x15
	.space 0x15 - (. - gText_Rom_5AAC14)
	.endif

	@ src/battle_message.c:413 battle_message_line_413
	.globl gText_Rom_5AAC29
gText_Rom_5AAC29: @ 0x085AAC29
	.string "すずのねが ひびきわたった!$"
	.if (. - gText_Rom_5AAC29) > 0xf
	.error "gText_Rom_5AAC29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC29) < 0xf
	.space 0xf - (. - gText_Rom_5AAC29)
	.endif

	@ src/battle_message.c:414 battle_message_line_414
	.globl gText_Rom_5AAC38
gText_Rom_5AAC38: @ 0x085AAC38
	.string "おたがいのポケモンは\n3ターンごに ほろびてしまう!$"
	.if (. - gText_Rom_5AAC38) > 0x1b
	.error "gText_Rom_5AAC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC38) < 0x1b
	.space 0x1b - (. - gText_Rom_5AAC38)
	.endif

	@ src/battle_message.c:415 battle_message_line_415
	.globl gText_Rom_5AAC53
gText_Rom_5AAC53: @ 0x085AAC53
	.string "わざの のこりポイントが ない!\p$"
	.if (. - gText_Rom_5AAC53) > 0x12
	.error "gText_Rom_5AAC53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC53) < 0x12
	.space 0x12 - (. - gText_Rom_5AAC53)
	.endif

	@ src/battle_message.c:416 battle_message_line_416
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAC65
gText_Rom_5AAC65: @ 0x085AAC65
	.string "しかし\nわざの のこりポイントが なかった!$"
	.if (. - gText_Rom_5AAC65) != 0x17
	.error "gText_Rom_5AAC65 must retain its original byte length"
	.endif
	.globl gText_Rom_5AAC77
	.set gText_Rom_5AAC77, gText_Rom_5AAC65 + 0x12

	@ src/battle_message.c:433 battle_message_line_433
	.globl gText_Rom_5AAC7C
gText_Rom_5AAC7C: @ 0x085AAC7C
	.string "{B_ATK_NAME_WITH_PREFIX}は ねむったまま\nめいれいを むしした!$"
	.if (. - gText_Rom_5AAC7C) > 0x17
	.error "gText_Rom_5AAC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC7C) < 0x17
	.space 0x17 - (. - gText_Rom_5AAC7C)
	.endif

	@ src/battle_message.c:434 battle_message_line_434
	.globl gText_Rom_5AAC93
gText_Rom_5AAC93: @ 0x085AAC93
	.string "{B_ATK_NAME_WITH_PREFIX}は めいれいを むしした!$"
	.if (. - gText_Rom_5AAC93) > 0x10
	.error "gText_Rom_5AAC93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC93) < 0x10
	.space 0x10 - (. - gText_Rom_5AAC93)
	.endif

	@ src/battle_message.c:435 battle_message_line_435
	.globl gText_Rom_5AACA3
gText_Rom_5AACA3: @ 0x085AACA3
	.string "{B_ATK_NAME_WITH_PREFIX}は ひるねを はじめた!$"
	.if (. - gText_Rom_5AACA3) > 0xf
	.error "gText_Rom_5AACA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACA3) < 0xf
	.space 0xf - (. - gText_Rom_5AACA3)
	.endif

	@ src/battle_message.c:436 battle_message_line_436
	.globl gText_Rom_5AACB2
gText_Rom_5AACB2: @ 0x085AACB2
	.string "{B_ATK_NAME_WITH_PREFIX}は なまけている!$"
	.if (. - gText_Rom_5AACB2) > 0xc
	.error "gText_Rom_5AACB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACB2) < 0xc
	.space 0xc - (. - gText_Rom_5AACB2)
	.endif

	@ src/battle_message.c:437 battle_message_line_437
	.globl gText_Rom_5AACBE
gText_Rom_5AACBE: @ 0x085AACBE
	.string "{B_ATK_NAME_WITH_PREFIX}は いうことを きかない!$"
	.if (. - gText_Rom_5AACBE) > 0x10
	.error "gText_Rom_5AACBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACBE) < 0x10
	.space 0x10 - (. - gText_Rom_5AACBE)
	.endif

	@ src/battle_message.c:438 battle_message_line_438
	.globl gText_Rom_5AACCE
gText_Rom_5AACCE: @ 0x085AACCE
	.string "{B_ATK_NAME_WITH_PREFIX}は そっぽを むいた!$"
	.if (. - gText_Rom_5AACCE) > 0xe
	.error "gText_Rom_5AACCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACCE) < 0xe
	.space 0xe - (. - gText_Rom_5AACCE)
	.endif

	@ src/battle_message.c:439 battle_message_line_439
	.globl gText_Rom_5AACDC
gText_Rom_5AACDC: @ 0x085AACDC
	.string "{B_ATK_NAME_WITH_PREFIX}は しらんぷりした!$"
	.if (. - gText_Rom_5AACDC) > 0xd
	.error "gText_Rom_5AACDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACDC) < 0xd
	.space 0xd - (. - gText_Rom_5AACDC)
	.endif
	.incbin "baserom.gba", 0x5aace9, 0x39
	.globl gUnknown_85AAD22
gUnknown_85AAD22: @ 0x085AAD22
	.incbin "baserom.gba", 0x5aad22, 0x16

	@ src/battle_message.c:441 battle_message_line_441
	.globl gText_Rom_5AAD38
gText_Rom_5AAD38: @ 0x085AAD38
	.string "{B_PLAYER_NAME}は\n{B_OPPONENT_MON1_NAME}に ちかづいた!$"
	.if (. - gText_Rom_5AAD38) > 0xf
	.error "gText_Rom_5AAD38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD38) < 0xf
	.space 0xf - (. - gText_Rom_5AAD38)
	.endif

	@ src/battle_message.c:442 battle_message_line_442
	.globl gText_Rom_5AAD47
gText_Rom_5AAD47: @ 0x085AAD47
	.string "{B_PLAYER_NAME}は\nこれいじょう ちかづけない!$"
	.if (. - gText_Rom_5AAD47) > 0x13
	.error "gText_Rom_5AAD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD47) < 0x13
	.space 0x13 - (. - gText_Rom_5AAD47)
	.endif

	@ src/battle_message.c:443 battle_message_line_443
	.globl gText_Rom_5AAD5A
gText_Rom_5AAD5A: @ 0x085AAD5A
	.string "{B_OPPONENT_MON1_NAME}は\nこちらの ようすを うかがっている!$"
	.if (. - gText_Rom_5AAD5A) > 0x17
	.error "gText_Rom_5AAD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD5A) < 0x17
	.space 0x17 - (. - gText_Rom_5AAD5A)
	.endif

	@ src/battle_message.c:444 battle_message_line_444
	.globl gText_Rom_5AAD71
gText_Rom_5AAD71: @ 0x085AAD71
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nきょうみを しめしている ようだ!$"
	.if (. - gText_Rom_5AAD71) > 0x1a
	.error "gText_Rom_5AAD71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD71) < 0x1a
	.space 0x1a - (. - gText_Rom_5AAD71)
	.endif

	@ src/battle_message.c:445 battle_message_line_445
	.globl gText_Rom_5AAD8B
gText_Rom_5AAD8B: @ 0x085AAD8B
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nむちゅうに なっている ようだ!$"
	.if (. - gText_Rom_5AAD8B) > 0x19
	.error "gText_Rom_5AAD8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD8B) < 0x19
	.space 0x19 - (. - gText_Rom_5AAD8B)
	.endif

	@ src/battle_message.c:446 battle_message_line_446
	.globl gText_Rom_5AADA4
gText_Rom_5AADA4: @ 0x085AADA4
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nみむきも しない ようだ!$"
	.if (. - gText_Rom_5AADA4) > 0x16
	.error "gText_Rom_5AADA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AADA4) < 0x16
	.space 0x16 - (. - gText_Rom_5AADA4)
	.endif
	.incbin "baserom.gba", 0x5aadba, 0x13

	@ src/battle_message.c:448 battle_message_line_448
	.globl gText_Rom_5AADCD
gText_Rom_5AADCD: @ 0x085AADCD
	.string "{PLAY_SE SE_DING_DONG}アナウンス『ピンポーン! サファリボールが\nなくなったので しゅうりょうでーす!\p$"
	.if (. - gText_Rom_5AADCD) > 0x2e
	.error "gText_Rom_5AADCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AADCD) < 0x2e
	.space 0x2e - (. - gText_Rom_5AADCD)
	.endif
	.incbin "baserom.gba", 0x5aadfb, 0x11
	.globl gUnknown_85AAE0C
gUnknown_85AAE0C: @ 0x085AAE0C
	.incbin "baserom.gba", 0x5aae0c, 0x16
	.globl gUnknown_85AAE22
gUnknown_85AAE22: @ 0x085AAE22
	.incbin "baserom.gba", 0x5aae22, 0x14
	.globl gUnknown_85AAE36
gUnknown_85AAE36: @ 0x085AAE36
	.incbin "baserom.gba", 0x5aae36, 0x18
	.globl gUnknown_85AAE4E
gUnknown_85AAE4E: @ 0x085AAE4E
	.incbin "baserom.gba", 0x5aae4e, 0x1a
	.globl gUnknown_85AAE68
gUnknown_85AAE68: @ 0x085AAE68
	.incbin "baserom.gba", 0x5aae68, 0x17
	.globl gUnknown_85AAE7F
gUnknown_85AAE7F: @ 0x085AAE7F

	@ src/battle_message.c:97 sText_LinkTrainerWantsToBattle
	.globl gText_Rom_5AAE7F
gText_Rom_5AAE7F: @ 0x085AAE7F
	.string "{B_LINK_OPPONENT1_NAME}が\nしょうぶを しかけてきた！$"
	.if (. - gText_Rom_5AAE7F) > 0x12
	.error "gText_Rom_5AAE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAE7F) < 0x12
	.space 0x12 - (. - gText_Rom_5AAE7F)
	.endif
	.globl gUnknown_85AAE91
gUnknown_85AAE91: @ 0x085AAE91

	@ src/battle_message.c:98 sText_TwoLinkTrainersWantToBattle
	.globl gText_Rom_5AAE91
gText_Rom_5AAE91: @ 0x085AAE91
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}が\nしょうぶを しかけてきた！$"
	.if (. - gText_Rom_5AAE91) > 0x16
	.error "gText_Rom_5AAE91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAE91) < 0x16
	.space 0x16 - (. - gText_Rom_5AAE91)
	.endif
	.globl gUnknown_85AAEA7
gUnknown_85AAEA7: @ 0x085AAEA7
	.incbin "baserom.gba", 0x5aaea7, 0x13
	.globl gUnknown_85AAEBA
gUnknown_85AAEBA: @ 0x085AAEBA
	.incbin "baserom.gba", 0x5aaeba, 0x17
	.globl gUnknown_85AAED1
gUnknown_85AAED1: @ 0x085AAED1
	.incbin "baserom.gba", 0x5aaed1, 0x13
	.globl gUnknown_85AAEE4
gUnknown_85AAEE4: @ 0x085AAEE4
	.incbin "baserom.gba", 0x5aaee4, 0xf
	.globl gUnknown_85AAEF3
gUnknown_85AAEF3: @ 0x085AAEF3
	.incbin "baserom.gba", 0x5aaef3, 0x13
	.globl gUnknown_85AAF06
gUnknown_85AAF06: @ 0x085AAF06
	.incbin "baserom.gba", 0x5aaf06, 0x1e
	.globl gUnknown_85AAF24
gUnknown_85AAF24: @ 0x085AAF24

	@ src/battle_message.c:103 sText_LinkTrainerSentOutPkmn
	.globl gText_Rom_5AAF24
gText_Rom_5AAF24: @ 0x085AAF24
	.string "{B_LINK_OPPONENT1_NAME}は\n{B_BUFF1}を くりだした！$"
	.if (. - gText_Rom_5AAF24) > 0xf
	.error "gText_Rom_5AAF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF24) < 0xf
	.space 0xf - (. - gText_Rom_5AAF24)
	.endif
	.globl gUnknown_85AAF33
gUnknown_85AAF33: @ 0x085AAF33

	@ src/battle_message.c:108 sText_LinkTrainerMultiSentOutPkmn
	.globl gText_Rom_5AAF33
gText_Rom_5AAF33: @ 0x085AAF33
	.string "{B_LINK_SCR_TRAINER_NAME}は\n{B_BUFF1}を くりだした！$"
	.if (. - gText_Rom_5AAF33) > 0xf
	.error "gText_Rom_5AAF33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF33) < 0xf
	.space 0xf - (. - gText_Rom_5AAF33)
	.endif
	.globl gUnknown_85AAF42
gUnknown_85AAF42: @ 0x085AAF42

	@ src/battle_message.c:109 sText_GoPkmn
	.globl gText_Rom_5AAF42
gText_Rom_5AAF42: @ 0x085AAF42
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！$"
	.if (. - gText_Rom_5AAF42) > 0x9
	.error "gText_Rom_5AAF42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF42) < 0x9
	.space 0x9 - (. - gText_Rom_5AAF42)
	.endif
	.globl gUnknown_85AAF4B
gUnknown_85AAF4B: @ 0x085AAF4B

	@ src/battle_message.c:110 sText_GoTwoPkmn
	.globl gText_Rom_5AAF4B
gText_Rom_5AAF4B: @ 0x085AAF4B
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}と {B_PLAYER_MON2_NAME}！$"
	.if (. - gText_Rom_5AAF4B) > 0xd
	.error "gText_Rom_5AAF4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF4B) < 0xd
	.space 0xd - (. - gText_Rom_5AAF4B)
	.endif
	.globl gUnknown_85AAF58
gUnknown_85AAF58: @ 0x085AAF58

	@ src/battle_message.c:111 sText_GoPkmn2
	.globl gText_Rom_5AAF58
gText_Rom_5AAF58: @ 0x085AAF58
	.string "ゆけっ！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF58) > 0x9
	.error "gText_Rom_5AAF58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF58) < 0x9
	.space 0x9 - (. - gText_Rom_5AAF58)
	.endif
	.globl gUnknown_85AAF61
gUnknown_85AAF61: @ 0x085AAF61

	@ src/battle_message.c:112 sText_DoItPkmn
	.globl gText_Rom_5AAF61
gText_Rom_5AAF61: @ 0x085AAF61
	.string "いってこい！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF61) > 0xb
	.error "gText_Rom_5AAF61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF61) < 0xb
	.space 0xb - (. - gText_Rom_5AAF61)
	.endif
	.globl gUnknown_85AAF6C
gUnknown_85AAF6C: @ 0x085AAF6C

	@ src/battle_message.c:113 sText_GoForItPkmn
	.globl gText_Rom_5AAF6C
gText_Rom_5AAF6C: @ 0x085AAF6C
	.string "がんばれ！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF6C) > 0xa
	.error "gText_Rom_5AAF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF6C) < 0xa
	.space 0xa - (. - gText_Rom_5AAF6C)
	.endif
	.globl gUnknown_85AAF76
gUnknown_85AAF76: @ 0x085AAF76

	@ src/battle_message.c:115 sText_YourFoesWeakGetEmPkmn
	.globl gText_Rom_5AAF76
gText_Rom_5AAF76: @ 0x085AAF76
	.string "あいてが よわっている!\nチャンスだ！ {B_BUFF1}！$"
	.if (. - gText_Rom_5AAF76) > 0x18
	.error "gText_Rom_5AAF76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF76) < 0x18
	.space 0x18 - (. - gText_Rom_5AAF76)
	.endif
	.globl gUnknown_85AAF8E
gUnknown_85AAF8E: @ 0x085AAF8E
	.incbin "baserom.gba", 0x5aaf8e, 0x18
	.globl gUnknown_85AAFA6
gUnknown_85AAFA6: @ 0x085AAFA6

	@ src/battle_message.c:123 sText_PkmnThatsEnough
	.globl gText_Rom_5AAFA6
gText_Rom_5AAFA6: @ 0x085AAFA6
	.string "{B_BUFF1} もういい！\nもどれ！$"
	.if (. - gText_Rom_5AAFA6) > 0xe
	.error "gText_Rom_5AAFA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFA6) < 0xe
	.space 0xe - (. - gText_Rom_5AAFA6)
	.endif
	.globl gUnknown_85AAFB4
gUnknown_85AAFB4: @ 0x085AAFB4

	@ src/battle_message.c:124 sText_PkmnComeBack
	.globl gText_Rom_5AAFB4
gText_Rom_5AAFB4: @ 0x085AAFB4
	.string "{B_BUFF1}\nもどれ！$"
	.if (. - gText_Rom_5AAFB4) > 0x8
	.error "gText_Rom_5AAFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFB4) < 0x8
	.space 0x8 - (. - gText_Rom_5AAFB4)
	.endif
	.globl gUnknown_85AAFBC
gUnknown_85AAFBC: @ 0x085AAFBC

	@ src/battle_message.c:125 sText_PkmnOkComeBack
	.globl gText_Rom_5AAFBC
gText_Rom_5AAFBC: @ 0x085AAFBC
	.string "{B_BUFF1} いいぞ！\nもどれ！$"
	.if (. - gText_Rom_5AAFBC) > 0xd
	.error "gText_Rom_5AAFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFBC) < 0xd
	.space 0xd - (. - gText_Rom_5AAFBC)
	.endif
	.globl gUnknown_85AAFC9
gUnknown_85AAFC9: @ 0x085AAFC9

	@ src/battle_message.c:126 sText_PkmnGoodComeBack
	.globl gText_Rom_5AAFC9
gText_Rom_5AAFC9: @ 0x085AAFC9
	.string "{B_BUFF1} よくやった！\nもどれ！$"
	.if (. - gText_Rom_5AAFC9) > 0xf
	.error "gText_Rom_5AAFC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAFC9) < 0xf
	.space 0xf - (. - gText_Rom_5AAFC9)
	.endif
	.globl gUnknown_85AAFD8
gUnknown_85AAFD8: @ 0x085AAFD8
	.incbin "baserom.gba", 0x5aafd8, 0x13
	.globl gUnknown_85AAFEB
gUnknown_85AAFEB: @ 0x085AAFEB
	.incbin "baserom.gba", 0x5aafeb, 0xf
	.globl gUnknown_85AAFFA
gUnknown_85AAFFA: @ 0x085AAFFA
	.incbin "baserom.gba", 0x5aaffa, 0xf
	.globl gUnknown_85AB009
gUnknown_85AB009: @ 0x085AB009

	@ src/battle_message.c:131 sText_WildPkmnPrefix (+1 aliases)
	.globl gText_Rom_5AB009
gText_Rom_5AB009: @ 0x085AB009
	.string "やせいの $"
	.if (. - gText_Rom_5AB009) > 0x6
	.error "gText_Rom_5AB009 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB009) < 0x6
	.space 0x6 - (. - gText_Rom_5AB009)
	.endif
	.globl gUnknown_85AB00F
gUnknown_85AB00F: @ 0x085AB00F

	@ src/battle_message.c:132 sText_FoePkmnPrefix (+1 aliases)
	.globl gText_Rom_5AB00F
gText_Rom_5AB00F: @ 0x085AB00F
	.string "あいての $"
	.if (. - gText_Rom_5AB00F) > 0x6
	.error "gText_Rom_5AB00F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB00F) < 0x6
	.space 0x6 - (. - gText_Rom_5AB00F)
	.endif
	.incbin "baserom.gba", 0x5ab015, 0x1
	.globl gUnknown_85AB016
gUnknown_85AB016: @ 0x085AB016

	@ src/battle_message.c:136 sText_FoePkmnPrefix2 (+2 aliases)
	.globl gText_Rom_5AB016
gText_Rom_5AB016: @ 0x085AB016
	.string "あいての$"
	.if (. - gText_Rom_5AB016) > 0x5
	.error "gText_Rom_5AB016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB016) < 0x5
	.space 0x5 - (. - gText_Rom_5AB016)
	.endif
	.globl gUnknown_85AB01B
gUnknown_85AB01B: @ 0x085AB01B

	@ src/battle_message.c:137 sText_AllyPkmnPrefix (+2 aliases)
	.globl gText_Rom_5AB01B
gText_Rom_5AB01B: @ 0x085AB01B
	.string "みかたの$"
	.if (. - gText_Rom_5AB01B) > 0x5
	.error "gText_Rom_5AB01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB01B) < 0x5
	.space 0x5 - (. - gText_Rom_5AB01B)
	.endif
	.globl gUnknown_85AB020
gUnknown_85AB020: @ 0x085AB020

	@ src/battle_message.c:138 sText_FoePkmnPrefix3
	.globl gText_Rom_5AB020
gText_Rom_5AB020: @ 0x085AB020
	.string "あいては$"
	.if (. - gText_Rom_5AB020) > 0x5
	.error "gText_Rom_5AB020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB020) < 0x5
	.space 0x5 - (. - gText_Rom_5AB020)
	.endif
	.globl gUnknown_85AB025
gUnknown_85AB025: @ 0x085AB025

	@ src/battle_message.c:139 sText_AllyPkmnPrefix2
	.globl gText_Rom_5AB025
gText_Rom_5AB025: @ 0x085AB025
	.string "みかたは$"
	.if (. - gText_Rom_5AB025) > 0x5
	.error "gText_Rom_5AB025 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB025) < 0x5
	.space 0x5 - (. - gText_Rom_5AB025)
	.endif
	.globl gUnknown_85AB02A
gUnknown_85AB02A: @ 0x085AB02A

	@ src/battle_message.c:140 sText_FoePkmnPrefix4
	.globl gText_Rom_5AB02A
gText_Rom_5AB02A: @ 0x085AB02A
	.string "あいてを$"
	.if (. - gText_Rom_5AB02A) > 0x5
	.error "gText_Rom_5AB02A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB02A) < 0x5
	.space 0x5 - (. - gText_Rom_5AB02A)
	.endif
	.globl gUnknown_85AB02F
gUnknown_85AB02F: @ 0x085AB02F

	@ src/battle_message.c:141 sText_AllyPkmnPrefix3
	.globl gText_Rom_5AB02F
gText_Rom_5AB02F: @ 0x085AB02F
	.string "みかたを$"
	.if (. - gText_Rom_5AB02F) > 0x5
	.error "gText_Rom_5AB02F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB02F) < 0x5
	.space 0x5 - (. - gText_Rom_5AB02F)
	.endif
	.globl gUnknown_85AB034
gUnknown_85AB034: @ 0x085AB034
	.incbin "baserom.gba", 0x5ab034, 0x8
	.globl gUnknown_85AB03C
gUnknown_85AB03C: @ 0x085AB03C

	@ src/battle_message.c:143 sText_ExclamationMark
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB03C
gText_Rom_5AB03C: @ 0x085AB03C
	.string "を つかった!$"
	.if (. - gText_Rom_5AB03C) != 0x8
	.error "gText_Rom_5AB03C must retain its original byte length"
	.endif
	.globl gText_Rom_5AB03F
	.set gText_Rom_5AB03F, gText_Rom_5AB03C + 0x3
	.globl gUnknown_85AB044
gUnknown_85AB044: @ 0x085AB044
	.incbin "baserom.gba", 0x5ab044, 0x4
	.globl gUnknown_85AB048
gUnknown_85AB048: @ 0x085AB048

	@ src/battle_message.c:145 sText_ExclamationMark3
	.globl gText_Rom_5AB048
gText_Rom_5AB048: @ 0x085AB048
	.string "を した!$"
	.if (. - gText_Rom_5AB048) > 0x6
	.error "gText_Rom_5AB048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB048) < 0x6
	.space 0x6 - (. - gText_Rom_5AB048)
	.endif
	.globl gUnknown_85AB04E
gUnknown_85AB04E: @ 0x085AB04E

	@ src/battle_message.c:146 sText_ExclamationMark4
	.globl gText_Rom_5AB04E
gText_Rom_5AB04E: @ 0x085AB04E
	.string " こうげき!$"
	.if (. - gText_Rom_5AB04E) > 0x7
	.error "gText_Rom_5AB04E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB04E) < 0x7
	.space 0x7 - (. - gText_Rom_5AB04E)
	.endif
	.globl gUnknown_85AB055
gUnknown_85AB055: @ 0x085AB055

	@ asm/battle_message.s:3005 ChooseTypeOfMoveUsedString
	.globl gText_Rom_5AB055
gText_Rom_5AB055: @ 0x085AB055
	.string "！$"
	.if (. - gText_Rom_5AB055) > 0x2
	.error "gText_Rom_5AB055 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB055) < 0x2
	.space 0x2 - (. - gText_Rom_5AB055)
	.endif

