	@ src/battle_message.c:76 gText_StatRose
	.globl gText_Rom_5AA877
gText_Rom_5AA877: @ 0x085AA877
	.string "あがった！$"
	.if (. - gText_Rom_5AA877) > 0x6
	.error "gText_Rom_5AA877 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA877) < 0x6
	.space 0x6 - (. - gText_Rom_5AA877)
	.endif
	@ Decoded text from ROM range: offset=0x5AA87D, size=0x6
	.string "がくっと　$"

	@ src/battle_message.c:77 gText_StatFell
	.globl gText_Rom_5AA883
gText_Rom_5AA883: @ 0x085AA883
	.string "さがった！$"
	.if (. - gText_Rom_5AA883) > 0x6
	.error "gText_Rom_5AA883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA883) < 0x6
	.space 0x6 - (. - gText_Rom_5AA883)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA889, size=0xB
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF
	.globl gUnknown_85AA894
gUnknown_85AA894: @ 0x085AA894
	@ Replaced baserom.gba range: offset=0x5AA894, size=0x5A
	.byte 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF, 0xFD, 0x13, 0x1A, 0x00, 0xFD
	.byte 0x16, 0x44, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF, 0xFD, 0x0F, 0x19, 0xFE, 0xFD, 0x00
	.byte 0x37, 0x00, 0xFD, 0x01, 0xFF, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF
	.byte 0xFD, 0x0F, 0x19, 0x00, 0x19, 0x03, 0x28, 0x36, 0x08, 0x1A, 0xFE, 0x23, 0x03, 0x00, 0x01, 0x37
	.byte 0x27, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x19, 0x00, 0x19, 0x03, 0x28, 0x36, 0x08, 0x1A, 0xFE
	.byte 0x23, 0x03, 0x00, 0x0B, 0x37, 0x27, 0x15, 0x02, 0xAB, 0xFF

	@ src/battle_message.c:381 battle_message_line_381
	.globl gText_Rom_5AA8EE
gText_Rom_5AA8EE: @ 0x085AA8EE
	.string "きゅうしょに あたった！$"
	.if (. - gText_Rom_5AA8EE) > 0xd
	.error "gText_Rom_5AA8EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8EE) < 0xd
	.space 0xd - (. - gText_Rom_5AA8EE)
	.endif

	@ src/battle_message.c:382 battle_message_line_382
	.globl gText_Rom_5AA8FB
gText_Rom_5AA8FB: @ 0x085AA8FB
	.string "いちげき ひっさつ！$"
	.if (. - gText_Rom_5AA8FB) > 0xb
	.error "gText_Rom_5AA8FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8FB) < 0xb
	.space 0xb - (. - gText_Rom_5AA8FB)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA906, size=0x3
	.byte 0xFC, 0x08, 0x20

	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_Rom_5AA909
gText_Rom_5AA909: @ 0x085AA909
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p$"
	.if (. - gText_Rom_5AA909) > 0x22
	.error "gText_Rom_5AA909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA909) < 0x22
	.space 0x22 - (. - gText_Rom_5AA909)
	.endif

	@ src/battle_message.c:384 battle_message_line_384
	.globl gText_Rom_5AA92B
gText_Rom_5AA92B: @ 0x085AA92B
	.string "そして……!\p$"
	.if (. - gText_Rom_5AA92B) > 0x8
	.error "gText_Rom_5AA92B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA92B) < 0x8
	.space 0x8 - (. - gText_Rom_5AA92B)
	.endif

	@ src/battle_message.c:474 battle_message_line_474
	.globl gText_Rom_5AA933
gText_Rom_5AA933: @ 0x085AA933
	.string "それは たいせつな わざです\nわすれさせることは できません!\p$"
	.if (. - gText_Rom_5AA933) > 0x21
	.error "gText_Rom_5AA933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA933) < 0x21
	.space 0x21 - (. - gText_Rom_5AA933)
	.endif

	@ src/battle_message.c:385 battle_message_line_385
	.globl gText_Rom_5AA954
