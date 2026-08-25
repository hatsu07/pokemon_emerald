.if .L__inc_fragment_select_d31dea23abe1 == 1
	@ src/battle_message.c:197 battle_message_line_197
	.globl gText_Rom_5A966F
gText_Rom_5A966F: @ 0x085A966F
	.string "{B_BUFF1}は あたらしく\n{B_BUFF2}を　おぼえたい………!\p{EOS}"
	.if (. - gText_Rom_5A966F) > 0x19
	.error "gText_Rom_5A966F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A966F) < 0x19
	.space 0x19 - (. - gText_Rom_5A966F)
	.endif

	@ src/battle_message.c:198 battle_message_line_198
	.globl gText_Rom_5A9688
gText_Rom_5A9688: @ 0x085A9688
	.string "しかし {B_BUFF1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p{EOS}"
	.if (. - gText_Rom_5A9688) > 0x20
	.error "gText_Rom_5A9688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9688) < 0x20
	.space 0x20 - (. - gText_Rom_5A9688)
	.endif

	@ src/battle_message.c:199 battle_message_line_199
	.globl gText_Rom_5A96A8
gText_Rom_5A96A8: @ 0x085A96A8
	.string "{B_BUFF2}の かわりに\nほかの わざを わすれさせますか?{EOS}"
	.if (. - gText_Rom_5A96A8) > 0x1b
	.error "gText_Rom_5A96A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96A8) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96A8)
	.endif

	@ src/battle_message.c:200 battle_message_line_200
	.globl gText_Rom_5A96C3
gText_Rom_5A96C3: @ 0x085A96C3
	.string "{B_BUFF1}は {B_BUFF2}の\nつかいかたを きれいに わすれた!\p{EOS}"
	.if (. - gText_Rom_5A96C3) > 0x1b
	.error "gText_Rom_5A96C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96C3) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96C3)
	.endif
	@ analyzed canonical ROM range 0x085A96DE-0x085A96F2
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFC, 0x08, 0x20, 0x0F, 0x2A, 0x44, 0x1A, 0xB0, 0xB0, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x05, 0x4A
	.byte 0x04, 0x29, 0x19, 0x2D, 0x00
.elseif .L__inc_fragment_select_d31dea23abe1 == 2
	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_ChallengeQuestionMark_Copy_Rom_5A96F3
gText_ChallengeQuestionMark_Copy_Rom_5A96F3: @ 0x085A96F3
	.string "あきらめますか?{EOS}"
	.if (. - gText_ChallengeQuestionMark_Copy_Rom_5A96F3) > 0x9
	.error "gText_ChallengeQuestionMark_Copy_Rom_5A96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ChallengeQuestionMark_Copy_Rom_5A96F3) < 0x9
	.space 0x9 - (. - gText_ChallengeQuestionMark_Copy_Rom_5A96F3)
	.endif
	@ src/battle_message.c:202 battle_message_line_202
	.globl gText_Rom_5A96FC
gText_Rom_5A96FC: @ 0x085A96FC
	.string "{B_BUFF1}は {B_BUFF2}を\nおぼえずに おわった!\p{EOS}"
	.if (. - gText_Rom_5A96FC) > 0x15
	.error "gText_Rom_5A96FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96FC) < 0x15
	.space 0x15 - (. - gText_Rom_5A96FC)
	.endif

	@ src/battle_message.c:491 battle_message_line_491
	.globl gText_Rom_5A9711
gText_Rom_5A9711: @ 0x085A9711
	.string "つぎの ポケモンを つかいますか?{EOS}"
	.if (. - gText_Rom_5A9711) > 0x12
	.error "gText_Rom_5A9711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9711) < 0x12
	.space 0x12 - (. - gText_Rom_5A9711)
	.endif
	@ analyzed canonical ROM range 0x085A9723-0x085A9782
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x0F, 0x19, 0xFE, 0x0A, 0x03, 0x3A, 0x07, 0x1A, 0x00, 0x1A, 0x3E
	.byte 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x0A, 0x03, 0x3A, 0x07, 0x06, 0x27, 0xFE, 0x20
	.byte 0x2D, 0x00, 0x1F, 0x23, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19, 0x44, 0xFE
	.byte 0x91, 0x72, 0xAE, 0x8D, 0x2D, 0x00, 0x03, 0x09, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00
	.byte 0xFD, 0x19, 0x44, 0xFE, 0x3D, 0x22, 0x2E, 0x60, 0x52, 0x9D, 0x19, 0x00, 0x2C, 0x3C, 0x37, 0x00
	.byte 0x01, 0x10, 0x27, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x16, 0x1A, 0xFE, 0x01, 0x10, 0x27, 0x15
.elseif .L__inc_fragment_select_d31dea23abe1 == 3
	@ src/battle_message.c:208 battle_message_line_208
	.globl gText_Rom_5A97B2
gText_Rom_5A97B2: @ 0x085A97B2
	.string "{B_PLAYER_NAME}は しょうきんとして\n{B_BUFF1}円 てにいれた！\p{EOS}"
	.if (. - gText_Rom_5A97B2) > 0x19
	.error "gText_Rom_5A97B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97B2) < 0x19
	.space 0x19 - (. - gText_Rom_5A97B2)
	.endif

	@ src/battle_message.c:209 battle_message_line_209
	.globl gText_Rom_5A97CB
gText_Rom_5A97CB: @ 0x085A97CB
	.string "{B_PLAYER_NAME}の てもとには\nたたかえる ポケモンが いない!\p{EOS}"
	.if (. - gText_Rom_5A97CB) > 0x1c
	.error "gText_Rom_5A97CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97CB) < 0x1c
	.space 0x1c - (. - gText_Rom_5A97CB)
	.endif
	@ analyzed canonical ROM range 0x085A97E7-0x085A9805
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x23, 0x1A, 0xFE, 0x22, 0x19, 0x1F, 0x04, 0x37, 0x00, 0x1F, 0x50, 0x08, 0x27, 0x16, 0x00
	.byte 0x15, 0x50, 0x10, 0xAB, 0xFC, 0x09, 0xFF, 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE
	.globl gText_Rom_5A9806
gText_Rom_5A9806: @ 0x085A9806
	.string "にげられない！\p{EOS}"
	.if (. - gText_Rom_5A9806) > 0x9
	.error "gText_Rom_5A9806 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9806) < 0x9
	.space 0x9 - (. - gText_Rom_5A9806)
	.endif

	@ src/battle_message.c:432 battle_message_line_432
	.globl gText_Rom_5A980F
gText_Rom_5A980F: @ 0x085A980F
	.string "にげられない！\p{EOS}"
	.if (. - gText_Rom_5A980F) > 0x9
	.error "gText_Rom_5A980F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A980F) < 0x9
	.space 0x9 - (. - gText_Rom_5A980F)
	.endif
	@ Decoded text from ROM range: offset=0x5A9818, size=0xC
	.string "{B_ATK_NAME_WITH_PREFIX}は　にげられない！{EOS}"

	@ src/battle_message.c:214 battle_message_line_214
	.globl gText_Rom_5A9824
gText_Rom_5A9824: @ 0x085A9824
	.string "{B_BUFF1}かい あたった！{EOS}"
	.if (. - gText_Rom_5A9824) > 0xb
	.error "gText_Rom_5A9824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9824) < 0xb
	.space 0xb - (. - gText_Rom_5A9824)
	.endif

	@ src/battle_message.c:215 battle_message_line_215
	.globl gText_Rom_5A982F
gText_Rom_5A982F: @ 0x085A982F
	.string "{B_EFF_NAME_WITH_PREFIX}は\nねむってしまった！{EOS}"
	.if (. - gText_Rom_5A982F) > 0xe
	.error "gText_Rom_5A982F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A982F) < 0xe
	.space 0xe - (. - gText_Rom_5A982F)
	.endif
	@ analyzed canonical ROM range 0x085A983D-0x085A985D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x11, 0x1A, 0x00, 0x18, 0x21, 0x50, 0x13
	.byte 0x0C, 0x1F, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x18, 0x21
	.byte 0x50
.elseif .L__inc_fragment_select_d31dea23abe1 == 4
	@ src/battle_message.c:224 battle_message_line_224
	.globl gText_Rom_5A98D7
