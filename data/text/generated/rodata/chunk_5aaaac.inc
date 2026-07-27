	@ src/battle_message.c:393 battle_message_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAAAC
gText_Rom_5AAAAC: @ 0x085AAAAC
	.string "しかし うまく きまらなかった！$"
	.if (. - gText_Rom_5AAAAC) != 0x11
	.error "gText_Rom_5AAAAC must retain its original byte length"
	.endif
	.globl gText_Rom_5AAAB8
	.set gText_Rom_5AAAB8, gText_Rom_5AAAAC + 0xc

	@ src/battle_message.c:394 battle_message_line_394
	.globl gText_Rom_5AAABD
gText_Rom_5AAABD: @ 0x085AAABD
	.string "わけも わからず\nじぶんを こうげきした!$"
	.if (. - gText_Rom_5AAABD) > 0x16
	.error "gText_Rom_5AAABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAABD) < 0x16
	.space 0x16 - (. - gText_Rom_5AAABD)
	.endif
	.incbin "baserom.gba", 0x5aaad3, 0x17

	@ src/battle_message.c:395 battle_message_line_395
	.globl gText_Rom_5AAAEA
gText_Rom_5AAAEA: @ 0x085AAAEA
	.string "あめが ふりはじめた!$"
	.if (. - gText_Rom_5AAAEA) > 0xc
	.error "gText_Rom_5AAAEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAEA) < 0xc
	.space 0xc - (. - gText_Rom_5AAAEA)
	.endif

	@ src/battle_message.c:396 battle_message_line_396
	.globl gText_Rom_5AAAF6
gText_Rom_5AAAF6: @ 0x085AAAF6
	.string "おおあめに なった!$"
	.if (. - gText_Rom_5AAAF6) > 0xb
	.error "gText_Rom_5AAAF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAF6) < 0xb
	.space 0xb - (. - gText_Rom_5AAAF6)
	.endif

	@ src/battle_message.c:397 battle_message_line_397
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB01
gText_Rom_5AAB01: @ 0x085AAB01
	.string "あめが ふりつづいている$"
	.if (. - gText_Rom_5AAB01) != 0xd
	.error "gText_Rom_5AAB01 must retain its original byte length"
	.endif
	.globl gText_Rom_5AAB0A
	.set gText_Rom_5AAB0A, gText_Rom_5AAB01 + 0x9

	@ src/battle_message.c:398 battle_message_line_398
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB0E
gText_Rom_5AAB0E: @ 0x085AAB0E
	.string "おおあめが ふりつづいている$"
	.if (. - gText_Rom_5AAB0E) != 0xf
	.error "gText_Rom_5AAB0E must retain its original byte length"
	.endif
	.globl gText_Rom_5AAB10
	.set gText_Rom_5AAB10, gText_Rom_5AAB0E + 0x2
	.globl gText_Rom_5AAB19
	.set gText_Rom_5AAB19, gText_Rom_5AAB0E + 0xb

	@ src/battle_message.c:399 battle_message_line_399
	.globl gText_Rom_5AAB1D
gText_Rom_5AAB1D: @ 0x085AAB1D
	.string "あめが ふりやんだ!$"
	.if (. - gText_Rom_5AAB1D) > 0xb
	.error "gText_Rom_5AAB1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB1D) < 0xb
	.space 0xb - (. - gText_Rom_5AAB1D)
	.endif

	@ src/battle_message.c:400 battle_message_line_400
	.globl gText_Rom_5AAB28
gText_Rom_5AAB28: @ 0x085AAB28
	.string "すなあらしが ふきはじめた!$"
	.if (. - gText_Rom_5AAB28) > 0xf
	.error "gText_Rom_5AAB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB28) < 0xf
	.space 0xf - (. - gText_Rom_5AAB28)
	.endif

	@ src/battle_message.c:401 battle_message_line_401
	.globl gText_Rom_5AAB37
gText_Rom_5AAB37: @ 0x085AAB37
	.string "すなあらしが ふきあれる$"
	.if (. - gText_Rom_5AAB37) > 0xd
	.error "gText_Rom_5AAB37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB37) < 0xd
	.space 0xd - (. - gText_Rom_5AAB37)
	.endif

	@ src/battle_message.c:402 battle_message_line_402
	.globl gText_Rom_5AAB44
gText_Rom_5AAB44: @ 0x085AAB44
	.string "すなあらしが おさまった!$"
	.if (. - gText_Rom_5AAB44) > 0xe
	.error "gText_Rom_5AAB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB44) < 0xe
	.space 0xe - (. - gText_Rom_5AAB44)
	.endif

	@ src/battle_message.c:403 battle_message_line_403
	.globl gText_Rom_5AAB52
gText_Rom_5AAB52: @ 0x085AAB52
	.string "ひざしが つよくなった!$"
	.if (. - gText_Rom_5AAB52) > 0xd
	.error "gText_Rom_5AAB52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB52) < 0xd
	.space 0xd - (. - gText_Rom_5AAB52)
	.endif

	@ src/battle_message.c:404 battle_message_line_404
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB5F
gText_Rom_5AAB5F: @ 0x085AAB5F
	.string "ひざしが つよい$"
	.if (. - gText_Rom_5AAB5F) != 0x9
	.error "gText_Rom_5AAB5F must retain its original byte length"
	.endif
	.globl gText_Rom_5AAB64
	.set gText_Rom_5AAB64, gText_Rom_5AAB5F + 0x5

	@ src/battle_message.c:405 battle_message_line_405
	.globl gText_Rom_5AAB68
gText_Rom_5AAB68: @ 0x085AAB68
	.string "ひざしが よわくなった!$"
	.if (. - gText_Rom_5AAB68) > 0xd
	.error "gText_Rom_5AAB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB68) < 0xd
	.space 0xd - (. - gText_Rom_5AAB68)
	.endif

	@ src/battle_message.c:406 battle_message_line_406 (+1 aliases)
	.globl gText_Rom_5AAB75
gText_Rom_5AAB75: @ 0x085AAB75
	.string "あられが ふりはじめた!$"
	.if (. - gText_Rom_5AAB75) > 0xd
	.error "gText_Rom_5AAB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB75) < 0xd
	.space 0xd - (. - gText_Rom_5AAB75)
	.endif

	@ src/battle_message.c:407 battle_message_line_407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB82
gText_Rom_5AAB82: @ 0x085AAB82
	.string "あられが ふりつづいている$"
	.if (. - gText_Rom_5AAB82) != 0xe
	.error "gText_Rom_5AAB82 must retain its original byte length"
	.endif
	.globl gText_Rom_5AAB8C
	.set gText_Rom_5AAB8C, gText_Rom_5AAB82 + 0xa

	@ src/battle_message.c:408 battle_message_line_408
	.globl gText_Rom_5AAB90
gText_Rom_5AAB90: @ 0x085AAB90
	.string "あられが ふりやんだ!$"
	.if (. - gText_Rom_5AAB90) > 0xc
	.error "gText_Rom_5AAB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB90) < 0xc
	.space 0xc - (. - gText_Rom_5AAB90)
	.endif
	.incbin "baserom.gba", 0x5aab9c, 0xd

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABA9
gText_Rom_5AABA9: @ 0x085AABA9
	.string "かった！$"
	.if (. - gText_Rom_5AABA9) > 0x5
	.error "gText_Rom_5AABA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABA9) < 0x5
	.space 0x5 - (. - gText_Rom_5AABA9)
	.endif
	.incbin "baserom.gba", 0x5aabae, 0xd

	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABBB
gText_Rom_5AABBB: @ 0x085AABBB
	.string "かった！$"
	.if (. - gText_Rom_5AABBB) > 0x5
	.error "gText_Rom_5AABBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABBB) < 0x5
	.space 0x5 - (. - gText_Rom_5AABBB)
	.endif
	.incbin "baserom.gba", 0x5aabc0, 0xf

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

	@ asm/pokemon.s:10677 sub_0806C9E8 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB057
gText_Rom_5AB057: @ 0x085AB057
	.string "たいりょく$"
	.if (. - gText_Rom_5AB057) != 0x6
	.error "gText_Rom_5AB057 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB058
	.set gText_Rom_5AB058, gText_Rom_5AB057 + 0x1

	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB05D
gText_Rom_5AB05D: @ 0x085AB05D
	.string "こうげきりょく$"
	.if (. - gText_Rom_5AB05D) > 0x8
	.error "gText_Rom_5AB05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB05D) < 0x8
	.space 0x8 - (. - gText_Rom_5AB05D)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB065
gText_Rom_5AB065: @ 0x085AB065
	.string "ぼうぎょりょく$"
	.if (. - gText_Rom_5AB065) > 0x8
	.error "gText_Rom_5AB065 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB065) < 0x8
	.space 0x8 - (. - gText_Rom_5AB065)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+5 aliases)
	.globl gText_Rom_5AB06D
gText_Rom_5AB06D: @ 0x085AB06D
	.string "すばやさ$"
	.if (. - gText_Rom_5AB06D) > 0x5
	.error "gText_Rom_5AB06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB06D) < 0x5
	.space 0x5 - (. - gText_Rom_5AB06D)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB072
gText_Rom_5AB072: @ 0x085AB072
	.string "とくこう$"
	.if (. - gText_Rom_5AB072) > 0x5
	.error "gText_Rom_5AB072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB072) < 0x5
	.space 0x5 - (. - gText_Rom_5AB072)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB077
gText_Rom_5AB077: @ 0x085AB077
	.string "とくぼう$"
	.if (. - gText_Rom_5AB077) > 0x5
	.error "gText_Rom_5AB077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB077) < 0x5
	.space 0x5 - (. - gText_Rom_5AB077)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB07C
gText_Rom_5AB07C: @ 0x085AB07C
	.string "めいちゅうりつ$"
	.if (. - gText_Rom_5AB07C) > 0x8
	.error "gText_Rom_5AB07C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB07C) < 0x8
	.space 0x8 - (. - gText_Rom_5AB07C)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB084
gText_Rom_5AB084: @ 0x085AB084
	.string "かいひりつ$"
	.if (. - gText_Rom_5AB084) > 0x6
	.error "gText_Rom_5AB084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB084) < 0x6
	.space 0x6 - (. - gText_Rom_5AB084)
	.endif
	.incbin "baserom.gba", 0x5ab08a, 0x2
	.globl gUnknown_85AB08C
gUnknown_85AB08C: @ 0x085AB08C
	.incbin "baserom.gba", 0x5ab08c, 0x20

	@ src/battle_message.c:170 battle_message_line_170
	.globl gText_Rom_5AB0AC
gText_Rom_5AB0AC: @ 0x085AB0AC
	.string "からすぎた！$"
	.if (. - gText_Rom_5AB0AC) > 0x7
	.error "gText_Rom_5AB0AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0AC) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0AC)
	.endif

	@ src/battle_message.c:171 battle_message_line_171
	.globl gText_Rom_5AB0B3
gText_Rom_5AB0B3: @ 0x085AB0B3
	.string "しぶすぎた！$"
	.if (. - gText_Rom_5AB0B3) > 0x7
	.error "gText_Rom_5AB0B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0B3) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0B3)
	.endif

	@ src/battle_message.c:172 battle_message_line_172
	.globl gText_Rom_5AB0BA
gText_Rom_5AB0BA: @ 0x085AB0BA
	.string "あますぎた！$"
	.if (. - gText_Rom_5AB0BA) > 0x7
	.error "gText_Rom_5AB0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0BA) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0BA)
	.endif

	@ src/battle_message.c:173 battle_message_line_173
	.globl gText_Rom_5AB0C1
gText_Rom_5AB0C1: @ 0x085AB0C1
	.string "にがすぎた！$"
	.if (. - gText_Rom_5AB0C1) > 0x7
	.error "gText_Rom_5AB0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C1) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0C1)
	.endif

	@ src/battle_message.c:174 battle_message_line_174
	.globl gText_Rom_5AB0C8
gText_Rom_5AB0C8: @ 0x085AB0C8
	.string "すっぱすぎた！$"
	.if (. - gText_Rom_5AB0C8) > 0x8
	.error "gText_Rom_5AB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C8) < 0x8
	.space 0x8 - (. - gText_Rom_5AB0C8)
	.endif
	.globl gUnknown_85AB0D0
gUnknown_85AB0D0: @ 0x085AB0D0
	.incbin "baserom.gba", 0x5ab0d0, 0x19

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0E9
gText_Rom_5AB0E9: @ 0x085AB0E9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0E9) != 0xa
	.error "gText_Rom_5AB0E9 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB0EB
	.set gText_Rom_5AB0EB, gText_Rom_5AB0E9 + 0x2
	.globl gText_Rom_5AB0EE
	.set gText_Rom_5AB0EE, gText_Rom_5AB0E9 + 0x5
	.incbin "baserom.gba", 0x5ab0f3, 0x6

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0F9
gText_Rom_5AB0F9: @ 0x085AB0F9
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB0F9) != 0xa
	.error "gText_Rom_5AB0F9 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB0FB
	.set gText_Rom_5AB0FB, gText_Rom_5AB0F9 + 0x2
	.globl gText_Rom_5AB0FE
	.set gText_Rom_5AB0FE, gText_Rom_5AB0F9 + 0x5
	.incbin "baserom.gba", 0x5ab103, 0x8

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB10B
gText_Rom_5AB10B: @ 0x085AB10B
	.string "{B_LAST_ITEM}を つかった！$"
	.if (. - gText_Rom_5AB10B) != 0xa
	.error "gText_Rom_5AB10B must retain its original byte length"
	.endif
	.globl gText_Rom_5AB10D
	.set gText_Rom_5AB10D, gText_Rom_5AB10B + 0x2
	.globl gText_Rom_5AB110
	.set gText_Rom_5AB110, gText_Rom_5AB10B + 0x5

	@ src/battle_message.c:419 battle_message_line_419
	.globl gText_Rom_5AB115
gText_Rom_5AB115: @ 0x085AB115
	.string "トレーナーに ボールを はじかれた!$"
	.if (. - gText_Rom_5AB115) > 0x13
	.error "gText_Rom_5AB115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB115) < 0x13
	.space 0x13 - (. - gText_Rom_5AB115)
	.endif

	@ src/battle_message.c:420 battle_message_line_420
	.globl gText_Rom_5AB128
gText_Rom_5AB128: @ 0x085AB128
	.string "ひとの ものを とったら どろぼう!$"
	.if (. - gText_Rom_5AB128) > 0x13
	.error "gText_Rom_5AB128 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB128) < 0x13
	.space 0x13 - (. - gText_Rom_5AB128)
	.endif
	.incbin "baserom.gba", 0x5ab13b, 0x18

	@ src/battle_message.c:421 battle_message_line_421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB153
gText_Rom_5AB153: @ 0x085AB153
	.string "ポケモンに\nうまく あたらなかった!$"
	.if (. - gText_Rom_5AB153) != 0x13
	.error "gText_Rom_5AB153 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB161
	.set gText_Rom_5AB161, gText_Rom_5AB153 + 0xe

	@ src/battle_message.c:422 battle_message_line_422
	.globl gText_Rom_5AB166
gText_Rom_5AB166: @ 0x085AB166
	.string "だめだ! ポケモンが\nボールから でてしまった!$"
	.if (. - gText_Rom_5AB166) > 0x19
	.error "gText_Rom_5AB166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB166) < 0x19
	.space 0x19 - (. - gText_Rom_5AB166)
	.endif

	@ src/battle_message.c:423 battle_message_line_423
	.globl gText_Rom_5AB17F
gText_Rom_5AB17F: @ 0x085AB17F
	.string "ああ!\nつかまえたと おもったのに!$"
	.if (. - gText_Rom_5AB17F) > 0x13
	.error "gText_Rom_5AB17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB17F) < 0x13
	.space 0x13 - (. - gText_Rom_5AB17F)
	.endif

	@ src/battle_message.c:424 battle_message_line_424
	.globl gText_Rom_5AB192
gText_Rom_5AB192: @ 0x085AB192
	.string "ざんねん!\nもうすこしで つかまえられたのに!$"
	.if (. - gText_Rom_5AB192) > 0x18
	.error "gText_Rom_5AB192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB192) < 0x18
	.space 0x18 - (. - gText_Rom_5AB192)
	.endif

	@ src/battle_message.c:425 battle_message_line_425
	.globl gText_Rom_5AB1AA
gText_Rom_5AB1AA: @ 0x085AB1AA
	.string "おしい!\nあと ちょっとの ところだったのに!$"
	.if (. - gText_Rom_5AB1AA) > 0x18
	.error "gText_Rom_5AB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB1AA) < 0x18
	.space 0x18 - (. - gText_Rom_5AB1AA)
	.endif
	.incbin "baserom.gba", 0x5ab1c2, 0x63
	.globl gUnknown_85AB225
