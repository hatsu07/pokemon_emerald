.if .L__inc_fragment_select_c3d2d9fd16ac == 1
	@ ANALYSIS: RAW_RANGE offset=0x5A9C45, size=0x17
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x01, 0x15, 0x2D, 0x1E, 0x50, 0x13, 0x00, 0x11, 0x11, 0x35, 0x03, 0x16
	.byte 0x00, 0x23, 0x39, 0x50, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:472 battle_message_line_472
	.globl gText_Rom_5A9C5C
gText_Rom_5A9C5C: @ 0x085A9C5C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nすいちゅうに みをひそめた!{EOS}"
	.if (. - gText_Rom_5A9C5C) > 0x13
	.error "gText_Rom_5A9C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C5C) < 0x13
	.space 0x13 - (. - gText_Rom_5A9C5C)
	.endif

	@ src/battle_message.c:473 battle_message_line_473
	.globl gText_Rom_5A9C6F
gText_Rom_5A9C6F: @ 0x085A9C6F
	.string "{B_ATK_NAME_WITH_PREFIX}は\nとびはねた!{EOS}"
	.if (. - gText_Rom_5A9C6F) > 0xb
	.error "gText_Rom_5A9C6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C6F) < 0xb
	.space 0xb - (. - gText_Rom_5A9C6F)
	.endif
	@ analyzed canonical ROM range 0x085A9C7A-0x085A9CD4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x16, 0xFE, 0x0C, 0x22, 0x12, 0x09, 0x27, 0x2A, 0x10, 0xAB
	.byte 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x03, 0x3E, 0x19, 0x00, 0x15, 0x06, 0x16, 0xFE, 0x14, 0x3D, 0x0A
	.byte 0x22, 0x27, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x15, 0x3D, 0x3B, 0x08, 0x16
	.byte 0xFE, 0x14, 0x27, 0x2C, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x16, 0xFE
	.byte 0x1F, 0x07, 0x12, 0x06, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x19, 0xFE
	.byte 0x06, 0x27, 0x16, 0x00, 0x1A, 0x0B, 0x1F, 0x2A, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A9CD5
gText_Rom_5A9CD5: @ 0x085A9CD5
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}の\nダメージを うけている{EOS}"
	.if (. - gText_Rom_5A9CD5) != 0x14
	.error "gText_Rom_5A9CD5 must retain its original byte length"
	.endif

	@ src/battle_message.c:269 battle_message_line_269 (+1 aliases)
	.globl gText_Rom_5A9CE9
gText_Rom_5A9CE9: @ 0x085A9CE9
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}から かいほうされた！{EOS}"
	.if (. - gText_Rom_5A9CE9) > 0x12
	.error "gText_Rom_5A9CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9CE9) < 0x12
	.space 0x12 - (. - gText_Rom_5A9CE9)
	.endif

	@ src/battle_message.c:270 battle_message_line_270
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CFB
gText_Rom_5A9CFB: @ 0x085A9CFB
	.string "いきおい あまって\n{B_ATK_NAME_WITH_PREFIX}は じめんに ぶつかった!{EOS}"
	.if (. - gText_Rom_5A9CFB) != 0x1a
	.error "gText_Rom_5A9CFB must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085A9D15: pokemon.s: sub_0806CA3C
	.globl gPokemonData_085A9D15
gPokemonData_085A9D15:
	.globl gPokemonData_085A9D15
	@ analyzed canonical ROM range 0x085A9D15-0x085A9D25
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x11 bytes=17
	.byte 0xFD, 0x2A, 0xFE, 0x0C, 0x2B, 0x02, 0x07, 0x28, 0x16, 0x00, 0x12, 0x12, 0x1F, 0x2A, 0x10, 0xAB
	.byte 0xFF
	.globl gText_Rom_5A9D26
gText_Rom_5A9D26: @ 0x085A9D26
	.string "{B_SCR_NAME_WITH_PREFIX}は しろいきりに\nまもられている{EOS}"
	.if (. - gText_Rom_5A9D26) != 0x13
	.error "gText_Rom_5A9D26 must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085A9D39: pokemon.s: sub_0806CA3C
	.globl gPokemonData_085A9D39
gPokemonData_085A9D39:
	.globl gPokemonData_085A9D39
	@ analyzed canonical ROM range 0x085A9D39-0x085A9D45
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xD bytes=13
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x1A, 0x28, 0x07, 0x50, 0x13, 0x02, 0x29, 0xAB, 0xFF
	.globl gText_Rom_5A9D46
gText_Rom_5A9D46: @ 0x085A9D46
	.string "{B_ATK_NAME_WITH_PREFIX}は こうげきの\nはんどうを うけた!{EOS}"
	.if (. - gText_Rom_5A9D46) > 0x15
	.error "gText_Rom_5A9D46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D46) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D46)
	.endif

	@ src/battle_message.c:275 battle_message_line_275
	.globl gText_Rom_5A9D5B
gText_Rom_5A9D5B: @ 0x085A9D5B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nまもりの たいせいに はいった！{EOS}"
	.if (. - gText_Rom_5A9D5B) > 0x15
	.error "gText_Rom_5A9D5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D5B) < 0x15
	.space 0x15 - (. - gText_Rom_5A9D5B)
	.endif

	@ src/battle_message.c:276 battle_message_line_276
	.globl gText_Rom_5A9D70
gText_Rom_5A9D70: @ 0x085A9D70
	.string "すなあらしが {B_ATK_NAME_WITH_PREFIX}を\nおそう!{EOS}"
	.if (. - gText_Rom_5A9D70) > 0x10
	.error "gText_Rom_5A9D70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D70) < 0x10
	.space 0x10 - (. - gText_Rom_5A9D70)
	.endif

	@ src/battle_message.c:277 battle_message_line_277
	.globl gText_Rom_5A9D80
gText_Rom_5A9D80: @ 0x085A9D80
	.string "あられが {B_ATK_NAME_WITH_PREFIX}を\nおそう!{EOS}"
	.if (. - gText_Rom_5A9D80) > 0xe
	.error "gText_Rom_5A9D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D80) < 0xe
	.space 0xe - (. - gText_Rom_5A9D80)
	.endif
	@ analyzed canonical ROM range 0x085A9D8E-0x085A9D9E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x28, 0x00, 0xFD, 0x00, 0x19, 0xFE, 0x0A, 0x03, 0x06, 0x37, 0x00, 0x07, 0x2A, 0x10, 0xAB
	.byte 0xFF
	.globl gText_Rom_5A9D9F
gText_Rom_5A9D9F: @ 0x085A9D9F
	.string "{B_DEF_NAME_WITH_PREFIX}に\nたねを うえつけた！{EOS}"
	.if (. - gText_Rom_5A9D9F) > 0xf
	.error "gText_Rom_5A9D9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9D9F) < 0xf
	.space 0xf - (. - gText_Rom_5A9D9F)
	.endif

	@ src/battle_message.c:279 battle_message_line_279
	.globl gText_Rom_5A9DAE
gText_Rom_5A9DAE: @ 0x085A9DAE
	.string "{B_DEF_NAME_WITH_PREFIX}は\nこうげきを かわした!{EOS}"
	.if (. - gText_Rom_5A9DAE) > 0x10
	.error "gText_Rom_5A9DAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DAE) < 0x10
	.space 0x10 - (. - gText_Rom_5A9DAE)
	.endif

	@ src/battle_message.c:281 battle_message_line_281
	.globl gText_Rom_5A9DBE
gText_Rom_5A9DBE: @ 0x085A9DBE
	.string "やどりぎが {B_ATK_NAME_WITH_PREFIX}の\nたいりょくを うばう!{EOS}"
	.if (. - gText_Rom_5A9DBE) > 0x16
	.error "gText_Rom_5A9DBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9DBE) < 0x16
	.space 0x16 - (. - gText_Rom_5A9DBE)
	.endif
	@ analyzed canonical ROM range 0x085A9DD4-0x085A9DDF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x39, 0x03, 0x39, 0x03, 0x00, 0x18, 0x21, 0x50
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 2

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_StatRose
gText_StatRose: @ 0x085AA877
	.string "あがった！{EOS}"
	.if (. - gText_StatRose) > 0x6
	.error "gText_StatRose may not grow beyond its original slot"
	.endif
	.if (. - gText_StatRose) < 0x6
	.space 0x6 - (. - gText_StatRose)
	.endif
	@ Decoded text from ROM range: offset=0x5AA87D, size=0x6
	.string "がくっと　{EOS}"

	@ src/battle_message.c:77 gText_StatFell
	.globl gText_StatFell
gText_StatFell: @ 0x085AA883
	.string "さがった！{EOS}"
	.if (. - gText_StatFell) > 0x6
	.error "gText_StatFell may not grow beyond its original slot"
	.endif
	.if (. - gText_StatFell) < 0x6
	.space 0x6 - (. - gText_StatFell)
	.endif
	@ analyzed canonical ROM range 0x085AA889-0x085AA893
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AA894: pokemon.s: sub_0806C9E8
	.globl gPokemonData_085AA894
gPokemonData_085AA894:
	.globl gPokemonData_085AA894
	@ analyzed canonical ROM range 0x085AA894-0x085AA8ED
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5A bytes=90
	.byte 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF, 0xFD, 0x13, 0x1A, 0x00, 0xFD
	.byte 0x16, 0x44, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF, 0xFD, 0x0F, 0x19, 0xFE, 0xFD, 0x00
	.byte 0x37, 0x00, 0xFD, 0x01, 0xFF, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF
	.byte 0xFD, 0x0F, 0x19, 0x00, 0x19, 0x03, 0x28, 0x36, 0x08, 0x1A, 0xFE, 0x23, 0x03, 0x00, 0x01, 0x37
	.byte 0x27, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x19, 0x00, 0x19, 0x03, 0x28, 0x36, 0x08, 0x1A, 0xFE
	.byte 0x23, 0x03, 0x00, 0x0B, 0x37, 0x27, 0x15, 0x02, 0xAB, 0xFF
	.globl gText_Rom_5AA8EE
gText_Rom_5AA8EE: @ 0x085AA8EE
	.string "きゅうしょに あたった！{EOS}"
	.if (. - gText_Rom_5AA8EE) > 0xd
	.error "gText_Rom_5AA8EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8EE) < 0xd
	.space 0xd - (. - gText_Rom_5AA8EE)
	.endif

	@ src/battle_message.c:382 battle_message_line_382
	.globl gText_Rom_5AA8FB
