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