gUnknown_85AB225: @ 0x085AB225

	@ src/battle_message.c:177 sText_Someones
	.globl gText_Rom_5AB225
gText_Rom_5AB225: @ 0x085AB225
	.string "だれかの$"
	.if (. - gText_Rom_5AB225) > 0x5
	.error "gText_Rom_5AB225 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB225) < 0x5
	.space 0x5 - (. - gText_Rom_5AB225)
	.endif
	.globl gUnknown_85AB22A
gUnknown_85AB22A: @ 0x085AB22A

	@ src/battle_message.c:178 sText_Lanettes
	.globl gText_Rom_5AB22A
gText_Rom_5AB22A: @ 0x085AB22A
	.string "マユミの$"
	.if (. - gText_Rom_5AB22A) > 0x5
	.error "gText_Rom_5AB22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB22A) < 0x5
	.space 0x5 - (. - gText_Rom_5AB22A)
	.endif
	.incbin "baserom.gba", 0x5ab22f, 0x22

	@ src/battle_message.c:430 battle_message_line_430
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB251
gText_Rom_5AB251: @ 0x085AB251
	.string "あめが ふっている$"
	.if (. - gText_Rom_5AB251) != 0xa
	.error "gText_Rom_5AB251 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB257
	.set gText_Rom_5AB257, gText_Rom_5AB251 + 0x6

	@ src/battle_message.c:431 battle_message_line_431
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB25B
gText_Rom_5AB25B: @ 0x085AB25B
	.string "すなあらしが ふきあれている$"
	.if (. - gText_Rom_5AB25B) != 0xf
	.error "gText_Rom_5AB25B must retain its original byte length"
	.endif
	.globl gText_Rom_5AB266
	.set gText_Rom_5AB266, gText_Rom_5AB25B + 0xb

	@ src/battle_message.c:497 battle_message_line_497
	.globl gText_Rom_5AB26A
gText_Rom_5AB26A: @ 0x085AB26A
	.string "ボックスが いっぱいで\nこれいじょう つかまえられない!\p$"
	.if (. - gText_Rom_5AB26A) > 0x1e
	.error "gText_Rom_5AB26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB26A) < 0x1e
	.space 0x1e - (. - gText_Rom_5AB26A)
	.endif
	.globl gUnknown_85AB288
gUnknown_85AB288: @ 0x085AB288

	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl gText_Rom_5AB288
gText_Rom_5AB288: @ 0x085AB288
	.string "ナゾのみ$"
	.if (. - gText_Rom_5AB288) > 0x5
	.error "gText_Rom_5AB288 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB288) < 0x5
	.space 0x5 - (. - gText_Rom_5AB288)
	.endif
	.globl gUnknown_85AB28D
gUnknown_85AB28D: @ 0x085AB28D

	@ asm/battle_message.s:1734 BattleStringExpandPlaceholders
	.globl gText_Rom_5AB28D
gText_Rom_5AB28D: @ 0x085AB28D
	.string "のみ$"
	.if (. - gText_Rom_5AB28D) > 0x3
	.error "gText_Rom_5AB28D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB28D) < 0x3
	.space 0x3 - (. - gText_Rom_5AB28D)
	.endif

	@ src/battle_message.c:449 battle_message_line_449
	.globl gText_Rom_5AB290
gText_Rom_5AB290: @ 0x085AB290
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nまひが なおった!$"
	.if (. - gText_Rom_5AB290) > 0x12
	.error "gText_Rom_5AB290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB290) < 0x12
	.space 0x12 - (. - gText_Rom_5AB290)
	.endif

	@ src/battle_message.c:450 battle_message_line_450
	.globl gText_Rom_5AB2A2
gText_Rom_5AB2A2: @ 0x085AB2A2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nどくが なおった!$"
	.if (. - gText_Rom_5AB2A2) > 0x12
	.error "gText_Rom_5AB2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2A2) < 0x12
	.space 0x12 - (. - gText_Rom_5AB2A2)
	.endif

	@ src/battle_message.c:451 battle_message_line_451
	.globl gText_Rom_5AB2B4
gText_Rom_5AB2B4: @ 0x085AB2B4
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nやけどが なおった!$"
	.if (. - gText_Rom_5AB2B4) > 0x13
	.error "gText_Rom_5AB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2B4) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2B4)
	.endif

	@ src/battle_message.c:452 battle_message_line_452
	.globl gText_Rom_5AB2C7
gText_Rom_5AB2C7: @ 0x085AB2C7
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこおりじょうたいが なおった!$"
	.if (. - gText_Rom_5AB2C7) > 0x18
	.error "gText_Rom_5AB2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2C7) < 0x18
	.space 0x18 - (. - gText_Rom_5AB2C7)
	.endif

	@ src/battle_message.c:453 battle_message_line_453
	.globl gText_Rom_5AB2DF
gText_Rom_5AB2DF: @ 0x085AB2DF
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nねむりから さめた!$"
	.if (. - gText_Rom_5AB2DF) > 0x13
	.error "gText_Rom_5AB2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2DF) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2DF)
	.endif

	@ src/battle_message.c:454 battle_message_line_454
	.globl gText_Rom_5AB2F2
gText_Rom_5AB2F2: @ 0x085AB2F2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこんらんが なおった!$"
	.if (. - gText_Rom_5AB2F2) > 0x14
	.error "gText_Rom_5AB2F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2F2) < 0x14
	.space 0x14 - (. - gText_Rom_5AB2F2)
	.endif
	.incbin "baserom.gba", 0x5ab306, 0x17

	@ src/battle_message.c:495 battle_message_line_495
	.globl gText_Rom_5AB31D
gText_Rom_5AB31D: @ 0x085AB31D
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nじょうたいいじょうが なおった!$"
	.if (. - gText_Rom_5AB31D) > 0x19
	.error "gText_Rom_5AB31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB31D) < 0x19
	.space 0x19 - (. - gText_Rom_5AB31D)
	.endif

	@ src/battle_message.c:456 battle_message_line_456
	.globl gText_Rom_5AB336
gText_Rom_5AB336: @ 0x085AB336
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nたいりょくを かいふくした!$"
	.if (. - gText_Rom_5AB336) > 0x17
	.error "gText_Rom_5AB336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB336) < 0x17
	.space 0x17 - (. - gText_Rom_5AB336)
	.endif
	.incbin "baserom.gba", 0x5ab34d, 0x35

	@ src/battle_message.c:459 battle_message_line_459
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB382
gText_Rom_5AB382: @ 0x085AB382
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nすこし かいふく$"
	.if (. - gText_Rom_5AB382) != 0x11
	.error "gText_Rom_5AB382 must retain its original byte length"
	.endif
	.globl gText_Rom_5AB38E
	.set gText_Rom_5AB38E, gText_Rom_5AB382 + 0xc

	@ src/battle_message.c:460 battle_message_line_460
	.globl gText_Rom_5AB393
gText_Rom_5AB393: @ 0x085AB393
	.string "{B_LAST_ITEM}の こうかで\n{B_CURRENT_MOVE}しか だすことができない!\p$"
	.if (. - gText_Rom_5AB393) > 0x1a
	.error "gText_Rom_5AB393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB393) < 0x1a
	.space 0x1a - (. - gText_Rom_5AB393)
	.endif

	@ src/battle_message.c:461 battle_message_line_461
	.globl gText_Rom_5AB3AD
gText_Rom_5AB3AD: @ 0x085AB3AD
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nもちこたえた!$"
	.if (. - gText_Rom_5AB3AD) > 0x10
	.error "gText_Rom_5AB3AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB3AD) < 0x10
	.space 0x10 - (. - gText_Rom_5AB3AD)
	.endif
	.globl gUnknown_85AB3BD
gUnknown_85AB3BD: @ 0x085AB3BD
	.incbin "baserom.gba", 0x5ab3bd, 0x1f
	.globl gUnknown_85AB3DC
gUnknown_85AB3DC: @ 0x085AB3DC
	.incbin "baserom.gba", 0x5ab3dc, 0x5c4
	.globl gUnknown_85AB9A0
gUnknown_85AB9A0: @ 0x085AB9A0
	.incbin "baserom.gba", 0x5ab9a0, 0x14e
	.globl gUnknown_85ABAEE
gUnknown_85ABAEE: @ 0x085ABAEE
	.incbin "baserom.gba", 0x5abaee, 0xe
	.globl gUnknown_85ABAFC
gUnknown_85ABAFC: @ 0x085ABAFC

	@ src/battle_message.c:1453 gText_PkmnIsEvolving
	.globl gText_Rom_5ABAFC
gText_Rom_5ABAFC: @ 0x085ABAFC
	.string "……おや！？\n{STR_VAR_1}の　ようすが……！$"
	.if (. - gText_Rom_5ABAFC) > 0x13
	.error "gText_Rom_5ABAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABAFC) < 0x13
	.space 0x13 - (. - gText_Rom_5ABAFC)
	.endif
	.globl gUnknown_85ABB0F
gUnknown_85ABB0F: @ 0x085ABB0F

	@ src/battle_message.c:1454 gText_CongratsPkmnEvolved
	.globl gText_Rom_5ABB0F
gText_Rom_5ABB0F: @ 0x085ABB0F
	.string "おめでとう！ {STR_VAR_1}は\n{STR_VAR_2}に しんかした！{WAIT_SE}\p$"
	.if (. - gText_Rom_5ABB0F) > 0x19
	.error "gText_Rom_5ABB0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB0F) < 0x19
	.space 0x19 - (. - gText_Rom_5ABB0F)
	.endif
	.globl gUnknown_85ABB28
gUnknown_85ABB28: @ 0x085ABB28

	@ asm/evolution_scene.s:1937 Task_EvolutionScene
	.globl gText_Rom_5ABB28
gText_Rom_5ABB28: @ 0x085ABB28
	.string "あれ……？\n{0xFD}{0x02}の　へんかが　とまった！\p$"
	.if (. - gText_Rom_5ABB28) > 0x16
	.error "gText_Rom_5ABB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB28) < 0x16
	.space 0x16 - (. - gText_Rom_5ABB28)
	.endif
	.globl gUnknown_85ABB3E
gUnknown_85ABB3E: @ 0x085ABB3E

	@ asm/evolution_scene.s:1927 Task_EvolutionScene
	.globl gText_Rom_5ABB3E
gText_Rom_5ABB3E: @ 0x085ABB3E
	.string "……？\p$"
	.if (. - gText_Rom_5ABB3E) > 0x5
	.error "gText_Rom_5ABB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB3E) < 0x5
	.space 0x5 - (. - gText_Rom_5ABB3E)
	.endif
	.globl gUnknown_85ABB43
gUnknown_85ABB43: @ 0x085ABB43
	.incbin "baserom.gba", 0x5abb43, 0xa
	.globl gUnknown_85ABB4D
gUnknown_85ABB4D: @ 0x085ABB4D

	@ src/battle_message.c:1458 gText_WhatWillPkmnDo2
	.globl gText_Rom_5ABB4D
gText_Rom_5ABB4D: @ 0x085ABB4D
	.string "{B_PLAYER_NAME}は どうする？$"
	.if (. - gText_Rom_5ABB4D) > 0xa
	.error "gText_Rom_5ABB4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB4D) < 0xa
	.space 0xa - (. - gText_Rom_5ABB4D)
	.endif
	.globl gUnknown_85ABB57
gUnknown_85ABB57: @ 0x085ABB57

	@ src/battle_message.c:1459 gText_WhatWillWallyDo
	.globl gText_Rom_5ABB57
gText_Rom_5ABB57: @ 0x085ABB57
	.string "ミツルは どうする？$"
	.if (. - gText_Rom_5ABB57) > 0xb
	.error "gText_Rom_5ABB57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB57) < 0xb
	.space 0xb - (. - gText_Rom_5ABB57)
	.endif
	.globl gUnknown_85ABB62
gUnknown_85ABB62: @ 0x085ABB62

	@ src/battle_message.c:1460 gText_LinkStandby
	.globl gText_Rom_5ABB62
gText_Rom_5ABB62: @ 0x085ABB62
	.string "{PAUSE 16}つうしんたいきちゅう……$"
	.if (. - gText_Rom_5ABB62) > 0x10
	.error "gText_Rom_5ABB62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB62) < 0x10
	.space 0x10 - (. - gText_Rom_5ABB62)
	.endif
	.globl gUnknown_85ABB72
gUnknown_85ABB72: @ 0x085ABB72
	.incbin "baserom.gba", 0x5abb72, 0x14
	.globl gUnknown_85ABB86
gUnknown_85ABB86: @ 0x085ABB86
	.incbin "baserom.gba", 0x5abb86, 0x15
	.globl gUnknown_85ABB9B
gUnknown_85ABB9B: @ 0x085ABB9B

	@ asm/battle_controller_player.s:4767 PlayerHandleTwoReturnValues
	.globl gText_Rom_5ABB9B
gText_Rom_5ABB9B: @ 0x085ABB9B
	.string "PP　　　$"
	.if (. - gText_Rom_5ABB9B) > 0x6
	.error "gText_Rom_5ABB9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABB9B) < 0x6
	.space 0x6 - (. - gText_Rom_5ABB9B)
	.endif
	.globl gUnknown_85ABBA1
gUnknown_85ABBA1: @ 0x085ABBA1

	@ asm/battle_controller_player.s:4773 PlayerHandleTwoReturnValues
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABBA1
gText_Rom_5ABBA1: @ 0x085ABBA1
	.string "わざタイプ/$"
	.if (. - gText_Rom_5ABBA1) != 0x7
	.error "gText_Rom_5ABBA1 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABBA3
	.set gText_Rom_5ABBA3, gText_Rom_5ABBA1 + 0x2
	.incbin "baserom.gba", 0x5abba8, 0x21
	.globl gUnknown_85ABBC9
gUnknown_85ABBC9: @ 0x085ABBC9
	.incbin "baserom.gba", 0x5abbc9, 0x8

	@ src/strings.c:918 gText_YesNo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABBD1
gText_Rom_5ABBD1: @ 0x085ABBD1
	.string "はい\nいいえ$"
	.if (. - gText_Rom_5ABBD1) != 0x7
	.error "gText_Rom_5ABBD1 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABBD4
	.set gText_Rom_5ABBD4, gText_Rom_5ABBD1 + 0x3
	.globl gUnknown_85ABBD8
gUnknown_85ABBD8: @ 0x085ABBD8
	.incbin "baserom.gba", 0x5abbd8, 0x29

	@ src/battle_message.c:1473 gText_BattleSwitchWhich4
	.globl gText_Rom_5ABC01
gText_Rom_5ABC01: @ 0x085ABC01
	.string "{ESCAPE 4}$"
	.if (. - gText_Rom_5ABC01) > 0x4
	.error "gText_Rom_5ABC01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC01) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC01)
	.endif
	.incbin "baserom.gba", 0x5abc05, 0x7

	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5ABC0C
gText_Rom_5ABC0C: @ 0x085ABC0C
	.string "こうげき$"
	.if (. - gText_Rom_5ABC0C) > 0x5
	.error "gText_Rom_5ABC0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC0C) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC0C)
	.endif

	@ src/battle_debug.c:338 battle_debug_line_338 (+4 aliases)
	.globl gText_Rom_5ABC11
gText_Rom_5ABC11: @ 0x085ABC11
	.string "ぼうぎょ$"
	.if (. - gText_Rom_5ABC11) > 0x5
	.error "gText_Rom_5ABC11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC11) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC11)
	.endif

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5ABC16
gText_Rom_5ABC16: @ 0x085ABC16
	.string "とくこう$"
	.if (. - gText_Rom_5ABC16) > 0x5
	.error "gText_Rom_5ABC16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC16) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC16)
	.endif

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5ABC1B
gText_Rom_5ABC1B: @ 0x085ABC1B
	.string "とくぼう$"
	.if (. - gText_Rom_5ABC1B) > 0x5
	.error "gText_Rom_5ABC1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC1B) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC1B)
	.endif
	.incbin "baserom.gba", 0x5abc20, 0x18
	.globl gUnknown_85ABC38
gUnknown_85ABC38: @ 0x085ABC38
	.incbin "baserom.gba", 0x5abc38, 0x3

	@ src/battle_message.c:1475 gText_SafariBalls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABC3B
gText_Rom_5ABC3B: @ 0x085ABC3B
	.string "サファリボール$"
	.if (. - gText_Rom_5ABC3B) != 0x8
	.error "gText_Rom_5ABC3B must retain its original byte length"
	.endif
	.globl gText_Rom_5ABC3F
	.set gText_Rom_5ABC3F, gText_Rom_5ABC3B + 0x4
	.globl gUnknown_85ABC43