gText_Rom_5AA8FB: @ 0x085AA8FB
	.string "いちげき ひっさつ！{EOS}"
	.if (. - gText_Rom_5AA8FB) > 0xb
	.error "gText_Rom_5AA8FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA8FB) < 0xb
	.space 0xb - (. - gText_Rom_5AA8FB)
	.endif
	@ analyzed canonical ROM range 0x085AA906-0x085AA908
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x08, 0x20
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 3
	@ src/strings.c:1126 gText_MoveRelearnerAndPoof
	.globl gText_MoveRelearnerAndPoof
gText_MoveRelearnerAndPoof: @ 0x085AA909
	.string "1 {PAUSE 15}2の {PAUSE 15}…{PAUSE 15}…{PAUSE 15}… {PAUSE 15}{PLAY_SE SE_BALL_BOUNCE_1}ポカン!\p{EOS}"
	.if (. - gText_MoveRelearnerAndPoof) > 0x22
	.error "gText_MoveRelearnerAndPoof may not grow beyond its original slot"
	.endif
	.if (. - gText_MoveRelearnerAndPoof) < 0x22
	.space 0x22 - (. - gText_MoveRelearnerAndPoof)
	.endif
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

	@ src/battle_message.c:81 sText_TwoLinkTrainersDefeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_TwoLinkTrainersDefeated
sText_TwoLinkTrainersDefeated: @ 0x085AA9D6
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに かった！{EOS}"
	.if (. - sText_TwoLinkTrainersDefeated) != 0x14
	.error "sText_TwoLinkTrainersDefeated must retain its original byte length"
	.endif

	@ src/battle_message.c:82 sText_PlayerLostAgainstLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_PlayerLostAgainstLinkTrainer
sText_PlayerLostAgainstLinkTrainer: @ 0x085AA9EA
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに まけた！{EOS}"
	.if (. - sText_PlayerLostAgainstLinkTrainer) != 0x10
	.error "sText_PlayerLostAgainstLinkTrainer must retain its original byte length"
	.endif

	@ src/battle_message.c:83 sText_PlayerLostToTwo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_PlayerLostToTwo
sText_PlayerLostToTwo: @ 0x085AA9FA
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに まけた！{EOS}"
	.if (. - sText_PlayerLostToTwo) != 0x14
	.error "sText_PlayerLostToTwo must retain its original byte length"
	.endif

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
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 4
	@ src/battle_message.c:390 battle_message_line_390
	.globl gText_Rom_5AAA7D
gText_Rom_5AAA7D: @ 0x085AAA7D
	.string "にげることが できない！\p{EOS}"
	.if (. - gText_Rom_5AAA7D) > 0xe
	.error "gText_Rom_5AAA7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA7D) < 0xe
	.space 0xe - (. - gText_Rom_5AAA7D)
	.endif

	@ src/battle_message.c:391 battle_message_line_391
	.globl gText_Rom_5AAA8B
gText_Rom_5AAA8B: @ 0x085AAA8B
	.string "オダマキ『み みすてないでくれー!』\p{EOS}"
	.if (. - gText_Rom_5AAA8B) > 0x14
	.error "gText_Rom_5AAA8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAA8B) < 0x14
	.space 0x14 - (. - gText_Rom_5AAA8B)
	.endif
	@ Decoded text from ROM range: offset=0x5AAA9F, size=0xD
	.string "しかし　なにもおこらない{EOS}"

	@ src/battle_message.c:393 battle_message_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAAAC
gText_Rom_5AAAAC: @ 0x085AAAAC
	.string "しかし うまく きまらなかった！{EOS}"
	.if (. - gText_Rom_5AAAAC) != 0x11
	.error "gText_Rom_5AAAAC must retain its original byte length"
	.endif

	@ src/battle_message.c:394 battle_message_line_394
	.globl gText_Rom_5AAABD
gText_Rom_5AAABD: @ 0x085AAABD
	.string "わけも わからず\nじぶんを こうげきした!{EOS}"
	.if (. - gText_Rom_5AAABD) > 0x16
	.error "gText_Rom_5AAABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAABD) < 0x16
	.space 0x16 - (. - gText_Rom_5AAABD)
	.endif
	@ analyzed canonical ROM range 0x085AAAD3-0x085AAAE9
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x55, 0x53, 0x71, 0x37, 0x04, 0x0C, 0x1A, 0xFE, 0x0C, 0x50, 0x4B, 0x02
	.byte 0x16, 0x05, 0x2C, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AAAEA
gText_Rom_5AAAEA: @ 0x085AAAEA
	.string "あめが ふりはじめた!{EOS}"
	.if (. - gText_Rom_5AAAEA) > 0xc
	.error "gText_Rom_5AAAEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAAEA) < 0xc
	.space 0xc - (. - gText_Rom_5AAAEA)
	.endif

	@ src/battle_message.c:396 battle_message_line_396
	.globl gText_Rom_5AAAF6
gText_Rom_5AAAF6: @ 0x085AAAF6
	.string "おおあめに なった!{EOS}"
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
	.string "あめが ふりつづいている{EOS}"
	.if (. - gText_Rom_5AAB01) != 0xd
	.error "gText_Rom_5AAB01 must retain its original byte length"
	.endif

	@ src/battle_message.c:398 battle_message_line_398
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AAB0E
gText_Rom_5AAB0E: @ 0x085AAB0E
	.string "おおあめが ふりつづいている{EOS}"
	.if (. - gText_Rom_5AAB0E) != 0xf
	.error "gText_Rom_5AAB0E must retain its original byte length"
	.endif

	@ src/battle_message.c:399 battle_message_line_399
	.globl gText_Rom_5AAB1D
gText_Rom_5AAB1D: @ 0x085AAB1D
	.string "あめが ふりやんだ!{EOS}"
	.if (. - gText_Rom_5AAB1D) > 0xb
	.error "gText_Rom_5AAB1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB1D) < 0xb
	.space 0xb - (. - gText_Rom_5AAB1D)
	.endif

	@ src/battle_message.c:400 battle_message_line_400
	.globl gText_Rom_5AAB28
gText_Rom_5AAB28: @ 0x085AAB28
	.string "すなあらしが ふきはじめた!{EOS}"
	.if (. - gText_Rom_5AAB28) > 0xf
	.error "gText_Rom_5AAB28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB28) < 0xf
	.space 0xf - (. - gText_Rom_5AAB28)
	.endif

	@ src/battle_message.c:401 battle_message_line_401
	.globl gText_Rom_5AAB37
gText_Rom_5AAB37: @ 0x085AAB37
	.string "すなあらしが ふきあれる{EOS}"
	.if (. - gText_Rom_5AAB37) > 0xd
	.error "gText_Rom_5AAB37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB37) < 0xd
	.space 0xd - (. - gText_Rom_5AAB37)
	.endif

	@ src/battle_message.c:402 battle_message_line_402
	.globl gText_Rom_5AAB44
gText_Rom_5AAB44: @ 0x085AAB44
	.string "すなあらしが おさまった!{EOS}"
	.if (. - gText_Rom_5AAB44) > 0xe
	.error "gText_Rom_5AAB44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB44) < 0xe
	.space 0xe - (. - gText_Rom_5AAB44)
	.endif

	@ src/battle_message.c:403 battle_message_line_403
	.globl gText_Rom_5AAB52
gText_Rom_5AAB52: @ 0x085AAB52
	.string "ひざしが つよくなった!{EOS}"
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
	.string "ひざしが つよい{EOS}"
	.if (. - gText_Rom_5AAB5F) != 0x9
	.error "gText_Rom_5AAB5F must retain its original byte length"
	.endif

.elseif .L__inc_fragment_select_c3d2d9fd16ac == 5
	@ src/battle_message.c:409 battle_message_line_409
	.globl gText_Rom_5AABCF
gText_Rom_5AABCF: @ 0x085AABCF
	.string "すべての ステータスが\nもとに もどった!{EOS}"
	.if (. - gText_Rom_5AABCF) > 0x16
	.error "gText_Rom_5AABCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABCF) < 0x16
	.space 0x16 - (. - gText_Rom_5AABCF)
	.endif

	@ src/battle_message.c:410 battle_message_line_410
	.globl gText_Rom_5AABE5
gText_Rom_5AABE5: @ 0x085AABE5
	.string "こばんが あたりに ちらばった!{EOS}"
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
	.string "しかし ぶんしんを だすには\nたいりょくが たりなかった!{EOS}"
	.if (. - gText_Rom_5AABF6) != 0x1e
	.error "gText_Rom_5AABF6 must retain its original byte length"
	.endif

	@ src/battle_message.c:412 battle_message_line_412
	.globl gText_Rom_5AAC14
gText_Rom_5AAC14: @ 0x085AAC14
	.string "おたがいの たいりょくを\nわかちあった!{EOS}"
	.if (. - gText_Rom_5AAC14) > 0x15
	.error "gText_Rom_5AAC14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC14) < 0x15
	.space 0x15 - (. - gText_Rom_5AAC14)
	.endif

	@ src/battle_message.c:413 battle_message_line_413
	.globl gText_Rom_5AAC29
gText_Rom_5AAC29: @ 0x085AAC29
	.string "すずのねが ひびきわたった!{EOS}"
	.if (. - gText_Rom_5AAC29) > 0xf
	.error "gText_Rom_5AAC29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC29) < 0xf
	.space 0xf - (. - gText_Rom_5AAC29)
	.endif

	@ src/battle_message.c:414 battle_message_line_414
	.globl gText_Rom_5AAC38
gText_Rom_5AAC38: @ 0x085AAC38
	.string "おたがいのポケモンは\n3ターンごに ほろびてしまう!{EOS}"
	.if (. - gText_Rom_5AAC38) > 0x1b
	.error "gText_Rom_5AAC38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC38) < 0x1b
	.space 0x1b - (. - gText_Rom_5AAC38)
	.endif

	@ src/battle_message.c:415 battle_message_line_415
	.globl gText_Rom_5AAC53
gText_Rom_5AAC53: @ 0x085AAC53
	.string "わざの のこりポイントが ない!\p{EOS}"
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
	.string "しかし\nわざの のこりポイントが なかった!{EOS}"
	.if (. - gText_Rom_5AAC65) != 0x17
	.error "gText_Rom_5AAC65 must retain its original byte length"
	.endif

	@ src/battle_message.c:433 battle_message_line_433
	.globl gText_Rom_5AAC7C