gText_Rom_5A98D7: @ 0x085A98D7
	.string "{B_DEF_NAME_WITH_PREFIX}から\nたいりょくを すいとった!{EOS}"
	.if (. - gText_Rom_5A98D7) > 0x13
	.error "gText_Rom_5A98D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98D7) < 0x13
	.space 0x13 - (. - gText_Rom_5A98D7)
	.endif
	@ analyzed canonical ROM range 0x085A98EA-0x085A990B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x11, 0x1A, 0xFE, 0x24, 0x09, 0x45, 0x2D, 0x05, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x13, 0x19
	.byte 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x11, 0x1A, 0x00, 0x24, 0x09, 0x45, 0x2D, 0x05, 0x50, 0x10
	.byte 0xAB, 0xFF
	.globl gText_Rom_5A990C
gText_Rom_5A990C: @ 0x085A990C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやけどの ダメージを うけている！{EOS}"
	.if (. - gText_Rom_5A990C) > 0x16
	.error "gText_Rom_5A990C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A990C) < 0x16
	.space 0x16 - (. - gText_Rom_5A990C)
	.endif
	@ analyzed canonical ROM range 0x085A9922-0x085A9930
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x24, 0x09, 0x45, 0x2D, 0x00, 0x05, 0x50
.elseif .L__inc_fragment_select_d31dea23abe1 == 5
	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A9931
gText_Rom_5A9931: @ 0x085A9931
	.string "ている{EOS}"
	.if (. - gText_Rom_5A9931) > 0x4
	.error "gText_Rom_5A9931 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9931) < 0x4
	.space 0x4 - (. - gText_Rom_5A9931)
	.endif

	@ src/battle_message.c:228 battle_message_line_228
	.globl gText_Rom_5A9935
gText_Rom_5A9935: @ 0x085A9935
	.string "{B_EFF_NAME_WITH_PREFIX}は\nこおりづけになった!{EOS}"
	.if (. - gText_Rom_5A9935) > 0xf
	.error "gText_Rom_5A9935 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9935) < 0xf
	.space 0xf - (. - gText_Rom_5A9935)
	.endif
	@ analyzed canonical ROM range 0x085A9944-0x085A995A
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x11, 0x1A, 0x00, 0x0A, 0x05, 0x28, 0x43
	.byte 0x09, 0x16, 0x15, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A995B
gText_Rom_5A995B: @ 0x085A995B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nこおって しまって うごかない!{EOS}"
	.if (. - gText_Rom_5A995B) > 0x15
	.error "gText_Rom_5A995B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A995B) < 0x15
	.space 0x15 - (. - gText_Rom_5A995B)
	.endif
	@ analyzed canonical ROM range 0x085A9970-0x085A999D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x19, 0xFE, 0x0A, 0x05, 0x28, 0x37, 0x00, 0x14, 0x09, 0x10, 0xAB, 0xFF, 0xFD, 0x0F
	.byte 0x19, 0xFE, 0x0A, 0x05, 0x28, 0x37, 0x00, 0x14, 0x09, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x19, 0x00
	.byte 0x0A, 0x05, 0x28, 0x37, 0xFE, 0xFD, 0x14, 0x44, 0x00, 0x14, 0x09, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A999E
gText_Rom_5A999E: @ 0x085A999E
	.string "{B_EFF_NAME_WITH_PREFIX}は まひして\nわざが でにくくなった!{EOS}"
	.if (. - gText_Rom_5A999E) > 0x16
	.error "gText_Rom_5A999E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A999E) < 0x16
	.space 0x16 - (. - gText_Rom_5A999E)
	.endif
	@ analyzed canonical ROM range 0x085A99B4-0x085A99D1
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x11, 0x1A, 0xFE, 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFA, 0x1F, 0x1B, 0x0C, 0x13
	.byte 0x00, 0x2C, 0x3C, 0x37, 0x00, 0x44, 0x16, 0x08, 0x08, 0x15, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A99D2
gText_Rom_5A99D2: @ 0x085A99D2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nからだが しびれて うごけない{EOS}"
	.if (. - gText_Rom_5A99D2) > 0x14
	.error "gText_Rom_5A99D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99D2) < 0x14
	.space 0x14 - (. - gText_Rom_5A99D2)
	.endif
	@ analyzed canonical ROM range 0x085A99E6-0x085A99F0
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x1F, 0x1B, 0x0C
.elseif .L__inc_fragment_select_d31dea23abe1 == 6
	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_5A99F1
gText_Rom_5A99F1: @ 0x085A99F1
	.string "ている{EOS}"
	.if (. - gText_Rom_5A99F1) > 0x4
	.error "gText_Rom_5A99F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99F1) < 0x4
	.space 0x4 - (. - gText_Rom_5A99F1)
	.endif

	@ src/battle_message.c:237 battle_message_line_237
	.globl gText_Rom_5A99F5
gText_Rom_5A99F5: @ 0x085A99F5
	.string "{B_DEF_NAME_WITH_PREFIX}の\nまひが なおった!{EOS}"
	.if (. - gText_Rom_5A99F5) > 0xe
	.error "gText_Rom_5A99F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99F5) < 0xe
	.space 0xe - (. - gText_Rom_5A99F5)
	.endif
	@ analyzed canonical ROM range 0x085A9A03-0x085A9A57
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x19, 0xFE, 0x25, 0x22, 0x2D, 0x00, 0x08, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x19
	.byte 0xFE, 0xFD, 0x00, 0x1A, 0x00, 0x23, 0x03, 0x01, 0x37, 0x27, 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10
	.byte 0x19, 0xFE, 0xFD, 0x00, 0x1A, 0x00, 0x23, 0x03, 0x0B, 0x37, 0x27, 0x15, 0x02, 0xAB, 0xFF, 0x20
	.byte 0x06, 0x10, 0x19, 0x00, 0xFD, 0x00, 0x19, 0xFE, 0x0A, 0x03, 0x06, 0x37, 0x00, 0x07, 0x2A, 0x10
	.byte 0xAB, 0xFF, 0x01, 0x02, 0x13, 0x19, 0x00, 0xFD, 0x00, 0x19, 0xFE, 0x0A, 0x03, 0x06, 0x37, 0x00
	.byte 0x07, 0x2A, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A9A58
gText_Rom_5A9A58: @ 0x085A9A58
	.string "{B_ATK_NAME_WITH_PREFIX}は\nこんらんしている!{EOS}"
	.if (. - gText_Rom_5A9A58) > 0xe
	.error "gText_Rom_5A9A58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A58) < 0xe
	.space 0xe - (. - gText_Rom_5A9A58)
	.endif

	@ src/battle_message.c:241 battle_message_line_241
	.globl gText_Rom_5A9A66
gText_Rom_5A9A66: @ 0x085A9A66
	.string "{B_ATK_NAME_WITH_PREFIX}の\nこんらんが とけた!{EOS}"
	.if (. - gText_Rom_5A9A66) > 0xf
	.error "gText_Rom_5A9A66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A66) < 0xf
	.space 0xf - (. - gText_Rom_5A9A66)
	.endif

	@ src/battle_message.c:242 battle_message_line_242
	.globl gText_Rom_5A9A75
gText_Rom_5A9A75: @ 0x085A9A75
	.string "{B_EFF_NAME_WITH_PREFIX}は\nこんらんした!{EOS}"
	.if (. - gText_Rom_5A9A75) > 0xc
	.error "gText_Rom_5A9A75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9A75) < 0xc
	.space 0xc - (. - gText_Rom_5A9A75)
	.endif

	@ src/battle_message.c:243 battle_message_line_243
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9A81
gText_Rom_5A9A81: @ 0x085A9A81
	.string "{B_DEF_NAME_WITH_PREFIX}は\nすでに こんらん している{EOS}"
	.if (. - gText_Rom_5A9A81) != 0x12
	.error "gText_Rom_5A9A81 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5A9A93, size=0x1E
	.byte 0xFD, 0x10, 0x1A, 0xFE, 0x72, 0x7B, 0x72, 0x7B, 0x16, 0x00, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0xFD
	.byte 0x0F, 0x1A, 0xFE, 0xFD, 0x13, 0x16, 0x00, 0x72, 0x7B, 0x72, 0x7B, 0x41, 0xAB, 0xFF

	@ src/battle_message.c:246 battle_message_line_246
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9AB1
gText_Rom_5A9AB1: @ 0x085A9AB1
	.string "{B_ATK_NAME_WITH_PREFIX}は メロメロで\nわざが だせなかった!{EOS}"
	.if (. - gText_Rom_5A9AB1) != 0x16
	.error "gText_Rom_5A9AB1 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5A9AC7, size=0xD
	.byte 0xFD, 0x10, 0x1A, 0xFE, 0x1C, 0x07, 0x14, 0x46, 0x0B, 0x2A, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:247 battle_message_line_247
	.globl gText_Rom_5A9AD4