gUnknown_85ABC43: @ 0x085ABC43

	@ asm/battle_interface.s:4834 sub_08074320
	.globl gText_Rom_5ABC43
gText_Rom_5ABC43: @ 0x085ABC43
	.string "{HIGHLIGHT}{0x02}のこり　$"
	.if (. - gText_Rom_5ABC43) > 0x8
	.error "gText_Rom_5ABC43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC43) < 0x8
	.space 0x8 - (. - gText_Rom_5ABC43)
	.endif
	.globl gUnknown_85ABC4B
gUnknown_85ABC4B: @ 0x085ABC4B

	@ asm/battle_interface.s:4844 sub_08074320
	.globl gText_Rom_5ABC4B
gText_Rom_5ABC4B: @ 0x085ABC4B
	.string "{HIGHLIGHT}{0x02}こ$"
	.if (. - gText_Rom_5ABC4B) > 0x5
	.error "gText_Rom_5ABC4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC4B) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC4B)
	.endif
	.globl gUnknown_85ABC50
gUnknown_85ABC50: @ 0x085ABC50

	@ src/battle_debug.c:346 battle_debug_line_346 (+3 aliases)
	.globl gText_Rom_5ABC50
gText_Rom_5ABC50: @ 0x085ABC50
	.string "ねむり$"
	.if (. - gText_Rom_5ABC50) > 0x4
	.error "gText_Rom_5ABC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC50) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC50)
	.endif
	.globl gUnknown_85ABC54
gUnknown_85ABC54: @ 0x085ABC54

	@ asm/battle_util.s:7195 AbilityBattleEffects
	.globl gText_Rom_5ABC54
gText_Rom_5ABC54: @ 0x085ABC54
	.string "どく$"
	.if (. - gText_Rom_5ABC54) > 0x3
	.error "gText_Rom_5ABC54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC54) < 0x3
	.space 0x3 - (. - gText_Rom_5ABC54)
	.endif
	.globl gUnknown_85ABC57
gUnknown_85ABC57: @ 0x085ABC57

	@ src/battle_debug.c:348 battle_debug_line_348 (+3 aliases)
	.globl gText_Rom_5ABC57
gText_Rom_5ABC57: @ 0x085ABC57
	.string "やけど$"
	.if (. - gText_Rom_5ABC57) > 0x4
	.error "gText_Rom_5ABC57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC57) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC57)
	.endif
	.globl gUnknown_85ABC5B
gUnknown_85ABC5B: @ 0x085ABC5B

	@ asm/battle_util.s:7213 AbilityBattleEffects
	.globl gText_Rom_5ABC5B
gText_Rom_5ABC5B: @ 0x085ABC5B
	.string "まひ$"
	.if (. - gText_Rom_5ABC5B) > 0x3
	.error "gText_Rom_5ABC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5B) < 0x3
	.space 0x3 - (. - gText_Rom_5ABC5B)
	.endif
	.globl gUnknown_85ABC5E
gUnknown_85ABC5E: @ 0x085ABC5E

	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_5ABC5E
gText_Rom_5ABC5E: @ 0x085ABC5E
	.string "こおり$"
	.if (. - gText_Rom_5ABC5E) > 0x4
	.error "gText_Rom_5ABC5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC5E) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC5E)
	.endif
	.globl gUnknown_85ABC62
gUnknown_85ABC62: @ 0x085ABC62

	@ src/battle_debug.c:358 battle_debug_line_358 (+2 aliases)
	.globl gText_Rom_5ABC62
gText_Rom_5ABC62: @ 0x085ABC62
	.string "こんらん$"
	.if (. - gText_Rom_5ABC62) > 0x5
	.error "gText_Rom_5ABC62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC62) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC62)
	.endif
	.globl gUnknown_85ABC67
gUnknown_85ABC67: @ 0x085ABC67

	@ src/battle_debug.c:459 battle_debug_line_459 (+3 aliases)
	.globl gText_Rom_5ABC67
gText_Rom_5ABC67: @ 0x085ABC67
	.string "メロメロ$"
	.if (. - gText_Rom_5ABC67) > 0x5
	.error "gText_Rom_5ABC67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC67) < 0x5
	.space 0x5 - (. - gText_Rom_5ABC67)
	.endif
	.globl gUnknown_85ABC6C
gUnknown_85ABC6C: @ 0x085ABC6C

	@ asm/frontier_util.s:4588 sub_081A3B68
	.globl gText_Rom_5ABC6C
gText_Rom_5ABC6C: @ 0x085ABC6C
	.string "　$"
	.if (. - gText_Rom_5ABC6C) > 0x2
	.error "gText_Rom_5ABC6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC6C) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC6C)
	.endif
	.globl gUnknown_85ABC6E
gUnknown_85ABC6E: @ 0x085ABC6E
	.incbin "baserom.gba", 0x5abc6e, 0x2
	.globl gUnknown_85ABC70
gUnknown_85ABC70: @ 0x085ABC70
	.incbin "baserom.gba", 0x5abc70, 0x2
	.globl gUnknown_85ABC72
gUnknown_85ABC72: @ 0x085ABC72
	.incbin "baserom.gba", 0x5abc72, 0x3
	.globl gUnknown_85ABC75
gUnknown_85ABC75: @ 0x085ABC75
	.incbin "baserom.gba", 0x5abc75, 0x3
	.globl gUnknown_85ABC78
gUnknown_85ABC78: @ 0x085ABC78

	@ src/battle_message.c:1491 gText_BadEgg
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABC78
gText_Rom_5ABC78: @ 0x085ABC78
	.string "ダメタマゴ$"
	.if (. - gText_Rom_5ABC78) != 0x6
	.error "gText_Rom_5ABC78 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABC7A
	.set gText_Rom_5ABC7A, gText_Rom_5ABC78 + 0x2
	.globl gUnknown_85ABC7E
gUnknown_85ABC7E: @ 0x085ABC7E

	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_Rom_5ABC7E
gText_Rom_5ABC7E: @ 0x085ABC7E
	.string "ミツル$"
	.if (. - gText_Rom_5ABC7E) > 0x4
	.error "gText_Rom_5ABC7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC7E) < 0x4
	.space 0x4 - (. - gText_Rom_5ABC7E)
	.endif
	.globl gUnknown_85ABC82
gUnknown_85ABC82: @ 0x085ABC82
	.incbin "baserom.gba", 0x5abc82, 0x6
	.globl gUnknown_85ABC88
gUnknown_85ABC88: @ 0x085ABC88
	.incbin "baserom.gba", 0x5abc88, 0x6
	.globl gUnknown_85ABC8E
gUnknown_85ABC8E: @ 0x085ABC8E
	.incbin "baserom.gba", 0x5abc8e, 0x8
	.globl gUnknown_85ABC96
gUnknown_85ABC96: @ 0x085ABC96

	@ asm/battle_message.s:2911 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC96
gText_Rom_5ABC96: @ 0x085ABC96
	.string "は$"
	.if (. - gText_Rom_5ABC96) > 0x2
	.error "gText_Rom_5ABC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC96) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC96)
	.endif
	.globl gUnknown_85ABC98
gUnknown_85ABC98: @ 0x085ABC98

	@ asm/battle_message.s:2922 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC98
gText_Rom_5ABC98: @ 0x085ABC98
	.string "の$"
	.if (. - gText_Rom_5ABC98) > 0x2
	.error "gText_Rom_5ABC98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC98) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC98)
	.endif
	.globl gUnknown_85ABC9A
gUnknown_85ABC9A: @ 0x085ABC9A
	.incbin "baserom.gba", 0x5abc9a, 0x7e
	.globl gUnknown_85ABD18
gUnknown_85ABD18: @ 0x085ABD18

	@ src/battle_message.c:1498 gText_BattleTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABD18
gText_Rom_5ABD18: @ 0x085ABD18
	.string "バトルトーナメント$"
	.if (. - gText_Rom_5ABD18) != 0xa
	.error "gText_Rom_5ABD18 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABD1B
	.set gText_Rom_5ABD1B, gText_Rom_5ABD18 + 0x3

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+3 aliases)
	.globl gText_Rom_5ABD22
gText_Rom_5ABD22: @ 0x085ABD22
	.string "1かい$"
	.if (. - gText_Rom_5ABD22) > 0x4
	.error "gText_Rom_5ABD22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD22) < 0x4
	.space 0x4 - (. - gText_Rom_5ABD22)
	.endif

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+3 aliases)
	.globl gText_Rom_5ABD26
gText_Rom_5ABD26: @ 0x085ABD26
	.string "2かい$"
	.if (. - gText_Rom_5ABD26) > 0x4
	.error "gText_Rom_5ABD26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD26) < 0x4
	.space 0x4 - (. - gText_Rom_5ABD26)
	.endif

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABD2A
gText_Rom_5ABD2A: @ 0x085ABD2A
	.string "じゅんけっしょう$"
	.if (. - gText_Rom_5ABD2A) != 0x9
	.error "gText_Rom_5ABD2A must retain its original byte length"
	.endif
	.globl gText_Rom_5ABD2D
	.set gText_Rom_5ABD2D, gText_Rom_5ABD2A + 0x3

	@ asm/battle_dome.s:1959 BufferDomeRoundText (+2 aliases)
	.globl gText_Rom_5ABD33
gText_Rom_5ABD33: @ 0x085ABD33
	.string "けっしょう$"
	.if (. - gText_Rom_5ABD33) > 0x6
	.error "gText_Rom_5ABD33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD33) < 0x6
	.space 0x6 - (. - gText_Rom_5ABD33)
	.endif
	.incbin "baserom.gba", 0x5abd39, 0x3
	.globl gUnknown_85ABD3C
gUnknown_85ABD3C: @ 0x085ABD3C
	.incbin "baserom.gba", 0x5abd3c, 0x10

	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:977 BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope (+1 aliases)
	.globl gText_Rom_5ABD4C
gText_Rom_5ABD4C: @ 0x085ABD4C
	.string "きたいの おおがた しんじん!\p$"
	.if (. - gText_Rom_5ABD4C) > 0x11
	.error "gText_Rom_5ABD4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD4C) < 0x11
	.space 0x11 - (. - gText_Rom_5ABD4C)
	.endif

	@ src/battle_message.c:1509 gText_WillChampionshipDreamComeTrue
	.globl gText_Rom_5ABD5D
gText_Rom_5ABD5D: @ 0x085ABD5D
	.string "ひがんの はつ ゆうしょう なるか!?\p$"
	.if (. - gText_Rom_5ABD5D) > 0x15
	.error "gText_Rom_5ABD5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD5D) < 0x15
	.space 0x15 - (. - gText_Rom_5ABD5D)
	.endif

	@ src/battle_message.c:1510 gText_AFormerChampion
	.globl gText_Rom_5ABD72
gText_Rom_5ABD72: @ 0x085ABD72
	.string "もと チャンピオン!\p$"
	.if (. - gText_Rom_5ABD72) > 0xc
	.error "gText_Rom_5ABD72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD72) < 0xc
	.space 0xc - (. - gText_Rom_5ABD72)
	.endif

	@ src/battle_message.c:1511 gText_ThePreviousChampion
	.globl gText_Rom_5ABD7E
gText_Rom_5ABD7E: @ 0x085ABD7E
	.string "ぜんかい チャンピオン!\p$"
	.if (. - gText_Rom_5ABD7E) > 0xe
	.error "gText_Rom_5ABD7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD7E) < 0xe
	.space 0xe - (. - gText_Rom_5ABD7E)
	.endif

	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1015 BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion (+1 aliases)
	.globl gText_Rom_5ABD8C
gText_Rom_5ABD8C: @ 0x085ABD8C
	.string "むてきの チャンピオン!\p$"
	.if (. - gText_Rom_5ABD8C) > 0xe
	.error "gText_Rom_5ABD8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABD8C) < 0xe
	.space 0xe - (. - gText_Rom_5ABD8C)
	.endif
	.globl gUnknown_85ABD9A
gUnknown_85ABD9A: @ 0x085ABD9A
	.incbin "baserom.gba", 0x5abd9a, 0x3
	.globl gUnknown_85ABD9D
gUnknown_85ABD9D: @ 0x085ABD9D
	.incbin "baserom.gba", 0x5abd9d, 0x3
	.globl gUnknown_85ABDA0
gUnknown_85ABDA0: @ 0x085ABDA0
	.incbin "baserom.gba", 0x5abda0, 0x3
	.globl gUnknown_85ABDA3
gUnknown_85ABDA3: @ 0x085ABDA3

	@ src/battle_message.c:1516 gText_Mind
	.globl gText_Rom_5ABDA3
gText_Rom_5ABDA3: @ 0x085ABDA3
	.string "こころ$"
	.if (. - gText_Rom_5ABDA3) > 0x4
	.error "gText_Rom_5ABDA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABDA3) < 0x4
	.space 0x4 - (. - gText_Rom_5ABDA3)
	.endif
	.globl gUnknown_85ABDA7
gUnknown_85ABDA7: @ 0x085ABDA7
	.incbin "baserom.gba", 0x5abda7, 0x3
	.globl gUnknown_85ABDAA
gUnknown_85ABDAA: @ 0x085ABDAA

	@ src/battle_message.c:1518 gText_Body
	.globl gText_Rom_5ABDAA
gText_Rom_5ABDAA: @ 0x085ABDAA
	.string "からだ$"
	.if (. - gText_Rom_5ABDAA) > 0x4
	.error "gText_Rom_5ABDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABDAA) < 0x4
	.space 0x4 - (. - gText_Rom_5ABDAA)
	.endif
	.globl gUnknown_85ABDAE
gUnknown_85ABDAE: @ 0x085ABDAE
	.incbin "baserom.gba", 0x5abdae, 0xd
	.globl gUnknown_85ABDBB
gUnknown_85ABDBB: @ 0x085ABDBB
	.incbin "baserom.gba", 0x5abdbb, 0x26
	.globl gUnknown_85ABDE1
gUnknown_85ABDE1: @ 0x085ABDE1
	.incbin "baserom.gba", 0x5abde1, 0x13
	.globl gUnknown_85ABDF4
gUnknown_85ABDF4: @ 0x085ABDF4
	.incbin "baserom.gba", 0x5abdf4, 0x1f
	.globl gUnknown_85ABE13
gUnknown_85ABE13: @ 0x085ABE13
	.incbin "baserom.gba", 0x5abe13, 0x13

	@ src/battle_message.c:109 sText_GoPkmn
	.globl gText_Rom_5ABE26
gText_Rom_5ABE26: @ 0x085ABE26
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！$"
	.if (. - gText_Rom_5ABE26) > 0x9
	.error "gText_Rom_5ABE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE26) < 0x9
	.space 0x9 - (. - gText_Rom_5ABE26)
	.endif
	.globl gUnknown_85ABE2F
gUnknown_85ABE2F: @ 0x085ABE2F
	.incbin "baserom.gba", 0x5abe2f, 0x21

	@ src/battle_message.c:512 battle_message_line_512
	.globl gText_Rom_5ABE50
gText_Rom_5ABE50: @ 0x085ABE50
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじぶんの ちからを はっき できない ようだ!$"
	.if (. - gText_Rom_5ABE50) > 0x1c
	.error "gText_Rom_5ABE50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE50) < 0x1c
	.space 0x1c - (. - gText_Rom_5ABE50)
	.endif
	.incbin "baserom.gba", 0x5abe6c, 0x13

	@ src/battle_message.c:514 battle_message_line_514
	.globl gText_Rom_5ABE7F
gText_Rom_5ABE7F: @ 0x085ABE7F
	.string "{B_SCR_NAME_WITH_PREFIX}は たいせいを たてなおしている!$"
	.if (. - gText_Rom_5ABE7F) > 0x14
	.error "gText_Rom_5ABE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE7F) < 0x14
	.space 0x14 - (. - gText_Rom_5ABE7F)
	.endif

	@ src/battle_message.c:515 battle_message_line_515
	.globl gText_Rom_5ABE93
gText_Rom_5ABE93: @ 0x085ABE93
	.string "{B_SCR_NAME_WITH_PREFIX}は ひくく うなり はじめた!$"
	.if (. - gText_Rom_5ABE93) > 0x12
	.error "gText_Rom_5ABE93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE93) < 0x12
	.space 0x12 - (. - gText_Rom_5ABE93)
	.endif

	@ src/battle_message.c:516 battle_message_line_516
	.globl gText_Rom_5ABEA5