gText_Rom_5AAC7C: @ 0x085AAC7C
	.string "{B_ATK_NAME_WITH_PREFIX}は ねむったまま\nめいれいを むしした!{EOS}"
	.if (. - gText_Rom_5AAC7C) > 0x17
	.error "gText_Rom_5AAC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC7C) < 0x17
	.space 0x17 - (. - gText_Rom_5AAC7C)
	.endif

	@ src/battle_message.c:434 battle_message_line_434
	.globl gText_Rom_5AAC93
gText_Rom_5AAC93: @ 0x085AAC93
	.string "{B_ATK_NAME_WITH_PREFIX}は めいれいを むしした!{EOS}"
	.if (. - gText_Rom_5AAC93) > 0x10
	.error "gText_Rom_5AAC93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAC93) < 0x10
	.space 0x10 - (. - gText_Rom_5AAC93)
	.endif

	@ src/battle_message.c:435 battle_message_line_435
	.globl gText_Rom_5AACA3
gText_Rom_5AACA3: @ 0x085AACA3
	.string "{B_ATK_NAME_WITH_PREFIX}は ひるねを はじめた!{EOS}"
	.if (. - gText_Rom_5AACA3) > 0xf
	.error "gText_Rom_5AACA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACA3) < 0xf
	.space 0xf - (. - gText_Rom_5AACA3)
	.endif

	@ src/battle_message.c:436 battle_message_line_436
	.globl gText_Rom_5AACB2
gText_Rom_5AACB2: @ 0x085AACB2
	.string "{B_ATK_NAME_WITH_PREFIX}は なまけている!{EOS}"
	.if (. - gText_Rom_5AACB2) > 0xc
	.error "gText_Rom_5AACB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACB2) < 0xc
	.space 0xc - (. - gText_Rom_5AACB2)
	.endif

	@ src/battle_message.c:437 battle_message_line_437
	.globl gText_Rom_5AACBE
gText_Rom_5AACBE: @ 0x085AACBE
	.string "{B_ATK_NAME_WITH_PREFIX}は いうことを きかない!{EOS}"
	.if (. - gText_Rom_5AACBE) > 0x10
	.error "gText_Rom_5AACBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACBE) < 0x10
	.space 0x10 - (. - gText_Rom_5AACBE)
	.endif

	@ src/battle_message.c:438 battle_message_line_438
	.globl gText_Rom_5AACCE
gText_Rom_5AACCE: @ 0x085AACCE
	.string "{B_ATK_NAME_WITH_PREFIX}は そっぽを むいた!{EOS}"
	.if (. - gText_Rom_5AACCE) > 0xe
	.error "gText_Rom_5AACCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACCE) < 0xe
	.space 0xe - (. - gText_Rom_5AACCE)
	.endif

	@ src/battle_message.c:439 battle_message_line_439
	.globl gText_Rom_5AACDC
gText_Rom_5AACDC: @ 0x085AACDC
	.string "{B_ATK_NAME_WITH_PREFIX}は しらんぷりした!{EOS}"
	.if (. - gText_Rom_5AACDC) > 0xd
	.error "gText_Rom_5AACDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AACDC) < 0xd
	.space 0xd - (. - gText_Rom_5AACDC)
	.endif
	@ analyzed canonical ROM range 0x085AACE9-0x085AAD21
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x01, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0F
	.byte 0x03, 0x14, 0x00, 0x0C, 0x13, 0x02, 0x29, 0xFB, 0xFD, 0x23, 0x23, 0x00, 0x9F, 0x59, 0x73, 0x7E
	.byte 0x2D, 0xFE, 0x02, 0x2A, 0x06, 0x04, 0x1F, 0x0D, 0x06, 0xAC, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0xFD
	.byte 0x00, 0x2D, 0x00, 0x05, 0x4A, 0x04, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAD22: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAD22
gBattleMessageData_085AAD22:
	.globl gBattleMessageData_085AAD22
	@ analyzed canonical ROM range 0x085AAD22-0x085AAD37
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x16 bytes=22
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0xFE, 0x14, 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00
	.byte 0x06, 0x50, 0x10, 0xAB, 0xFB, 0xFF
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 6
	@ src/battle_message.c:441 battle_message_line_441
	.globl gText_Rom_5AAD38
gText_Rom_5AAD38: @ 0x085AAD38
	.string "{B_PLAYER_NAME}は\n{B_OPPONENT_MON1_NAME}に ちかづいた!{EOS}"
	.if (. - gText_Rom_5AAD38) > 0xf
	.error "gText_Rom_5AAD38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD38) < 0xf
	.space 0xf - (. - gText_Rom_5AAD38)
	.endif

	@ src/battle_message.c:442 battle_message_line_442
	.globl gText_Rom_5AAD47
gText_Rom_5AAD47: @ 0x085AAD47
	.string "{B_PLAYER_NAME}は\nこれいじょう ちかづけない!{EOS}"
	.if (. - gText_Rom_5AAD47) > 0x13
	.error "gText_Rom_5AAD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD47) < 0x13
	.space 0x13 - (. - gText_Rom_5AAD47)
	.endif

	@ src/battle_message.c:443 battle_message_line_443
	.globl gText_Rom_5AAD5A
gText_Rom_5AAD5A: @ 0x085AAD5A
	.string "{B_OPPONENT_MON1_NAME}は\nこちらの ようすを うかがっている!{EOS}"
	.if (. - gText_Rom_5AAD5A) > 0x17
	.error "gText_Rom_5AAD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD5A) < 0x17
	.space 0x17 - (. - gText_Rom_5AAD5A)
	.endif

	@ src/battle_message.c:444 battle_message_line_444
	.globl gText_Rom_5AAD71
gText_Rom_5AAD71: @ 0x085AAD71
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nきょうみを しめしている ようだ!{EOS}"
	.if (. - gText_Rom_5AAD71) > 0x1a
	.error "gText_Rom_5AAD71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD71) < 0x1a
	.space 0x1a - (. - gText_Rom_5AAD71)
	.endif

	@ src/battle_message.c:445 battle_message_line_445
	.globl gText_Rom_5AAD8B
gText_Rom_5AAD8B: @ 0x085AAD8B
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nむちゅうに なっている ようだ!{EOS}"
	.if (. - gText_Rom_5AAD8B) > 0x19
	.error "gText_Rom_5AAD8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAD8B) < 0x19
	.space 0x19 - (. - gText_Rom_5AAD8B)
	.endif

	@ src/battle_message.c:446 battle_message_line_446
	.globl gText_Rom_5AADA4
gText_Rom_5AADA4: @ 0x085AADA4
	.string "{B_OPPONENT_MON1_NAME}は {B_BUFF1}に\nみむきも しない ようだ!{EOS}"
	.if (. - gText_Rom_5AADA4) > 0x16
	.error "gText_Rom_5AADA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AADA4) < 0x16
	.space 0x16 - (. - gText_Rom_5AADA4)
	.endif
	@ analyzed canonical ROM range 0x085AADBA-0x085AADCC
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x23, 0x1A, 0xFE, 0xFD, 0x06, 0x16, 0x00, 0x9F, 0x7B, 0xA0, 0x58, 0x2D, 0x00, 0x15, 0x3A
	.byte 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AADCD
gText_Rom_5AADCD: @ 0x085AADCD
	.string "{PLAY_SE SE_DING_DONG}アナウンス『ピンポーン! サファリボールが\nなくなったので しゅうりょうでーす!\p{EOS}"
	.if (. - gText_Rom_5AADCD) > 0x2e
	.error "gText_Rom_5AADCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AADCD) < 0x2e
	.space 0x2e - (. - gText_Rom_5AADCD)
	.endif
	@ Decoded text from ROM range: offset=0x5AADFB, size=0x11
	.string "あ！　{B_OPPONENT_MON1_NAME}が　とびだしてきた！\p{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085AAE0C: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAE0C
gBattleMessageData_085AAE0C: @ 0x085AAE0C
	@ analyzed canonical ROM range 0x085AAE0C-0x085AAE21
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x16 bytes=22
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x37, 0x00, 0x14, 0x47, 0x41, 0x0C
	.byte 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAE22: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAE22
gBattleMessageData_085AAE22: @ 0x085AAE22
	@ analyzed canonical ROM range 0x085AAE22-0x085AAE35
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x14 bytes=20
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x37, 0x00, 0x01, 0x27, 0x2C, 0x2A
	.byte 0x10, 0xAB, 0xFB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAE36: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAE36
gBattleMessageData_085AAE36: @ 0x085AAE36
	@ analyzed canonical ROM range 0x085AAE36-0x085AAE4D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x18 bytes=24
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x37, 0x00, 0x14, 0x47, 0x41, 0x0C
	.byte 0x13, 0x07, 0x10, 0xAB, 0xFC, 0x08, 0x7F, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAE4E: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAE4E
gBattleMessageData_085AAE4E: @ 0x085AAE4E
	@ analyzed canonical ROM range 0x085AAE4E-0x085AAE67
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1A bytes=26
	.byte 0x01, 0xAB, 0x00, 0x24, 0x0E, 0x02, 0x19, 0xFE, 0xFD, 0x06, 0x14, 0x00, 0xFD, 0x08, 0x37, 0x00
	.byte 0x14, 0x47, 0x41, 0x0C, 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAE68: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AAE68
gBattleMessageData_085AAE68: @ 0x085AAE68
	@ analyzed canonical ROM range 0x085AAE68-0x085AAE7E
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x17 bytes=23
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x37, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x0C, 0x06
	.byte 0x09, 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF

	@ src/battle_message.c:97 sText_LinkTrainerWantsToBattle
	.globl sText_LinkTrainerWantsToBattle
sText_LinkTrainerWantsToBattle: @ 0x085AAE7F
	.string "{B_LINK_OPPONENT1_NAME}が\nしょうぶを しかけてきた！{EOS}"
	.if (. - sText_LinkTrainerWantsToBattle) > 0x12
	.error "sText_LinkTrainerWantsToBattle may not grow beyond its original slot"
	.endif
	.if (. - sText_LinkTrainerWantsToBattle) < 0x12
	.space 0x12 - (. - sText_LinkTrainerWantsToBattle)
	.endif

	@ src/battle_message.c:98 sText_TwoLinkTrainersWantToBattle
	.globl sText_TwoLinkTrainersWantToBattle