gText_Rom_5AA954: @ 0x085AA954
	.string "こうかは いまひとつの ようだ$"
	.if (. - gText_Rom_5AA954) > 0x10
	.error "gText_Rom_5AA954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA954) < 0x10
	.space 0x10 - (. - gText_Rom_5AA954)
	.endif

	@ src/battle_message.c:386 battle_message_line_386
	.globl gText_Rom_5AA964
gText_Rom_5AA964: @ 0x085AA964
	.string "こうかは ばつぐんだ！$"
	.if (. - gText_Rom_5AA964) > 0xc
	.error "gText_Rom_5AA964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA964) < 0xc
	.space 0xc - (. - gText_Rom_5AA964)
	.endif
	.globl gUnknown_85AA970
gUnknown_85AA970: @ 0x085AA970

	@ src/battle_message.c:79 sText_GotAwaySafely
	.globl gText_Rom_5AA970
gText_Rom_5AA970: @ 0x085AA970
	.string "{PLAY_SE SE_FLEE}うまく にげきれた！\p$"
	.if (. - gText_Rom_5AA970) > 0x10
	.error "gText_Rom_5AA970 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA970) < 0x10
	.space 0x10 - (. - gText_Rom_5AA970)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA980, size=0x32
	.byte 0xFC, 0x10, 0x11, 0x00, 0xFD, 0x0F, 0x1A, 0x00, 0x23, 0x50, 0x13, 0x02, 0x10, 0xFE, 0xFD, 0x16
	.byte 0x2D, 0x00, 0x12, 0x06, 0x50, 0x13, 0x00, 0x16, 0x3A, 0x10, 0xFB, 0xFF, 0xFC, 0x10, 0x11, 0x00
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0xFD, 0x18, 0x2D, 0x00, 0x12, 0x06, 0x50, 0x13, 0x00, 0x16, 0x3A, 0x10
	.byte 0xFB, 0xFF

	@ src/battle_message.c:388 battle_message_line_388
	.globl gText_Rom_5AA9B2
gText_Rom_5AA9B2: @ 0x085AA9B2
	.string "{PLAY_SE SE_FLEE}やせいの {B_BUFF1}は にげだした！$"
	.if (. - gText_Rom_5AA9B2) > 0x14
	.error "gText_Rom_5AA9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA9B2) < 0x14
	.space 0x14 - (. - gText_Rom_5AA9B2)
	.endif
	.globl gUnknown_85AA9C6
gUnknown_85AA9C6: @ 0x085AA9C6

	@ src/battle_message.c:80 sText_PlayerDefeatedLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9C6
gText_Rom_5AA9C6: @ 0x085AA9C6
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに かった！$"
	.if (. - gText_Rom_5AA9C6) != 0x10
	.error "gText_Rom_5AA9C6 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9D1
	.set gText_Rom_5AA9D1, gText_Rom_5AA9C6 + 0xb
	.globl gUnknown_85AA9D6
gUnknown_85AA9D6: @ 0x085AA9D6

	@ src/battle_message.c:81 sText_TwoLinkTrainersDefeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9D6
gText_Rom_5AA9D6: @ 0x085AA9D6
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに かった！$"
	.if (. - gText_Rom_5AA9D6) != 0x14
	.error "gText_Rom_5AA9D6 must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9E5
	.set gText_Rom_5AA9E5, gText_Rom_5AA9D6 + 0xf
	.globl gUnknown_85AA9EA
gUnknown_85AA9EA: @ 0x085AA9EA

	@ src/battle_message.c:82 sText_PlayerLostAgainstLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9EA
gText_Rom_5AA9EA: @ 0x085AA9EA
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに まけた！$"
	.if (. - gText_Rom_5AA9EA) != 0x10
	.error "gText_Rom_5AA9EA must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9F5
	.set gText_Rom_5AA9F5, gText_Rom_5AA9EA + 0xb
	.globl gUnknown_85AA9FA
gUnknown_85AA9FA: @ 0x085AA9FA

	@ src/battle_message.c:83 sText_PlayerLostToTwo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9FA
gText_Rom_5AA9FA: @ 0x085AA9FA
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに まけた！$"
	.if (. - gText_Rom_5AA9FA) != 0x14
	.error "gText_Rom_5AA9FA must retain its original byte length"
	.endif
	.globl gText_Rom_5AAA09
	.set gText_Rom_5AAA09, gText_Rom_5AA9FA + 0xf
	.globl gUnknown_85AAA0E