gText_Rom_5A9AD4: @ 0x085A9AD4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}タイプに なった！{EOS}"
	.if (. - gText_Rom_5A9AD4) > 0x10
	.error "gText_Rom_5A9AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9AD4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9AD4)
	.endif

	@ src/battle_message.c:248 battle_message_line_248
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9AE4
gText_Rom_5A9AE4: @ 0x085A9AE4
	.string "{B_ATK_NAME_WITH_PREFIX}は ひるんで\nうごけなかった!{EOS}"
	.if (. - gText_Rom_5A9AE4) != 0x12
	.error "gText_Rom_5A9AE4 must retain its original byte length"
	.endif

	@ src/battle_message.c:249 battle_message_line_249
	.globl gText_Rom_5A9AF6
gText_Rom_5A9AF6: @ 0x085A9AF6
	.string "{B_DEF_NAME_WITH_PREFIX}は たいりょくを\nかいふくした!{EOS}"
	.if (. - gText_Rom_5A9AF6) > 0x13
	.error "gText_Rom_5A9AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9AF6) < 0x13
	.space 0x13 - (. - gText_Rom_5A9AF6)
	.endif

	@ src/battle_message.c:250 battle_message_line_250
	.globl gText_Rom_5A9B09
gText_Rom_5A9B09: @ 0x085A9B09
	.string "しかし {B_DEF_NAME_WITH_PREFIX}の\nたいりょくは まんたんだ!{EOS}"
	.if (. - gText_Rom_5A9B09) > 0x16
	.error "gText_Rom_5A9B09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9B09) < 0x16
	.space 0x16 - (. - gText_Rom_5A9B09)
	.endif
	@ analyzed canonical ROM range 0x085A9B1F-0x085A9BD1
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x2A, 0x00, 0xFD, 0x14, 0x44, 0xFE, 0x14, 0x08, 0x0A, 0x03, 0x16, 0x00, 0x12, 0x26, 0x08
	.byte 0x15, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x2A, 0x00, 0xFD, 0x14, 0x44, 0xFE, 0x14, 0x08, 0x0A, 0x03
	.byte 0x16, 0x00, 0x0D, 0x0A, 0x0C, 0x00, 0x12, 0x26, 0x08, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x2A
	.byte 0x00, 0xFD, 0x14, 0x44, 0xFE, 0x41, 0x3A, 0x07, 0x0A, 0x03, 0x3A, 0x07, 0x16, 0x00, 0x12, 0x26
	.byte 0x08, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x2A, 0x00, 0xFD, 0x14, 0x44, 0xFE, 0x41, 0x3A, 0x07
	.byte 0x0A, 0x03, 0x3A, 0x07, 0x16, 0x00, 0x0D, 0x0A, 0x0C, 0x00, 0x12, 0x26, 0x08, 0x15, 0x50, 0x10
	.byte 0xAB, 0xFF, 0xFD, 0x2A, 0xFE, 0x0C, 0x2E, 0x4C, 0x19, 0x99, 0xAE, 0x79, 0x16, 0x00, 0x12, 0x12
	.byte 0x1F, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0xFE, 0x0C, 0x2E, 0x4C, 0x19, 0x99, 0xAE, 0x79
	.byte 0x16, 0x00, 0x1F, 0x23, 0x27, 0x2A, 0x13, 0x02, 0x29, 0xAB, 0xFF, 0xFD, 0x2C, 0x00, 0x12, 0x12
	.byte 0x2E, 0x44, 0x02, 0x10, 0xFE, 0x0C, 0x2E, 0x4C, 0x19, 0x00, 0x99, 0xAE, 0x79, 0x37, 0x00, 0x15
	.byte 0x08, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0x18, 0x21, 0x28, 0x1A, 0x3D, 0x22
	.byte 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A9BD2
gText_Rom_5A9BD2: @ 0x085A9BD2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nけんこうになって ねむりはじめた!{EOS}"
	.if (. - gText_Rom_5A9BD2) > 0x16
	.error "gText_Rom_5A9BD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BD2) < 0x16
	.space 0x16 - (. - gText_Rom_5A9BD2)
	.endif

	@ src/battle_message.c:259 battle_message_line_259
	.globl gText_Rom_5A9BE8
gText_Rom_5A9BE8: @ 0x085A9BE8
	.string "{B_ATK_NAME_WITH_PREFIX}の まわりで\nくうきが うずを まく!{EOS}"
	.if (. - gText_Rom_5A9BE8) > 0x16
	.error "gText_Rom_5A9BE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BE8) < 0x16
	.space 0x16 - (. - gText_Rom_5A9BE8)
	.endif

	@ src/battle_message.c:260 battle_message_line_260
	.globl gText_Rom_5A9BFE
gText_Rom_5A9BFE: @ 0x085A9BFE
	.string "{B_ATK_NAME_WITH_PREFIX}は\nひかりを きゅうしゅうした!{EOS}"
	.if (. - gText_Rom_5A9BFE) > 0x13
	.error "gText_Rom_5A9BFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9BFE) < 0x13
	.space 0x13 - (. - gText_Rom_5A9BFE)
	.endif

	@ src/battle_message.c:261 battle_message_line_261
	.globl gText_Rom_5A9C11
gText_Rom_5A9C11: @ 0x085A9C11
	.string "{B_ATK_NAME_WITH_PREFIX}は\nくびを ひっこめた!{EOS}"
	.if (. - gText_Rom_5A9C11) > 0xf
	.error "gText_Rom_5A9C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9C11) < 0xf
	.space 0xf - (. - gText_Rom_5A9C11)
	.endif
	@ analyzed canonical ROM range 0x085A9C20-0x085A9C32
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x2D, 0xFE, 0x1A, 0x3A, 0x0C, 0x02, 0x00, 0x1B, 0x06, 0x28, 0x37, 0x00, 0x12, 0x12
	.byte 0x21, 0xAB, 0xFF
	.globl gText_Rom_5A9C33
gText_Rom_5A9C33: @ 0x085A9C33
	.string "{B_ATK_NAME_WITH_PREFIX}は\nそらたかく とびあがった!{EOS}"
	.if (. - gText_Rom_5A9C33) != 0x12
	.error "gText_Rom_5A9C33 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_d31dea23abe1 == 7
	@ src/battle_message.c:286 battle_message_line_286
	.globl gText_Rom_5A9E28
gText_Rom_5A9E28: @ 0x085A9E28
	.string "{B_ATK_NAME_WITH_PREFIX}は さわいでいる!{EOS}"
	.if (. - gText_Rom_5A9E28) > 0xc
	.error "gText_Rom_5A9E28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E28) < 0xc
	.space 0xc - (. - gText_Rom_5A9E28)
	.endif

	@ src/battle_message.c:287 battle_message_line_287
	.globl gText_Rom_5A9E34
gText_Rom_5A9E34: @ 0x085A9E34
	.string "{B_ATK_NAME_WITH_PREFIX}は\nおとなしくなった{EOS}"
	.if (. - gText_Rom_5A9E34) > 0xd
	.error "gText_Rom_5A9E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E34) < 0xd
	.space 0xd - (. - gText_Rom_5A9E34)
	.endif
	@ analyzed canonical ROM range 0x085A9E41-0x085A9E55
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0xFD, 0x10, 0x1A, 0xFE, 0x0B, 0x2C, 0x02, 0x44, 0x02, 0x13, 0x00, 0x18, 0x21
	.byte 0x27, 0x15, 0x02, 0xAB, 0xFF
	.globl gText_Rom_5A9E56
gText_Rom_5A9E56: @ 0x085A9E56
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}つたくわえた!{EOS}"
	.if (. - gText_Rom_5A9E56) > 0xe
	.error "gText_Rom_5A9E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E56) < 0xe
	.space 0xe - (. - gText_Rom_5A9E56)
	.endif
	@ analyzed canonical ROM range 0x085A9E64-0x085A9EBE
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x23, 0x03, 0x00, 0x0A, 0x2A, 0x02, 0x3D, 0x36, 0x03, 0xFE, 0x10, 0x08
	.byte 0x2C, 0x04, 0x27, 0x2A, 0x15, 0x02, 0xAB, 0xFF, 0x0C, 0x06, 0x0C, 0x00, 0xFD, 0x10, 0x1A, 0xFE
	.byte 0x0B, 0x2C, 0x02, 0x44, 0x02, 0x13, 0x00, 0x18, 0x21, 0x27, 0x15, 0x02, 0xAB, 0xFF, 0x0C, 0x06
	.byte 0x0C, 0x00, 0xFD, 0x10, 0x1A, 0xFE, 0x0B, 0x2C, 0x37, 0x0C, 0x08, 0x13, 0x00, 0x18, 0x21, 0x2A
	.byte 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0xFE, 0xFD, 0x19, 0x44, 0x00, 0x18, 0x21, 0x27, 0x15
	.byte 0x02, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0x00, 0x37, 0x1F, 0x2E, 0x0C