sText_TwoLinkTrainersWantToBattle: @ 0x085AAE91
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}が\nしょうぶを しかけてきた！{EOS}"
	.if (. - sText_TwoLinkTrainersWantToBattle) > 0x16
	.error "sText_TwoLinkTrainersWantToBattle may not grow beyond its original slot"
	.endif
	.if (. - sText_TwoLinkTrainersWantToBattle) < 0x16
	.space 0x16 - (. - sText_TwoLinkTrainersWantToBattle)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAEA7: battle_message.s: BufferStringBattle
	.globl sText_Trainer1SentOutPkmn
sText_Trainer1SentOutPkmn: @ 0x085AAEA7
	@ canonical pret/pokeemerald semantic role: sText_Trainer1SentOutPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAEBA: battle_message.s: BufferStringBattle
	.globl sText_Trainer1SentOutTwoPkmn
sText_Trainer1SentOutTwoPkmn: @ 0x085AAEBA
	@ canonical pret/pokeemerald semantic role: sText_Trainer1SentOutTwoPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x06, 0x14, 0x00, 0xFD, 0x08, 0x2D, 0x00
	.byte 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAED1: battle_message.s: BufferStringBattle
	.globl sText_Trainer1SentOutPkmn2
sText_Trainer1SentOutPkmn2: @ 0x085AAED1
	@ canonical pret/pokeemerald semantic role: sText_Trainer1SentOutPkmn2
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAEE4: battle_message.s: BufferStringBattle
	.globl sText_LinkTrainerSentOutPkmn
sText_LinkTrainerSentOutPkmn: @ 0x085AAEE4
	@ canonical pret/pokeemerald semantic role: sText_LinkTrainerSentOutPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAEF3: battle_message.s: BufferStringBattle
	.globl sText_LinkTrainerSentOutTwoPkmn
sText_LinkTrainerSentOutTwoPkmn: @ 0x085AAEF3
	@ canonical pret/pokeemerald semantic role: sText_LinkTrainerSentOutTwoPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x06, 0x14, 0x00, 0xFD, 0x08, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAF06: battle_message.s: BufferStringBattle
	.globl sText_TwoLinkTrainersSentOutPkmn
sText_TwoLinkTrainersSentOutPkmn: @ 0x085AAF06
	@ canonical pret/pokeemerald semantic role: sText_TwoLinkTrainersSentOutPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x20, 0x1A, 0x00, 0xFD, 0x0A, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFE, 0xFD
	.byte 0x21, 0x1A, 0x00, 0xFD, 0x0C, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:103 sText_LinkTrainerSentOutPkmn
	.globl gText_Rom_5AAF24
gText_Rom_5AAF24: @ 0x085AAF24
	.string "{B_LINK_OPPONENT1_NAME}は\n{B_BUFF1}を くりだした！{EOS}"
	.if (. - gText_Rom_5AAF24) > 0xf
	.error "gText_Rom_5AAF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAF24) < 0xf
	.space 0xf - (. - gText_Rom_5AAF24)
	.endif

	@ src/battle_message.c:108 sText_LinkTrainerMultiSentOutPkmn
	.globl sText_LinkTrainerMultiSentOutPkmn
sText_LinkTrainerMultiSentOutPkmn: @ 0x085AAF33
	.string "{B_LINK_SCR_TRAINER_NAME}は\n{B_BUFF1}を くりだした！{EOS}"
	.if (. - sText_LinkTrainerMultiSentOutPkmn) > 0xf
	.error "sText_LinkTrainerMultiSentOutPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_LinkTrainerMultiSentOutPkmn) < 0xf
	.space 0xf - (. - sText_LinkTrainerMultiSentOutPkmn)
	.endif

	@ src/battle_message.c:109 sText_GoPkmn
	.globl sText_GoPkmn
sText_GoPkmn: @ 0x085AAF42
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！{EOS}"
	.if (. - sText_GoPkmn) > 0x9
	.error "sText_GoPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_GoPkmn) < 0x9
	.space 0x9 - (. - sText_GoPkmn)
	.endif

	@ src/battle_message.c:110 sText_GoTwoPkmn
	.globl sText_GoTwoPkmn
sText_GoTwoPkmn: @ 0x085AAF4B
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}と {B_PLAYER_MON2_NAME}！{EOS}"
	.if (. - sText_GoTwoPkmn) > 0xd
	.error "sText_GoTwoPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_GoTwoPkmn) < 0xd
	.space 0xd - (. - sText_GoTwoPkmn)
	.endif

	@ src/battle_message.c:111 sText_GoPkmn2
	.globl sText_GoPkmn2
sText_GoPkmn2: @ 0x085AAF58
	.string "ゆけっ！ {B_BUFF1}！{EOS}"
	.if (. - sText_GoPkmn2) > 0x9
	.error "sText_GoPkmn2 may not grow beyond its original slot"
	.endif
	.if (. - sText_GoPkmn2) < 0x9
	.space 0x9 - (. - sText_GoPkmn2)
	.endif

	@ src/battle_message.c:112 sText_DoItPkmn
	.globl sText_DoItPkmn
sText_DoItPkmn: @ 0x085AAF61
	.string "いってこい！ {B_BUFF1}！{EOS}"
	.if (. - sText_DoItPkmn) > 0xb
	.error "sText_DoItPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_DoItPkmn) < 0xb
	.space 0xb - (. - sText_DoItPkmn)
	.endif

	@ src/battle_message.c:113 sText_GoForItPkmn
	.globl sText_GoForItPkmn
sText_GoForItPkmn: @ 0x085AAF6C
	.string "がんばれ！ {B_BUFF1}！{EOS}"
	.if (. - sText_GoForItPkmn) > 0xa
	.error "sText_GoForItPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_GoForItPkmn) < 0xa
	.space 0xa - (. - sText_GoForItPkmn)
	.endif
	.globl sText_YourFoesWeakGetEmPkmn
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 7
	@ src/battle_message.c:115 sText_YourFoesWeakGetEmPkmn
	.globl sText_YourFoesWeakGetEmPkmn
sText_YourFoesWeakGetEmPkmn: @ 0x085AAF76
	.string "あいてが よわっている!\nチャンスだ！ {B_BUFF1}！{EOS}"
	.if (. - sText_YourFoesWeakGetEmPkmn) > 0x18
	.error "sText_YourFoesWeakGetEmPkmn may not grow beyond its original slot"
	.endif
	.if (. - sText_YourFoesWeakGetEmPkmn) < 0x18
	.space 0x18 - (. - sText_YourFoesWeakGetEmPkmn)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAF8E: battle_message.s: BufferStringBattle
	.globl sText_LinkPartnerSentOutPkmnGoPkmn
sText_LinkPartnerSentOutPkmnGoPkmn: @ 0x085AAF8E
	@ canonical pret/pokeemerald semantic role: sText_LinkPartnerSentOutPkmnGoPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1F, 0x1A, 0x00, 0xFD, 0x0B, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFE, 0x25
	.byte 0x09, 0x50, 0xAB, 0x00, 0xFD, 0x09, 0xAB, 0xFF

	@ src/battle_message.c:123 sText_PkmnThatsEnough
	.globl sText_PkmnThatsEnough
sText_PkmnThatsEnough: @ 0x085AAFA6
	.string "{B_BUFF1} もういい！\nもどれ！{EOS}"
	.if (. - sText_PkmnThatsEnough) > 0xe
	.error "sText_PkmnThatsEnough may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnThatsEnough) < 0xe
	.space 0xe - (. - sText_PkmnThatsEnough)
	.endif

	@ src/battle_message.c:124 sText_PkmnComeBack
	.globl sText_PkmnComeBack
sText_PkmnComeBack: @ 0x085AAFB4
	.string "{B_BUFF1}\nもどれ！{EOS}"
	.if (. - sText_PkmnComeBack) > 0x8
	.error "sText_PkmnComeBack may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnComeBack) < 0x8
	.space 0x8 - (. - sText_PkmnComeBack)
	.endif

	@ src/battle_message.c:125 sText_PkmnOkComeBack
	.globl sText_PkmnOkComeBack
sText_PkmnOkComeBack: @ 0x085AAFBC
	.string "{B_BUFF1} いいぞ！\nもどれ！{EOS}"
	.if (. - sText_PkmnOkComeBack) > 0xd
	.error "sText_PkmnOkComeBack may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnOkComeBack) < 0xd
	.space 0xd - (. - sText_PkmnOkComeBack)
	.endif

	@ src/battle_message.c:126 sText_PkmnGoodComeBack
	.globl sText_PkmnGoodComeBack
sText_PkmnGoodComeBack: @ 0x085AAFC9
	.string "{B_BUFF1} よくやった！\nもどれ！{EOS}"
	.if (. - sText_PkmnGoodComeBack) > 0xf
	.error "sText_PkmnGoodComeBack may not grow beyond its original slot"
	.endif
	.if (. - sText_PkmnGoodComeBack) < 0xf
	.space 0xf - (. - sText_PkmnGoodComeBack)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AAFD8: battle_message.s: BufferStringBattle
	.globl sText_Trainer1WithdrewPkmn
sText_Trainer1WithdrewPkmn: @ 0x085AAFD8
	@ canonical pret/pokeemerald semantic role: sText_Trainer1WithdrewPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAFEB: battle_message.s: BufferStringBattle
	.globl sText_LinkTrainer1WithdrewPkmn
sText_LinkTrainer1WithdrewPkmn: @ 0x085AAFEB
	@ canonical pret/pokeemerald semantic role: sText_LinkTrainer1WithdrewPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x20, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AAFFA: battle_message.s: BufferStringBattle
	.globl sText_LinkTrainer2WithdrewPkmn
sText_LinkTrainer2WithdrewPkmn: @ 0x085AAFFA
	@ canonical pret/pokeemerald semantic role: sText_LinkTrainer2WithdrewPkmn
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x22, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x1B, 0x50, 0x0A, 0x22, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:131 sText_WildPkmnPrefix (+1 aliases)
	.globl sText_WildPkmnPrefix
sText_WildPkmnPrefix: @ 0x085AB009
	.string "やせいの {EOS}"
	.if (. - sText_WildPkmnPrefix) > 0x6
	.error "sText_WildPkmnPrefix may not grow beyond its original slot"
	.endif
	.if (. - sText_WildPkmnPrefix) < 0x6
	.space 0x6 - (. - sText_WildPkmnPrefix)
	.endif

	@ src/battle_message.c:132 sText_FoePkmnPrefix (+1 aliases)
	.globl sText_FoePkmnPrefix