gUnknown_85AAA0E: @ 0x085AAA0E

	@ src/battle_message.c:84 sText_PlayerBattledToDrawLinkTrainer
	.globl gText_Rom_5AAA0E
gText_Rom_5AAA0E: @ 0x085AAA0E
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに ひきわけた！$"
	.if (. - gText_Rom_5AAA0E) > 0x12
	.error "gText_Rom_5AAA0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA0E) < 0x12
	.space 0x12 - (. - gText_Rom_5AAA0E)
	.endif
	.globl gUnknown_85AAA20
gUnknown_85AAA20: @ 0x085AAA20

	@ src/battle_message.c:85 sText_PlayerBattledToDrawVsTwo
	.globl gText_Rom_5AAA20
gText_Rom_5AAA20: @ 0x085AAA20
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに ひきわけた！$"
	.if (. - gText_Rom_5AAA20) > 0x16
	.error "gText_Rom_5AAA20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA20) < 0x16
	.space 0x16 - (. - gText_Rom_5AAA20)
	.endif
	.globl gUnknown_85AAA36
gUnknown_85AAA36: @ 0x085AAA36

	@ src/battle_message.c:86 sText_WildFled
	.globl gText_Rom_5AAA36
gText_Rom_5AAA36: @ 0x085AAA36
	.string "{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME}は にげだした！$"
	.if (. - gText_Rom_5AAA36) > 0xf
	.error "gText_Rom_5AAA36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA36) < 0xf
	.space 0xf - (. - gText_Rom_5AAA36)
	.endif
	.globl gUnknown_85AAA45
gUnknown_85AAA45: @ 0x085AAA45
	@ Replaced baserom.gba range: offset=0x5AAA45, size=0x13
	.byte 0xFC, 0x10, 0x11, 0x00, 0xFD, 0x20, 0x14, 0x00, 0xFD, 0x21, 0x1A, 0xFE, 0x16, 0x3A, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF

	@ src/battle_message.c:389 battle_message_line_389
	.globl gText_Rom_5AAA58
gText_Rom_5AAA58: @ 0x085AAA58
	.string "ダメだ! しょうぶの さいちゅうに\nあいてに せなかは みせられない！\p$"
	.if (. - gText_Rom_5AAA58) > 0x25
	.error "gText_Rom_5AAA58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA58) < 0x25
	.space 0x25 - (. - gText_Rom_5AAA58)
	.endif

	@ src/battle_message.c:390 battle_message_line_390
	.globl gText_Rom_5AAA7D
gText_Rom_5AAA7D: @ 0x085AAA7D
	.string "にげることが できない！\p$"
	.if (. - gText_Rom_5AAA7D) > 0xe
	.error "gText_Rom_5AAA7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA7D) < 0xe
	.space 0xe - (. - gText_Rom_5AAA7D)
	.endif

	@ src/battle_message.c:391 battle_message_line_391
	.globl gText_Rom_5AAA8B
gText_Rom_5AAA8B: @ 0x085AAA8B
	.string "オダマキ『み みすてないでくれー!』\p$"
	.if (. - gText_Rom_5AAA8B) > 0x14
	.error "gText_Rom_5AAA8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA8B) < 0x14
	.space 0x14 - (. - gText_Rom_5AAA8B)
	.endif
	@ Decoded text from ROM range: offset=0x5AAA9F, size=0xD
	.string "しかし　なにもおこらない$"

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
	@ Replaced baserom.gba range: offset=0x5AAAD3, size=0x17
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x55, 0x53, 0x71, 0x37, 0x04, 0x0C, 0x1A, 0xFE, 0x0C, 0x50, 0x4B, 0x02
	.byte 0x16, 0x05, 0x2C, 0x50, 0x10, 0xAB, 0xFF

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
	@ Replaced baserom.gba range: offset=0x5AAB9C, size=0xD
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x15, 0x16, 0x23, 0x00, 0x1A, 0x07, 0x41, 0x0E, 0x15