.elseif .L__inc_fragment_select_d31dea23abe1 == 8
	@ src/battle_message.c:295 battle_message_line_295
	.globl gText_Rom_5A9EE9
gText_Rom_5A9EE9: @ 0x085A9EE9
	.string "{B_BUFF1}円\nひろった!\p{EOS}"
	.if (. - gText_Rom_5A9EE9) > 0xb
	.error "gText_Rom_5A9EE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EE9) < 0xb
	.space 0xb - (. - gText_Rom_5A9EE9)
	.endif

	@ src/battle_message.c:296 battle_message_line_296
	.globl gText_Rom_5A9EF4
gText_Rom_5A9EF4: @ 0x085A9EF4
	.string "{B_DEF_NAME_WITH_PREFIX}には\nぜんぜんきいてない!{EOS}"
	.if (. - gText_Rom_5A9EF4) > 0x10
	.error "gText_Rom_5A9EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9EF4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9EF4)
	.endif

	@ src/battle_message.c:297 battle_message_line_297
	.globl gText_Rom_5A9F04
gText_Rom_5A9F04: @ 0x085A9F04
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}に へんしんした!{EOS}"
	.if (. - gText_Rom_5A9F04) > 0x10
	.error "gText_Rom_5A9F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F04) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F04)
	.endif

	@ src/battle_message.c:298 battle_message_line_298
	.globl gText_Rom_5A9F14
gText_Rom_5A9F14: @ 0x085A9F14
	.string "{B_ATK_NAME_WITH_PREFIX}の\nぶんしんが あらわれた{EOS}"
	.if (. - gText_Rom_5A9F14) > 0x10
	.error "gText_Rom_5A9F14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F14) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F14)
	.endif

	@ src/battle_message.c:299 battle_message_line_299
	.globl gText_Rom_5A9F24
gText_Rom_5A9F24: @ 0x085A9F24
	.string "しかし {B_ATK_NAME_WITH_PREFIX}の\nみがわりは すでに でていた!{EOS}"
	.if (. - gText_Rom_5A9F24) > 0x18
	.error "gText_Rom_5A9F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F24) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F24)
	.endif
	@ analyzed canonical ROM range 0x085A9F3C-0x085A9F6B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x16, 0x00, 0x06, 0x2C, 0x50, 0x13, 0xFE, 0x48, 0x2E, 0x0C, 0x2E, 0x37, 0x00, 0x0A
	.byte 0x03, 0x3A, 0x07, 0x2D, 0x00, 0x03, 0x09, 0x10, 0xAB, 0xFB, 0xFF, 0xFD, 0x10, 0x19, 0x00, 0x48
	.byte 0x2E, 0x0C, 0x2E, 0x1A, 0xFE, 0x07, 0x04, 0x13, 0x0C, 0x1F, 0x50, 0x10, 0xB0, 0xB0, 0xFB, 0xFF
	.globl gText_Rom_5A9F6C
gText_Rom_5A9F6C: @ 0x085A9F6C
	.string "こうげきの はんどうで\n{B_ATK_NAME_WITH_PREFIX}は うごけない!{EOS}"
	.if (. - gText_Rom_5A9F6C) > 0x17
	.error "gText_Rom_5A9F6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F6C) < 0x17
	.space 0x17 - (. - gText_Rom_5A9F6C)
	.endif

	@ src/battle_message.c:303 battle_message_line_303
	.globl gText_Rom_5A9F83
gText_Rom_5A9F83: @ 0x085A9F83
	.string "{B_DEF_NAME_WITH_PREFIX}の いかりの\nボルテージが あがっていく!{EOS}"
	.if (. - gText_Rom_5A9F83) > 0x18
	.error "gText_Rom_5A9F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F83) < 0x18
	.space 0x18 - (. - gText_Rom_5A9F83)
	.endif

	@ src/battle_message.c:304 battle_message_line_304
	.globl gText_Rom_5A9F9B
gText_Rom_5A9F9B: @ 0x085A9F9B
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を ふうじこめた!{EOS}"
	.if (. - gText_Rom_5A9F9B) > 0x10
	.error "gText_Rom_5A9F9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9F9B) < 0x10
	.space 0x10 - (. - gText_Rom_5A9F9B)
	.endif
	@ analyzed canonical ROM range 0x085A9FAB-0x085A9FBA
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0x06, 0x15, 0x0C, 0x46, 0x28, 0x37, 0x00, 0x14, 0x09, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A9FBB
gText_Rom_5A9FBB: @ 0x085A9FBB
	.string "{B_DEF_NAME_WITH_PREFIX}は\nアンコールを うけた!{EOS}"
	.if (. - gText_Rom_5A9FBB) > 0x10
	.error "gText_Rom_5A9FBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FBB) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FBB)
	.endif
	@ analyzed canonical ROM range 0x085A9FCB-0x085A9FF2
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0x51, 0x7E, 0x5A, 0xAE, 0x79, 0x3D, 0x36, 0x03, 0x10, 0x02, 0x37, 0x00
	.byte 0x14, 0x09, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x16, 0xFE, 0x18, 0x27, 0x02
	.byte 0x2D, 0x00, 0x0B, 0x41, 0x22, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5A9FF3
gText_Rom_5A9FF3: @ 0x085A9FF3
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}を スケッチした!{EOS}"
	.if (. - gText_Rom_5A9FF3) > 0x10
	.error "gText_Rom_5A9FF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9FF3) < 0x10
	.space 0x10 - (. - gText_Rom_5A9FF3)
	.endif

	@ src/battle_message.c:312 battle_message_line_312
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA003
gText_Rom_5AA003: @ 0x085AA003
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてを\nみちづれに しようとしている{EOS}"
	.if (. - gText_Rom_5AA003) != 0x18
	.error "gText_Rom_5AA003 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AA01B, size=0x12
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x0F, 0x2D, 0xFE, 0x20, 0x11, 0x43, 0x2A, 0x16, 0x00, 0x0C, 0x10
	.byte 0xAB, 0xFF

	@ src/battle_message.c:314 battle_message_line_314
	.globl gText_Rom_5AA02D
gText_Rom_5AA02D: @ 0x085AA02D
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を {B_BUFF2}けずった!{EOS}"
	.if (. - gText_Rom_5AA02D) > 0x10
	.error "gText_Rom_5AA02D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA02D) < 0x10
	.space 0x10 - (. - gText_Rom_5AA02D)
	.endif
	@ analyzed canonical ROM range 0x085AA03D-0x085AA051
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x06, 0x27, 0xFE, 0xFD, 0x16, 0x2D, 0x00, 0x03, 0x46, 0x02
	.byte 0x14, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA052
gText_Rom_5AA052: @ 0x085AA052
	.string "{B_DEF_NAME_WITH_PREFIX}は\nもう にげられない!{EOS}"
	.if (. - gText_Rom_5AA052) > 0xf
	.error "gText_Rom_5AA052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA052) < 0xf
	.space 0xf - (. - gText_Rom_5AA052)
	.endif

	@ src/battle_message.c:317 battle_message_line_317
	.globl gText_Rom_5AA061
gText_Rom_5AA061: @ 0x085AA061
	.string "{B_DEF_NAME_WITH_PREFIX}は\nあくむを みはじめた!{EOS}"
	.if (. - gText_Rom_5AA061) > 0x10
	.error "gText_Rom_5AA061 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA061) < 0x10
	.space 0x10 - (. - gText_Rom_5AA061)
	.endif

	@ src/battle_message.c:318 battle_message_line_318
	.globl gText_Rom_5AA071
gText_Rom_5AA071: @ 0x085AA071
	.string "{B_ATK_NAME_WITH_PREFIX}は\nあくむに うなされている!{EOS}"
	.if (. - gText_Rom_5AA071) > 0x12
	.error "gText_Rom_5AA071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA071) < 0x12
	.space 0x12 - (. - gText_Rom_5AA071)
	.endif
	@ analyzed canonical ROM range 0x085AA083-0x085AA0A5
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x3D, 0x48, 0x2E, 0x19, 0x00, 0x10, 0x02, 0x28, 0x36, 0x08, 0x2D, 0xFE
	.byte 0x09, 0x3E, 0x50, 0x13, 0x00, 0xFD, 0x10, 0x16, 0x00, 0x19, 0x2B, 0x02, 0x2D, 0x00, 0x06, 0x09
	.byte 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA0A6