sText_FoePkmnPrefix: @ 0x085AB00F
	.string "あいての {EOS}"
	.if (. - sText_FoePkmnPrefix) > 0x6
	.error "sText_FoePkmnPrefix may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix) < 0x6
	.space 0x6 - (. - sText_FoePkmnPrefix)
	.endif
	.space 0x1, 0xFF

	@ src/battle_message.c:136 sText_FoePkmnPrefix2 (+2 aliases)
	.globl sText_FoePkmnPrefix2
sText_FoePkmnPrefix2: @ 0x085AB016
	.string "あいての{EOS}"
	.if (. - sText_FoePkmnPrefix2) > 0x5
	.error "sText_FoePkmnPrefix2 may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix2) < 0x5
	.space 0x5 - (. - sText_FoePkmnPrefix2)
	.endif

	@ src/battle_message.c:137 sText_AllyPkmnPrefix (+2 aliases)
	.globl sText_AllyPkmnPrefix
sText_AllyPkmnPrefix: @ 0x085AB01B
	.string "みかたの{EOS}"
	.if (. - sText_AllyPkmnPrefix) > 0x5
	.error "sText_AllyPkmnPrefix may not grow beyond its original slot"
	.endif
	.if (. - sText_AllyPkmnPrefix) < 0x5
	.space 0x5 - (. - sText_AllyPkmnPrefix)
	.endif

	@ src/battle_message.c:138 sText_FoePkmnPrefix3
	.globl sText_FoePkmnPrefix3
sText_FoePkmnPrefix3: @ 0x085AB020
	.string "あいては{EOS}"
	.if (. - sText_FoePkmnPrefix3) > 0x5
	.error "sText_FoePkmnPrefix3 may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix3) < 0x5
	.space 0x5 - (. - sText_FoePkmnPrefix3)
	.endif

	@ src/battle_message.c:139 sText_AllyPkmnPrefix2
	.globl sText_AllyPkmnPrefix2
sText_AllyPkmnPrefix2: @ 0x085AB025
	.string "みかたは{EOS}"
	.if (. - sText_AllyPkmnPrefix2) > 0x5
	.error "sText_AllyPkmnPrefix2 may not grow beyond its original slot"
	.endif
	.if (. - sText_AllyPkmnPrefix2) < 0x5
	.space 0x5 - (. - sText_AllyPkmnPrefix2)
	.endif

	@ src/battle_message.c:140 sText_FoePkmnPrefix4
	.globl sText_FoePkmnPrefix4
sText_FoePkmnPrefix4: @ 0x085AB02A
	.string "あいてを{EOS}"
	.if (. - sText_FoePkmnPrefix4) > 0x5
	.error "sText_FoePkmnPrefix4 may not grow beyond its original slot"
	.endif
	.if (. - sText_FoePkmnPrefix4) < 0x5
	.space 0x5 - (. - sText_FoePkmnPrefix4)
	.endif

	@ src/battle_message.c:141 sText_AllyPkmnPrefix3
	.globl sText_AllyPkmnPrefix3
sText_AllyPkmnPrefix3: @ 0x085AB02F
	.string "みかたを{EOS}"
	.if (. - sText_AllyPkmnPrefix3) > 0x5
	.error "sText_AllyPkmnPrefix3 may not grow beyond its original slot"
	.endif
	.if (. - sText_AllyPkmnPrefix3) < 0x5
	.space 0x5 - (. - sText_AllyPkmnPrefix3)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AB034: battle_message.s: BufferStringBattle
	.globl sText_AttackerUsedX
sText_AttackerUsedX: @ 0x085AB034
	@ canonical pret/pokeemerald semantic role: sText_AttackerUsedX
	@ exact JP encoded battle text bytes preserved
	.byte 0xFD, 0x0F, 0xFD, 0x00, 0xFE, 0xFD, 0x01, 0xFF

	@ src/battle_message.c:143 sText_ExclamationMark
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_ExclamationMark
sText_ExclamationMark: @ 0x085AB03C
	.string "を つかった!{EOS}"
	.if (. - sText_ExclamationMark) != 0x8
	.error "sText_ExclamationMark must retain its original byte length"
	.endif
	.globl gText_Rom_5AB044
gText_Rom_5AB044: @ 0x085AB044
	@ Decoded text from ROM range: offset=0x5AB044, size=0x4
	.string "した！{EOS}"

	@ src/battle_message.c:145 sText_ExclamationMark3
	.globl sText_ExclamationMark3
sText_ExclamationMark3: @ 0x085AB048
	.string "を した!{EOS}"
	.if (. - sText_ExclamationMark3) > 0x6
	.error "sText_ExclamationMark3 may not grow beyond its original slot"
	.endif
	.if (. - sText_ExclamationMark3) < 0x6
	.space 0x6 - (. - sText_ExclamationMark3)
	.endif

	@ src/battle_message.c:146 sText_ExclamationMark4
	.globl sText_ExclamationMark4
sText_ExclamationMark4: @ 0x085AB04E
	.string " こうげき!{EOS}"
	.if (. - sText_ExclamationMark4) > 0x7
	.error "sText_ExclamationMark4 may not grow beyond its original slot"
	.endif
	.if (. - sText_ExclamationMark4) < 0x7
	.space 0x7 - (. - sText_ExclamationMark4)
	.endif
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 8
	.4byte gText_Rom_5AB057
	.4byte gText_Rom_5AB05D
	.4byte gText_Rom_5AB065
	.4byte gText_Rom_5AB06D
	.4byte gText_Rom_5AB072
	.4byte gText_Rom_5AB077
	.4byte gText_Rom_5AB07C
	.4byte gText_Rom_5AB084

	@ src/battle_message.c:170 battle_message_line_170
	.globl gText_Rom_5AB0AC
gText_Rom_5AB0AC: @ 0x085AB0AC
	.string "からすぎた！{EOS}"
	.if (. - gText_Rom_5AB0AC) > 0x7
	.error "gText_Rom_5AB0AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0AC) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0AC)
	.endif

	@ src/battle_message.c:171 battle_message_line_171
	.globl gText_Rom_5AB0B3
gText_Rom_5AB0B3: @ 0x085AB0B3
	.string "しぶすぎた！{EOS}"
	.if (. - gText_Rom_5AB0B3) > 0x7
	.error "gText_Rom_5AB0B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0B3) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0B3)
	.endif

	@ src/battle_message.c:172 battle_message_line_172
	.globl gText_Rom_5AB0BA
gText_Rom_5AB0BA: @ 0x085AB0BA
	.string "あますぎた！{EOS}"
	.if (. - gText_Rom_5AB0BA) > 0x7
	.error "gText_Rom_5AB0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0BA) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0BA)
	.endif

	@ src/battle_message.c:173 battle_message_line_173
	.globl gText_Rom_5AB0C1
gText_Rom_5AB0C1: @ 0x085AB0C1
	.string "にがすぎた！{EOS}"
	.if (. - gText_Rom_5AB0C1) > 0x7
	.error "gText_Rom_5AB0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C1) < 0x7
	.space 0x7 - (. - gText_Rom_5AB0C1)
	.endif

	@ src/battle_message.c:174 battle_message_line_174
	.globl gText_Rom_5AB0C8
gText_Rom_5AB0C8: @ 0x085AB0C8
	.string "すっぱすぎた！{EOS}"
	.if (. - gText_Rom_5AB0C8) > 0x8
	.error "gText_Rom_5AB0C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB0C8) < 0x8
	.space 0x8 - (. - gText_Rom_5AB0C8)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AB0D0: battle_message.s: ExpandBattleTextBuffPlaceholders
	.globl gBattleMessageData_085AB0D0
gBattleMessageData_085AB0D0: @ 0x085AB0D0
	@ confirmed contiguous ROM pointer table: 5 entries from this address
sPointerTable_085AB0D0:
	@ analyzed canonical ROM range 0x085AB0D0-0x085AB0E8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xAC, 0xB0, 0x5A, 0x08, 0xB3, 0xB0, 0x5A, 0x08, 0xBA, 0xB0, 0x5A, 0x08, 0xC1, 0xB0, 0x5A, 0x08
	.byte 0xC8, 0xB0, 0x5A, 0x08, 0xFD, 0x23, 0x1A, 0x00, 0xFE
	.globl gText_Rom_5AB0E9
gText_Rom_5AB0E9: @ 0x085AB0E9
	.string "{B_LAST_ITEM}を つかった！{EOS}"
	.if (. - gText_Rom_5AB0E9) != 0xa
	.error "gText_Rom_5AB0E9 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AB0F3, size=0x6
	.byte 0x70, 0x62, 0x79, 0x1A, 0x00, 0xFE

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB0F9
gText_Rom_5AB0F9: @ 0x085AB0F9
	.string "{B_LAST_ITEM}を つかった！{EOS}"
	.if (. - gText_Rom_5AB0F9) != 0xa
	.error "gText_Rom_5AB0F9 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AB103, size=0x8
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE

	@ src/battle_message.c:417 battle_message_line_417
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB10B
gText_Rom_5AB10B: @ 0x085AB10B
	.string "{B_LAST_ITEM}を つかった！{EOS}"
	.if (. - gText_Rom_5AB10B) != 0xa
	.error "gText_Rom_5AB10B must retain its original byte length"
	.endif

	@ src/battle_message.c:419 battle_message_line_419
	.globl gText_Rom_5AB115
gText_Rom_5AB115: @ 0x085AB115
	.string "トレーナーに ボールを はじかれた!{EOS}"
	.if (. - gText_Rom_5AB115) > 0x13
	.error "gText_Rom_5AB115 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB115) < 0x13
	.space 0x13 - (. - gText_Rom_5AB115)
	.endif

	@ src/battle_message.c:420 battle_message_line_420
	.globl gText_Rom_5AB128
gText_Rom_5AB128: @ 0x085AB128
	.string "ひとの ものを とったら どろぼう!{EOS}"
	.if (. - gText_Rom_5AB128) > 0x13
	.error "gText_Rom_5AB128 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB128) < 0x13
	.space 0x13 - (. - gText_Rom_5AB128)
	.endif
	@ analyzed canonical ROM range 0x085AB13B-0x085AB152
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x26, 0x09, 0x27, 0x2A, 0x10, 0xAB, 0xFE, 0x0A, 0x02, 0x12, 0x1A, 0x00, 0x12, 0x06, 0x1F, 0x28
	.byte 0x0F, 0x03, 0x16, 0x15, 0x02, 0x40, 0xAB, 0xFF
	.globl gText_Rom_5AB153