gText_Rom_5ABEA5: @ 0x085ABEA5
	.string "{B_SCR_NAME_WITH_PREFIX}は まだまだ やるきだ!$"
	.if (. - gText_Rom_5ABEA5) > 0xf
	.error "gText_Rom_5ABEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEA5) < 0xf
	.space 0xf - (. - gText_Rom_5ABEA5)
	.endif
	.incbin "baserom.gba", 0x5abeb4, 0x8

	@ src/battle_message.c:1540 battle_message_line_1540
	.globl gText_Rom_5ABEBC
gText_Rom_5ABEBC: @ 0x085ABEBC
	.string "しんぱん『あと 3ターンで けっちゃくが\nつかないと はんていに なります!$"
	.if (. - gText_Rom_5ABEBC) > 0x27
	.error "gText_Rom_5ABEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEBC) < 0x27
	.space 0x27 - (. - gText_Rom_5ABEBC)
	.endif

	@ src/battle_message.c:1541 battle_message_line_1541
	.globl gText_Rom_5ABEE3
gText_Rom_5ABEE3: @ 0x085ABEE3
	.string "しんぱん『そこまでーーー!\nこの たいけつは はんていに なります!$"
	.if (. - gText_Rom_5ABEE3) > 0x23
	.error "gText_Rom_5ABEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEE3) < 0x23
	.space 0x23 - (. - gText_Rom_5ABEE3)
	.endif

	@ src/battle_message.c:1542 battle_message_line_1542
	.globl gText_Rom_5ABF06
gText_Rom_5ABF06: @ 0x085ABF06
	.string "しんぱん『はんてい その1! 「こころ」!\nせめる きもちを みせたもの!\p$"
	.if (. - gText_Rom_5ABF06) > 0x27
	.error "gText_Rom_5ABF06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF06) < 0x27
	.space 0x27 - (. - gText_Rom_5ABF06)
	.endif

	@ src/battle_message.c:1543 battle_message_line_1543
	.globl gText_Rom_5ABF2D
gText_Rom_5ABF2D: @ 0x085ABF2D
	.string "しんぱん『はんてい その2! 「わざ」!\nてきかくに わざを くりだしたもの!\p$"
	.if (. - gText_Rom_5ABF2D) > 0x29
	.error "gText_Rom_5ABF2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF2D) < 0x29
	.space 0x29 - (. - gText_Rom_5ABF2D)
	.endif

	@ src/battle_message.c:1544 battle_message_line_1544
	.globl gText_Rom_5ABF56
gText_Rom_5ABF56: @ 0x085ABF56
	.string "しんぱん『はんてい その3! 「からだ」!\nあふれる たいりょくを もちえるもの!\p$"
	.if (. - gText_Rom_5ABF56) > 0x2b
	.error "gText_Rom_5ABF56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABF56) < 0x2b
	.space 0x2b - (. - gText_Rom_5ABF56)
	.endif
	.incbin "baserom.gba", 0x5abf81, 0x46

	@ src/battle_message.c:1547 battle_message_line_1547
	.globl gText_Rom_5ABFC7
gText_Rom_5ABFC7: @ 0x085ABFC7
	.string "しんぱん『はんてい 3 たい 3\nひきわけーーー!\p$"
	.if (. - gText_Rom_5ABFC7) > 0x1b
	.error "gText_Rom_5ABFC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABFC7) < 0x1b
	.space 0x1b - (. - gText_Rom_5ABFC7)
	.endif

	@ src/battle_message.c:517 battle_message_line_517
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFE2
gText_Rom_5ABFE2: @ 0x085ABFE2
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に かった！$"
	.if (. - gText_Rom_5ABFE2) != 0x18
	.error "gText_Rom_5ABFE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5ABFF5
	.set gText_Rom_5ABFF5, gText_Rom_5ABFE2 + 0x13

	@ src/battle_message.c:518 battle_message_line_518
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFFA
gText_Rom_5ABFFA: @ 0x085ABFFA
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に まけた！$"
	.if (. - gText_Rom_5ABFFA) != 0x18
	.error "gText_Rom_5ABFFA must retain its original byte length"
	.endif
	.globl gText_Rom_5AC00D
	.set gText_Rom_5AC00D, gText_Rom_5ABFFA + 0x13
	.incbin "baserom.gba", 0x5ac012, 0x3a
	.globl gUnknown_85AC04C
gUnknown_85AC04C: @ 0x085AC04C
	.incbin "baserom.gba", 0x5ac04c, 0x65
	.globl gUnknown_85AC0B1
gUnknown_85AC0B1: @ 0x085AC0B1
	.incbin "baserom.gba", 0x5ac0b1, 0x10

	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5AC0C1
gText_Rom_5AC0C1: @ 0x085AC0C1
	.string "まけた！$"
	.if (. - gText_Rom_5AC0C1) > 0x5
	.error "gText_Rom_5AC0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0C1) < 0x5
	.space 0x5 - (. - gText_Rom_5AC0C1)
	.endif
	.globl gUnknown_85AC0C6
gUnknown_85AC0C6: @ 0x085AC0C6
	.incbin "baserom.gba", 0x5ac0c6, 0x17
	.globl gUnknown_85AC0DD
gUnknown_85AC0DD: @ 0x085AC0DD

	@ src/battle_message.c:1554 gText_RecordBattleToPass
	.globl gText_Rom_5AC0DD
gText_Rom_5AC0DD: @ 0x085AC0DD
	.string "いまの たたかいを フロンティアパスに\nきろく しますか?$"
	.if (. - gText_Rom_5AC0DD) > 0x1e
	.error "gText_Rom_5AC0DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0DD) < 0x1e
	.space 0x1e - (. - gText_Rom_5AC0DD)
	.endif
	.globl gUnknown_85AC0FB
gUnknown_85AC0FB: @ 0x085AC0FB

	@ src/battle_message.c:1555 gText_BattleRecordedOnPass
	.globl gText_Rom_5AC0FB
gText_Rom_5AC0FB: @ 0x085AC0FB
	.string "{B_PLAYER_NAME}の たたかいが\nフロンティアパスに きろく された!$"
	.if (. - gText_Rom_5AC0FB) > 0x1d
	.error "gText_Rom_5AC0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0FB) < 0x1d
	.space 0x1d - (. - gText_Rom_5AC0FB)
	.endif
	.globl gUnknown_85AC118
gUnknown_85AC118: @ 0x085AC118
	.incbin "baserom.gba", 0x5ac118, 0x15
	.globl gUnknown_85AC12D
gUnknown_85AC12D: @ 0x085AC12D
	.incbin "baserom.gba", 0x5ac12d, 0x19
	.globl gUnknown_85AC146
gUnknown_85AC146: @ 0x085AC146
	.incbin "baserom.gba", 0x5ac146, 0x322
	.globl gUnknown_85AC468
gUnknown_85AC468: @ 0x085AC468
	.incbin "baserom.gba", 0x5ac468, 0x8
	.globl gUnknown_85AC470
gUnknown_85AC470: @ 0x085AC470
	.incbin "baserom.gba", 0x5ac470, 0x4
	.globl gUnknown_85AC474
gUnknown_85AC474: @ 0x085AC474
	.incbin "baserom.gba", 0x5ac474, 0x10
	.globl gUnknown_85AC484
gUnknown_85AC484: @ 0x085AC484
	.incbin "baserom.gba", 0x5ac484, 0x158
	.globl gUnknown_85AC5DC
gUnknown_85AC5DC: @ 0x085AC5DC
	.incbin "baserom.gba", 0x5ac5dc, 0x184
	.globl gUnknown_85AC760
gUnknown_85AC760: @ 0x085AC760
	.incbin "baserom.gba", 0x5ac760, 0x1c4
	.globl gUnknown_85AC924
gUnknown_85AC924: @ 0x085AC924
	.incbin "baserom.gba", 0x5ac924, 0x14
	.globl gUnknown_85AC938
gUnknown_85AC938: @ 0x085AC938
	.incbin "baserom.gba", 0x5ac938, 0x24
	.globl gUnknown_85AC95C
gUnknown_85AC95C: @ 0x085AC95C
	.incbin "baserom.gba", 0x5ac95c, 0x20
	.globl gUnknown_85AC97C
gUnknown_85AC97C: @ 0x085AC97C
	.incbin "baserom.gba", 0x5ac97c, 0x28
	.globl gUnknown_85AC9A4
gUnknown_85AC9A4: @ 0x085AC9A4
	.incbin "baserom.gba", 0x5ac9a4, 0x30
	.globl gUnknown_85AC9D4
gUnknown_85AC9D4: @ 0x085AC9D4
	.incbin "baserom.gba", 0x5ac9d4, 0x18
	.globl gUnknown_85AC9EC
gUnknown_85AC9EC: @ 0x085AC9EC
	.incbin "baserom.gba", 0x5ac9ec, 0x2
	.globl gUnknown_85AC9EE
gUnknown_85AC9EE: @ 0x085AC9EE
	.incbin "baserom.gba", 0x5ac9ee, 0x4
	.globl gUnknown_85AC9F2
gUnknown_85AC9F2: @ 0x085AC9F2
	.incbin "baserom.gba", 0x5ac9f2, 0x8
	.globl gUnknown_85AC9FA
gUnknown_85AC9FA: @ 0x085AC9FA
	.incbin "baserom.gba", 0x5ac9fa, 0x6
	.globl gUnknown_85ACA00
gUnknown_85ACA00: @ 0x085ACA00
	.incbin "baserom.gba", 0x5aca00, 0x8
	.globl gUnknown_85ACA08
gUnknown_85ACA08: @ 0x085ACA08
	.incbin "baserom.gba", 0x5aca08, 0x38
	.globl gUnknown_85ACA40
gUnknown_85ACA40: @ 0x085ACA40
	.incbin "baserom.gba", 0x5aca40, 0x6
	.globl gUnknown_85ACA46
gUnknown_85ACA46: @ 0x085ACA46
	.incbin "baserom.gba", 0x5aca46, 0x4
	.globl gUnknown_85ACA4A
gUnknown_85ACA4A: @ 0x085ACA4A
	.incbin "baserom.gba", 0x5aca4a, 0xa
	.globl gUnknown_85ACA54
gUnknown_85ACA54: @ 0x085ACA54
	.incbin "baserom.gba", 0x5aca54, 0x8
	.globl gUnknown_85ACA5C
gUnknown_85ACA5C: @ 0x085ACA5C
	.incbin "baserom.gba", 0x5aca5c, 0xc
	.globl gUnknown_85ACA68
gUnknown_85ACA68: @ 0x085ACA68
	.incbin "baserom.gba", 0x5aca68, 0xa
	.globl gUnknown_85ACA72
gUnknown_85ACA72: @ 0x085ACA72
	.incbin "baserom.gba", 0x5aca72, 0x96
	.globl gUnknown_85ACB08
gUnknown_85ACB08: @ 0x085ACB08
	.incbin "baserom.gba", 0x5acb08, 0x220
	.globl gUnknown_85ACD28
gUnknown_85ACD28: @ 0x085ACD28
	.incbin "baserom.gba", 0x5acd28, 0x380
	.globl gUnknown_85AD0A8
gUnknown_85AD0A8: @ 0x085AD0A8
	.incbin "baserom.gba", 0x5ad0a8, 0xb0
	.globl gUnknown_85AD158
gUnknown_85AD158: @ 0x085AD158
	.incbin "baserom.gba", 0x5ad158, 0x38
	.globl gUnknown_85AD190
gUnknown_85AD190: @ 0x085AD190
	.incbin "baserom.gba", 0x5ad190, 0x18
	.globl gUnknown_85AD1A8
gUnknown_85AD1A8: @ 0x085AD1A8
	.incbin "baserom.gba", 0x5ad1a8, 0x18
	.globl gUnknown_85AD1C0
gUnknown_85AD1C0: @ 0x085AD1C0
	.incbin "baserom.gba", 0x5ad1c0, 0x28
	.globl gUnknown_85AD1E8
gUnknown_85AD1E8: @ 0x085AD1E8
	.incbin "baserom.gba", 0x5ad1e8, 0x50
	.globl gUnknown_85AD238
gUnknown_85AD238: @ 0x085AD238
	.incbin "baserom.gba", 0x5ad238, 0x30
	.globl gUnknown_85AD268
gUnknown_85AD268: @ 0x085AD268
	.incbin "baserom.gba", 0x5ad268, 0x2c
	.globl gUnknown_85AD294
gUnknown_85AD294: @ 0x085AD294
	.incbin "baserom.gba", 0x5ad294, 0x18
	.globl gUnknown_85AD2AC
gUnknown_85AD2AC: @ 0x085AD2AC
	.incbin "baserom.gba", 0x5ad2ac, 0x4
	.globl gUnknown_85AD2B0
gUnknown_85AD2B0: @ 0x085AD2B0
	.incbin "baserom.gba", 0x5ad2b0, 0x8
	.globl gUnknown_85AD2B8
gUnknown_85AD2B8: @ 0x085AD2B8
	.incbin "baserom.gba", 0x5ad2b8, 0x140
	.globl gUnknown_85AD3F8
gUnknown_85AD3F8: @ 0x085AD3F8
	.incbin "baserom.gba", 0x5ad3f8, 0x15c
	.globl gUnknown_85AD554
gUnknown_85AD554: @ 0x085AD554
	.incbin "baserom.gba", 0x5ad554, 0x20
	.globl gUnknown_85AD574
gUnknown_85AD574: @ 0x085AD574
	.incbin "baserom.gba", 0x5ad574, 0x18
	.globl gUnknown_85AD58C
gUnknown_85AD58C: @ 0x085AD58C
	.incbin "baserom.gba", 0x5ad58c, 0x68
	.globl gUnknown_85AD5F4
gUnknown_85AD5F4: @ 0x085AD5F4
	.incbin "baserom.gba", 0x5ad5f4, 0x60
	.globl gUnknown_85AD654
gUnknown_85AD654: @ 0x085AD654
	.incbin "baserom.gba", 0x5ad654, 0x30
	.globl gUnknown_85AD684
gUnknown_85AD684: @ 0x085AD684
	.incbin "baserom.gba", 0x5ad684, 0x14c
	.globl gUnknown_85AD7D0
gUnknown_85AD7D0: @ 0x085AD7D0
	.incbin "baserom.gba", 0x5ad7d0, 0x1d0
	.globl gUnknown_85AD9A0
gUnknown_85AD9A0: @ 0x085AD9A0

	@ asm/move_relearner.s:1028 HideHeartSpritesAndShowTeachMoveText
	.globl gText_Rom_5AD9A0
gText_Rom_5AD9A0: @ 0x085AD9A0
	.string "{0xFD}{0x02}に　どのわざを　おぼえさせる？$"
	.if (. - gText_Rom_5AD9A0) > 0x12
	.error "gText_Rom_5AD9A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9A0) < 0x12
	.space 0x12 - (. - gText_Rom_5AD9A0)
	.endif
	.globl gUnknown_85AD9B2
gUnknown_85AD9B2: @ 0x085AD9B2

	@ asm/move_relearner.s:1150 sub_08160E70
	.globl gText_Rom_5AD9B2
gText_Rom_5AD9B2: @ 0x085AD9B2
	.string "{0xFD}{0x03}を　おぼえさせますか？$"
	.if (. - gText_Rom_5AD9B2) > 0xe
	.error "gText_Rom_5AD9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9B2) < 0xe
	.space 0xe - (. - gText_Rom_5AD9B2)
	.endif
	.globl gUnknown_85AD9C0
gUnknown_85AD9C0: @ 0x085AD9C0

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5AD9C0
gText_Rom_5AD9C0: @ 0x085AD9C0
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5AD9C0) > 0x14
	.error "gText_Rom_5AD9C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AD9C0) < 0x14
	.space 0x14 - (. - gText_Rom_5AD9C0)
	.endif
	.globl gUnknown_85AD9D4
gUnknown_85AD9D4: @ 0x085AD9D4
	.incbin "baserom.gba", 0x5ad9d4, 0x53
	.globl gUnknown_85ADA27
gUnknown_85ADA27: @ 0x085ADA27

	@ src/strings.c:276 gText_StopLearningMove2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADA27
gText_Rom_5ADA27: @ 0x085ADA27
	.string "それでは…… {STR_VAR_2}を\nおぼえるのを あきらめますか?$"
	.if (. - gText_Rom_5ADA27) != 0x1b
	.error "gText_Rom_5ADA27 must retain its original byte length"
	.endif
	.globl gText_Rom_5ADA39
	.set gText_Rom_5ADA39, gText_Rom_5ADA27 + 0x12
	.globl gUnknown_85ADA42
gUnknown_85ADA42: @ 0x085ADA42
	.incbin "baserom.gba", 0x5ada42, 0x3

	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_Rom_5ADA45
