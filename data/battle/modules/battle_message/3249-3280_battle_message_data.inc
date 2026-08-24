	@ src/battle_message.c:384 battle_message_line_384
	.globl gText_Rom_5AA92B
gText_Rom_5AA92B: @ 0x085AA92B
	.string "そして……!\p{EOS}"
	.if (. - gText_Rom_5AA92B) > 0x8
	.error "gText_Rom_5AA92B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA92B) < 0x8
	.space 0x8 - (. - gText_Rom_5AA92B)
	.endif

	@ src/battle_message.c:474 battle_message_line_474
	.globl gText_Rom_5AA933
gText_Rom_5AA933: @ 0x085AA933
	.string "それは たいせつな わざです\nわすれさせることは できません!\p{EOS}"
	.if (. - gText_Rom_5AA933) > 0x21
	.error "gText_Rom_5AA933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA933) < 0x21
	.space 0x21 - (. - gText_Rom_5AA933)
	.endif

	@ src/battle_message.c:385 battle_message_line_385
	.globl gText_Rom_5AA954
gText_Rom_5AA954: @ 0x085AA954
	.string "こうかは いまひとつの ようだ{EOS}"
	.if (. - gText_Rom_5AA954) > 0x10
	.error "gText_Rom_5AA954 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA954) < 0x10
	.space 0x10 - (. - gText_Rom_5AA954)
	.endif

	@ src/battle_message.c:386 battle_message_line_386
	.globl gText_Rom_5AA964
gText_Rom_5AA964: @ 0x085AA964
	.string "こうかは ばつぐんだ！{EOS}"
	.if (. - gText_Rom_5AA964) > 0xc
	.error "gText_Rom_5AA964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA964) < 0xc
	.space 0xc - (. - gText_Rom_5AA964)
	.endif

	@ src/battle_message.c:79 sText_GotAwaySafely
	.globl sText_GotAwaySafely
sText_GotAwaySafely: @ 0x085AA970
	.string "{PLAY_SE SE_FLEE}うまく にげきれた！\p{EOS}"
	.if (. - sText_GotAwaySafely) > 0x10
	.error "sText_GotAwaySafely may not grow beyond its original slot"
	.endif
	.if (. - sText_GotAwaySafely) < 0x10
	.space 0x10 - (. - sText_GotAwaySafely)
	.endif
	@ analyzed canonical ROM range 0x085AA980-0x085AA9B1
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x10FC, 0x0011, 0x0FFD, 0x001A, 0x5023, 0x0213, 0xFE10, 0x16FD
	.2byte 0x002D, 0x0612, 0x1350, 0x1600, 0x103A, 0xFFFB, 0x10FC, 0x0011
	.2byte 0x0FFD, 0xFE1A, 0x18FD, 0x002D, 0x0612, 0x1350, 0x1600, 0x103A
	.2byte 0xFFFB
	.globl gText_Rom_5AA9B2
gText_Rom_5AA9B2: @ 0x085AA9B2
	.string "{PLAY_SE SE_FLEE}やせいの {B_BUFF1}は にげだした！{EOS}"
	.if (. - gText_Rom_5AA9B2) > 0x14
	.error "gText_Rom_5AA9B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA9B2) < 0x14
	.space 0x14 - (. - gText_Rom_5AA9B2)
	.endif

	@ src/battle_message.c:80 sText_PlayerDefeatedLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_PlayerDefeatedLinkTrainer
sText_PlayerDefeatedLinkTrainer: @ 0x085AA9C6
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに かった！{EOS}"
	.if (. - sText_PlayerDefeatedLinkTrainer) != 0x10
	.error "sText_PlayerDefeatedLinkTrainer must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9D1
	.set gText_Rom_5AA9D1, sText_PlayerDefeatedLinkTrainer + 0xb

	@ src/battle_message.c:81 sText_TwoLinkTrainersDefeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_TwoLinkTrainersDefeated