gText_Rom_5AB153: @ 0x085AB153
	.string "ポケモンに\nうまく あたらなかった!{EOS}"
	.if (. - gText_Rom_5AB153) != 0x13
	.error "gText_Rom_5AB153 must retain its original byte length"
	.endif

	@ src/battle_message.c:422 battle_message_line_422
	.globl gText_Rom_5AB166
gText_Rom_5AB166: @ 0x085AB166
	.string "だめだ! ポケモンが\nボールから でてしまった!{EOS}"
	.if (. - gText_Rom_5AB166) > 0x19
	.error "gText_Rom_5AB166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB166) < 0x19
	.space 0x19 - (. - gText_Rom_5AB166)
	.endif

	@ src/battle_message.c:423 battle_message_line_423
	.globl gText_Rom_5AB17F
gText_Rom_5AB17F: @ 0x085AB17F
	.string "ああ!\nつかまえたと おもったのに!{EOS}"
	.if (. - gText_Rom_5AB17F) > 0x13
	.error "gText_Rom_5AB17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB17F) < 0x13
	.space 0x13 - (. - gText_Rom_5AB17F)
	.endif

	@ src/battle_message.c:424 battle_message_line_424
	.globl gText_Rom_5AB192
gText_Rom_5AB192: @ 0x085AB192
	.string "ざんねん!\nもうすこしで つかまえられたのに!{EOS}"
	.if (. - gText_Rom_5AB192) > 0x18
	.error "gText_Rom_5AB192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB192) < 0x18
	.space 0x18 - (. - gText_Rom_5AB192)
	.endif
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 9
	@ src/battle_message.c:425 battle_message_line_425
	.globl gText_Rom_5AB1AA
gText_Rom_5AB1AA: @ 0x085AB1AA
	.string "おしい!\nあと ちょっとの ところだったのに!{EOS}"
	.if (. - gText_Rom_5AB1AA) > 0x18
	.error "gText_Rom_5AB1AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB1AA) < 0x18
	.space 0x18 - (. - gText_Rom_5AB1AA)
	.endif
	@ analyzed canonical ROM range 0x085AB1C2-0x085AB224
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x24, 0x50, 0x10, 0xAE, 0xAB, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x12, 0x06, 0x1F, 0x04, 0x10, 0x40
	.byte 0xAB, 0xFC, 0x0A, 0xFC, 0x0B, 0x60, 0x01, 0xFB, 0xFF, 0x24, 0x50, 0x10, 0xAE, 0xAB, 0xFE, 0xFD
	.byte 0x06, 0x2D, 0x00, 0x12, 0x06, 0x1F, 0x04, 0x10, 0x40, 0xAB, 0xFC, 0x0A, 0xFC, 0x0B, 0x60, 0x01
	.byte 0xFC, 0x08, 0x7F, 0xFF, 0x12, 0x06, 0x1F, 0x04, 0x10, 0x00, 0xFD, 0x06, 0x16, 0xFE, 0x66, 0xA0
	.byte 0x58, 0x68, 0xAE, 0x71, 0x2D, 0x00, 0x12, 0x09, 0x1F, 0x0D, 0x06, 0xAC, 0xFF, 0xFD, 0x06, 0x1A
	.byte 0x00, 0xFD, 0x27, 0x00, 0x9B, 0x5F, 0x5A, 0x7E, 0x16, 0xFE, 0x13, 0x2E, 0x0F, 0x03, 0x0B, 0x2A
	.byte 0x10, 0xAB, 0xFF

	@ src/battle_message.c:177 sText_Someones
	.globl sText_Someones
sText_Someones: @ 0x085AB225
	.string "だれかの{EOS}"
	.if (. - sText_Someones) > 0x5
	.error "sText_Someones may not grow beyond its original slot"
	.endif
	.if (. - sText_Someones) < 0x5
	.space 0x5 - (. - sText_Someones)
	.endif

	@ src/battle_message.c:178 sText_Lanettes
	.globl sText_Lanettes
sText_Lanettes: @ 0x085AB22A
	.string "マユミの{EOS}"
	.if (. - sText_Lanettes) > 0x5
	.error "sText_Lanettes may not grow beyond its original slot"
	.endif
	.if (. - sText_Lanettes) < 0x5
	.space 0x5 - (. - sText_Lanettes)
	.endif
	@ analyzed canonical ROM range 0x085AB22F-0x085AB250
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x06, 0x19, 0x00, 0x94, 0xAE, 0x60, 0x37, 0x00, 0x01, 0x10, 0x27, 0x0C, 0x08, 0xFE, 0x9F
	.byte 0x59, 0x73, 0x7E, 0x3E, 0x06, 0x2E, 0x16, 0x00, 0x5E, 0xAE, 0x98, 0x0B, 0x2A, 0x1F, 0x0D, 0xAB
	.byte 0xFB, 0xFF
	.globl gText_Rom_5AB251
gText_Rom_5AB251: @ 0x085AB251
	.string "あめが ふっている{EOS}"
	.if (. - gText_Rom_5AB251) != 0xa
	.error "gText_Rom_5AB251 must retain its original byte length"
	.endif

	@ src/battle_message.c:431 battle_message_line_431
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB25B
gText_Rom_5AB25B: @ 0x085AB25B
	.string "すなあらしが ふきあれている{EOS}"
	.if (. - gText_Rom_5AB25B) != 0xf
	.error "gText_Rom_5AB25B must retain its original byte length"
	.endif

	@ src/battle_message.c:497 battle_message_line_497
	.globl gText_Rom_5AB26A
gText_Rom_5AB26A: @ 0x085AB26A
	.string "ボックスが いっぱいで\nこれいじょう つかまえられない!\p{EOS}"
	.if (. - gText_Rom_5AB26A) > 0x1e
	.error "gText_Rom_5AB26A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB26A) < 0x1e
	.space 0x1e - (. - gText_Rom_5AB26A)
	.endif

	@ src/battle_message.c:180 sText_EnigmaBerry
	.globl sText_EnigmaBerry
sText_EnigmaBerry: @ 0x085AB288
	.string "ナゾのみ{EOS}"
	.if (. - sText_EnigmaBerry) > 0x5
	.error "sText_EnigmaBerry may not grow beyond its original slot"
	.endif
	.if (. - sText_EnigmaBerry) < 0x5
	.space 0x5 - (. - sText_EnigmaBerry)
	.endif

	@ asm/battle_message.s:1734 BattleStringExpandPlaceholders
	.globl gText_Rom_5AB28D
gText_Rom_5AB28D: @ 0x085AB28D
	.string "のみ{EOS}"
	.if (. - gText_Rom_5AB28D) > 0x3
	.error "gText_Rom_5AB28D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB28D) < 0x3
	.space 0x3 - (. - gText_Rom_5AB28D)
	.endif

	@ src/battle_message.c:449 battle_message_line_449
	.globl gText_Rom_5AB290
gText_Rom_5AB290: @ 0x085AB290
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nまひが なおった!{EOS}"
	.if (. - gText_Rom_5AB290) > 0x12
	.error "gText_Rom_5AB290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB290) < 0x12
	.space 0x12 - (. - gText_Rom_5AB290)
	.endif

	@ src/battle_message.c:450 battle_message_line_450
	.globl gText_Rom_5AB2A2
gText_Rom_5AB2A2: @ 0x085AB2A2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nどくが なおった!{EOS}"
	.if (. - gText_Rom_5AB2A2) > 0x12
	.error "gText_Rom_5AB2A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2A2) < 0x12
	.space 0x12 - (. - gText_Rom_5AB2A2)
	.endif

	@ src/battle_message.c:451 battle_message_line_451
	.globl gText_Rom_5AB2B4
gText_Rom_5AB2B4: @ 0x085AB2B4
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nやけどが なおった!{EOS}"
	.if (. - gText_Rom_5AB2B4) > 0x13
	.error "gText_Rom_5AB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2B4) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2B4)
	.endif

	@ src/battle_message.c:452 battle_message_line_452
	.globl gText_Rom_5AB2C7
gText_Rom_5AB2C7: @ 0x085AB2C7
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこおりじょうたいが なおった!{EOS}"
	.if (. - gText_Rom_5AB2C7) > 0x18
	.error "gText_Rom_5AB2C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2C7) < 0x18
	.space 0x18 - (. - gText_Rom_5AB2C7)
	.endif

	@ src/battle_message.c:453 battle_message_line_453
	.globl gText_Rom_5AB2DF
gText_Rom_5AB2DF: @ 0x085AB2DF
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nねむりから さめた!{EOS}"
	.if (. - gText_Rom_5AB2DF) > 0x13
	.error "gText_Rom_5AB2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2DF) < 0x13
	.space 0x13 - (. - gText_Rom_5AB2DF)
	.endif

	@ src/battle_message.c:454 battle_message_line_454
	.globl gText_Rom_5AB2F2
gText_Rom_5AB2F2: @ 0x085AB2F2
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nこんらんが なおった!{EOS}"
	.if (. - gText_Rom_5AB2F2) > 0x14
	.error "gText_Rom_5AB2F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB2F2) < 0x14
	.space 0x14 - (. - gText_Rom_5AB2F2)
	.endif
	@ analyzed canonical ROM range 0x085AB306-0x085AB31C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x16, 0x44, 0xFE, 0xFD, 0x00, 0x3D, 0x36, 0x03, 0x10, 0x02, 0x37
	.byte 0x00, 0x15, 0x05, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AB31D
gText_Rom_5AB31D: @ 0x085AB31D
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}で\nじょうたいいじょうが なおった!{EOS}"
	.if (. - gText_Rom_5AB31D) > 0x19
	.error "gText_Rom_5AB31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB31D) < 0x19
	.space 0x19 - (. - gText_Rom_5AB31D)
	.endif
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 10
	@ src/battle_message.c:1491 gText_BadEgg
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BadEgg
gText_BadEgg: @ 0x085ABC78
	.string "ダメタマゴ{EOS}"
	.if (. - gText_BadEgg) != 0x6
	.error "gText_BadEgg must retain its original byte length"
	.endif

	@ src/battle_message.c:1492 gText_BattleWallyName (+8 aliases)
	.globl gText_BattleWallyName