gText_Rom_5ADA45: @ 0x085ADA45
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p$"
	.if (. - gText_Rom_5ADA45) > 0x22
	.error "gText_Rom_5ADA45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA45) < 0x22
	.space 0x22 - (. - gText_Rom_5ADA45)
	.endif
	.globl gUnknown_85ADA67
gUnknown_85ADA67: @ 0x085ADA67
	.incbin "baserom.gba", 0x5ada67, 0x20

	@ src/strings.c:272 gText_PkmnLearnedMove3
	.globl gText_Rom_5ADA87
gText_Rom_5ADA87: @ 0x085ADA87
	.string "{STR_VAR_1}は あたらしく\n{STR_VAR_2}を おぼえた!$"
	.if (. - gText_Rom_5ADA87) > 0x14
	.error "gText_Rom_5ADA87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADA87) < 0x14
	.space 0x14 - (. - gText_Rom_5ADA87)
	.endif
	.incbin "baserom.gba", 0x5ada9b, 0x14
	.globl gUnknown_85ADAAF
gUnknown_85ADAAF: @ 0x085ADAAF

	@ asm/move_relearner.s:1128 sub_08160E70
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ADAAF
gText_Rom_5ADAAF: @ 0x085ADAAF
	.string "{0xFD}{0x02}に　わざを　おぼえさせるのを\nあきらめますか？$"
	.if (. - gText_Rom_5ADAAF) != 0x1a
	.error "gText_Rom_5ADAAF must retain its original byte length"
	.endif
	.globl gText_Rom_5ADAC0
	.set gText_Rom_5ADAC0, gText_Rom_5ADAAF + 0x11
	.globl gUnknown_85ADAC9
gUnknown_85ADAC9: @ 0x085ADAC9

	@ src/strings.c:1131 gText_MoveRelearnerWhichMoveToForget
	.globl gText_Rom_5ADAC9
gText_Rom_5ADAC9: @ 0x085ADAC9
	.string "どの わざを\nわすれさせたい?\p$"
	.if (. - gText_Rom_5ADAC9) > 0x11
	.error "gText_Rom_5ADAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ADAC9) < 0x11
	.space 0x11 - (. - gText_Rom_5ADAC9)
	.endif
	.incbin "baserom.gba", 0x5adada, 0x1a
	.globl gUnknown_85ADAF4
gUnknown_85ADAF4: @ 0x085ADAF4
	.incbin "baserom.gba", 0x5adaf4, 0x8
	.globl gUnknown_85ADAFC
gUnknown_85ADAFC: @ 0x085ADAFC
	.incbin "baserom.gba", 0x5adafc, 0x8
	.globl gUnknown_85ADB04
gUnknown_85ADB04: @ 0x085ADB04
	.incbin "baserom.gba", 0x5adb04, 0x10
	.globl gUnknown_85ADB14
gUnknown_85ADB14: @ 0x085ADB14
	.incbin "baserom.gba", 0x5adb14, 0x40
	.globl gUnknown_85ADB54
gUnknown_85ADB54: @ 0x085ADB54
	.incbin "baserom.gba", 0x5adb54, 0x18
	.globl gUnknown_85ADB6C
gUnknown_85ADB6C: @ 0x085ADB6C
	.incbin "baserom.gba", 0x5adb6c, 0x8
	.globl gUnknown_85ADB74
gUnknown_85ADB74: @ 0x085ADB74
	.incbin "baserom.gba", 0x5adb74, 0x80
	.globl gUnknown_85ADBF4
gUnknown_85ADBF4: @ 0x085ADBF4
	.incbin "baserom.gba", 0x5adbf4, 0x2ff5

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0BE9
gText_Rom_5B0BE9: @ 0x085B0BE9
	.string "いない$"
	.if (. - gText_Rom_5B0BE9) > 0x4
	.error "gText_Rom_5B0BE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0BE9) < 0x4
	.space 0x4 - (. - gText_Rom_5B0BE9)
	.endif
	.incbin "baserom.gba", 0x5b0bed, 0x40

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0C2D
gText_Rom_5B0C2D: @ 0x085B0C2D
	.string "いない$"
	.if (. - gText_Rom_5B0C2D) > 0x4
	.error "gText_Rom_5B0C2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0C2D) < 0x4
	.space 0x4 - (. - gText_Rom_5B0C2D)
	.endif
	.incbin "baserom.gba", 0x5b0c31, 0x40

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0C71
gText_Rom_5B0C71: @ 0x085B0C71
	.string "いない$"
	.if (. - gText_Rom_5B0C71) > 0x4
	.error "gText_Rom_5B0C71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0C71) < 0x4
	.space 0x4 - (. - gText_Rom_5B0C71)
	.endif
	.incbin "baserom.gba", 0x5b0c75, 0x40

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_5B0CB5
gText_Rom_5B0CB5: @ 0x085B0CB5
	.string "いない$"
	.if (. - gText_Rom_5B0CB5) > 0x4
	.error "gText_Rom_5B0CB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B0CB5) < 0x4
	.space 0x4 - (. - gText_Rom_5B0CB5)
	.endif
	.incbin "baserom.gba", 0x5b0cb9, 0x3d57
	.globl gUnknown_85B4A10
gUnknown_85B4A10: @ 0x085B4A10
	.incbin "baserom.gba", 0x5b4a10, 0x2b

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B4A3B
gText_Rom_5B4A3B: @ 0x085B4A3B
	.string "ほうし$"
	.if (. - gText_Rom_5B4A3B) > 0x4
	.error "gText_Rom_5B4A3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B4A3B) < 0x4
	.space 0x4 - (. - gText_Rom_5B4A3B)
	.endif
	.incbin "baserom.gba", 0x5b4a3f, 0x142

	@ src/data/trainers.h:6692 trainers_line_6692 (+4 aliases)
	.globl gText_Rom_5B4B81
gText_Rom_5B4B81: @ 0x085B4B81
	.string "ミツグ$"
	.if (. - gText_Rom_5B4B81) > 0x4
	.error "gText_Rom_5B4B81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B4B81) < 0x4
	.space 0x4 - (. - gText_Rom_5B4B81)
	.endif
	.incbin "baserom.gba", 0x5b4b85, 0x101

	@ src/data/trainers.h:16146 trainers_line_16146
	.globl gText_Rom_5B4C86
gText_Rom_5B4C86: @ 0x085B4C86
	.string "タロウ$"
	.if (. - gText_Rom_5B4C86) > 0x4
	.error "gText_Rom_5B4C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B4C86) < 0x4
	.space 0x4 - (. - gText_Rom_5B4C86)
	.endif
	.incbin "baserom.gba", 0x5b4c8a, 0x850

	@ src/data/trainers.h:8667 trainers_line_8667 (+4 aliases)
	.globl gText_Rom_5B54DA
gText_Rom_5B54DA: @ 0x085B54DA
	.string "ゴロウ$"
	.if (. - gText_Rom_5B54DA) > 0x4
	.error "gText_Rom_5B54DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B54DA) < 0x4
	.space 0x4 - (. - gText_Rom_5B54DA)
	.endif
	.incbin "baserom.gba", 0x5b54de, 0x1cf

	@ src/data/easy_chat/easy_chat_group_people.h:136 easy_chat_group_people_line_136
	.globl gText_Rom_5B56AD
gText_Rom_5B56AD: @ 0x085B56AD
	.string "ガール$"
	.if (. - gText_Rom_5B56AD) > 0x4
	.error "gText_Rom_5B56AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B56AD) < 0x4
	.space 0x4 - (. - gText_Rom_5B56AD)
	.endif
	.incbin "baserom.gba", 0x5b56b1, 0x2d4

	@ src/data/trainers.h:7743 trainers_line_7743 (+1 aliases)
	.globl gText_Rom_5B5985
gText_Rom_5B5985: @ 0x085B5985
	.string "シノブ$"
	.if (. - gText_Rom_5B5985) > 0x4
	.error "gText_Rom_5B5985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B5985) < 0x4
	.space 0x4 - (. - gText_Rom_5B5985)
	.endif
	.incbin "baserom.gba", 0x5b5989, 0x239

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5B5BC2
gText_Rom_5B5BC2: @ 0x085B5BC2
	.string "ジロウ$"
	.if (. - gText_Rom_5B5BC2) > 0x4
	.error "gText_Rom_5B5BC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B5BC2) < 0x4
	.space 0x4 - (. - gText_Rom_5B5BC2)
	.endif
	.incbin "baserom.gba", 0x5b5bc6, 0x67c

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_5B6242
gText_Rom_5B6242: @ 0x085B6242
	.string "ショウ$"
	.if (. - gText_Rom_5B6242) > 0x4
	.error "gText_Rom_5B6242 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6242) < 0x4
	.space 0x4 - (. - gText_Rom_5B6242)
	.endif
	.incbin "baserom.gba", 0x5b6246, 0x3d7

	@ src/data/moves_info.h:6761 moves_info_line_6761
	.globl gText_Rom_5B661D
gText_Rom_5B661D: @ 0x085B661D
	.string "トリック$"
	.if (. - gText_Rom_5B661D) > 0x5
	.error "gText_Rom_5B661D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B661D) < 0x5
	.space 0x5 - (. - gText_Rom_5B661D)
	.endif
	.incbin "baserom.gba", 0x5b6622, 0x4e9

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B6B0B
gText_Rom_5B6B0B: @ 0x085B6B0B
	.string "ほうし$"
	.if (. - gText_Rom_5B6B0B) > 0x4
	.error "gText_Rom_5B6B0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6B0B) < 0x4
	.space 0x4 - (. - gText_Rom_5B6B0B)
	.endif
	.incbin "baserom.gba", 0x5b6b0f, 0x3cb

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5B6EDA
gText_Rom_5B6EDA: @ 0x085B6EDA
	.string "ジロウ$"
	.if (. - gText_Rom_5B6EDA) > 0x4
	.error "gText_Rom_5B6EDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6EDA) < 0x4
	.space 0x4 - (. - gText_Rom_5B6EDA)
	.endif
	.incbin "baserom.gba", 0x5b6ede, 0x97

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5B6F75
gText_Rom_5B6F75: @ 0x085B6F75
	.string "ジロウ$"
	.if (. - gText_Rom_5B6F75) > 0x4
	.error "gText_Rom_5B6F75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B6F75) < 0x4
	.space 0x4 - (. - gText_Rom_5B6F75)
	.endif
	.incbin "baserom.gba", 0x5b6f79, 0x2c0

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B7239
gText_Rom_5B7239: @ 0x085B7239
	.string "ほうし$"
	.if (. - gText_Rom_5B7239) > 0x4
	.error "gText_Rom_5B7239 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B7239) < 0x4
	.space 0x4 - (. - gText_Rom_5B7239)
	.endif
	.incbin "baserom.gba", 0x5b723d, 0xf

	@ src/data/trainers.h:34147 trainers_line_34147
	.globl gText_Rom_5B724C
gText_Rom_5B724C: @ 0x085B724C
	.string "ジュン$"
	.if (. - gText_Rom_5B724C) > 0x4
	.error "gText_Rom_5B724C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B724C) < 0x4
	.space 0x4 - (. - gText_Rom_5B724C)
	.endif
	.incbin "baserom.gba", 0x5b7250, 0x781

	@ src/main_menu.c:499 main_menu_line_499
	.globl gText_Rom_5B79D1
gText_Rom_5B79D1: @ 0x085B79D1
	.string "リュウ$"
	.if (. - gText_Rom_5B79D1) > 0x4
	.error "gText_Rom_5B79D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B79D1) < 0x4
	.space 0x4 - (. - gText_Rom_5B79D1)
	.endif
	.incbin "baserom.gba", 0x5b79d5, 0x9ef

	@ src/data/battle_frontier/apprentice.h:356 apprentice_line_356
	.globl gText_Rom_5B83C4
gText_Rom_5B83C4: @ 0x085B83C4
	.string "カズサ$"
	.if (. - gText_Rom_5B83C4) > 0x4
	.error "gText_Rom_5B83C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B83C4) < 0x4
	.space 0x4 - (. - gText_Rom_5B83C4)
	.endif
	.incbin "baserom.gba", 0x5b83c8, 0x338
	.globl gUnknown_85B8700
gUnknown_85B8700: @ 0x085B8700
	.incbin "baserom.gba", 0x5b8700, 0x3720
	.globl gUnknown_85BBE20
gUnknown_85BBE20: @ 0x085BBE20
	.incbin "baserom.gba", 0x5bbe20, 0x1e
	.globl gUnknown_85BBE3E
gUnknown_85BBE3E: @ 0x085BBE3E
	.incbin "baserom.gba", 0x5bbe3e, 0x14
	.globl gUnknown_85BBE52
gUnknown_85BBE52: @ 0x085BBE52
	.incbin "baserom.gba", 0x5bbe52, 0x1e
	.globl gUnknown_85BBE70
gUnknown_85BBE70: @ 0x085BBE70
	.incbin "baserom.gba", 0x5bbe70, 0x14
	.globl gUnknown_85BBE84
gUnknown_85BBE84: @ 0x085BBE84
	.incbin "baserom.gba", 0x5bbe84, 0x5c0
	.globl gUnknown_85BC444
gUnknown_85BC444: @ 0x085BC444
	.incbin "baserom.gba", 0x5bc444, 0x190
	.globl gUnknown_85BC5D4
gUnknown_85BC5D4: @ 0x085BC5D4
	.incbin "baserom.gba", 0x5bc5d4, 0x40
	.globl gUnknown_85BC614
gUnknown_85BC614: @ 0x085BC614
	.incbin "baserom.gba", 0x5bc614, 0x5
	.globl gUnknown_85BC619
gUnknown_85BC619: @ 0x085BC619
	.incbin "baserom.gba", 0x5bc619, 0x7
	.globl gUnknown_85BC620
gUnknown_85BC620: @ 0x085BC620
	.incbin "baserom.gba", 0x5bc620, 0x338
	.globl gUnknown_85BC958
gUnknown_85BC958: @ 0x085BC958
	.incbin "baserom.gba", 0x5bc958, 0x3a

	@ src/data/trainers.h:3787 trainers_line_3787 (+5 aliases)
	.globl gText_Rom_5BC992
gText_Rom_5BC992: @ 0x085BC992
	.string "ショウ$"
	.if (. - gText_Rom_5BC992) > 0x4
	.error "gText_Rom_5BC992 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BC992) < 0x4
	.space 0x4 - (. - gText_Rom_5BC992)
	.endif
	.incbin "baserom.gba", 0x5bc996, 0x168

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5BCAFE
gText_Rom_5BCAFE: @ 0x085BCAFE
	.string "ジロウ$"
	.if (. - gText_Rom_5BCAFE) > 0x4
	.error "gText_Rom_5BCAFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BCAFE) < 0x4
	.space 0x4 - (. - gText_Rom_5BCAFE)
	.endif
	.incbin "baserom.gba", 0x5bcb02, 0x134

	@ src/data/trainers.h:24407 trainers_line_24407 (+4 aliases)
	.globl gText_Rom_5BCC36
gText_Rom_5BCC36: @ 0x085BCC36
	.string "ジロウ$"
	.if (. - gText_Rom_5BCC36) > 0x4
	.error "gText_Rom_5BCC36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BCC36) < 0x4
	.space 0x4 - (. - gText_Rom_5BCC36)
	.endif
	.incbin "baserom.gba", 0x5bcc3a, 0x336
	.globl gUnknown_85BCF70
gUnknown_85BCF70: @ 0x085BCF70
	.incbin "baserom.gba", 0x5bcf70, 0x5e4
	.globl gUnknown_85BD554
gUnknown_85BD554: @ 0x085BD554
	.incbin "baserom.gba", 0x5bd554, 0x13c

	@ src/data/trainers.h:17816 trainers_line_17816
	.globl gText_Rom_5BD690
gText_Rom_5BD690: @ 0x085BD690
	.string "カズオ$"
	.if (. - gText_Rom_5BD690) > 0x4
	.error "gText_Rom_5BD690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BD690) < 0x4
	.space 0x4 - (. - gText_Rom_5BD690)
	.endif
	.incbin "baserom.gba", 0x5bd694, 0x4d8
	.globl gUnknown_85BDB6C
gUnknown_85BDB6C: @ 0x085BDB6C
	.incbin "baserom.gba", 0x5bdb6c, 0x45c
	.globl gUnknown_85BDFC8
gUnknown_85BDFC8: @ 0x085BDFC8
	.incbin "baserom.gba", 0x5bdfc8, 0x15d

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5BE125
gText_Rom_5BE125: @ 0x085BE125
	.string "ほうし$"
	.if (. - gText_Rom_5BE125) > 0x4
	.error "gText_Rom_5BE125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5BE125) < 0x4
	.space 0x4 - (. - gText_Rom_5BE125)
	.endif
	.incbin "baserom.gba", 0x5be129, 0x4b7
	.globl gUnknown_85BE5E0
