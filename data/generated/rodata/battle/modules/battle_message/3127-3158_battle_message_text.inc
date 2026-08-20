
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
	.globl gText_Rom_5AA1FE
	.set gText_Rom_5AA1FE, gText_Rom_5AA1FB + 0x3
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