gText_BattleWallyName: @ 0x085ABC7E
	.string "ミツル{EOS}"
	.if (. - gText_BattleWallyName) > 0x4
	.error "gText_BattleWallyName may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleWallyName) < 0x4
	.space 0x4 - (. - gText_BattleWallyName)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABC82: battle_bg.s: sub_08035AA0
	.globl gBattleBgData_085ABC82
gBattleBgData_085ABC82: @ 0x085ABC82
	@ analyzed canonical ROM range 0x085ABC82-0x085ABC87
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xFC, 0x02, 0x00, 0x06, 0x11, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC88: battle_bg.s: sub_08035AA0
	.globl gBattleBgData_085ABC88
gBattleBgData_085ABC88: @ 0x085ABC88
	@ analyzed canonical ROM range 0x085ABC88-0x085ABC8D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0xFC, 0x02, 0x00, 0x1F, 0x09, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABC8E: battle_bg.s: sub_08035AA0
	.globl gBattleBgData_085ABC8E
gBattleBgData_085ABC8E: @ 0x085ABC8E
	@ analyzed canonical ROM range 0x085ABC8E-0x085ABC95
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0xFC, 0x02, 0x00, 0x1B, 0x07, 0x2C, 0x09, 0xFF

	@ asm/battle_message.s:2911 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC96
gText_Rom_5ABC96: @ 0x085ABC96
	.string "は{EOS}"
	.if (. - gText_Rom_5ABC96) > 0x2
	.error "gText_Rom_5ABC96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC96) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC96)
	.endif

	@ asm/battle_message.s:2922 ChooseMoveUsedParticle
	.globl gText_Rom_5ABC98
gText_Rom_5ABC98: @ 0x085ABC98
	.string "の{EOS}"
	.if (. - gText_Rom_5ABC98) > 0x2
	.error "gText_Rom_5ABC98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABC98) < 0x2
	.space 0x2 - (. - gText_Rom_5ABC98)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABC9A: battle_message.s: BattleStringExpandPlaceholders, BufferStringBattle
	.globl gBattleMessageData_085ABC9A
gBattleMessageData_085ABC9A: @ 0x085ABC9A
	@ analyzed canonical ROM range 0x085ABC9A-0x085ABD17
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x7E bytes=126
	.byte 0x69, 0xAE, 0x6F, 0x79, 0x2C, 0x3C, 0xFF, 0x06, 0x08, 0x14, 0x03, 0x2C, 0x3C, 0xFF, 0x1B, 0x0A
	.byte 0x03, 0x2C, 0x3C, 0xFF, 0xFF, 0x45, 0x08, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF, 0x3D, 0x22, 0x2E, 0x2C
	.byte 0x3C, 0xFF, 0xFF, 0x02, 0x2C, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF, 0x21, 0x0C, 0x2C, 0x3C, 0xFF, 0xFF
	.byte 0xFF, 0x8B, 0xAE, 0x5D, 0x64, 0x2C, 0x3C, 0xFF, 0x1A, 0x37, 0x18, 0x2C, 0x3C, 0xFF, 0xFF, 0x1A
	.byte 0x13, 0x15, 0x2C, 0x3C, 0xFF, 0xFF, 0x1E, 0x19, 0x05, 0x2C, 0x3C, 0xFF, 0xFF, 0x20, 0x3E, 0x2C
	.byte 0x3C, 0xFF, 0xFF, 0xFF, 0x08, 0x0B, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF, 0x44, 0x2E, 0x07, 0x2C, 0x3C
	.byte 0xFF, 0xFF, 0x54, 0x5D, 0x9B, 0xAE, 0x2C, 0x3C, 0xFF, 0x0A, 0x05, 0x28, 0x2C, 0x3C, 0xFF, 0xFF
	.byte 0x95, 0x77, 0x8B, 0x7E, 0x2C, 0x3C, 0xFF, 0x01, 0x08, 0x2C, 0x3C, 0xFF, 0xFF, 0xFF

	@ src/battle_message.c:1498 gText_BattleTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BattleTourney
gText_BattleTourney: @ 0x085ABD18
	.string "バトルトーナメント{EOS}"
	.if (. - gText_BattleTourney) != 0xa
	.error "gText_BattleTourney must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 11
	@ src/battle_message.c:1516 gText_Mind
	.globl gText_Mind
gText_Mind: @ 0x085ABDA3
	.string "こころ{EOS}"
	.if (. - gText_Mind) > 0x4
	.error "gText_Mind may not grow beyond its original slot"
	.endif
	.if (. - gText_Mind) < 0x4
	.space 0x4 - (. - gText_Mind)
	.endif
	.globl gText_Rom_5ABDA7
gText_Rom_5ABDA7: @ 0x085ABDA7
	@ Decoded text from ROM range: offset=0x5ABDA7, size=0x3
	.string "わざ{EOS}"

	@ src/battle_message.c:1518 gText_Body
	.globl gText_Body
gText_Body: @ 0x085ABDAA
	.string "からだ{EOS}"
	.if (. - gText_Body) > 0x4
	.error "gText_Body may not grow beyond its original slot"
	.endif
	.if (. - gText_Body) < 0x4
	.space 0x4 - (. - gText_Body)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABDAE: battle_arena.s: BattleArena_ShowJudgmentWindow
	.globl gBattleArenaData_085ABDAE
gBattleArenaData_085ABDAE: @ 0x085ABDAE
	@ analyzed canonical ROM range 0x085ABDAE-0x085ABDBA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xD bytes=13
	.byte 0xFD, 0x00, 0x00, 0x00, 0x1A, 0x2E, 0x13, 0x02, 0x00, 0x00, 0xFD, 0x01, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDBB: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABDBB
gBattleMessageData_085ABDBB: @ 0x085ABDBB
	@ analyzed canonical ROM range 0x085ABDBB-0x085ABDE0
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x26 bytes=38
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0xFD, 0x06, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFB, 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0x1A, 0xFE, 0xFD, 0x08, 0x2D, 0x00, 0x08
	.byte 0x28, 0x41, 0x0C, 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDE1: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABDE1
gBattleMessageData_085ABDE1: @ 0x085ABDE1
	@ analyzed canonical ROM range 0x085ABDE1-0x085ABDF3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x13 bytes=19
	.byte 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0x1A, 0xFE, 0xFD, 0x00, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABDF4: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABDF4
gBattleMessageData_085ABDF4: @ 0x085ABDF4
	@ analyzed canonical ROM range 0x085ABDF4-0x085ABE12
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1F bytes=31
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x14, 0xFE, 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0x37, 0xFA
	.byte 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x0C, 0x06, 0x09, 0x13, 0x07, 0x10, 0xAB, 0xFB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085ABE13: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABE13
gBattleMessageData_085ABE13: @ 0x085ABE13
	@ analyzed canonical ROM range 0x085ABE13-0x085ABE25
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x13 bytes=19
	.byte 0xFD, 0x32, 0x19, 0x00, 0xFD, 0x33, 0x1A, 0xFE, 0xFD, 0x07, 0x2D, 0x00, 0x08, 0x28, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFA
	.globl gText_Rom_5ABE26
gText_Rom_5ABE26: @ 0x085ABE26
	.string "ゆけっ！ {B_PLAYER_MON1_NAME}！{EOS}"
	.if (. - gText_Rom_5ABE26) > 0x9
	.error "gText_Rom_5ABE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE26) < 0x9
	.space 0x9 - (. - gText_Rom_5ABE26)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085ABE2F: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085ABE2F
gBattleMessageData_085ABE2F:
	.globl gBattleMessageData_085ABE2F
	@ analyzed canonical ROM range 0x085ABE2F-0x085ABE4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x21 bytes=33
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x14, 0xFE, 0xFD, 0x2E, 0x19, 0x00, 0xFD, 0x2F, 0xFA, 0x14
	.byte 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00, 0x06, 0x50, 0x10, 0xAB, 0xFB, 0xFF, 0xFD, 0x30
	.byte 0xFF
	.globl gText_Rom_5ABE50
gText_Rom_5ABE50: @ 0x085ABE50
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじぶんの ちからを はっき できない ようだ!{EOS}"
	.if (. - gText_Rom_5ABE50) > 0x1c
	.error "gText_Rom_5ABE50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE50) < 0x1c
	.space 0x1c - (. - gText_Rom_5ABE50)
	.endif
	@ Decoded text from ROM range: offset=0x5ABE6C, size=0x13
	.string "{B_SCR_NAME_WITH_PREFIX}の　めの　いろが　かわっていく！{EOS}"

	@ src/battle_message.c:514 battle_message_line_514
	.globl gText_Rom_5ABE7F
gText_Rom_5ABE7F: @ 0x085ABE7F
	.string "{B_SCR_NAME_WITH_PREFIX}は たいせいを たてなおしている!{EOS}"
	.if (. - gText_Rom_5ABE7F) > 0x14
	.error "gText_Rom_5ABE7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE7F) < 0x14
	.space 0x14 - (. - gText_Rom_5ABE7F)
	.endif

	@ src/battle_message.c:515 battle_message_line_515
	.globl gText_Rom_5ABE93
gText_Rom_5ABE93: @ 0x085ABE93
	.string "{B_SCR_NAME_WITH_PREFIX}は ひくく うなり はじめた!{EOS}"
	.if (. - gText_Rom_5ABE93) > 0x12
	.error "gText_Rom_5ABE93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABE93) < 0x12
	.space 0x12 - (. - gText_Rom_5ABE93)
	.endif

	@ src/battle_message.c:516 battle_message_line_516
	.globl gText_Rom_5ABEA5
gText_Rom_5ABEA5: @ 0x085ABEA5
	.string "{B_SCR_NAME_WITH_PREFIX}は まだまだ やるきだ!{EOS}"
	.if (. - gText_Rom_5ABEA5) > 0xf
	.error "gText_Rom_5ABEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ABEA5) < 0xf
	.space 0xf - (. - gText_Rom_5ABEA5)
	.endif
	@ analyzed canonical ROM range 0x085ABEB4-0x085ABEBB
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x016E, 0x016F, 0x0170, 0x0171
	.globl gStatusConditionString_Index0