sText_TwoLinkTrainersDefeated: @ 0x085AA9D6
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに かった！{EOS}"
	.if (. - sText_TwoLinkTrainersDefeated) != 0x14
	.error "sText_TwoLinkTrainersDefeated must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9E5
	.set gText_Rom_5AA9E5, sText_TwoLinkTrainersDefeated + 0xf

	@ src/battle_message.c:82 sText_PlayerLostAgainstLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_PlayerLostAgainstLinkTrainer
sText_PlayerLostAgainstLinkTrainer: @ 0x085AA9EA
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに まけた！{EOS}"
	.if (. - sText_PlayerLostAgainstLinkTrainer) != 0x10
	.error "sText_PlayerLostAgainstLinkTrainer must retain its original byte length"
	.endif
	.globl gText_Rom_5AA9F5
	.set gText_Rom_5AA9F5, sText_PlayerLostAgainstLinkTrainer + 0xb

	@ src/battle_message.c:83 sText_PlayerLostToTwo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_PlayerLostToTwo
sText_PlayerLostToTwo: @ 0x085AA9FA
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに まけた！{EOS}"
	.if (. - sText_PlayerLostToTwo) != 0x14
	.error "sText_PlayerLostToTwo must retain its original byte length"
	.endif
	.globl gText_Rom_5AAA09
	.set gText_Rom_5AAA09, sText_PlayerLostToTwo + 0xf

	@ src/battle_message.c:84 sText_PlayerBattledToDrawLinkTrainer
	.globl sText_PlayerBattledToDrawLinkTrainer
sText_PlayerBattledToDrawLinkTrainer: @ 0x085AAA0E
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに ひきわけた！{EOS}"
	.if (. - sText_PlayerBattledToDrawLinkTrainer) > 0x12
	.error "sText_PlayerBattledToDrawLinkTrainer may not grow beyond its original slot"
	.endif
	.if (. - sText_PlayerBattledToDrawLinkTrainer) < 0x12
	.space 0x12 - (. - sText_PlayerBattledToDrawLinkTrainer)
	.endif

	@ src/battle_message.c:85 sText_PlayerBattledToDrawVsTwo
	.globl sText_PlayerBattledToDrawVsTwo
sText_PlayerBattledToDrawVsTwo: @ 0x085AAA20
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに ひきわけた！{EOS}"
	.if (. - sText_PlayerBattledToDrawVsTwo) > 0x16
	.error "sText_PlayerBattledToDrawVsTwo may not grow beyond its original slot"
	.endif
	.if (. - sText_PlayerBattledToDrawVsTwo) < 0x16
	.space 0x16 - (. - sText_PlayerBattledToDrawVsTwo)
	.endif

	@ src/battle_message.c:86 sText_WildFled
	.globl sText_WildFled
sText_WildFled: @ 0x085AAA36
	.string "{PLAY_SE SE_FLEE}{B_LINK_OPPONENT1_NAME}は にげだした！{EOS}"
	.if (. - sText_WildFled) > 0xf
	.error "sText_WildFled may not grow beyond its original slot"
	.endif
	.if (. - sText_WildFled) < 0xf
	.space 0xf - (. - sText_WildFled)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAA45: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAA45
gBattleMessageData_085AAA45: @ 0x085AAA45
	@ analyzed canonical ROM range 0x085AAA45-0x085AAA57
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x13 bytes=19
	.byte 0xFC, 0x10, 0x11, 0x00, 0xFD, 0x20, 0x14, 0x00, 0xFD, 0x21, 0x1A, 0xFE, 0x16, 0x3A, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AAA58
gText_Rom_5AAA58: @ 0x085AAA58
	.string "ダメだ! しょうぶの さいちゅうに\nあいてに せなかは みせられない！\p{EOS}"
	.if (. - gText_Rom_5AAA58) > 0x25
	.error "gText_Rom_5AAA58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA58) < 0x25
	.space 0x25 - (. - gText_Rom_5AAA58)
	.endif