gText_Rom_5AA0A6: @ 0x085AA0A6
	.string "{B_ATK_NAME_WITH_PREFIX}は\nのろわれている!{EOS}"
	.if (. - gText_Rom_5AA0A6) > 0xd
	.error "gText_Rom_5AA0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0A6) < 0xd
	.space 0xd - (. - gText_Rom_5AA0A6)
	.endif
	@ analyzed canonical ROM range 0x085AA0B3-0x085AA0C8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x29, 0x00, 0x01, 0x0C, 0x23, 0x14, 0x16, 0xFE, 0x1F, 0x07, 0x47, 0x0C, 0x37, 0x00, 0x11
	.byte 0x27, 0x46, 0x50, 0x10, 0xAB, 0xFF
.elseif .L__inc_fragment_select_d31dea23abe1 == 9

	@ src/battle_message.c:322 battle_message_line_322
	.globl gText_Rom_5AA0C9
gText_Rom_5AA0C9: @ 0x085AA0C9
	.string "{B_SCR_NAME_WITH_PREFIX}は まきびしの\nダメージを うけた!{EOS}"
	.if (. - gText_Rom_5AA0C9) > 0x15
	.error "gText_Rom_5AA0C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0C9) < 0x15
	.space 0x15 - (. - gText_Rom_5AA0C9)
	.endif
	@ analyzed canonical ROM range 0x085AA0DE-0x085AA0E1
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00
	.globl gText_Rom_5AA0E2
gText_Rom_5AA0E2: @ 0x085AA0E2
	.string "{B_DEF_NAME_WITH_PREFIX}の\nしょうたいを みやぶった!{EOS}"
	.if (. - gText_Rom_5AA0E2) > 0x12
	.error "gText_Rom_5AA0E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0E2) < 0x12
	.space 0x12 - (. - gText_Rom_5AA0E2)
	.endif

	@ src/battle_message.c:324 battle_message_line_324
	.globl gText_Rom_5AA0F4
gText_Rom_5AA0F4: @ 0x085AA0F4
	.string "{B_ATK_NAME_WITH_PREFIX}の ほろびの\nカウントが {B_BUFF1}になった!{EOS}"
	.if (. - gText_Rom_5AA0F4) > 0x17
	.error "gText_Rom_5AA0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA0F4) < 0x17
	.space 0x17 - (. - gText_Rom_5AA0F4)
	.endif

	@ src/battle_message.c:325 battle_message_line_325
	.globl gText_Rom_5AA10B
gText_Rom_5AA10B: @ 0x085AA10B
	.string "{B_ATK_NAME_WITH_PREFIX}は こらえる\nたいせいに はいった!{EOS}"
	.if (. - gText_Rom_5AA10B) > 0x15
	.error "gText_Rom_5AA10B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA10B) < 0x15
	.space 0x15 - (. - gText_Rom_5AA10B)
	.endif

	@ src/battle_message.c:326 battle_message_line_326
	.globl gText_Rom_5AA120
gText_Rom_5AA120: @ 0x085AA120
	.string "{B_DEF_NAME_WITH_PREFIX}は こうげきを\nこらえた!{EOS}"
	.if (. - gText_Rom_5AA120) > 0x10
	.error "gText_Rom_5AA120 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA120) < 0x10
	.space 0x10 - (. - gText_Rom_5AA120)
	.endif

	@ src/battle_message.c:327 battle_message_line_327
	.globl gText_Rom_5AA130
gText_Rom_5AA130: @ 0x085AA130
	.string "マグニチュード{B_BUFF1}！！{EOS}"
	.if (. - gText_Rom_5AA130) > 0xc
	.error "gText_Rom_5AA130 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA130) < 0xc
	.space 0xc - (. - gText_Rom_5AA130)
	.endif

	@ src/battle_message.c:328 battle_message_line_328
	.globl gText_Rom_5AA13C
gText_Rom_5AA13C: @ 0x085AA13C
	.string "{B_ATK_NAME_WITH_PREFIX}は たいりょくを けずって\nパワーぜんかいに なった!{EOS}"
	.if (. - gText_Rom_5AA13C) > 0x1e
	.error "gText_Rom_5AA13C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA13C) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA13C)
	.endif
	@ analyzed canonical ROM range 0x085AA15A-0x085AA186
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0x1E, 0x3D, 0x36, 0x0A, 0x03, 0x06, 0x2D, 0x00
	.byte 0x5A, 0x9C, 0xAE, 0x0C, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0xFD
	.byte 0x00, 0x06, 0x27, 0x00, 0x06, 0x02, 0x1E, 0x03, 0x0B, 0x2A, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA187
gText_Rom_5AA187: @ 0x085AA187
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやどりぎのタネを ふきとばした!{EOS}"
	.if (. - gText_Rom_5AA187) > 0x15
	.error "gText_Rom_5AA187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA187) < 0x15
	.space 0x15 - (. - gText_Rom_5AA187)
	.endif

	@ src/battle_message.c:332 battle_message_line_332
	.globl gText_Rom_5AA19C
gText_Rom_5AA19C: @ 0x085AA19C
	.string "{B_ATK_NAME_WITH_PREFIX}は まきびしを\nふきとばした!{EOS}"
	.if (. - gText_Rom_5AA19C) > 0x12
	.error "gText_Rom_5AA19C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA19C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA19C)
	.endif

	@ src/battle_message.c:333 battle_message_line_333
	.globl gText_Rom_5AA1AE
gText_Rom_5AA1AE: @ 0x085AA1AE
	.string "{B_ATK_NAME_WITH_PREFIX}は せんとうから\nりだつした!{EOS}"
	.if (. - gText_Rom_5AA1AE) > 0x12
	.error "gText_Rom_5AA1AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1AE) < 0x12
	.space 0x12 - (. - gText_Rom_5AA1AE)
	.endif

	@ src/battle_message.c:334 battle_message_line_334
	.globl gText_Rom_5AA1C0
gText_Rom_5AA1C0: @ 0x085AA1C0
	.string "{B_ATK_NAME_WITH_PREFIX}は みらいに\nこうげきを よちした!{EOS}"
	.if (. - gText_Rom_5AA1C0) > 0x15
	.error "gText_Rom_5AA1C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1C0) < 0x15
	.space 0x15 - (. - gText_Rom_5AA1C0)
	.endif

	@ src/battle_message.c:335 battle_message_line_335 (+1 aliases)
	.globl gText_Rom_5AA1D5
gText_Rom_5AA1D5: @ 0x085AA1D5
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_BUFF1}の\nこうげきを うけた!{EOS}"
	.if (. - gText_Rom_5AA1D5) > 0x13
	.error "gText_Rom_5AA1D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1D5) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1D5)
	.endif

	@ src/battle_message.c:489 battle_message_line_489
	.globl gText_Rom_5AA1E8
gText_Rom_5AA1E8: @ 0x085AA1E8
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_CURRENT_MOVE}を\nみらいに たくした!{EOS}"
	.if (. - gText_Rom_5AA1E8) > 0x13
	.error "gText_Rom_5AA1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA1E8) < 0x13
	.space 0x13 - (. - gText_Rom_5AA1E8)
	.endif

	@ src/battle_message.c:336 battle_message_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA1FB
gText_Rom_5AA1FB: @ 0x085AA1FB
	.string "{B_BUFF1}の こうげき!{EOS}"
	.if (. - gText_Rom_5AA1FB) != 0xa
	.error "gText_Rom_5AA1FB must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AA205, size=0x14
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x11, 0x35, 0x03, 0x23, 0x08, 0x19, 0x00, 0x1F, 0x14, 0x16, 0x00, 0x15
	.byte 0x50, 0x10, 0xAB, 0xFF

	@ src/battle_message.c:338 battle_message_line_338
	.globl gText_Rom_5AA219
gText_Rom_5AA219: @ 0x085AA219
	.string "{B_ATK_NAME_WITH_PREFIX}は\nじゅうでんを はじめた!{EOS}"
	.if (. - gText_Rom_5AA219) > 0x11
	.error "gText_Rom_5AA219 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA219) < 0x11
	.space 0x11 - (. - gText_Rom_5AA219)
	.endif