gUnknown_85BE5E0: @ 0x085BE5E0
	.incbin "baserom.gba", 0x5be5e0, 0x2d0
	.globl gUnknown_85BE8B0
gUnknown_85BE8B0: @ 0x085BE8B0
	.incbin "baserom.gba", 0x5be8b0, 0x40
	.globl gUnknown_85BE8F0
gUnknown_85BE8F0: @ 0x085BE8F0
	.incbin "baserom.gba", 0x5be8f0, 0x20
	.globl gUnknown_85BE910
gUnknown_85BE910: @ 0x085BE910
	.incbin "baserom.gba", 0x5be910, 0x20
	.globl gUnknown_85BE930
gUnknown_85BE930: @ 0x085BE930
	.incbin "baserom.gba", 0x5be930, 0xa
	.globl gUnknown_85BE93A
gUnknown_85BE93A: @ 0x085BE93A
	.incbin "baserom.gba", 0x5be93a, 0x4
	.globl gUnknown_85BE93E
gUnknown_85BE93E: @ 0x085BE93E
	.incbin "baserom.gba", 0x5be93e, 0x20
	.globl gUnknown_85BE95E
gUnknown_85BE95E: @ 0x085BE95E
	.incbin "baserom.gba", 0x5be95e, 0x28
	.globl gUnknown_85BE986
gUnknown_85BE986: @ 0x085BE986
	.incbin "baserom.gba", 0x5be986, 0xc
	.globl gUnknown_85BE992
gUnknown_85BE992: @ 0x085BE992
	.incbin "baserom.gba", 0x5be992, 0x22e
	.globl gUnknown_85BEBC0
gUnknown_85BEBC0: @ 0x085BEBC0
	.incbin "baserom.gba", 0x5bebc0, 0xcc0
	.globl gUnknown_85BF880
gUnknown_85BF880: @ 0x085BF880
	.incbin "baserom.gba", 0x5bf880, 0x40
	.globl gUnknown_85BF8C0
gUnknown_85BF8C0: @ 0x085BF8C0
	.incbin "baserom.gba", 0x5bf8c0, 0xe0
	.globl gUnknown_85BF9A0
gUnknown_85BF9A0: @ 0x085BF9A0
	.incbin "baserom.gba", 0x5bf9a0, 0xac
	.globl gUnknown_85BFA4C
gUnknown_85BFA4C: @ 0x085BFA4C
	.incbin "baserom.gba", 0x5bfa4c, 0x60
	.globl gUnknown_85BFAAC
gUnknown_85BFAAC: @ 0x085BFAAC
	.incbin "baserom.gba", 0x5bfaac, 0x784
	.globl gUnknown_85C0230
gUnknown_85C0230: @ 0x085C0230
	.incbin "baserom.gba", 0x5c0230, 0x1e0
	.globl gUnknown_85C0410
gUnknown_85C0410: @ 0x085C0410
	.incbin "baserom.gba", 0x5c0410, 0x78
	.globl gUnknown_85C0488
gUnknown_85C0488: @ 0x085C0488
	.incbin "baserom.gba", 0x5c0488, 0x50c
	.globl gUnknown_85C0994
gUnknown_85C0994: @ 0x085C0994
	.incbin "baserom.gba", 0x5c0994, 0x14
	.globl gUnknown_85C09A8
gUnknown_85C09A8: @ 0x085C09A8
	.incbin "baserom.gba", 0x5c09a8, 0x5
	.globl gUnknown_85C09AD
gUnknown_85C09AD: @ 0x085C09AD
	.incbin "baserom.gba", 0x5c09ad, 0x3
	.globl gUnknown_85C09B0
gUnknown_85C09B0: @ 0x085C09B0
	.incbin "baserom.gba", 0x5c09b0, 0x10
	.globl gUnknown_85C09C0
gUnknown_85C09C0: @ 0x085C09C0
	.incbin "baserom.gba", 0x5c09c0, 0x20
	.globl gUnknown_85C09E0
gUnknown_85C09E0: @ 0x085C09E0
	.incbin "baserom.gba", 0x5c09e0, 0x8
	.globl gUnknown_85C09E8
gUnknown_85C09E8: @ 0x085C09E8
	.incbin "baserom.gba", 0x5c09e8, 0x14
	.globl gUnknown_85C09FC
gUnknown_85C09FC: @ 0x085C09FC
	.incbin "baserom.gba", 0x5c09fc, 0x8
	.globl gUnknown_85C0A04
gUnknown_85C0A04: @ 0x085C0A04
	.incbin "baserom.gba", 0x5c0a04, 0x8
	.globl gUnknown_85C0A0C
gUnknown_85C0A0C: @ 0x085C0A0C
	.incbin "baserom.gba", 0x5c0a0c, 0x34
	.globl gUnknown_85C0A40
gUnknown_85C0A40: @ 0x085C0A40
	.incbin "baserom.gba", 0x5c0a40, 0x44
	.globl gUnknown_85C0A84
gUnknown_85C0A84: @ 0x085C0A84
	.incbin "baserom.gba", 0x5c0a84, 0x18
	.globl gUnknown_85C0A9C
gUnknown_85C0A9C: @ 0x085C0A9C
	.incbin "baserom.gba", 0x5c0a9c, 0x8
	.globl gUnknown_85C0AA4
gUnknown_85C0AA4: @ 0x085C0AA4
	.incbin "baserom.gba", 0x5c0aa4, 0xe4
	.globl gUnknown_85C0B88
gUnknown_85C0B88: @ 0x085C0B88
	.incbin "baserom.gba", 0x5c0b88, 0x10
	.globl gUnknown_85C0B98
gUnknown_85C0B98: @ 0x085C0B98
	.incbin "baserom.gba", 0x5c0b98, 0x20
	.globl gUnknown_85C0BB8
gUnknown_85C0BB8: @ 0x085C0BB8
	.incbin "baserom.gba", 0x5c0bb8, 0x4
	.globl gUnknown_85C0BBC
gUnknown_85C0BBC: @ 0x085C0BBC
	.incbin "baserom.gba", 0x5c0bbc, 0x4
	.globl gUnknown_85C0BC0
gUnknown_85C0BC0: @ 0x085C0BC0
	.incbin "baserom.gba", 0x5c0bc0, 0x20
	.globl gUnknown_85C0BE0
gUnknown_85C0BE0: @ 0x085C0BE0
	.incbin "baserom.gba", 0x5c0be0, 0x8
	.globl gUnknown_85C0BE8
gUnknown_85C0BE8: @ 0x085C0BE8
	.incbin "baserom.gba", 0x5c0be8, 0x20
	.globl gUnknown_85C0C08
gUnknown_85C0C08: @ 0x085C0C08
	.incbin "baserom.gba", 0x5c0c08, 0x8
	.globl gUnknown_85C0C10
gUnknown_85C0C10: @ 0x085C0C10
	.incbin "baserom.gba", 0x5c0c10, 0x8
	.globl gUnknown_85C0C18
gUnknown_85C0C18: @ 0x085C0C18
	.incbin "baserom.gba", 0x5c0c18, 0x8
	.globl gUnknown_85C0C20
gUnknown_85C0C20: @ 0x085C0C20
	.incbin "baserom.gba", 0x5c0c20, 0x8
	.globl gUnknown_85C0C28
gUnknown_85C0C28: @ 0x085C0C28
	.incbin "baserom.gba", 0x5c0c28, 0x18
	.globl gUnknown_85C0C40
gUnknown_85C0C40: @ 0x085C0C40
	.incbin "baserom.gba", 0x5c0c40, 0x28
	.globl gUnknown_85C0C68
gUnknown_85C0C68: @ 0x085C0C68
	.incbin "baserom.gba", 0x5c0c68, 0x8
	.globl gUnknown_85C0C70
gUnknown_85C0C70: @ 0x085C0C70
	.incbin "baserom.gba", 0x5c0c70, 0x4
	.globl gUnknown_85C0C74
gUnknown_85C0C74: @ 0x085C0C74
	.incbin "baserom.gba", 0x5c0c74, 0x20
	.globl gUnknown_85C0C94
gUnknown_85C0C94: @ 0x085C0C94
	.incbin "baserom.gba", 0x5c0c94, 0x264
	.globl gUnknown_85C0EF8
gUnknown_85C0EF8: @ 0x085C0EF8
	.incbin "baserom.gba", 0x5c0ef8, 0x780
	.globl gUnknown_85C1678
gUnknown_85C1678: @ 0x085C1678
	.incbin "baserom.gba", 0x5c1678, 0x200
	.globl gUnknown_85C1878
gUnknown_85C1878: @ 0x085C1878
	.incbin "baserom.gba", 0x5c1878, 0x3b4
	.globl gUnknown_85C1C2C
gUnknown_85C1C2C: @ 0x085C1C2C
	.incbin "baserom.gba", 0x5c1c2c, 0x334
	.globl gUnknown_85C1F60
gUnknown_85C1F60: @ 0x085C1F60
	.incbin "baserom.gba", 0x5c1f60, 0x2f0
	.globl gUnknown_85C2250
gUnknown_85C2250: @ 0x085C2250
	.incbin "baserom.gba", 0x5c2250, 0x218
	.globl gUnknown_85C2468
gUnknown_85C2468: @ 0x085C2468
	.incbin "baserom.gba", 0x5c2468, 0x2170
	.globl gUnknown_85C45D8
gUnknown_85C45D8: @ 0x085C45D8
	.incbin "baserom.gba", 0x5c45d8, 0x200
	.globl gUnknown_85C47D8
gUnknown_85C47D8: @ 0x085C47D8
	.incbin "baserom.gba", 0x5c47d8, 0x130
	.globl gUnknown_85C4908
gUnknown_85C4908: @ 0x085C4908
	.incbin "baserom.gba", 0x5c4908, 0x1220
	.globl gUnknown_85C5B28
gUnknown_85C5B28: @ 0x085C5B28
	.incbin "baserom.gba", 0x5c5b28, 0x10
	.globl gUnknown_85C5B38
gUnknown_85C5B38: @ 0x085C5B38
	.incbin "baserom.gba", 0x5c5b38, 0x34
	.globl gUnknown_85C5B6C
gUnknown_85C5B6C: @ 0x085C5B6C
	.incbin "baserom.gba", 0x5c5b6c, 0x18
	.globl gUnknown_85C5B84
gUnknown_85C5B84: @ 0x085C5B84
	.incbin "baserom.gba", 0x5c5b84, 0x18
	.globl gUnknown_85C5B9C
gUnknown_85C5B9C: @ 0x085C5B9C
	.incbin "baserom.gba", 0x5c5b9c, 0x20
	.globl gUnknown_85C5BBC
gUnknown_85C5BBC: @ 0x085C5BBC
	.incbin "baserom.gba", 0x5c5bbc, 0x38
	.globl gUnknown_85C5BF4
gUnknown_85C5BF4: @ 0x085C5BF4
	.incbin "baserom.gba", 0x5c5bf4, 0x64
	.globl gUnknown_85C5C58
gUnknown_85C5C58: @ 0x085C5C58
	.incbin "baserom.gba", 0x5c5c58, 0x38
	.globl gUnknown_85C5C90
gUnknown_85C5C90: @ 0x085C5C90
	.incbin "baserom.gba", 0x5c5c90, 0x18
	.globl gUnknown_85C5CA8
gUnknown_85C5CA8: @ 0x085C5CA8
	.incbin "baserom.gba", 0x5c5ca8, 0x10
	.globl gUnknown_85C5CB8
gUnknown_85C5CB8: @ 0x085C5CB8
	.incbin "baserom.gba", 0x5c5cb8, 0x48
	.globl gUnknown_85C5D00
gUnknown_85C5D00: @ 0x085C5D00
	.incbin "baserom.gba", 0x5c5d00, 0x18
	.globl gUnknown_85C5D18
gUnknown_85C5D18: @ 0x085C5D18
	.incbin "baserom.gba", 0x5c5d18, 0x24
	.globl gUnknown_85C5D3C
gUnknown_85C5D3C: @ 0x085C5D3C
	.incbin "baserom.gba", 0x5c5d3c, 0x10
	.globl gUnknown_85C5D4C
gUnknown_85C5D4C: @ 0x085C5D4C
	.incbin "baserom.gba", 0x5c5d4c, 0x10
	.globl gUnknown_85C5D5C
gUnknown_85C5D5C: @ 0x085C5D5C
	.incbin "baserom.gba", 0x5c5d5c, 0x6c
	.globl gUnknown_85C5DC8
gUnknown_85C5DC8: @ 0x085C5DC8
	.incbin "baserom.gba", 0x5c5dc8, 0x50
	.globl gUnknown_85C5E18
gUnknown_85C5E18: @ 0x085C5E18
	.incbin "baserom.gba", 0x5c5e18, 0x60
	.globl gUnknown_85C5E78
gUnknown_85C5E78: @ 0x085C5E78
	.incbin "baserom.gba", 0x5c5e78, 0xd0
	.globl gUnknown_85C5F48
gUnknown_85C5F48: @ 0x085C5F48
	.incbin "baserom.gba", 0x5c5f48, 0xb4
	.globl gUnknown_85C5FFC
gUnknown_85C5FFC: @ 0x085C5FFC
	.incbin "baserom.gba", 0x5c5ffc, 0x14
	.globl gUnknown_85C6010
gUnknown_85C6010: @ 0x085C6010
	.incbin "baserom.gba", 0x5c6010, 0x30
	.globl gUnknown_85C6040
gUnknown_85C6040: @ 0x085C6040
	.incbin "baserom.gba", 0x5c6040, 0x18
	.globl gUnknown_85C6058
gUnknown_85C6058: @ 0x085C6058
	.incbin "baserom.gba", 0x5c6058, 0x20
	.globl gUnknown_85C6078
gUnknown_85C6078: @ 0x085C6078
	.incbin "baserom.gba", 0x5c6078, 0x18
	.globl gUnknown_85C6090
gUnknown_85C6090: @ 0x085C6090
	.incbin "baserom.gba", 0x5c6090, 0x10
	.globl gUnknown_85C60A0
gUnknown_85C60A0: @ 0x085C60A0
	.incbin "baserom.gba", 0x5c60a0, 0x10
	.globl gUnknown_85C60B0
gUnknown_85C60B0: @ 0x085C60B0
	.incbin "baserom.gba", 0x5c60b0, 0x34
	.globl gUnknown_85C60E4
gUnknown_85C60E4: @ 0x085C60E4
	.incbin "baserom.gba", 0x5c60e4, 0x18
	.globl gUnknown_85C60FC
gUnknown_85C60FC: @ 0x085C60FC
	.incbin "baserom.gba", 0x5c60fc, 0x10
	.globl gUnknown_85C610C
gUnknown_85C610C: @ 0x085C610C
	.incbin "baserom.gba", 0x5c610c, 0x10
	.globl gUnknown_85C611C
gUnknown_85C611C: @ 0x085C611C

	@ src/strings.c:974 gText_Hoenn
	.globl gText_Rom_5C611C
gText_Rom_5C611C: @ 0x085C611C
	.string "ホウエンちほう$"
	.if (. - gText_Rom_5C611C) > 0x8
	.error "gText_Rom_5C611C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C611C) < 0x8
	.space 0x8 - (. - gText_Rom_5C611C)
	.endif
	.globl gUnknown_85C6124
gUnknown_85C6124: @ 0x085C6124
	.incbin "baserom.gba", 0x5c6124, 0x8
	.globl gUnknown_85C612C
gUnknown_85C612C: @ 0x085C612C
	.incbin "baserom.gba", 0x5c612c, 0x18
	.globl gUnknown_85C6144
gUnknown_85C6144: @ 0x085C6144
	.incbin "baserom.gba", 0x5c6144, 0xc
	.globl gUnknown_85C6150
gUnknown_85C6150: @ 0x085C6150
	.incbin "baserom.gba", 0x5c6150, 0x60
	.globl gUnknown_85C61B0
gUnknown_85C61B0: @ 0x085C61B0
	.incbin "baserom.gba", 0x5c61b0, 0xc0
	.globl gUnknown_85C6270
gUnknown_85C6270: @ 0x085C6270
	.incbin "baserom.gba", 0x5c6270, 0xc
	.globl gUnknown_85C627C
gUnknown_85C627C: @ 0x085C627C
	.incbin "baserom.gba", 0x5c627c, 0x30
	.globl gUnknown_85C62AC
gUnknown_85C62AC: @ 0x085C62AC
	.incbin "baserom.gba", 0x5c62ac, 0x60
	.globl gUnknown_85C630C