gStatusConditionString_Index0: @ 0x085ABEBC
	.string "しんぱん『あと 3ターンで けっちゃくが\nつかないと はんていに なります!{EOS}"
	.if (. - gStatusConditionString_Index0) > 0x27
	.error "gStatusConditionString_Index0 may not grow beyond its original slot"
	.endif
	.if (. - gStatusConditionString_Index0) < 0x27
	.space 0x27 - (. - gStatusConditionString_Index0)
	.endif

	@ src/battle_message.c:1541 battle_message_line_1541
	.globl gStatusConditionString_Index1
gStatusConditionString_Index1: @ 0x085ABEE3
	.string "しんぱん『そこまでーーー!\nこの たいけつは はんていに なります!{EOS}"
	.if (. - gStatusConditionString_Index1) > 0x23
	.error "gStatusConditionString_Index1 may not grow beyond its original slot"
	.endif
	.if (. - gStatusConditionString_Index1) < 0x23
	.space 0x23 - (. - gStatusConditionString_Index1)
	.endif

	@ src/battle_message.c:1542 battle_message_line_1542
	.globl gStatusConditionString_Index2
gStatusConditionString_Index2: @ 0x085ABF06
	.string "しんぱん『はんてい その1! 「こころ」!\nせめる きもちを みせたもの!\p{EOS}"
	.if (. - gStatusConditionString_Index2) > 0x27
	.error "gStatusConditionString_Index2 may not grow beyond its original slot"
	.endif
	.if (. - gStatusConditionString_Index2) < 0x27
	.space 0x27 - (. - gStatusConditionString_Index2)
	.endif

	@ src/battle_message.c:1543 battle_message_line_1543
	.globl gStatusConditionString_Index3
gStatusConditionString_Index3: @ 0x085ABF2D
	.string "しんぱん『はんてい その2! 「わざ」!\nてきかくに わざを くりだしたもの!\p{EOS}"
	.if (. - gStatusConditionString_Index3) > 0x29
	.error "gStatusConditionString_Index3 may not grow beyond its original slot"
	.endif
	.if (. - gStatusConditionString_Index3) < 0x29
	.space 0x29 - (. - gStatusConditionString_Index3)
	.endif

	@ src/battle_message.c:1544 battle_message_line_1544
	.globl gStatusConditionString_Index4
gStatusConditionString_Index4: @ 0x085ABF56
	.string "しんぱん『はんてい その3! 「からだ」!\nあふれる たいりょくを もちえるもの!\p{EOS}"
	.if (. - gStatusConditionString_Index4) > 0x2b
	.error "gStatusConditionString_Index4 may not grow beyond its original slot"
	.endif
	.if (. - gStatusConditionString_Index4) < 0x2b
	.space 0x2b - (. - gStatusConditionString_Index4)
	.endif
	@ analyzed canonical ROM range 0x085ABF81-0x085ABFC6
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x2E, 0x4B, 0x2E, 0xB1, 0x1A, 0x2E, 0x13, 0x02, 0x00, 0xFD, 0x00, 0x00, 0x10, 0x02, 0x00
	.byte 0xFD, 0x01, 0xFE, 0x0C, 0x36, 0x03, 0x0C, 0x34, 0xAB, 0x00, 0xFD, 0x23, 0x19, 0x00, 0xFD, 0x05
	.byte 0xAB, 0xFB, 0xFF, 0x0C, 0x2E, 0x4B, 0x2E, 0xB1, 0x1A, 0x2E, 0x13, 0x02, 0x00, 0xFD, 0x00, 0x00
	.byte 0x10, 0x02, 0x00, 0xFD, 0x01, 0xFE, 0x0C, 0x36, 0x03, 0x0C, 0x34, 0xAB, 0x00, 0xFD, 0x1D, 0x19
	.byte 0x00, 0xFD, 0x06, 0xAB, 0xFB, 0xFF
	.globl gStatusConditionString_Index7
gStatusConditionString_Index7: @ 0x085ABFC7
	.string "しんぱん『はんてい 3 たい 3\nひきわけーーー!\p{EOS}"
	.if (. - gStatusConditionString_Index7) > 0x1b
	.error "gStatusConditionString_Index7 may not grow beyond its original slot"
	.endif
	.if (. - gStatusConditionString_Index7) < 0x1b
	.space 0x1b - (. - gStatusConditionString_Index7)
	.endif

	@ src/battle_message.c:517 battle_message_line_517
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFE2
gText_Rom_5ABFE2: @ 0x085ABFE2
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に かった！{EOS}"
	.if (. - gText_Rom_5ABFE2) != 0x18
	.error "gText_Rom_5ABFE2 must retain its original byte length"
	.endif

	@ src/battle_message.c:518 battle_message_line_518
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABFFA
gText_Rom_5ABFFA: @ 0x085ABFFA
	.string "{B_PLAYER_MON1_NAME}は はんていで\nあいての {B_OPPONENT_MON1_NAME}に まけた！{EOS}"
	.if (. - gText_Rom_5ABFFA) != 0x18
	.error "gText_Rom_5ABFFA must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 12
	@ ANALYSIS: RAW_RANGE offset=0x5AC012, size=0x3A
	.byte 0xFD, 0x05, 0x1A, 0x00, 0x1A, 0x2E, 0x13, 0x02, 0x44, 0xFE, 0x01, 0x02, 0x13, 0x19, 0x00, 0xFD
	.byte 0x06, 0x14, 0x00, 0x1B, 0x07, 0x2C, 0x09, 0x10, 0xAB, 0xFF, 0x0C, 0x2E, 0x4B, 0x2E, 0xB1, 0xFD
	.byte 0x05, 0x00, 0xD0, 0xCD, 0x00, 0xFD, 0x06, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0xAB, 0x00, 0x1A, 0x3D
	.byte 0x22, 0xAE, 0xAE, 0xAE, 0xAB, 0xAB, 0xFF, 0x00, 0x00, 0x00
	@ Status-condition string table indexed by atk76_various before
	@ passing the selected string to TryGetStatusString.
	.globl gStatusConditionStringsTable
gStatusConditionStringsTable: @ 0x085AC04C
	.4byte gStatusConditionString_Index0 @ status string index 0
	.4byte gStatusConditionString_Index1 @ status string index 1
	.4byte gStatusConditionString_Index2 @ status string index 2
	.4byte gStatusConditionString_Index3 @ status string index 3
	.4byte gStatusConditionString_Index4 @ status string index 4
	.4byte gStatusConditionString_Index4 + 0x2B @ status string index 5
	.4byte gStatusConditionString_Index4 + 0x4E @ status string index 6
	.4byte gStatusConditionString_Index7 @ status string index 7
	.4byte gText_Rom_5ABFFA + 0x32 @ status string index 8

	@ JP battle text/control strings immediately following the status table.
	@ The first four are externally pointed to from the preceding battle data;
	@ the fifth is the contiguous terminal control string before 0x085AC0B1.

	.globl sBattleStatusText_JP_0
sBattleStatusText_JP_0: @ 0x085AC070
	.byte 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x01, 0x07, 0x27, 0x22, 0x13, 0xFE, 0x0A, 0x03, 0x0B, 0x2E
	.byte 0x00, 0x0C, 0x1F, 0x0D, 0x06, 0xAC, 0xFF

	.globl sBattleStatusText_JP_1
sBattleStatusText_JP_1: @ 0x085AC087
	.byte 0xFD, 0x23, 0x1A, 0xFE, 0x0C, 0x36, 0x03, 0x48, 0x2D, 0x00, 0x01, 0x07, 0x27, 0x22, 0x10, 0xAB
	.byte 0xFF

	.globl sBattleStatusText_JP_2
sBattleStatusText_JP_2: @ 0x085AC098
	.byte 0xFD, 0x25, 0xFF

	.globl sBattleStatusText_JP_3
sBattleStatusText_JP_3: @ 0x085AC09B
	.byte 0xFD, 0x31, 0xFF

	.globl sBattleStatusText_JP_4
sBattleStatusText_JP_4: @ 0x085AC09E
	.byte 0xFC, 0x10, 0x11, 0x00, 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0x1A, 0xFE, 0x16, 0x3A, 0x41, 0x0C
	.byte 0x10, 0xAB, 0xFF
	@ pret/pokeemerald-jp direct xref for 0x085AC0B1: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AC0B1
gBattleMessageData_085AC0B1: @ 0x085AC0B1
	@ analyzed canonical ROM range 0x085AC0B1-0x085AC0C0
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x1CFD, 0x0019, 0x1DFD, 0x14FE, 0x0019, 0x360C, 0x4803, 0x0016
.elseif .L__inc_fragment_select_c3d2d9fd16ac == 13
	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5AC0C1
gText_Rom_5AC0C1: @ 0x085AC0C1
	.string "まけた！{EOS}"
	.if (. - gText_Rom_5AC0C1) > 0x5
	.error "gText_Rom_5AC0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0C1) < 0x5
	.space 0x5 - (. - gText_Rom_5AC0C1)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085AC0C6: battle_message.s: BufferStringBattle
	.globl gBattleMessageData_085AC0C6
gBattleMessageData_085AC0C6: @ 0x085AC0C6
	@ analyzed canonical ROM range 0x085AC0C6-0x085AC0DC
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x17 bytes=23
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0xFE, 0x14, 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00
	.byte 0x1B, 0x07, 0x2C, 0x09, 0x10, 0xAB, 0xFF
	@ src/battle_message.c:1554 gText_RecordBattleToPass
	.globl gText_RecordBattleToPass
gText_RecordBattleToPass: @ 0x085AC0DD
	.string "いまの たたかいを フロンティアパスに\nきろく しますか?{EOS}"
	.if (. - gText_RecordBattleToPass) > 0x1e
	.error "gText_RecordBattleToPass may not grow beyond its original slot"
	.endif
	.if (. - gText_RecordBattleToPass) < 0x1e
	.space 0x1e - (. - gText_RecordBattleToPass)
	.endif

	@ src/battle_message.c:1555 gText_BattleRecordedOnPass
	.globl gText_BattleRecordedOnPass
gText_BattleRecordedOnPass: @ 0x085AC0FB
	.string "{B_PLAYER_NAME}の たたかいが\nフロンティアパスに きろく された!{EOS}"
	.if (. - gText_BattleRecordedOnPass) > 0x1d
	.error "gText_BattleRecordedOnPass may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleRecordedOnPass) < 0x1d
	.space 0x1d - (. - gText_BattleRecordedOnPass)
	.endif
.endif