.elseif .L__inc_fragment_select_d31dea23abe1 == 10
	@ src/battle_message.c:339 battle_message_line_339
	.globl gText_Rom_5AA22A
gText_Rom_5AA22A: @ 0x085AA22A
	.string "しぜんのちからは\n{B_CURRENT_MOVE}に なった!{EOS}"
	.if (. - gText_Rom_5AA22A) > 0x12
	.error "gText_Rom_5AA22A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA22A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA22A)
	.endif

	@ src/battle_message.c:340 battle_message_line_340
	.globl gText_Rom_5AA23C
gText_Rom_5AA23C: @ 0x085AA23C
	.string "{B_ATK_NAME_WITH_PREFIX}の じょうたいいじょうが\nなおった!{EOS}"
	.if (. - gText_Rom_5AA23C) > 0x15
	.error "gText_Rom_5AA23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA23C) < 0x15
	.space 0x15 - (. - gText_Rom_5AA23C)
	.endif

	@ src/battle_message.c:342 battle_message_line_342
	.globl gText_Rom_5AA251
gText_Rom_5AA251: @ 0x085AA251
	.string "{B_DEF_NAME_WITH_PREFIX}は\nいちゃもんを つけられた!{EOS}"
	.if (. - gText_Rom_5AA251) > 0x12
	.error "gText_Rom_5AA251 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA251) < 0x12
	.space 0x12 - (. - gText_Rom_5AA251)
	.endif
	@ analyzed canonical ROM range 0x085AA263-0x085AA279
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0xFE, 0x0C, 0x35, 0x03, 0x11, 0x35, 0x03, 0x28, 0x36, 0x08, 0x2D, 0x00, 0x10
	.byte 0x06, 0x22, 0x13, 0x02, 0x29, 0xAB, 0xFF
	.globl gText_Rom_5AA27A
gText_Rom_5AA27A: @ 0x085AA27A
	.string "{B_DEF_NAME_WITH_PREFIX}は \nちょうはつに のってしまった!{EOS}"
	.if (. - gText_Rom_5AA27A) > 0x15
	.error "gText_Rom_5AA27A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA27A) < 0x15
	.space 0x15 - (. - gText_Rom_5AA27A)
	.endif
	@ analyzed canonical ROM range 0x085AA28F-0x085AA2AA
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x2D, 0xFE, 0x13, 0x41, 0x0D, 0x09, 0x00, 0x0D, 0x29, 0x00
	.byte 0x10, 0x02, 0x0E, 0x02, 0x16, 0x00, 0x1A, 0x02, 0x50, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA2AB
gText_Rom_5AA2AB: @ 0x085AA2AB
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nどうぐを いれかえた!{EOS}"
	.if (. - gText_Rom_5AA2AB) > 0x16
	.error "gText_Rom_5AA2AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA2AB) < 0x16
	.space 0x16 - (. - gText_Rom_5AA2AB)
	.endif
	@ analyzed canonical ROM range 0x085AA2C1-0x085AA31C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x00, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFF
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFF
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x00, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFB
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x01, 0x2D, 0xFE, 0x13, 0x16, 0x00, 0x02, 0x2A, 0x10, 0xAB, 0xFF
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x19, 0x2D, 0x00, 0x5A, 0x9C, 0xAE, 0x0C
	.byte 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0x18, 0x37, 0x02, 0x3B, 0x14
	.globl gText_Rom_5AA31D
gText_Rom_5AA31D: @ 0x085AA31D
	.string "を した!{EOS}"
	.if (. - gText_Rom_5AA31D) > 0x6
	.error "gText_Rom_5AA31D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA31D) < 0x6
	.space 0x6 - (. - gText_Rom_5AA31D)
	.endif

	@ src/battle_message.c:350 battle_message_line_350
	.globl gText_Rom_5AA323
gText_Rom_5AA323: @ 0x085AA323
	.string "{B_BUFF1}の\nねがいごとが かなった!{EOS}"
	.if (. - gText_Rom_5AA323) > 0x11
	.error "gText_Rom_5AA323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA323) < 0x11
	.space 0x11 - (. - gText_Rom_5AA323)
	.endif

	@ src/battle_message.c:351 battle_message_line_351
	.globl gText_Rom_5AA334
gText_Rom_5AA334: @ 0x085AA334
	.string "{B_ATK_NAME_WITH_PREFIX}は ねを はった!{EOS}"
	.if (. - gText_Rom_5AA334) > 0xc
	.error "gText_Rom_5AA334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA334) < 0xc
	.space 0xc - (. - gText_Rom_5AA334)
	.endif

	@ src/battle_message.c:352 battle_message_line_352
	.globl gText_Rom_5AA340
gText_Rom_5AA340: @ 0x085AA340
	.string "{B_ATK_NAME_WITH_PREFIX}は ねから\nようぶんを すいとった!{EOS}"
	.if (. - gText_Rom_5AA340) > 0x15
	.error "gText_Rom_5AA340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA340) < 0x15
	.space 0x15 - (. - gText_Rom_5AA340)
	.endif

	@ src/battle_message.c:353 battle_message_line_353
	.globl gText_Rom_5AA355
gText_Rom_5AA355: @ 0x085AA355
	.string "{B_DEF_NAME_WITH_PREFIX}は ねを はって\nうごかない!{EOS}"
	.if (. - gText_Rom_5AA355) > 0x12
	.error "gText_Rom_5AA355 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA355) < 0x12
	.space 0x12 - (. - gText_Rom_5AA355)
	.endif

	@ src/battle_message.c:354 battle_message_line_354
	.globl gText_Rom_5AA367
gText_Rom_5AA367: @ 0x085AA367
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_DEF_NAME_WITH_PREFIX}の\nねむけを さそった!{EOS}"
	.if (. - gText_Rom_5AA367) > 0x13
	.error "gText_Rom_5AA367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA367) < 0x13
	.space 0x13 - (. - gText_Rom_5AA367)
	.endif
	@ analyzed canonical ROM range 0x085AA37A-0x085AA38E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x19, 0xFE, 0xFD, 0x16, 0x2D, 0x00, 0x1A, 0x10, 0x07, 0x05
	.byte 0x14, 0x0C, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA38F
gText_Rom_5AA38F: @ 0x085AA38F
	.string "{B_ATK_NAME_WITH_PREFIX}は おたがいの\nとくせいを いれかえた!{EOS}"
	.if (. - gText_Rom_5AA38F) > 0x17
	.error "gText_Rom_5AA38F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA38F) < 0x17
	.space 0x17 - (. - gText_Rom_5AA38F)
	.endif

	@ src/battle_message.c:357 battle_message_line_357
	.globl gText_Rom_5AA3A6
gText_Rom_5AA3A6: @ 0x085AA3A6
	.string "{B_ATK_NAME_WITH_PREFIX}は あいての\nわざを ふういんした!{EOS}"
	.if (. - gText_Rom_5AA3A6) > 0x15
	.error "gText_Rom_5AA3A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3A6) < 0x15
	.space 0x15 - (. - gText_Rom_5AA3A6)
	.endif

	@ src/battle_message.c:359 battle_message_line_359
	.globl gText_Rom_5AA3BB
gText_Rom_5AA3BB: @ 0x085AA3BB
	.string "{B_ATK_NAME_WITH_PREFIX}は あいてに\nおんねんを かけようと している!{EOS}"
	.if (. - gText_Rom_5AA3BB) > 0x1b
	.error "gText_Rom_5AA3BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3BB) < 0x1b
	.space 0x1b - (. - gText_Rom_5AA3BB)
	.endif

	@ src/battle_message.c:360 battle_message_line_360
	.globl gText_Rom_5AA3D6
gText_Rom_5AA3D6: @ 0x085AA3D6
	.string "{B_ATK_NAME_WITH_PREFIX}の {B_BUFF1}は\nおんねんで わざポイントが 0に なった!{EOS}"
	.if (. - gText_Rom_5AA3D6) > 0x1e
	.error "gText_Rom_5AA3D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3D6) < 0x1e
	.space 0x1e - (. - gText_Rom_5AA3D6)
	.endif

	@ src/battle_message.c:361 battle_message_line_361
	.globl gText_Rom_5AA3F4