gUnknown_85C630C: @ 0x085C630C
	.incbin "baserom.gba", 0x5c630c, 0xc0
	.globl gUnknown_85C63CC
gUnknown_85C63CC: @ 0x085C63CC
	.incbin "baserom.gba", 0x5c63cc, 0x64
	.globl gUnknown_85C6430
gUnknown_85C6430: @ 0x085C6430
	.incbin "baserom.gba", 0x5c6430, 0xc
	.globl gUnknown_85C643C
gUnknown_85C643C: @ 0x085C643C
	.incbin "baserom.gba", 0x5c643c, 0x8
	.globl gUnknown_85C6444
gUnknown_85C6444: @ 0x085C6444
	.incbin "baserom.gba", 0x5c6444, 0x4
	.globl gUnknown_85C6448
gUnknown_85C6448: @ 0x085C6448
	.incbin "baserom.gba", 0x5c6448, 0x8
	.globl gUnknown_85C6450
gUnknown_85C6450: @ 0x085C6450
	.incbin "baserom.gba", 0x5c6450, 0x10
	.globl gUnknown_85C6460
gUnknown_85C6460: @ 0x085C6460
	.incbin "baserom.gba", 0x5c6460, 0x10
	.globl gUnknown_85C6470
gUnknown_85C6470: @ 0x085C6470
	.incbin "baserom.gba", 0x5c6470, 0x6
	.globl gUnknown_85C6476
gUnknown_85C6476: @ 0x085C6476
	.incbin "baserom.gba", 0x5c6476, 0x2a
	.globl gUnknown_85C64A0
gUnknown_85C64A0: @ 0x085C64A0
	.incbin "baserom.gba", 0x5c64a0, 0x18
	.globl gUnknown_85C64B8
gUnknown_85C64B8: @ 0x085C64B8
	.incbin "baserom.gba", 0x5c64b8, 0xd4
	.globl gUnknown_85C658C
gUnknown_85C658C: @ 0x085C658C
	.incbin "baserom.gba", 0x5c658c, 0x18
	.globl gUnknown_85C65A4
gUnknown_85C65A4: @ 0x085C65A4
	.incbin "baserom.gba", 0x5c65a4, 0x20
	.globl gUnknown_85C65C4
gUnknown_85C65C4: @ 0x085C65C4
	.incbin "baserom.gba", 0x5c65c4, 0x1cc
	.globl gUnknown_85C6790
gUnknown_85C6790: @ 0x085C6790
	.incbin "baserom.gba", 0x5c6790, 0x1c
	.globl gUnknown_85C67AC
gUnknown_85C67AC: @ 0x085C67AC
	.incbin "baserom.gba", 0x5c67ac, 0x80
	.globl gUnknown_85C682C
gUnknown_85C682C: @ 0x085C682C
	.incbin "baserom.gba", 0x5c682c, 0x43c
	.globl gUnknown_85C6C68
gUnknown_85C6C68: @ 0x085C6C68
	.incbin "baserom.gba", 0x5c6c68, 0xf
	.globl gUnknown_85C6C77
gUnknown_85C6C77: @ 0x085C6C77
	.incbin "baserom.gba", 0x5c6c77, 0xf
	.globl gUnknown_85C6C86
gUnknown_85C6C86: @ 0x085C6C86
	.incbin "baserom.gba", 0x5c6c86, 0xf
	.globl gUnknown_85C6C95
gUnknown_85C6C95: @ 0x085C6C95
	.incbin "baserom.gba", 0x5c6c95, 0xf
	.globl gUnknown_85C6CA4
gUnknown_85C6CA4: @ 0x085C6CA4
	.incbin "baserom.gba", 0x5c6ca4, 0x10

	@ src/data/credits.h:66 sCreditsText_PkmnEmeraldVersion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CB4
gText_Rom_5C6CB4: @ 0x085C6CB4
	.string "ポケットモンスター エメラルド$"
	.if (. - gText_Rom_5C6CB4) != 0x10
	.error "gText_Rom_5C6CB4 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CBE
	.set gText_Rom_5C6CBE, gText_Rom_5C6CB4 + 0xa
	.globl gText_Rom_5C6CC0
	.set gText_Rom_5C6CC0, gText_Rom_5C6CB4 + 0xc

	@ src/data/credits.h:67 sCreditsText_Credits
	.globl gText_Rom_5C6CC4
gText_Rom_5C6CC4: @ 0x085C6CC4
	.string "スタッフリスト$"
	.if (. - gText_Rom_5C6CC4) > 0x8
	.error "gText_Rom_5C6CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CC4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6CC4)
	.endif

	@ src/data/credits.h:68 sCreditsText_ExecutiveDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CCC
gText_Rom_5C6CCC: @ 0x085C6CCC
	.string "エグゼクティブ ディレクター$"
	.if (. - gText_Rom_5C6CCC) != 0xf
	.error "gText_Rom_5C6CCC must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CD4
	.set gText_Rom_5C6CD4, gText_Rom_5C6CCC + 0x8

	@ src/data/credits.h:69 sCreditsText_Director
	.globl gText_Rom_5C6CDB
gText_Rom_5C6CDB: @ 0x085C6CDB
	.string "ディレクター$"
	.if (. - gText_Rom_5C6CDB) > 0x7
	.error "gText_Rom_5C6CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CDB) < 0x7
	.space 0x7 - (. - gText_Rom_5C6CDB)
	.endif

	@ src/data/credits.h:70 sCreditsText_ArtDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CE2
gText_Rom_5C6CE2: @ 0x085C6CE2
	.string "アート ディレクター$"
	.if (. - gText_Rom_5C6CE2) != 0xb
	.error "gText_Rom_5C6CE2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CE6
	.set gText_Rom_5C6CE6, gText_Rom_5C6CE2 + 0x4

	@ src/data/credits.h:71 sCreditsText_BattleDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CED
gText_Rom_5C6CED: @ 0x085C6CED
	.string "バトル ディレクター$"
	.if (. - gText_Rom_5C6CED) != 0xb
	.error "gText_Rom_5C6CED must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CF1
	.set gText_Rom_5C6CF1, gText_Rom_5C6CED + 0x4

	@ src/data/credits.h:72 sCreditsText_MainProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6CF8
gText_Rom_5C6CF8: @ 0x085C6CF8
	.string "メイン プログラム$"
	.if (. - gText_Rom_5C6CF8) != 0xa
	.error "gText_Rom_5C6CF8 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6CFC
	.set gText_Rom_5C6CFC, gText_Rom_5C6CF8 + 0x4

	@ src/data/credits.h:73 sCreditsText_BattleSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D02
gText_Rom_5C6D02: @ 0x085C6D02
	.string "バトル システム プログラム$"
	.if (. - gText_Rom_5C6D02) != 0xf
	.error "gText_Rom_5C6D02 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D0B
	.set gText_Rom_5C6D0B, gText_Rom_5C6D02 + 0x9

	@ src/data/credits.h:74 sCreditsText_FieldSystemPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D11
gText_Rom_5C6D11: @ 0x085C6D11
	.string "フィールド システム プログラム$"
	.if (. - gText_Rom_5C6D11) != 0x11
	.error "gText_Rom_5C6D11 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D1C
	.set gText_Rom_5C6D1C, gText_Rom_5C6D11 + 0xb

	@ src/data/credits.h:75 sCreditsText_Programmers
	.globl gText_Rom_5C6D22