gText_Rom_5AA3F4: @ 0x085AA3F4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_CURRENT_MOVE}に つつまれた!{EOS}"
	.if (. - gText_Rom_5AA3F4) > 0xf
	.error "gText_Rom_5AA3F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA3F4) < 0xf
	.space 0xf - (. - gText_Rom_5AA3F4)
	.endif
	@ analyzed canonical ROM range 0x085AA403-0x085AA447
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x19, 0x00, 0xFD, 0x14, 0x1A, 0xFE, 0x6F, 0x8D, 0xA0, 0x58, 0x5A, 0xAE, 0x64, 0x16
	.byte 0x00, 0x1A, 0x18, 0x06, 0x04, 0x0B, 0x2A, 0x10, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0xFE, 0x01, 0x02
	.byte 0x13, 0x19, 0x00, 0x44, 0x06, 0x10, 0x2D, 0x00, 0x03, 0x06, 0x37, 0x50, 0x13, 0x02, 0x29, 0xAB
	.byte 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x13, 0x19, 0xFE, 0x2C, 0x3C, 0x2D, 0x00, 0x26, 0x0A, 0x45
	.byte 0x28, 0x0C, 0x10, 0xAB, 0xFF
.elseif .L__inc_fragment_select_d31dea23abe1 == 11
	@ src/battle_message.c:470 battle_message_line_470
	.globl gText_Rom_5AA448
gText_Rom_5AA448: @ 0x085AA448
	.string "でんきの いりょくが よわまった!{EOS}"
	.if (. - gText_Rom_5AA448) > 0x12
	.error "gText_Rom_5AA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA448) < 0x12
	.space 0x12 - (. - gText_Rom_5AA448)
	.endif

	@ src/battle_message.c:471 battle_message_line_471
	.globl gText_Rom_5AA45A
gText_Rom_5AA45A: @ 0x085AA45A
	.string "ほのおの いりょくが よわまった!{EOS}"
	.if (. - gText_Rom_5AA45A) > 0x12
	.error "gText_Rom_5AA45A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA45A) < 0x12
	.space 0x12 - (. - gText_Rom_5AA45A)
	.endif
	@ analyzed canonical ROM range 0x085AA46C-0x085AA47B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x16, 0x2D, 0xFE, 0x1B, 0x2B, 0x50, 0x13, 0x07, 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA47C
gText_Rom_5AA47C: @ 0x085AA47C
	.string "ここちよい かおりが ひろがった!{EOS}"
	.if (. - gText_Rom_5AA47C) > 0x12
	.error "gText_Rom_5AA47C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA47C) < 0x12
	.space 0x12 - (. - gText_Rom_5AA47C)
	.endif
	@ analyzed canonical ROM range 0x085AA48E-0x085AA4B4
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0A, 0x0A, 0x44, 0x1A, 0x00, 0x45, 0x03, 0x39, 0x2D, 0x00, 0x12, 0x06, 0x03, 0x0A, 0x14, 0x1A
	.byte 0xFE, 0x44, 0x07, 0x1F, 0x0E, 0x2E, 0xAB, 0xFC, 0x08, 0x40, 0xFF, 0xFD, 0x16, 0x1A, 0x00, 0xFD
	.byte 0x13, 0x16, 0x1A, 0xFE, 0xFD, 0x00, 0xFF
	.globl gText_Rom_5AA4B5
gText_Rom_5AA4B5: @ 0x085AA4B5
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_LAST_ITEM}を つかって\nはりきり だした!{EOS}"
	.if (. - gText_Rom_5AA4B5) > 0x17
	.error "gText_Rom_5AA4B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4B5) < 0x17
	.space 0x17 - (. - gText_Rom_5AA4B5)
	.endif
	@ analyzed canonical ROM range 0x085AA4CC-0x085AA4CF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x0F, 0x1A, 0x00
	.globl gText_Rom_5AA4D0
gText_Rom_5AA4D0: @ 0x085AA4D0
	.string "しゅうちゅうりょくが\nとぎれて わざが だせなかった!{EOS}"
	.if (. - gText_Rom_5AA4D0) != 0x1c
	.error "gText_Rom_5AA4D0 must retain its original byte length"
	.endif

	@ src/battle_message.c:494 battle_message_line_494
	.globl gText_Rom_5AA4EC
gText_Rom_5AA4EC: @ 0x085AA4EC
	.string "{B_DEF_NAME_WITH_PREFIX}は せんとうに\nひきずりだされた!\p{EOS}"
	.if (. - gText_Rom_5AA4EC) > 0x15
	.error "gText_Rom_5AA4EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA4EC) < 0x15
	.space 0x15 - (. - gText_Rom_5AA4EC)
	.endif

	@ src/battle_message.c:503 battle_message_line_503
	.globl gText_Rom_5AA501
gText_Rom_5AA501: @ 0x085AA501
	.string "かべが こわれた!{EOS}"
	.if (. - gText_Rom_5AA501) > 0xa
	.error "gText_Rom_5AA501 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA501) < 0xa
	.space 0xa - (. - gText_Rom_5AA501)
	.endif

	@ src/battle_message.c:509 battle_message_line_509
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA50B
gText_Rom_5AA50B: @ 0x085AA50B
	.string "しかし こうかが なかった!{EOS}"
	.if (. - gText_Rom_5AA50B) != 0xf
	.error "gText_Rom_5AA50B must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AA51A, size=0x82
	.byte 0xFD, 0x12, 0x1A, 0x00, 0x41, 0x0D, 0x0A, 0x14, 0x19, 0x00, 0x44, 0x07, 0x29, 0xFE, 0x2C, 0x3C
	.byte 0x37, 0x00, 0x15, 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A, 0x00, 0x06, 0x15, 0x0C, 0x46, 0x28
	.byte 0x44, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x41, 0x0E, 0x15, 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A
	.byte 0x00, 0x02, 0x11, 0x34, 0x23, 0x2E, 0x2D, 0x00, 0x12, 0x09, 0x27, 0x2A, 0x10, 0x19, 0x44, 0xFE
	.byte 0x12, 0x43, 0x09, 0x13, 0x00, 0x05, 0x15, 0x3D, 0x00, 0x2C, 0x3C, 0x37, 0x00, 0x41, 0x0E, 0x15
	.byte 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A, 0x00, 0x11, 0x36, 0x03, 0x1A, 0x12, 0x00, 0x0B, 0x2A
	.byte 0x13, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x41, 0x0E, 0x15, 0x02, 0xAB, 0xFB, 0xFF, 0xFD, 0x12, 0x1A
	.byte 0x00, 0x1C, 0x03, 0x02, 0x2E, 0x44, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x41, 0x0E, 0x15, 0x02, 0xAB
	.byte 0xFB, 0xFF

	@ src/battle_message.c:365 battle_message_line_365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA59C
gText_Rom_5AA59C: @ 0x085AA59C
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nあめが ふりはじめた!{EOS}"
	.if (. - gText_Rom_5AA59C) != 0x14
	.error "gText_Rom_5AA59C must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AA5B0, size=0xE
	.byte 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0x0D, 0x46, 0x24, 0x0B, 0x37, 0x00

	@ src/battle_message.c:76 gText_StatRose
	.globl gText_StatRoseDuplicate1
gText_StatRoseDuplicate1: @ 0x085AA5BE
	.string "あがった！{EOS}"
	.if (. - gText_StatRoseDuplicate1) > 0x6
	.error "gText_StatRoseDuplicate1 may not grow beyond its original slot"
	.endif
	.if (. - gText_StatRoseDuplicate1) < 0x6
	.space 0x6 - (. - gText_StatRoseDuplicate1)
	.endif

	@ src/battle_message.c:366 battle_message_line_366
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA5C4
gText_Rom_5AA5C4: @ 0x085AA5C4
	.string "{B_DEF_NAME_WITH_PREFIX}は {B_DEF_ABILITY}で\nきかなかった!{EOS}"
	.if (. - gText_Rom_5AA5C4) != 0x10
	.error "gText_Rom_5AA5C4 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_d31dea23abe1 == 12
	@ src/battle_message.c:76 gText_StatRose
	.globl gText_StatRoseDuplicate2
gText_StatRoseDuplicate2: @ 0x085AA67E
	.string "あがった！{EOS}"
	.if (. - gText_StatRoseDuplicate2) > 0x6
	.error "gText_StatRoseDuplicate2 may not grow beyond its original slot"
	.endif
	.if (. - gText_StatRoseDuplicate2) < 0x6
	.space 0x6 - (. - gText_StatRoseDuplicate2)
	.endif
	@ analyzed canonical ROM range 0x085AA684-0x085AA6A9
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ STRINGID_PKMNANCHORSITSELFWITH (204), gBattleStringsTable + 0x300
	.globl sText_PkmnAnchorsItselfWith
sText_PkmnAnchorsItselfWith: @ 0x085AA684
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0x1A, 0x28, 0x12, 0x02, 0x13, 0x02, 0x29, 0xAB
	.byte 0xFF

	@ STRINGID_PKMNCUTSATTACKWITH (205), gBattleStringsTable + 0x304
	@ This message intentionally continues through the following suffix label.
	.globl sText_PkmnCutsAttackWith
sText_PkmnCutsAttackWith: @ 0x085AA695
	.byte 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x10, 0x19, 0x00, 0x0A, 0x03, 0x3A, 0x07
	.byte 0x28, 0x36, 0x08, 0x37, 0x00
	.globl gText_Rom_5AA6AA
gText_Rom_5AA6AA: @ 0x085AA6AA
	.string "さがった！{EOS}"
	.if (. - gText_Rom_5AA6AA) > 0x6
	.error "gText_Rom_5AA6AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6AA) < 0x6
	.space 0x6 - (. - gText_Rom_5AA6AA)
	.endif

	@ src/battle_message.c:374 battle_message_line_374
	.globl gText_Rom_5AA6B0
gText_Rom_5AA6B0: @ 0x085AA6B0
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\nのうりょくが さがらない!{EOS}"
	.if (. - gText_Rom_5AA6B0) > 0x16
	.error "gText_Rom_5AA6B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6B0) < 0x16
	.space 0x16 - (. - gText_Rom_5AA6B0)
	.endif
	@ analyzed canonical ROM range 0x085AA6C6-0x085AA6D8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x19, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0xFD, 0x0F, 0x1A, 0x00, 0x07, 0x3E, 0x12, 0x02
	.byte 0x10, 0xAB, 0xFF
	.globl gText_Rom_5AA6D9
gText_Rom_5AA6D9: @ 0x085AA6D9
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_BUFF1}の\n{B_BUFF2}を トレースした!{EOS}"
	.if (. - gText_Rom_5AA6D9) > 0x14
	.error "gText_Rom_5AA6D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA6D9) < 0x14
	.space 0x14 - (. - gText_Rom_5AA6D9)
	.endif
	@ analyzed canonical ROM range 0x085AA6ED-0x085AA72C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x11, 0x1A, 0x00, 0xFD, 0x1B, 0x44, 0xFE, 0x24, 0x09, 0x45, 0x0C, 0x15, 0x02, 0xAB, 0xFF
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0xFD, 0x14, 0x2D, 0x00, 0x03, 0x09, 0x15, 0x02
	.byte 0xAB, 0xFF, 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x14, 0x2D, 0x00, 0x03, 0x09
	.byte 0x15, 0x02, 0xAB, 0xFF, 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x18, 0x44, 0xFE, 0x0D, 0x0A, 0x0C, 0x00
.elseif .L__inc_fragment_select_d31dea23abe1 == 13
	@ src/battle_message.c:486 battle_message_line_486
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA746
gText_Rom_5AA746: @ 0x085AA746
	.string "{B_SCR_NAME_WITH_PREFIX}の {B_SCR_ABILITY}で\nひざしが つよくなった!{EOS}"
	.if (. - gText_Rom_5AA746) != 0x15
	.error "gText_Rom_5AA746 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5AA75B, size=0x3C
	.byte 0xFD, 0x13, 0x1A, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0x0B, 0x37, 0x27, 0x15
	.byte 0x02, 0xAB, 0xFF, 0xFD, 0x10, 0x19, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0xFD, 0x0F, 0x1A, 0x00, 0x72
	.byte 0x7B, 0x72, 0x7B, 0x16, 0x00, 0x15, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19
	.byte 0x44, 0xFE, 0xFD, 0x14, 0x37, 0x00, 0x07, 0x06, 0x15, 0x02, 0xAB, 0xFF

	@ src/battle_message.c:504 battle_message_line_504
	.globl gText_Rom_5AA797
gText_Rom_5AA797: @ 0x085AA797
	.string "{B_SCR_NAME_WITH_PREFIX}は {B_SCR_ABILITY}で\n{B_BUFF1}じょうたいが なおった!{EOS}"
	.if (. - gText_Rom_5AA797) > 0x17
	.error "gText_Rom_5AA797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA797) < 0x17
	.space 0x17 - (. - gText_Rom_5AA797)
	.endif
	@ Decoded text from ROM range: offset=0x5AA7AE, size=0xE
	.string "ヘドロえきを　すいとった！{EOS}"

	@ src/battle_message.c:469 battle_message_line_469
	.globl gText_Rom_5AA7BC
gText_Rom_5AA7BC: @ 0x085AA7BC
	.string "{B_SCR_NAME_WITH_PREFIX}の すがたが\nへんかした!{EOS}"
	.if (. - gText_Rom_5AA7BC) > 0x10
	.error "gText_Rom_5AA7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA7BC) < 0x10
	.space 0x10 - (. - gText_Rom_5AA7BC)
	.endif
	@ analyzed canonical ROM range 0x085AA7CC-0x085AA7DE
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x10, 0x1A, 0x00, 0xFD, 0x19, 0x44, 0xFE, 0x0A, 0x03, 0x3A, 0x07, 0x2D, 0x00, 0x03, 0x09
	.byte 0x10, 0xAB, 0xFF
.elseif .L__inc_fragment_select_d31dea23abe1 == 14
	@ src/battle_message.c:405 battle_message_line_405
	.globl gText_Rom_5AAB68
gText_Rom_5AAB68: @ 0x085AAB68
	.string "ひざしが よわくなった!{EOS}"
	.if (. - gText_Rom_5AAB68) > 0xd
	.error "gText_Rom_5AAB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB68) < 0xd
	.space 0xd - (. - gText_Rom_5AAB68)
	.endif

	@ src/battle_message.c:406 battle_message_line_406 (+1 aliases)
	.globl gText_Rom_5AAB75
gText_Rom_5AAB75: @ 0x085AAB75
	.string "あられが ふりはじめた!{EOS}"
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
	.string "あられが ふりつづいている{EOS}"
	.if (. - gText_Rom_5AAB82) != 0xe
	.error "gText_Rom_5AAB82 must retain its original byte length"
	.endif

	@ src/battle_message.c:408 battle_message_line_408
	.globl gText_Rom_5AAB90
gText_Rom_5AAB90: @ 0x085AAB90
	.string "あられが ふりやんだ!{EOS}"
	.if (. - gText_Rom_5AAB90) > 0xc
	.error "gText_Rom_5AAB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AAB90) < 0xc
	.space 0xc - (. - gText_Rom_5AAB90)
	.endif
	@ analyzed canonical ROM range 0x085AAB9C-0x085AABA8
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x15, 0x16, 0x23, 0x00, 0x1A, 0x07, 0x41, 0x0E, 0x15
.elseif .L__inc_fragment_select_d31dea23abe1 == 15
	@ src/battle_message.c:1509 gText_WillChampionshipDreamComeTrue
	.globl gText_WillChampionshipDreamComeTrue
gText_WillChampionshipDreamComeTrue: @ 0x085ABD5D
	.string "ひがんの はつ ゆうしょう なるか!?\p{EOS}"
	.if (. - gText_WillChampionshipDreamComeTrue) > 0x15
	.error "gText_WillChampionshipDreamComeTrue may not grow beyond its original slot"
	.endif
	.if (. - gText_WillChampionshipDreamComeTrue) < 0x15
	.space 0x15 - (. - gText_WillChampionshipDreamComeTrue)
	.endif

	@ src/battle_message.c:1510 gText_AFormerChampion
	.globl gText_AFormerChampion
gText_AFormerChampion: @ 0x085ABD72
	.string "もと チャンピオン!\p{EOS}"
	.if (. - gText_AFormerChampion) > 0xc
	.error "gText_AFormerChampion may not grow beyond its original slot"
	.endif
	.if (. - gText_AFormerChampion) < 0xc
	.space 0xc - (. - gText_AFormerChampion)
	.endif

	@ src/battle_message.c:1511 gText_ThePreviousChampion
	.globl gText_ThePreviousChampion
gText_ThePreviousChampion: @ 0x085ABD7E
	.string "ぜんかい チャンピオン!\p{EOS}"
	.if (. - gText_ThePreviousChampion) > 0xe
	.error "gText_ThePreviousChampion may not grow beyond its original slot"
	.endif
	.if (. - gText_ThePreviousChampion) < 0xe
	.space 0xe - (. - gText_ThePreviousChampion)
	.endif

.endif