gText_Rom_5C6D22: @ 0x085C6D22
	.string "プログラム$"
	.if (. - gText_Rom_5C6D22) > 0x6
	.error "gText_Rom_5C6D22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D22) < 0x6
	.space 0x6 - (. - gText_Rom_5C6D22)
	.endif

	@ src/data/credits.h:76 sCreditsText_MainGraphicDesigner
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D28
gText_Rom_5C6D28: @ 0x085C6D28
	.string "メイン グラフィック デザイン$"
	.if (. - gText_Rom_5C6D28) != 0x10
	.error "gText_Rom_5C6D28 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D2C
	.set gText_Rom_5C6D2C, gText_Rom_5C6D28 + 0x4
	.globl gText_Rom_5C6D33
	.set gText_Rom_5C6D33, gText_Rom_5C6D28 + 0xb

	@ src/data/credits.h:77 sCreditsText_GraphicDesigners (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D38
gText_Rom_5C6D38: @ 0x085C6D38
	.string "グラフィック デザイン$"
	.if (. - gText_Rom_5C6D38) != 0xc
	.error "gText_Rom_5C6D38 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D3F
	.set gText_Rom_5C6D3F, gText_Rom_5C6D38 + 0x7

	@ src/data/credits.h:78 sCreditsText_PkmnDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D44
gText_Rom_5C6D44: @ 0x085C6D44
	.string "ポケモン デザイン$"
	.if (. - gText_Rom_5C6D44) != 0xa
	.error "gText_Rom_5C6D44 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D49
	.set gText_Rom_5C6D49, gText_Rom_5C6D44 + 0x5

	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5C6D4E
gText_Rom_5C6D4E: @ 0x085C6D4E
	.string "おんがく$"
	.if (. - gText_Rom_5C6D4E) > 0x5
	.error "gText_Rom_5C6D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D4E) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D4E)
	.endif

	@ src/data/credits.h:80 sCreditsText_SoundEffectsAndPkmnVoices
	.globl gText_Rom_5C6D53
gText_Rom_5C6D53: @ 0x085C6D53
	.string "サウンド エフェクト/ポケモン ボイス$"
	.if (. - gText_Rom_5C6D53) > 0x14
	.error "gText_Rom_5C6D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D53) < 0x14
	.space 0x14 - (. - gText_Rom_5C6D53)
	.endif

	@ src/data/credits.h:81 sCreditsText_GameDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D67
gText_Rom_5C6D67: @ 0x085C6D67
	.string "ゲーム デザイン$"
	.if (. - gText_Rom_5C6D67) != 0x9
	.error "gText_Rom_5C6D67 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D6B
	.set gText_Rom_5C6D6B, gText_Rom_5C6D67 + 0x4

	@ src/data/credits.h:82 sCreditsText_ScenarioPlot
	.globl gText_Rom_5C6D70
gText_Rom_5C6D70: @ 0x085C6D70
	.string "シナリオプロット$"
	.if (. - gText_Rom_5C6D70) > 0x9
	.error "gText_Rom_5C6D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D70) < 0x9
	.space 0x9 - (. - gText_Rom_5C6D70)
	.endif

	@ src/data/credits.h:83 sCreditsText_Scenario
	.globl gText_Rom_5C6D79
gText_Rom_5C6D79: @ 0x085C6D79
	.string "シナリオ$"
	.if (. - gText_Rom_5C6D79) > 0x5
	.error "gText_Rom_5C6D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D79) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D79)
	.endif

	@ src/data/credits.h:84 sCreditsText_ScriptDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D7E
gText_Rom_5C6D7E: @ 0x085C6D7E
	.string "スクリプト せってい$"
	.if (. - gText_Rom_5C6D7E) != 0xb
	.error "gText_Rom_5C6D7E must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D84
	.set gText_Rom_5C6D84, gText_Rom_5C6D7E + 0x6

	@ src/data/credits.h:85 sCreditsText_MapDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D89
gText_Rom_5C6D89: @ 0x085C6D89
	.string "マップ デザイン$"
	.if (. - gText_Rom_5C6D89) != 0x9
	.error "gText_Rom_5C6D89 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D8D
	.set gText_Rom_5C6D8D, gText_Rom_5C6D89 + 0x4

	@ src/data/credits.h:86 sCreditsText_MapDataDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D92
gText_Rom_5C6D92: @ 0x085C6D92
	.string "マップデータ せってい$"
	.if (. - gText_Rom_5C6D92) != 0xc
	.error "gText_Rom_5C6D92 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6D99
	.set gText_Rom_5C6D99, gText_Rom_5C6D92 + 0x7

	@ src/data/credits.h:87 sCreditsText_ParametricDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D9E
gText_Rom_5C6D9E: @ 0x085C6D9E
	.string "パラメーター せってい$"
	.if (. - gText_Rom_5C6D9E) != 0xc
	.error "gText_Rom_5C6D9E must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DA5
	.set gText_Rom_5C6DA5, gText_Rom_5C6D9E + 0x7

	@ src/data/credits.h:88 sCreditsText_PokedexText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DAA
gText_Rom_5C6DAA: @ 0x085C6DAA
	.string "ずかん テキスト$"
	.if (. - gText_Rom_5C6DAA) != 0x9
	.error "gText_Rom_5C6DAA must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DAE
	.set gText_Rom_5C6DAE, gText_Rom_5C6DAA + 0x4

	@ src/data/credits.h:89 sCreditsText_EnvAndToolPgrms
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DB3
gText_Rom_5C6DB3: @ 0x085C6DB3
	.string "かんきょう/ツール プログラム$"
	.if (. - gText_Rom_5C6DB3) != 0x10
	.error "gText_Rom_5C6DB3 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DBD
	.set gText_Rom_5C6DBD, gText_Rom_5C6DB3 + 0xa

	@ src/data/credits.h:90 sCreditsText_NCLProductTesting
	.globl gText_Rom_5C6DC3
gText_Rom_5C6DC3: @ 0x085C6DC3
	.string "デバッグプレイ$"
	.if (. - gText_Rom_5C6DC3) > 0x8
	.error "gText_Rom_5C6DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DC3)
	.endif

	@ src/data/credits.h:91 sCreditsText_SpecialThanks
	.globl gText_Rom_5C6DCB
gText_Rom_5C6DCB: @ 0x085C6DCB
	.string "スペシャルサンクス$"
	.if (. - gText_Rom_5C6DCB) > 0xa
	.error "gText_Rom_5C6DCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DCB) < 0xa
	.space 0xa - (. - gText_Rom_5C6DCB)
	.endif

	@ src/data/credits.h:92 sCreditsText_Coordinators
	.globl gText_Rom_5C6DD5
gText_Rom_5C6DD5: @ 0x085C6DD5
	.string "コーディネーター$"
	.if (. - gText_Rom_5C6DD5) > 0x9
	.error "gText_Rom_5C6DD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DD5) < 0x9
	.space 0x9 - (. - gText_Rom_5C6DD5)
	.endif

	@ src/data/credits.h:93 sCreditsText_Producers
	.globl gText_Rom_5C6DDE
gText_Rom_5C6DDE: @ 0x085C6DDE
	.string "プロデューサー$"
	.if (. - gText_Rom_5C6DDE) > 0x8
	.error "gText_Rom_5C6DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DDE) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DDE)
	.endif

	@ src/data/credits.h:94 sCreditsText_ExecProducers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DE6
gText_Rom_5C6DE6: @ 0x085C6DE6
	.string "エグゼクティブ プロデューサー$"
	.if (. - gText_Rom_5C6DE6) != 0x10
	.error "gText_Rom_5C6DE6 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6DEE
	.set gText_Rom_5C6DEE, gText_Rom_5C6DE6 + 0x8

	@ src/data/credits.h:95 sCreditsText_InfoSupervisors
	.globl gText_Rom_5C6DF6
gText_Rom_5C6DF6: @ 0x085C6DF6
	.string "じょうほう かんり$"
	.if (. - gText_Rom_5C6DF6) > 0xa
	.error "gText_Rom_5C6DF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DF6) < 0xa
	.space 0xa - (. - gText_Rom_5C6DF6)
	.endif

	@ src/data/credits.h:96 sCreditsText_TaskManagers
	.globl gText_Rom_5C6E00
gText_Rom_5C6E00: @ 0x085C6E00
	.string "ファンクション マネージャー$"
	.if (. - gText_Rom_5C6E00) > 0xf
	.error "gText_Rom_5C6E00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E00) < 0xf
	.space 0xf - (. - gText_Rom_5C6E00)
	.endif

	@ src/data/credits.h:97 sCreditsText_BrailleCodeCheck
	.globl gText_Rom_5C6E0F
gText_Rom_5C6E0F: @ 0x085C6E0F
	.string "てんじ かんしゅう$"
	.if (. - gText_Rom_5C6E0F) > 0xa
	.error "gText_Rom_5C6E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E0F) < 0xa
	.space 0xa - (. - gText_Rom_5C6E0F)
	.endif

	@ src/data/credits.h:98 sCreditsText_WorldDirector
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E19
gText_Rom_5C6E19: @ 0x085C6E19
	.string "ワールド ディレクター$"
	.if (. - gText_Rom_5C6E19) != 0xc
	.error "gText_Rom_5C6E19 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E1E
	.set gText_Rom_5C6E1E, gText_Rom_5C6E19 + 0x5

	@ src/data/credits.h:99 sCreditsText_BattleFrontierData
	.globl gText_Rom_5C6E25
gText_Rom_5C6E25: @ 0x085C6E25
	.string "バトルフロンティア データ$"
	.if (. - gText_Rom_5C6E25) > 0xe
	.error "gText_Rom_5C6E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E25) < 0xe
	.space 0xe - (. - gText_Rom_5C6E25)
	.endif

	@ src/data/credits.h:100 sCreditsText_SupportProgrammers
	.globl gText_Rom_5C6E33
gText_Rom_5C6E33: @ 0x085C6E33
	.string "プログラム サポート$"
	.if (. - gText_Rom_5C6E33) > 0xb
	.error "gText_Rom_5C6E33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E33) < 0xb
	.space 0xb - (. - gText_Rom_5C6E33)
	.endif

	@ src/data/credits.h:101 sCreditsText_Artwork
	.globl gText_Rom_5C6E3E
gText_Rom_5C6E3E: @ 0x085C6E3E
	.string "アート ワーク$"
	.if (. - gText_Rom_5C6E3E) > 0x8
	.error "gText_Rom_5C6E3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E3E) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E3E)
	.endif

	@ src/data/credits.h:102 sCreditsText_LeadProgrammer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E46
gText_Rom_5C6E46: @ 0x085C6E46
	.string "プログラム リーダー$"
	.if (. - gText_Rom_5C6E46) != 0xb
	.error "gText_Rom_5C6E46 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E4C
	.set gText_Rom_5C6E4C, gText_Rom_5C6E46 + 0x6

	@ src/data/credits.h:103 sCreditsText_LeadGraphicArtist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6E51
gText_Rom_5C6E51: @ 0x085C6E51
	.string "グラフィック リーダー$"
	.if (. - gText_Rom_5C6E51) != 0xc
	.error "gText_Rom_5C6E51 must retain its original byte length"
	.endif
	.globl gText_Rom_5C6E58
	.set gText_Rom_5C6E58, gText_Rom_5C6E51 + 0x7

	@ src/data/credits.h:104 sCreditsText_SatoshiTajiri
	.globl gText_Rom_5C6E5D
gText_Rom_5C6E5D: @ 0x085C6E5D
	.string "たじり さとし$"
	.if (. - gText_Rom_5C6E5D) > 0x8
	.error "gText_Rom_5C6E5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E5D) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E5D)
	.endif

	@ src/data/credits.h:105 sCreditsText_JunichiMasuda
	.globl gText_Rom_5C6E65
gText_Rom_5C6E65: @ 0x085C6E65
	.string "ますだ じゅんいち$"
	.if (. - gText_Rom_5C6E65) > 0xa
	.error "gText_Rom_5C6E65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E65) < 0xa
	.space 0xa - (. - gText_Rom_5C6E65)
	.endif

	@ src/data/credits.h:106 sCreditsText_KenSugimori
	.globl gText_Rom_5C6E6F
gText_Rom_5C6E6F: @ 0x085C6E6F
	.string "すぎもり けん$"
	.if (. - gText_Rom_5C6E6F) > 0x8
	.error "gText_Rom_5C6E6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E6F) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E6F)
	.endif

	@ src/data/credits.h:107 sCreditsText_ShigekiMorimoto
	.globl gText_Rom_5C6E77
gText_Rom_5C6E77: @ 0x085C6E77
	.string "もりもと しげき$"
	.if (. - gText_Rom_5C6E77) > 0x9
	.error "gText_Rom_5C6E77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E77) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E77)
	.endif

	@ src/data/credits.h:108 sCreditsText_TetsuyaWatanabe
	.globl gText_Rom_5C6E80
gText_Rom_5C6E80: @ 0x085C6E80
	.string "わたなべ てつや$"
	.if (. - gText_Rom_5C6E80) > 0x9
	.error "gText_Rom_5C6E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E80) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E80)
	.endif

	@ src/data/credits.h:109 sCreditsText_HisashiSogabe
	.globl gText_Rom_5C6E89
gText_Rom_5C6E89: @ 0x085C6E89
	.string "そがべ ひさし$"
	.if (. - gText_Rom_5C6E89) > 0x8
	.error "gText_Rom_5C6E89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E89) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E89)
	.endif

	@ src/data/credits.h:110 sCreditsText_SosukeTamada
	.globl gText_Rom_5C6E91
gText_Rom_5C6E91: @ 0x085C6E91
	.string "たまだ そうすけ$"
	.if (. - gText_Rom_5C6E91) > 0x9
	.error "gText_Rom_5C6E91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E91) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E91)
	.endif

	@ src/data/credits.h:111 sCreditsText_AkitoMori
	.globl gText_Rom_5C6E9A
gText_Rom_5C6E9A: @ 0x085C6E9A
	.string "もり あきと$"
	.if (. - gText_Rom_5C6E9A) > 0x7
	.error "gText_Rom_5C6E9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E9A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6E9A)
	.endif

	@ src/data/credits.h:112 sCreditsText_KeitaKagaya
	.globl gText_Rom_5C6EA1
gText_Rom_5C6EA1: @ 0x085C6EA1
	.string "かがや けいた$"
	.if (. - gText_Rom_5C6EA1) > 0x8
	.error "gText_Rom_5C6EA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EA1) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EA1)
	.endif

	@ src/data/credits.h:113 sCreditsText_YoshinoriMatsuda
	.globl gText_Rom_5C6EA9
gText_Rom_5C6EA9: @ 0x085C6EA9
	.string "まつだ よしのり$"
	.if (. - gText_Rom_5C6EA9) > 0x9
	.error "gText_Rom_5C6EA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EA9) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EA9)
	.endif

	@ src/data/credits.h:114 sCreditsText_HiroyukiNakamura
	.globl gText_Rom_5C6EB2
gText_Rom_5C6EB2: @ 0x085C6EB2
	.string "なかむら ひろゆき$"
	.if (. - gText_Rom_5C6EB2) > 0xa
	.error "gText_Rom_5C6EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EB2) < 0xa
	.space 0xa - (. - gText_Rom_5C6EB2)
	.endif

	@ src/data/credits.h:115 sCreditsText_MasaoTaya
	.globl gText_Rom_5C6EBC
gText_Rom_5C6EBC: @ 0x085C6EBC
	.string "たや まさお$"
	.if (. - gText_Rom_5C6EBC) > 0x7
	.error "gText_Rom_5C6EBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EBC) < 0x7
	.space 0x7 - (. - gText_Rom_5C6EBC)
	.endif

	@ src/data/credits.h:116 sCreditsText_SatoshiNohara
	.globl gText_Rom_5C6EC3
gText_Rom_5C6EC3: @ 0x085C6EC3
	.string "のはら さとし$"
	.if (. - gText_Rom_5C6EC3) > 0x8
	.error "gText_Rom_5C6EC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EC3)
	.endif

	@ src/data/credits.h:117 sCreditsText_TomomichiOhta
	.globl gText_Rom_5C6ECB
gText_Rom_5C6ECB: @ 0x085C6ECB
	.string "おおた ともみち$"
	.if (. - gText_Rom_5C6ECB) > 0x9
	.error "gText_Rom_5C6ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6ECB) < 0x9
	.space 0x9 - (. - gText_Rom_5C6ECB)
	.endif

	@ src/data/credits.h:118 sCreditsText_MiyukiIwasawa
	.globl gText_Rom_5C6ED4
gText_Rom_5C6ED4: @ 0x085C6ED4
	.string "いわさわ みゆき$"
	.if (. - gText_Rom_5C6ED4) > 0x9
	.error "gText_Rom_5C6ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6ED4) < 0x9
	.space 0x9 - (. - gText_Rom_5C6ED4)
	.endif

	@ src/data/credits.h:119 sCreditsText_TakenoriOhta
	.globl gText_Rom_5C6EDD
gText_Rom_5C6EDD: @ 0x085C6EDD
	.string "おおた たけのり$"
	.if (. - gText_Rom_5C6EDD) > 0x9
	.error "gText_Rom_5C6EDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EDD) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EDD)
	.endif

	@ src/data/credits.h:120 sCreditsText_HironobuYoshida
	.globl gText_Rom_5C6EE6
gText_Rom_5C6EE6: @ 0x085C6EE6
	.string "よしだ ひろのぶ$"
	.if (. - gText_Rom_5C6EE6) > 0x9
	.error "gText_Rom_5C6EE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EE6) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EE6)
	.endif

	@ src/data/credits.h:121 sCreditsText_MotofumiFujiwara
	.globl gText_Rom_5C6EEF
gText_Rom_5C6EEF: @ 0x085C6EEF
	.string "ふじわら もとふみ$"
	.if (. - gText_Rom_5C6EEF) > 0xa
	.error "gText_Rom_5C6EEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EEF) < 0xa
	.space 0xa - (. - gText_Rom_5C6EEF)
	.endif

	@ src/data/credits.h:122 sCreditsText_SatoshiOhta
	.globl gText_Rom_5C6EF9
gText_Rom_5C6EF9: @ 0x085C6EF9
	.string "おおた さとし$"
	.if (. - gText_Rom_5C6EF9) > 0x8
	.error "gText_Rom_5C6EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EF9) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EF9)
	.endif

	@ src/data/credits.h:123 sCreditsText_AsukaIwashita
	.globl gText_Rom_5C6F01
gText_Rom_5C6F01: @ 0x085C6F01
	.string "いわした あすか$"
	.if (. - gText_Rom_5C6F01) > 0x9
	.error "gText_Rom_5C6F01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F01) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F01)
	.endif

	@ src/data/credits.h:124 sCreditsText_AimiTomita
	.globl gText_Rom_5C6F0A
gText_Rom_5C6F0A: @ 0x085C6F0A
	.string "とみた あいみ$"
	.if (. - gText_Rom_5C6F0A) > 0x8
	.error "gText_Rom_5C6F0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F0A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F0A)
	.endif

	@ src/data/credits.h:125 sCreditsText_TakaoUnno
	.globl gText_Rom_5C6F12
gText_Rom_5C6F12: @ 0x085C6F12
	.string "うんの たかお$"
	.if (. - gText_Rom_5C6F12) > 0x8
	.error "gText_Rom_5C6F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F12) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F12)
	.endif

	@ src/data/credits.h:126 sCreditsText_KanakoEo
	.globl gText_Rom_5C6F1A
gText_Rom_5C6F1A: @ 0x085C6F1A
	.string "えお かなこ$"
	.if (. - gText_Rom_5C6F1A) > 0x7
	.error "gText_Rom_5C6F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F1A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6F1A)
	.endif

	@ src/data/credits.h:127 sCreditsText_JunOkutani
	.globl gText_Rom_5C6F21
gText_Rom_5C6F21: @ 0x085C6F21
	.string "おくたに じゅん$"
	.if (. - gText_Rom_5C6F21) > 0x9
	.error "gText_Rom_5C6F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F21) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F21)
	.endif

	@ src/data/credits.h:128 sCreditsText_AtsukoNishida
	.globl gText_Rom_5C6F2A
gText_Rom_5C6F2A: @ 0x085C6F2A
	.string "にしだ あつこ$"
	.if (. - gText_Rom_5C6F2A) > 0x8
	.error "gText_Rom_5C6F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F2A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F2A)
	.endif

	@ src/data/credits.h:129 sCreditsText_MuneoSaito
	.globl gText_Rom_5C6F32
gText_Rom_5C6F32: @ 0x085C6F32
	.string "さいとう むねお$"
	.if (. - gText_Rom_5C6F32) > 0x9
	.error "gText_Rom_5C6F32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F32) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F32)
	.endif

	@ src/data/credits.h:130 sCreditsText_RenaYoshikawa
	.globl gText_Rom_5C6F3B
gText_Rom_5C6F3B: @ 0x085C6F3B
	.string "よしかわ れな$"
	.if (. - gText_Rom_5C6F3B) > 0x8
	.error "gText_Rom_5C6F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F3B) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F3B)
	.endif

	@ src/data/credits.h:131 sCreditsText_GoIchinose
	.globl gText_Rom_5C6F43
gText_Rom_5C6F43: @ 0x085C6F43
	.string "いちのせ ごう$"
	.if (. - gText_Rom_5C6F43) > 0x8
	.error "gText_Rom_5C6F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F43) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F43)
	.endif

	@ src/data/credits.h:132 sCreditsText_MorikazuAoki
	.globl gText_Rom_5C6F4B
gText_Rom_5C6F4B: @ 0x085C6F4B
	.string "あおき もりかず$"
	.if (. - gText_Rom_5C6F4B) > 0x9
	.error "gText_Rom_5C6F4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F4B) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F4B)
	.endif

	@ src/data/credits.h:133 sCreditsText_KojiNishino
	.globl gText_Rom_5C6F54
gText_Rom_5C6F54: @ 0x085C6F54
	.string "にしの こうじ$"
	.if (. - gText_Rom_5C6F54) > 0x8
	.error "gText_Rom_5C6F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F54) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F54)
	.endif

	@ src/data/credits.h:134 sCreditsText_KenjiMatsushima
	.globl gText_Rom_5C6F5C
gText_Rom_5C6F5C: @ 0x085C6F5C
	.string "まつしま けんじ$"
	.if (. - gText_Rom_5C6F5C) > 0x9
	.error "gText_Rom_5C6F5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F5C) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F5C)
	.endif

	@ src/data/credits.h:135 sCreditsText_TetsujiOhta
	.globl gText_Rom_5C6F65
gText_Rom_5C6F65: @ 0x085C6F65
	.string "おおた てつじ$"
	.if (. - gText_Rom_5C6F65) > 0x8
	.error "gText_Rom_5C6F65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F65) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F65)
	.endif

	@ src/data/credits.h:136 sCreditsText_HitomiSato
	.globl gText_Rom_5C6F6D
gText_Rom_5C6F6D: @ 0x085C6F6D
	.string "さとう ひとみ$"
	.if (. - gText_Rom_5C6F6D) > 0x8
	.error "gText_Rom_5C6F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F6D) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F6D)
	.endif

	@ src/data/credits.h:137 sCreditsText_TakeshiKawachimaru
	.globl gText_Rom_5C6F75
gText_Rom_5C6F75: @ 0x085C6F75
	.string "かわちまる たけし$"
	.if (. - gText_Rom_5C6F75) > 0xa
	.error "gText_Rom_5C6F75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F75) < 0xa
	.space 0xa - (. - gText_Rom_5C6F75)
	.endif

	@ src/data/credits.h:138 sCreditsText_TeruyukiShimoyamada
	.globl gText_Rom_5C6F7F
gText_Rom_5C6F7F: @ 0x085C6F7F
	.string "しもやまだ てるゆき$"
	.if (. - gText_Rom_5C6F7F) > 0xb
	.error "gText_Rom_5C6F7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F7F) < 0xb
	.space 0xb - (. - gText_Rom_5C6F7F)
	.endif

	@ src/data/credits.h:139 sCreditsText_ShigeruOhmori
	.globl gText_Rom_5C6F8A
gText_Rom_5C6F8A: @ 0x085C6F8A
	.string "おおもり しげる$"
	.if (. - gText_Rom_5C6F8A) > 0x9
	.error "gText_Rom_5C6F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F8A) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F8A)
	.endif

	@ src/data/credits.h:140 sCreditsText_TadashiTakahashi
	.globl gText_Rom_5C6F93
gText_Rom_5C6F93: @ 0x085C6F93
	.string "たかはし ただし$"
	.if (. - gText_Rom_5C6F93) > 0x9
	.error "gText_Rom_5C6F93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F93) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F93)
	.endif

	@ src/data/credits.h:141 sCreditsText_ToshinobuMatsumiya
	.globl gText_Rom_5C6F9C
gText_Rom_5C6F9C: @ 0x085C6F9C
	.string "まつみや としのぶ$"
	.if (. - gText_Rom_5C6F9C) > 0xa
	.error "gText_Rom_5C6F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F9C) < 0xa
	.space 0xa - (. - gText_Rom_5C6F9C)
	.endif

	@ src/data/credits.h:142 sCreditsText_AkihitoTomisawa
	.globl gText_Rom_5C6FA6
gText_Rom_5C6FA6: @ 0x085C6FA6
	.string "とみさわ あきひと$"
	.if (. - gText_Rom_5C6FA6) > 0xa
	.error "gText_Rom_5C6FA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FA6) < 0xa
	.space 0xa - (. - gText_Rom_5C6FA6)
	.endif

	@ src/data/credits.h:143 sCreditsText_HirokiEnomoto
	.globl gText_Rom_5C6FB0
gText_Rom_5C6FB0: @ 0x085C6FB0
	.string "えのもと ひろき$"
	.if (. - gText_Rom_5C6FB0) > 0x9
	.error "gText_Rom_5C6FB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FB0) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FB0)
	.endif

