	@ src/data/easy_chat/easy_chat_group_endings.h:4 easy_chat_group_endings_line_4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5763A4
gText_Rom_5763A4: @ 0x085763A4
	.string "いたします$"
	.if (. - gText_Rom_5763A4) != 0x6
	.error "gText_Rom_5763A4 must retain its original byte length"
	.endif
	.globl gText_Rom_5763A6
	.set gText_Rom_5763A6, gText_Rom_5763A4 + 0x2

	@ src/data/easy_chat/easy_chat_group_endings.h:10 easy_chat_group_endings_line_10
	.globl gText_Rom_5763AA
gText_Rom_5763AA: @ 0x085763AA
	.string "おります$"
	.if (. - gText_Rom_5763AA) > 0x5
	.error "gText_Rom_5763AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763AA) < 0x5
	.space 0x5 - (. - gText_Rom_5763AA)
	.endif
	@ Replaced baserom.gba range: offset=0x5763AF, size=0x5
	.byte 0x06, 0xFF, 0x06, 0x02, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:28 easy_chat_group_endings_line_28
	.globl gText_Rom_5763B4
gText_Rom_5763B4: @ 0x085763B4
	.string "かしら$"
	.if (. - gText_Rom_5763B4) > 0x4
	.error "gText_Rom_5763B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763B4) < 0x4
	.space 0x4 - (. - gText_Rom_5763B4)
	.endif
	@ Replaced baserom.gba range: offset=0x5763B8, size=0xA
	.byte 0x06, 0x15, 0xAC, 0xFF, 0x06, 0x23, 0xFF, 0x08, 0x2A, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:52 easy_chat_group_endings_line_52
	.globl gText_Rom_5763C2
gText_Rom_5763C2: @ 0x085763C2
	.string "ございます$"
	.if (. - gText_Rom_5763C2) > 0x6
	.error "gText_Rom_5763C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C2) < 0x6
	.space 0x6 - (. - gText_Rom_5763C2)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:58 easy_chat_group_endings_line_58
	.globl gText_Rom_5763C8
gText_Rom_5763C8: @ 0x085763C8
	.string "しがち$"
	.if (. - gText_Rom_5763C8) > 0x4
	.error "gText_Rom_5763C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763C8) < 0x4
	.space 0x4 - (. - gText_Rom_5763C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:64 easy_chat_group_endings_line_64
	.globl gText_Rom_5763CC
gText_Rom_5763CC: @ 0x085763CC
	.string "します$"
	.if (. - gText_Rom_5763CC) > 0x4
	.error "gText_Rom_5763CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763CC) < 0x4
	.space 0x4 - (. - gText_Rom_5763CC)
	.endif
	@ Replaced baserom.gba range: offset=0x5763D0, size=0x3
	.byte 0x3D, 0x34, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:76 easy_chat_group_endings_line_76
	.globl gText_Rom_5763D3
gText_Rom_5763D3: @ 0x085763D3
	.string "じゃん$"
	.if (. - gText_Rom_5763D3) > 0x4
	.error "gText_Rom_5763D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D3) < 0x4
	.space 0x4 - (. - gText_Rom_5763D3)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:82 easy_chat_group_endings_line_82
	.globl gText_Rom_5763D7
gText_Rom_5763D7: @ 0x085763D7
	.string "しよう$"
	.if (. - gText_Rom_5763D7) > 0x4
	.error "gText_Rom_5763D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763D7) < 0x4
	.space 0x4 - (. - gText_Rom_5763D7)
	.endif
	@ Replaced baserom.gba range: offset=0x5763DB, size=0xA
	.byte 0x3F, 0xAB, 0xFF, 0x40, 0xAB, 0xFF, 0x10, 0xFF, 0x41, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:112 easy_chat_group_endings_line_112
	.globl gText_Rom_5763E5
gText_Rom_5763E5: @ 0x085763E5
	.string "だからね$"
	.if (. - gText_Rom_5763E5) > 0x5
	.error "gText_Rom_5763E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763E5) < 0x5
	.space 0x5 - (. - gText_Rom_5763E5)
	.endif
	@ Replaced baserom.gba range: offset=0x5763EA, size=0x3
	.byte 0x41, 0x3F, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:124 easy_chat_group_endings_line_124
	.globl gText_Rom_5763ED
gText_Rom_5763ED: @ 0x085763ED
	.string "だった$"
	.if (. - gText_Rom_5763ED) > 0x4
	.error "gText_Rom_5763ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763ED) < 0x4
	.space 0x4 - (. - gText_Rom_5763ED)
	.endif
	@ Replaced baserom.gba range: offset=0x5763F1, size=0x6
	.byte 0x41, 0x18, 0xFF, 0x41, 0x26, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:142 easy_chat_group_endings_line_142
	.globl gText_Rom_5763F7
gText_Rom_5763F7: @ 0x085763F7
	.string "だよねー!$"
	.if (. - gText_Rom_5763F7) > 0x6
	.error "gText_Rom_5763F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763F7) < 0x6
	.space 0x6 - (. - gText_Rom_5763F7)
	.endif
	@ Replaced baserom.gba range: offset=0x5763FD, size=0x6
	.byte 0x41, 0x2C, 0xFF, 0xA0, 0x5D, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:160 easy_chat_group_endings_line_160
	.globl gText_Rom_576403
gText_Rom_576403: @ 0x08576403
	.string "ってかんじ$"
	.if (. - gText_Rom_576403) > 0x6
	.error "gText_Rom_576403 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576403) < 0x6
	.space 0x6 - (. - gText_Rom_576403)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:166 easy_chat_group_endings_line_166
	.globl gText_Rom_576409
gText_Rom_576409: @ 0x08576409
	.string "っぱなし$"
	.if (. - gText_Rom_576409) > 0x5
	.error "gText_Rom_576409 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576409) < 0x5
	.space 0x5 - (. - gText_Rom_576409)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:172 easy_chat_group_endings_line_172
	.globl gText_Rom_57640E
gText_Rom_57640E: @ 0x0857640E
	.string "つもり$"
	.if (. - gText_Rom_57640E) > 0x4
	.error "gText_Rom_57640E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57640E) < 0x4
	.space 0x4 - (. - gText_Rom_57640E)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:178 easy_chat_group_endings_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576412
gText_Rom_576412: @ 0x08576412
	.string "ていない$"
	.if (. - gText_Rom_576412) != 0x5
	.error "gText_Rom_576412 must retain its original byte length"
	.endif
	.globl gText_Rom_576413
	.set gText_Rom_576413, gText_Rom_576412 + 0x1

	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_576417
gText_Rom_576417: @ 0x08576417
	.string "ている$"
	.if (. - gText_Rom_576417) > 0x4
	.error "gText_Rom_576417 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576417) < 0x4
	.space 0x4 - (. - gText_Rom_576417)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:190 easy_chat_group_endings_line_190
	.globl gText_Rom_57641B
gText_Rom_57641B: @ 0x0857641B
	.string "でーす!$"
	.if (. - gText_Rom_57641B) > 0x5
	.error "gText_Rom_57641B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57641B) < 0x5
	.space 0x5 - (. - gText_Rom_57641B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_576420
gText_Rom_576420: @ 0x08576420
	.string "でした$"
	.if (. - gText_Rom_576420) > 0x4
	.error "gText_Rom_576420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576420) < 0x4
	.space 0x4 - (. - gText_Rom_576420)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:202 easy_chat_group_endings_line_202
	.globl gText_Rom_576424
gText_Rom_576424: @ 0x08576424
	.string "でしょ?$"
	.if (. - gText_Rom_576424) > 0x5
	.error "gText_Rom_576424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576424) < 0x5
	.space 0x5 - (. - gText_Rom_576424)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:208 easy_chat_group_endings_line_208
	.globl gText_Rom_576429
gText_Rom_576429: @ 0x08576429
	.string "でしょー!$"
	.if (. - gText_Rom_576429) > 0x6
	.error "gText_Rom_576429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576429) < 0x6
	.space 0x6 - (. - gText_Rom_576429)
	.endif
	@ Replaced baserom.gba range: offset=0x57642F, size=0x8
	.byte 0x44, 0x0D, 0xFF, 0x44, 0x0D, 0x06, 0xAC, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:226 easy_chat_group_endings_line_226
	.globl gText_Rom_576437
gText_Rom_576437: @ 0x08576437
	.string "ですよ$"
	.if (. - gText_Rom_576437) > 0x4
	.error "gText_Rom_576437 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576437) < 0x4
	.space 0x4 - (. - gText_Rom_576437)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:232 easy_chat_group_endings_line_232
	.globl gText_Rom_57643B
gText_Rom_57643B: @ 0x0857643B
	.string "ですわ$"
	.if (. - gText_Rom_57643B) > 0x4
	.error "gText_Rom_57643B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643B) < 0x4
	.space 0x4 - (. - gText_Rom_57643B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:238 easy_chat_group_endings_line_238
	.globl gText_Rom_57643F
gText_Rom_57643F: @ 0x0857643F
	.string "どうなの?$"
	.if (. - gText_Rom_57643F) > 0x6
	.error "gText_Rom_57643F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643F) < 0x6
	.space 0x6 - (. - gText_Rom_57643F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:244 easy_chat_group_endings_line_244
	.globl gText_Rom_576445
gText_Rom_576445: @ 0x08576445
	.string "どうよ?$"
	.if (. - gText_Rom_576445) > 0x5
	.error "gText_Rom_576445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576445) < 0x5
	.space 0x5 - (. - gText_Rom_576445)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:250 easy_chat_group_endings_line_250
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57644A
gText_Rom_57644A: @ 0x0857644A
	.string "とかいって$"
	.if (. - gText_Rom_57644A) != 0x6
	.error "gText_Rom_57644A must retain its original byte length"
	.endif
	.globl gText_Rom_57644C
	.set gText_Rom_57644C, gText_Rom_57644A + 0x2

	@ src/data/easy_chat/easy_chat_group_endings.h:256 easy_chat_group_endings_line_256
	.globl gText_Rom_576450
gText_Rom_576450: @ 0x08576450
	.string "なさい$"
	.if (. - gText_Rom_576450) > 0x4
	.error "gText_Rom_576450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576450) < 0x4
	.space 0x4 - (. - gText_Rom_576450)
	.endif
	@ Replaced baserom.gba range: offset=0x576454, size=0x3
	.byte 0x15, 0x19, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:268 easy_chat_group_endings_line_268
	.globl gText_Rom_576457
gText_Rom_576457: @ 0x08576457
	.string "なのか$"
	.if (. - gText_Rom_576457) > 0x4
	.error "gText_Rom_576457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576457) < 0x4
	.space 0x4 - (. - gText_Rom_576457)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:274 easy_chat_group_endings_line_274
	.globl gText_Rom_57645B
gText_Rom_57645B: @ 0x0857645B
	.string "なのだ$"
	.if (. - gText_Rom_57645B) > 0x4
	.error "gText_Rom_57645B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645B) < 0x4
	.space 0x4 - (. - gText_Rom_57645B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:280 easy_chat_group_endings_line_280
	.globl gText_Rom_57645F
gText_Rom_57645F: @ 0x0857645F
	.string "なのよ$"
	.if (. - gText_Rom_57645F) > 0x4
	.error "gText_Rom_57645F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645F) < 0x4
	.space 0x4 - (. - gText_Rom_57645F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:286 easy_chat_group_endings_line_286
	.globl gText_Rom_576463
gText_Rom_576463: @ 0x08576463
	.string "なんだね$"
	.if (. - gText_Rom_576463) > 0x5
	.error "gText_Rom_576463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576463) < 0x5
	.space 0x5 - (. - gText_Rom_576463)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:292 easy_chat_group_endings_line_292
	.globl gText_Rom_576468
gText_Rom_576468: @ 0x08576468
	.string "なんです$"
	.if (. - gText_Rom_576468) > 0x5
	.error "gText_Rom_576468 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576468) < 0x5
	.space 0x5 - (. - gText_Rom_576468)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:298 easy_chat_group_endings_line_298
	.globl gText_Rom_57646D
gText_Rom_57646D: @ 0x0857646D
	.string "なんてね$"
	.if (. - gText_Rom_57646D) > 0x5
	.error "gText_Rom_57646D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57646D) < 0x5
	.space 0x5 - (. - gText_Rom_57646D)
	.endif
	@ Replaced baserom.gba range: offset=0x576472, size=0xA
	.byte 0x18, 0xFF, 0x18, 0xAE, 0xFF, 0x19, 0xFF, 0x19, 0xAC, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:328 easy_chat_group_endings_line_328
	.globl gText_Rom_57647C
gText_Rom_57647C: @ 0x0857647C
	.string "ばっかり$"
	.if (. - gText_Rom_57647C) > 0x5
	.error "gText_Rom_57647C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57647C) < 0x5
	.space 0x5 - (. - gText_Rom_57647C)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:334 easy_chat_group_endings_line_334
	.globl gText_Rom_576481
gText_Rom_576481: @ 0x08576481
	.string "まーす!$"
	.if (. - gText_Rom_576481) > 0x5
	.error "gText_Rom_576481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576481) < 0x5
	.space 0x5 - (. - gText_Rom_576481)
	.endif
	@ Replaced baserom.gba range: offset=0x576486, size=0x3
	.byte 0x1F, 0x0D, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_576489
gText_Rom_576489: @ 0x08576489
	.string "ますわ$"
	.if (. - gText_Rom_576489) > 0x4
	.error "gText_Rom_576489 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576489) < 0x4
	.space 0x4 - (. - gText_Rom_576489)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_57648D
gText_Rom_57648D: @ 0x0857648D
	.string "ません$"
	.if (. - gText_Rom_57648D) > 0x4
	.error "gText_Rom_57648D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57648D) < 0x4
	.space 0x4 - (. - gText_Rom_57648D)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:358 easy_chat_group_endings_line_358
	.globl gText_Rom_576491
gText_Rom_576491: @ 0x08576491
	.string "みたいな$"
	.if (. - gText_Rom_576491) > 0x5
	.error "gText_Rom_576491 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576491) < 0x5
	.space 0x5 - (. - gText_Rom_576491)
	.endif
	@ Replaced baserom.gba range: offset=0x576496, size=0xC
	.byte 0x23, 0x19, 0xFF, 0x23, 0x2E, 0xFF, 0x26, 0xAB, 0xFF, 0x26, 0xAE, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:388 easy_chat_group_endings_line_388
	.globl gText_Rom_5764A2
gText_Rom_5764A2: @ 0x085764A2
	.string "よーん$"
	.if (. - gText_Rom_5764A2) > 0x4
	.error "gText_Rom_5764A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764A2) < 0x4
	.space 0x4 - (. - gText_Rom_5764A2)
	.endif
	@ Replaced baserom.gba range: offset=0x5764A6, size=0x9
	.byte 0x26, 0x18, 0xFF, 0x29, 0x26, 0xFF, 0x2C, 0x09, 0xFF

	@ src/data/easy_chat/easy_chat_group_endings.h:412 easy_chat_group_endings_line_412
	.globl gText_Rom_5764AF
gText_Rom_5764AF: @ 0x085764AF
	.string "わよ!$"
	.if (. - gText_Rom_5764AF) > 0x4
	.error "gText_Rom_5764AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764AF) < 0x4
	.space 0x4 - (. - gText_Rom_5764AF)
	.endif
	@ Replaced baserom.gba range: offset=0x5764B3, size=0x33D
	.byte 0x00, 0xA4, 0x63, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xAA, 0x63, 0x57
	.byte 0x08, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xAF, 0x63, 0x57, 0x08, 0x02, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xB1, 0x63, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xB4, 0x63, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB8, 0x63, 0x57
	.byte 0x08, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xBC, 0x63, 0x57, 0x08, 0x06, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xBF, 0x63, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xC2, 0x63, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC8, 0x63, 0x57
	.byte 0x08, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCC, 0x63, 0x57, 0x08, 0x0A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xD0, 0x63, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xD3, 0x63, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD7, 0x63, 0x57
	.byte 0x08, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xDB, 0x63, 0x57, 0x08, 0x0E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xDE, 0x63, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xE1, 0x63, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE3, 0x63, 0x57
	.byte 0x08, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE5, 0x63, 0x57, 0x08, 0x12, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xEA, 0x63, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xED, 0x63, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF1, 0x63, 0x57
	.byte 0x08, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF4, 0x63, 0x57, 0x08, 0x16, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xF7, 0x63, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xFD, 0x63, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x64, 0x57
	.byte 0x08, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x64, 0x57, 0x08, 0x1A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x64, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x0E, 0x64, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x12, 0x64, 0x57
	.byte 0x08, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x17, 0x64, 0x57, 0x08, 0x1E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x1B, 0x64, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x20, 0x64, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x64, 0x57
	.byte 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x29, 0x64, 0x57, 0x08, 0x22, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x2F, 0x64, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x32, 0x64, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x37, 0x64, 0x57
	.byte 0x08, 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3B, 0x64, 0x57, 0x08, 0x26, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x3F, 0x64, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x45, 0x64, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4A, 0x64, 0x57
	.byte 0x08, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x64, 0x57, 0x08, 0x2A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x54, 0x64, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x57, 0x64, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5B, 0x64, 0x57
	.byte 0x08, 0x2D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5F, 0x64, 0x57, 0x08, 0x2E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x63, 0x64, 0x57, 0x08, 0x2F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x68, 0x64, 0x57, 0x08, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6D, 0x64, 0x57
	.byte 0x08, 0x31, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x72, 0x64, 0x57, 0x08, 0x32, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x64, 0x57, 0x08, 0x33, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x77, 0x64, 0x57, 0x08, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x79, 0x64, 0x57
	.byte 0x08, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7C, 0x64, 0x57, 0x08, 0x36, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x81, 0x64, 0x57, 0x08, 0x37, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x86, 0x64, 0x57, 0x08, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x89, 0x64, 0x57
	.byte 0x08, 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8D, 0x64, 0x57, 0x08, 0x3A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x91, 0x64, 0x57, 0x08, 0x3B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x96, 0x64, 0x57, 0x08, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x99, 0x64, 0x57
	.byte 0x08, 0x3D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x9C, 0x64, 0x57, 0x08, 0x3E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x9F, 0x64, 0x57, 0x08, 0x3F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xA2, 0x64, 0x57, 0x08, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA6, 0x64, 0x57
	.byte 0x08, 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA9, 0x64, 0x57, 0x08, 0x42, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xAC, 0x64, 0x57, 0x08, 0x43, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xAF, 0x64, 0x57, 0x08, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00

	@ src/data/easy_chat/easy_chat_group_feelings.h:1 gEasyChatWord_Meet (+1 aliases)
	.globl gText_Rom_5767F0
gText_Rom_5767F0: @ 0x085767F0
	.string "あいたい$"
	.if (. - gText_Rom_5767F0) > 0x5
	.error "gText_Rom_5767F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767F0) < 0x5
	.space 0x5 - (. - gText_Rom_5767F0)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:2 gEasyChatWord_Play (+1 aliases)
	.globl gText_Rom_5767F5
gText_Rom_5767F5: @ 0x085767F5
	.string "あそびたい$"
	.if (. - gText_Rom_5767F5) > 0x6
	.error "gText_Rom_5767F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767F5) < 0x6
	.space 0x6 - (. - gText_Rom_5767F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:3 gEasyChatWord_Hurried (+1 aliases)
	.globl gText_Rom_5767FB
gText_Rom_5767FB: @ 0x085767FB
	.string "あわてて$"
	.if (. - gText_Rom_5767FB) > 0x5
	.error "gText_Rom_5767FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5767FB) < 0x5
	.space 0x5 - (. - gText_Rom_5767FB)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:4 gEasyChatWord_Goes (+1 aliases)
	.globl gText_Rom_576800
gText_Rom_576800: @ 0x08576800
	.string "いきたい$"
	.if (. - gText_Rom_576800) > 0x5
	.error "gText_Rom_576800 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576800) < 0x5
	.space 0x5 - (. - gText_Rom_576800)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:5 gEasyChatWord_Giddy (+1 aliases)
	.globl gText_Rom_576805
gText_Rom_576805: @ 0x08576805
	.string "うかれて$"
	.if (. - gText_Rom_576805) > 0x5
	.error "gText_Rom_576805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576805) < 0x5
	.space 0x5 - (. - gText_Rom_576805)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:6 gEasyChatWord_Happy (+1 aliases)
	.globl gText_Rom_57680A
gText_Rom_57680A: @ 0x0857680A
	.string "うれしい$"
	.if (. - gText_Rom_57680A) > 0x5
	.error "gText_Rom_57680A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57680A) < 0x5
	.space 0x5 - (. - gText_Rom_57680A)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:7 gEasyChatWord_Happiness (+1 aliases)
	.globl gText_Rom_57680F
gText_Rom_57680F: @ 0x0857680F
	.string "うれしさ$"
	.if (. - gText_Rom_57680F) > 0x5
	.error "gText_Rom_57680F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57680F) < 0x5
	.space 0x5 - (. - gText_Rom_57680F)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:8 gEasyChatWord_Excite (+1 aliases)
	.globl gText_Rom_576814
gText_Rom_576814: @ 0x08576814
	.string "エキサイト$"
	.if (. - gText_Rom_576814) > 0x6
	.error "gText_Rom_576814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576814) < 0x6
	.space 0x6 - (. - gText_Rom_576814)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:9 gEasyChatWord_Important (+1 aliases)
	.globl gText_Rom_57681A
gText_Rom_57681A: @ 0x0857681A
	.string "えらい$"
	.if (. - gText_Rom_57681A) > 0x4
	.error "gText_Rom_57681A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57681A) < 0x4
	.space 0x4 - (. - gText_Rom_57681A)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:10 gEasyChatWord_Funny (+1 aliases)
	.globl gText_Rom_57681E
gText_Rom_57681E: @ 0x0857681E
	.string "おかしい$"
	.if (. - gText_Rom_57681E) > 0x5
	.error "gText_Rom_57681E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57681E) < 0x5
	.space 0x5 - (. - gText_Rom_57681E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:11 gEasyChatWord_Got (+1 aliases)
	.globl gText_Rom_576823
gText_Rom_576823: @ 0x08576823
	.string "オッケー$"
	.if (. - gText_Rom_576823) > 0x5
	.error "gText_Rom_576823 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576823) < 0x5
	.space 0x5 - (. - gText_Rom_576823)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:12 gEasyChatWord_GoHome (+1 aliases)
	.globl gText_Rom_576828
gText_Rom_576828: @ 0x08576828
	.string "かえりたい$"
	.if (. - gText_Rom_576828) > 0x6
	.error "gText_Rom_576828 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576828) < 0x6
	.space 0x6 - (. - gText_Rom_576828)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:13 gEasyChatWord_Disappointed (+1 aliases)
	.globl gText_Rom_57682E
gText_Rom_57682E: @ 0x0857682E
	.string "がっかり$"
	.if (. - gText_Rom_57682E) > 0x5
	.error "gText_Rom_57682E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57682E) < 0x5
	.space 0x5 - (. - gText_Rom_57682E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:14 gEasyChatWord_Disappoints (+1 aliases)
	.globl gText_Rom_576833
gText_Rom_576833: @ 0x08576833
	.string "がっくし$"
	.if (. - gText_Rom_576833) > 0x5
	.error "gText_Rom_576833 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576833) < 0x5
	.space 0x5 - (. - gText_Rom_576833)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:15 gEasyChatWord_Sad (+1 aliases)
	.globl gText_Rom_576838
gText_Rom_576838: @ 0x08576838
	.string "かなしい$"
	.if (. - gText_Rom_576838) > 0x5
	.error "gText_Rom_576838 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576838) < 0x5
	.space 0x5 - (. - gText_Rom_576838)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:16 gEasyChatWord_Try (+1 aliases)
	.globl gText_Rom_57683D
gText_Rom_57683D: @ 0x0857683D
	.string "がんばって$"
	.if (. - gText_Rom_57683D) > 0x6
	.error "gText_Rom_57683D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57683D) < 0x6
	.space 0x6 - (. - gText_Rom_57683D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:17 gEasyChatWord_Tries (+1 aliases)
	.globl gText_Rom_576843
gText_Rom_576843: @ 0x08576843
	.string "がんばる$"
	.if (. - gText_Rom_576843) > 0x5
	.error "gText_Rom_576843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576843) < 0x5
	.space 0x5 - (. - gText_Rom_576843)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:18 gEasyChatWord_Hears (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576848
gText_Rom_576848: @ 0x08576848
	.string "きがしない$"
	.if (. - gText_Rom_576848) != 0x6
	.error "gText_Rom_576848 must retain its original byte length"
	.endif
	.globl gText_Rom_57684A
	.set gText_Rom_57684A, gText_Rom_576848 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:19 gEasyChatWord_Think (+1 aliases)
	.globl gText_Rom_57684E
gText_Rom_57684E: @ 0x0857684E
	.string "きがする$"
	.if (. - gText_Rom_57684E) > 0x5
	.error "gText_Rom_57684E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57684E) < 0x5
	.space 0x5 - (. - gText_Rom_57684E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:20 gEasyChatWord_Hear (+1 aliases)
	.globl gText_Rom_576853
gText_Rom_576853: @ 0x08576853
	.string "ききたい$"
	.if (. - gText_Rom_576853) > 0x5
	.error "gText_Rom_576853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576853) < 0x5
	.space 0x5 - (. - gText_Rom_576853)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:21 gEasyChatWord_Wants (+1 aliases)
	.globl gText_Rom_576858
gText_Rom_576858: @ 0x08576858
	.string "きになる$"
	.if (. - gText_Rom_576858) > 0x5
	.error "gText_Rom_576858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576858) < 0x5
	.space 0x5 - (. - gText_Rom_576858)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:22 gEasyChatWord_Misheard (+1 aliases)
	.globl gText_Rom_57685D
gText_Rom_57685D: @ 0x0857685D
	.string "きのせい$"
	.if (. - gText_Rom_57685D) > 0x5
	.error "gText_Rom_57685D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57685D) < 0x5
	.space 0x5 - (. - gText_Rom_57685D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:23 gEasyChatWord_Dislike (+1 aliases)
	.globl gText_Rom_576862
gText_Rom_576862: @ 0x08576862
	.string "きらい$"
	.if (. - gText_Rom_576862) > 0x4
	.error "gText_Rom_576862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576862) < 0x4
	.space 0x4 - (. - gText_Rom_576862)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:24 gEasyChatWord_Angry (+1 aliases)
	.globl gText_Rom_576866
gText_Rom_576866: @ 0x08576866
	.string "くやしい$"
	.if (. - gText_Rom_576866) > 0x5
	.error "gText_Rom_576866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576866) < 0x5
	.space 0x5 - (. - gText_Rom_576866)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:25 gEasyChatWord_Anger (+1 aliases)
	.globl gText_Rom_57686B
gText_Rom_57686B: @ 0x0857686B
	.string "くやしさ$"
	.if (. - gText_Rom_57686B) > 0x5
	.error "gText_Rom_57686B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57686B) < 0x5
	.space 0x5 - (. - gText_Rom_57686B)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:26 gEasyChatWord_Scary (+1 aliases)
	.globl gText_Rom_576870
gText_Rom_576870: @ 0x08576870
	.string "こわい$"
	.if (. - gText_Rom_576870) > 0x4
	.error "gText_Rom_576870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576870) < 0x4
	.space 0x4 - (. - gText_Rom_576870)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:27 gEasyChatWord_Lonesome (+1 aliases)
	.globl gText_Rom_576874
gText_Rom_576874: @ 0x08576874
	.string "さみしい$"
	.if (. - gText_Rom_576874) > 0x5
	.error "gText_Rom_576874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576874) < 0x5
	.space 0x5 - (. - gText_Rom_576874)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:28 gEasyChatWord_Disappoint (+1 aliases)
	.globl gText_Rom_576879
gText_Rom_576879: @ 0x08576879
	.string "ざんねん$"
	.if (. - gText_Rom_576879) > 0x5
	.error "gText_Rom_576879 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576879) < 0x5
	.space 0x5 - (. - gText_Rom_576879)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:29 gEasyChatWord_Joy (+1 aliases)
	.globl gText_Rom_57687E
gText_Rom_57687E: @ 0x0857687E
	.string "しあわせ$"
	.if (. - gText_Rom_57687E) > 0x5
	.error "gText_Rom_57687E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57687E) < 0x5
	.space 0x5 - (. - gText_Rom_57687E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:30 gEasyChatWord_Gets (+1 aliases)
	.globl gText_Rom_576883
gText_Rom_576883: @ 0x08576883
	.string "したい$"
	.if (. - gText_Rom_576883) > 0x4
	.error "gText_Rom_576883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576883) < 0x4
	.space 0x4 - (. - gText_Rom_576883)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:31 gEasyChatWord_Never (+1 aliases)
	.globl gText_Rom_576887
gText_Rom_576887: @ 0x08576887
	.string "したくない$"
	.if (. - gText_Rom_576887) > 0x6
	.error "gText_Rom_576887 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576887) < 0x6
	.space 0x6 - (. - gText_Rom_576887)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:32 gEasyChatWord_Darn (+1 aliases)
	.globl gText_Rom_57688D
gText_Rom_57688D: @ 0x0857688D
	.string "しまった$"
	.if (. - gText_Rom_57688D) > 0x5
	.error "gText_Rom_57688D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57688D) < 0x5
	.space 0x5 - (. - gText_Rom_57688D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:33 gEasyChatWord_Downcast (+1 aliases)
	.globl gText_Rom_576892
gText_Rom_576892: @ 0x08576892
	.string "しょんぼり$"
	.if (. - gText_Rom_576892) > 0x6
	.error "gText_Rom_576892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576892) < 0x6
	.space 0x6 - (. - gText_Rom_576892)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:34 gEasyChatWord_Incredible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576898
gText_Rom_576898: @ 0x08576898
	.string "しんじられない$"
	.if (. - gText_Rom_576898) != 0x8
	.error "gText_Rom_576898 must retain its original byte length"
	.endif
	.globl gText_Rom_57689B
	.set gText_Rom_57689B, gText_Rom_576898 + 0x3
	@ Replaced baserom.gba range: offset=0x5768A0, size=0x3
	.byte 0x0D, 0x07, 0xFF

	@ src/data/easy_chat/easy_chat_group_feelings.h:36 gEasyChatWord_Dislikes (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768A3
gText_Rom_5768A3: @ 0x085768A3
	.string "だいきらい$"
	.if (. - gText_Rom_5768A3) != 0x6
	.error "gText_Rom_5768A3 must retain its original byte length"
	.endif
	.globl gText_Rom_5768A5
	.set gText_Rom_5768A5, gText_Rom_5768A3 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:37 gEasyChatWord_Boring (+1 aliases)
	.globl gText_Rom_5768A9
gText_Rom_5768A9: @ 0x085768A9
	.string "たいくつ$"
	.if (. - gText_Rom_5768A9) > 0x5
	.error "gText_Rom_5768A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768A9) < 0x5
	.space 0x5 - (. - gText_Rom_5768A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:38 gEasyChatWord_Care (+1 aliases)
	.globl gText_Rom_5768AE
gText_Rom_5768AE: @ 0x085768AE
	.string "だいじ$"
	.if (. - gText_Rom_5768AE) > 0x4
	.error "gText_Rom_5768AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768AE) < 0x4
	.space 0x4 - (. - gText_Rom_5768AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:39 gEasyChatWord_Cares (+1 aliases)
	.globl gText_Rom_5768B2
gText_Rom_5768B2: @ 0x085768B2
	.string "だいじに$"
	.if (. - gText_Rom_5768B2) > 0x5
	.error "gText_Rom_5768B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B2) < 0x5
	.space 0x5 - (. - gText_Rom_5768B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:40 gEasyChatWord_AllRight (+1 aliases)
	.globl gText_Rom_5768B7
gText_Rom_5768B7: @ 0x085768B7
	.string "だいじょうぶ$"
	.if (. - gText_Rom_5768B7) > 0x7
	.error "gText_Rom_5768B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B7) < 0x7
	.space 0x7 - (. - gText_Rom_5768B7)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gText_Rom_5768BE
gText_Rom_5768BE: @ 0x085768BE
	.string "だいすき$"
	.if (. - gText_Rom_5768BE) > 0x5
	.error "gText_Rom_5768BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768BE) < 0x5
	.space 0x5 - (. - gText_Rom_5768BE)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:42 gEasyChatWord_Disaster (+1 aliases)
	.globl gText_Rom_5768C3
gText_Rom_5768C3: @ 0x085768C3
	.string "たいへん$"
	.if (. - gText_Rom_5768C3) > 0x5
	.error "gText_Rom_5768C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C3) < 0x5
	.space 0x5 - (. - gText_Rom_5768C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:43 gEasyChatWord_Enjoy (+1 aliases)
	.globl gText_Rom_5768C8
gText_Rom_5768C8: @ 0x085768C8
	.string "たのしい$"
	.if (. - gText_Rom_5768C8) > 0x5
	.error "gText_Rom_5768C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C8) < 0x5
	.space 0x5 - (. - gText_Rom_5768C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:44 gEasyChatWord_Enjoys (+1 aliases)
	.globl gText_Rom_5768CD
gText_Rom_5768CD: @ 0x085768CD
	.string "たのしすぎ$"
	.if (. - gText_Rom_5768CD) > 0x6
	.error "gText_Rom_5768CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768CD) < 0x6
	.space 0x6 - (. - gText_Rom_5768CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:45 gEasyChatWord_Eat (+1 aliases)
	.globl gText_Rom_5768D3
gText_Rom_5768D3: @ 0x085768D3
	.string "たべたい$"
	.if (. - gText_Rom_5768D3) > 0x5
	.error "gText_Rom_5768D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D3) < 0x5
	.space 0x5 - (. - gText_Rom_5768D3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:46 gEasyChatWord_Lacking (+1 aliases)
	.globl gText_Rom_5768D8
gText_Rom_5768D8: @ 0x085768D8
	.string "たりない$"
	.if (. - gText_Rom_5768D8) > 0x5
	.error "gText_Rom_5768D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D8) < 0x5
	.space 0x5 - (. - gText_Rom_5768D8)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:47 gEasyChatWord_Bad (+1 aliases)
	.globl gText_Rom_5768DD
gText_Rom_5768DD: @ 0x085768DD
	.string "ちくしょー$"
	.if (. - gText_Rom_5768DD) > 0x6
	.error "gText_Rom_5768DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768DD) < 0x6
	.space 0x6 - (. - gText_Rom_5768DD)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:48 gEasyChatWord_Hard (+1 aliases)
	.globl gText_Rom_5768E3
gText_Rom_5768E3: @ 0x085768E3
	.string "つらい$"
	.if (. - gText_Rom_5768E3) > 0x4
	.error "gText_Rom_5768E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768E3) < 0x4
	.space 0x4 - (. - gText_Rom_5768E3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:49 gEasyChatWord_Terrible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768E7
gText_Rom_5768E7: @ 0x085768E7
	.string "つらかった$"
	.if (. - gText_Rom_5768E7) != 0x6
	.error "gText_Rom_5768E7 must retain its original byte length"
	.endif
	.globl gText_Rom_5768E9
	.set gText_Rom_5768E9, gText_Rom_5768E7 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:50 gEasyChatWord_Should (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768ED
gText_Rom_5768ED: @ 0x085768ED
	.string "どうしよう$"
	.if (. - gText_Rom_5768ED) != 0x6
	.error "gText_Rom_5768ED must retain its original byte length"
	.endif
	.globl gText_Rom_5768EF
	.set gText_Rom_5768EF, gText_Rom_5768ED + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:51 gEasyChatWord_Nice (+1 aliases)
	.globl gText_Rom_5768F3
gText_Rom_5768F3: @ 0x085768F3
	.string "ナイス$"
	.if (. - gText_Rom_5768F3) > 0x4
	.error "gText_Rom_5768F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768F3) < 0x4
	.space 0x4 - (. - gText_Rom_5768F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:52 gEasyChatWord_Drink (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768F7
gText_Rom_5768F7: @ 0x085768F7
	.string "のみたい$"
	.if (. - gText_Rom_5768F7) != 0x5
	.error "gText_Rom_5768F7 must retain its original byte length"
	.endif
	.globl gText_Rom_5768F8
	.set gText_Rom_5768F8, gText_Rom_5768F7 + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:53 gEasyChatWord_Surprise (+1 aliases)
	.globl gText_Rom_5768FC
gText_Rom_5768FC: @ 0x085768FC
	.string "びっくり$"
	.if (. - gText_Rom_5768FC) > 0x5
	.error "gText_Rom_5768FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768FC) < 0x5
	.space 0x5 - (. - gText_Rom_5768FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:54 gEasyChatWord_Fear (+1 aliases)
	.globl gText_Rom_576901
gText_Rom_576901: @ 0x08576901
	.string "ふあん$"
	.if (. - gText_Rom_576901) > 0x4
	.error "gText_Rom_576901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576901) < 0x4
	.space 0x4 - (. - gText_Rom_576901)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gText_Rom_576905
gText_Rom_576905: @ 0x08576905
	.string "ほしい$"
	.if (. - gText_Rom_576905) > 0x4
	.error "gText_Rom_576905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576905) < 0x4
	.space 0x4 - (. - gText_Rom_576905)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:56 gEasyChatWord_Wait (+1 aliases)
	.globl gText_Rom_576909
gText_Rom_576909: @ 0x08576909
	.string "まてない$"
	.if (. - gText_Rom_576909) > 0x5
	.error "gText_Rom_576909 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576909) < 0x5
	.space 0x5 - (. - gText_Rom_576909)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_57690E
gText_Rom_57690E: @ 0x0857690E
	.string "まんぞく$"
	.if (. - gText_Rom_57690E) > 0x5
	.error "gText_Rom_57690E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57690E) < 0x5
	.space 0x5 - (. - gText_Rom_57690E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:58 gEasyChatWord_See (+1 aliases)
	.globl gText_Rom_576913
gText_Rom_576913: @ 0x08576913
	.string "みたい$"
	.if (. - gText_Rom_576913) > 0x4
	.error "gText_Rom_576913 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576913) < 0x4
	.space 0x4 - (. - gText_Rom_576913)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576917
gText_Rom_576917: @ 0x08576917
	.string "めずらしい$"
	.if (. - gText_Rom_576917) != 0x6
	.error "gText_Rom_576917 must retain its original byte length"
	.endif
	.globl gText_Rom_576919
	.set gText_Rom_576919, gText_Rom_576917 + 0x2
	@ Replaced baserom.gba range: offset=0x57691D, size=0x3
	.byte 0x24, 0x41, 0xFF

	@ src/data/easy_chat/easy_chat_group_feelings.h:61 gEasyChatWord_Done (+1 aliases)
	.globl gText_Rom_576920
gText_Rom_576920: @ 0x08576920
	.string "やったー$"
	.if (. - gText_Rom_576920) > 0x5
	.error "gText_Rom_576920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576920) < 0x5
	.space 0x5 - (. - gText_Rom_576920)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:62 gEasyChatWord_Danger (+1 aliases)
	.globl gText_Rom_576925
gText_Rom_576925: @ 0x08576925
	.string "やばい$"
	.if (. - gText_Rom_576925) > 0x4
	.error "gText_Rom_576925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576925) < 0x4
	.space 0x4 - (. - gText_Rom_576925)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:63 gEasyChatWord_Defeated (+1 aliases)
	.globl gText_Rom_576929
gText_Rom_576929: @ 0x08576929
	.string "やられた$"
	.if (. - gText_Rom_576929) > 0x5
	.error "gText_Rom_576929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576929) < 0x5
	.space 0x5 - (. - gText_Rom_576929)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:64 gEasyChatWord_Beat (+1 aliases)
	.globl gText_Rom_57692E
gText_Rom_57692E: @ 0x0857692E
	.string "やられて$"
	.if (. - gText_Rom_57692E) > 0x5
	.error "gText_Rom_57692E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57692E) < 0x5
	.space 0x5 - (. - gText_Rom_57692E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:65 gEasyChatWord_Great (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576933
gText_Rom_576933: @ 0x08576933
	.string "よかった$"
	.if (. - gText_Rom_576933) != 0x5
	.error "gText_Rom_576933 must retain its original byte length"
	.endif
	.globl gText_Rom_576934
	.set gText_Rom_576934, gText_Rom_576933 + 0x1

	@ src/data/easy_chat/easy_chat_group_feelings.h:66 gEasyChatWord_Romantic (+1 aliases)
	.globl gText_Rom_576938
gText_Rom_576938: @ 0x08576938
	.string "ロマン$"
	.if (. - gText_Rom_576938) > 0x4
	.error "gText_Rom_576938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576938) < 0x4
	.space 0x4 - (. - gText_Rom_576938)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:67 gEasyChatWord_Question (+1 aliases)
	.globl gText_Rom_57693C
gText_Rom_57693C: @ 0x0857693C
	.string "ろんがい$"
	.if (. - gText_Rom_57693C) > 0x5
	.error "gText_Rom_57693C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57693C) < 0x5
	.space 0x5 - (. - gText_Rom_57693C)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:68 gEasyChatWord_Understand (+1 aliases)
	.globl gText_Rom_576941
gText_Rom_576941: @ 0x08576941
	.string "わから$"
	.if (. - gText_Rom_576941) > 0x4
	.error "gText_Rom_576941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576941) < 0x4
	.space 0x4 - (. - gText_Rom_576941)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:69 gEasyChatWord_Understands (+1 aliases)
	.globl gText_Rom_576945
gText_Rom_576945: @ 0x08576945
	.string "わかり$"
	.if (. - gText_Rom_576945) > 0x4
	.error "gText_Rom_576945 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576945) < 0x4
	.space 0x4 - (. - gText_Rom_576945)
	.endif
	@ Replaced baserom.gba range: offset=0x576949, size=0x33F
	.byte 0x00, 0x00, 0x00, 0xF0, 0x67, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF5
	.byte 0x67, 0x57, 0x08, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFB, 0x67, 0x57, 0x08, 0x02
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x68, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x05, 0x68, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A
	.byte 0x68, 0x57, 0x08, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x68, 0x57, 0x08, 0x06
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x68, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x1A, 0x68, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1E
	.byte 0x68, 0x57, 0x08, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x68, 0x57, 0x08, 0x0A
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x28, 0x68, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x2E, 0x68, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x33
	.byte 0x68, 0x57, 0x08, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x68, 0x57, 0x08, 0x0E
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3D, 0x68, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x43, 0x68, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x48
	.byte 0x68, 0x57, 0x08, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4E, 0x68, 0x57, 0x08, 0x12
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x53, 0x68, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x58, 0x68, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5D
	.byte 0x68, 0x57, 0x08, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x68, 0x57, 0x08, 0x16
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x66, 0x68, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x6B, 0x68, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70
	.byte 0x68, 0x57, 0x08, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x68, 0x57, 0x08, 0x1A
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x79, 0x68, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x7E, 0x68, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x83
	.byte 0x68, 0x57, 0x08, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x87, 0x68, 0x57, 0x08, 0x1E
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8D, 0x68, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x92, 0x68, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x98
	.byte 0x68, 0x57, 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA0, 0x68, 0x57, 0x08, 0x22
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA3, 0x68, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0xA9, 0x68, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xAE
	.byte 0x68, 0x57, 0x08, 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB2, 0x68, 0x57, 0x08, 0x26
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB7, 0x68, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0xBE, 0x68, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC3
	.byte 0x68, 0x57, 0x08, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC8, 0x68, 0x57, 0x08, 0x2A
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCD, 0x68, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0xD3, 0x68, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD8
	.byte 0x68, 0x57, 0x08, 0x2D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xDD, 0x68, 0x57, 0x08, 0x2E
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE3, 0x68, 0x57, 0x08, 0x2F, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0xE7, 0x68, 0x57, 0x08, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xED
	.byte 0x68, 0x57, 0x08, 0x31, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF3, 0x68, 0x57, 0x08, 0x32
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF7, 0x68, 0x57, 0x08, 0x33, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0xFC, 0x68, 0x57, 0x08, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01
	.byte 0x69, 0x57, 0x08, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x69, 0x57, 0x08, 0x36
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x69, 0x57, 0x08, 0x37, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x0E, 0x69, 0x57, 0x08, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13
	.byte 0x69, 0x57, 0x08, 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x17, 0x69, 0x57, 0x08, 0x3A
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1D, 0x69, 0x57, 0x08, 0x3B, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x20, 0x69, 0x57, 0x08, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x25
	.byte 0x69, 0x57, 0x08, 0x3D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x29, 0x69, 0x57, 0x08, 0x3E
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2E, 0x69, 0x57, 0x08, 0x3F, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x33, 0x69, 0x57, 0x08, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38
	.byte 0x69, 0x57, 0x08, 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0x69, 0x57, 0x08, 0x42
	.byte 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x41, 0x69, 0x57, 0x08, 0x43, 0x00, 0x00, 0x00, 0x01
	.byte 0x00, 0x00, 0x00, 0x45, 0x69, 0x57, 0x08, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00

	@ src/data/easy_chat/easy_chat_group_conditions.h:4 easy_chat_group_conditions_line_4
	.globl gText_Rom_576C88
gText_Rom_576C88: @ 0x08576C88
	.string "あつい$"
	.if (. - gText_Rom_576C88) > 0x4
	.error "gText_Rom_576C88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C88) < 0x4
	.space 0x4 - (. - gText_Rom_576C88)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:10 easy_chat_group_conditions_line_10
	.globl gText_Rom_576C8C
gText_Rom_576C8C: @ 0x08576C8C
	.string "あった$"
	.if (. - gText_Rom_576C8C) > 0x4
	.error "gText_Rom_576C8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C8C) < 0x4
	.space 0x4 - (. - gText_Rom_576C8C)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:16 easy_chat_group_conditions_line_16
	.globl gText_Rom_576C90
gText_Rom_576C90: @ 0x08576C90
	.string "あまり$"
	.if (. - gText_Rom_576C90) > 0x4
	.error "gText_Rom_576C90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576C90) < 0x4
	.space 0x4 - (. - gText_Rom_576C90)
	.endif
	@ Replaced baserom.gba range: offset=0x576C94, size=0xC
	.byte 0x01, 0x28, 0xFF, 0x01, 0x29, 0xFF, 0x02, 0x02, 0xFF, 0x02, 0x06, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:46 easy_chat_group_conditions_line_46
	.globl gText_Rom_576CA0
gText_Rom_576CA0: @ 0x08576CA0
	.string "いきおい$"
	.if (. - gText_Rom_576CA0) > 0x5
	.error "gText_Rom_576CA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA0) < 0x5
	.space 0x5 - (. - gText_Rom_576CA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:52 easy_chat_group_conditions_line_52
	.globl gText_Rom_576CA5
gText_Rom_576CA5: @ 0x08576CA5
	.string "いける$"
	.if (. - gText_Rom_576CA5) > 0x4
	.error "gText_Rom_576CA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA5) < 0x4
	.space 0x4 - (. - gText_Rom_576CA5)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:58 easy_chat_group_conditions_line_58
	.globl gText_Rom_576CA9
gText_Rom_576CA9: @ 0x08576CA9
	.string "いじょう$"
	.if (. - gText_Rom_576CA9) > 0x5
	.error "gText_Rom_576CA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CA9) < 0x5
	.space 0x5 - (. - gText_Rom_576CA9)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:64 easy_chat_group_conditions_line_64
	.globl gText_Rom_576CAE
gText_Rom_576CAE: @ 0x08576CAE
	.string "いそがしい$"
	.if (. - gText_Rom_576CAE) > 0x6
	.error "gText_Rom_576CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CAE) < 0x6
	.space 0x6 - (. - gText_Rom_576CAE)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:70 easy_chat_group_conditions_line_70
	.globl gText_Rom_576CB4
gText_Rom_576CB4: @ 0x08576CB4
	.string "いっしょに$"
	.if (. - gText_Rom_576CB4) > 0x6
	.error "gText_Rom_576CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CB4) < 0x6
	.space 0x6 - (. - gText_Rom_576CB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:76 easy_chat_group_conditions_line_76
	.globl gText_Rom_576CBA
gText_Rom_576CBA: @ 0x08576CBA
	.string "いっぱい$"
	.if (. - gText_Rom_576CBA) > 0x5
	.error "gText_Rom_576CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CBA) < 0x5
	.space 0x5 - (. - gText_Rom_576CBA)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:82 easy_chat_group_conditions_line_82
	.globl gText_Rom_576CBF
gText_Rom_576CBF: @ 0x08576CBF
	.string "いない$"
	.if (. - gText_Rom_576CBF) > 0x4
	.error "gText_Rom_576CBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CBF) < 0x4
	.space 0x4 - (. - gText_Rom_576CBF)
	.endif
	@ Replaced baserom.gba range: offset=0x576CC3, size=0x6
	.byte 0x02, 0x24, 0xFF, 0x02, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:100 easy_chat_group_conditions_line_100
	.globl gText_Rom_576CC9
gText_Rom_576CC9: @ 0x08576CC9
	.string "うまい$"
	.if (. - gText_Rom_576CC9) > 0x4
	.error "gText_Rom_576CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CC9) < 0x4
	.space 0x4 - (. - gText_Rom_576CC9)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:106 easy_chat_group_conditions_line_106
	.globl gText_Rom_576CCD
gText_Rom_576CCD: @ 0x08576CCD
	.string "うまく$"
	.if (. - gText_Rom_576CCD) > 0x4
	.error "gText_Rom_576CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CCD) < 0x4
	.space 0x4 - (. - gText_Rom_576CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:112 easy_chat_group_conditions_line_112
	.globl gText_Rom_576CD1
gText_Rom_576CD1: @ 0x08576CD1
	.string "うるさい$"
	.if (. - gText_Rom_576CD1) > 0x5
	.error "gText_Rom_576CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CD1) < 0x5
	.space 0x5 - (. - gText_Rom_576CD1)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:118 easy_chat_group_conditions_line_118
	.globl gText_Rom_576CD6
gText_Rom_576CD6: @ 0x08576CD6
	.string "おおきい$"
	.if (. - gText_Rom_576CD6) > 0x5
	.error "gText_Rom_576CD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CD6) < 0x5
	.space 0x5 - (. - gText_Rom_576CD6)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:124 easy_chat_group_conditions_line_124
	.globl gText_Rom_576CDB
gText_Rom_576CDB: @ 0x08576CDB
	.string "おくれ$"
	.if (. - gText_Rom_576CDB) > 0x4
	.error "gText_Rom_576CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CDB) < 0x4
	.space 0x4 - (. - gText_Rom_576CDB)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:130 easy_chat_group_conditions_line_130
	.globl gText_Rom_576CDF
gText_Rom_576CDF: @ 0x08576CDF
	.string "おしい$"
	.if (. - gText_Rom_576CDF) > 0x4
	.error "gText_Rom_576CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CDF) < 0x4
	.space 0x4 - (. - gText_Rom_576CDF)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_576CE3
gText_Rom_576CE3: @ 0x08576CE3
	.string "おとなしい$"
	.if (. - gText_Rom_576CE3) > 0x6
	.error "gText_Rom_576CE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CE3) < 0x6
	.space 0x6 - (. - gText_Rom_576CE3)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:142 easy_chat_group_conditions_line_142
	.globl gText_Rom_576CE9
gText_Rom_576CE9: @ 0x08576CE9
	.string "おもしろい$"
	.if (. - gText_Rom_576CE9) > 0x6
	.error "gText_Rom_576CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CE9) < 0x6
	.space 0x6 - (. - gText_Rom_576CE9)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:148 easy_chat_group_conditions_line_148
	.globl gText_Rom_576CEF
gText_Rom_576CEF: @ 0x08576CEF
	.string "おもしろく$"
	.if (. - gText_Rom_576CEF) > 0x6
	.error "gText_Rom_576CEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CEF) < 0x6
	.space 0x6 - (. - gText_Rom_576CEF)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:154 easy_chat_group_conditions_line_154
	.globl gText_Rom_576CF5
gText_Rom_576CF5: @ 0x08576CF5
	.string "かんぺき$"
	.if (. - gText_Rom_576CF5) > 0x5
	.error "gText_Rom_576CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CF5) < 0x5
	.space 0x5 - (. - gText_Rom_576CF5)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:160 easy_chat_group_conditions_line_160
	.globl gText_Rom_576CFA
gText_Rom_576CFA: @ 0x08576CFA
	.string "けっこう$"
	.if (. - gText_Rom_576CFA) > 0x5
	.error "gText_Rom_576CFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CFA) < 0x5
	.space 0x5 - (. - gText_Rom_576CFA)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:166 easy_chat_group_conditions_line_166
	.globl gText_Rom_576CFF
gText_Rom_576CFF: @ 0x08576CFF
	.string "げんき$"
	.if (. - gText_Rom_576CFF) > 0x4
	.error "gText_Rom_576CFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576CFF) < 0x4
	.space 0x4 - (. - gText_Rom_576CFF)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:172 easy_chat_group_conditions_line_172 (+1 aliases)
	.globl gText_Rom_576D03
gText_Rom_576D03: @ 0x08576D03
	.string "さいこう$"
	.if (. - gText_Rom_576D03) > 0x5
	.error "gText_Rom_576D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D03) < 0x5
	.space 0x5 - (. - gText_Rom_576D03)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:178 easy_chat_group_conditions_line_178
	.globl gText_Rom_576D08
gText_Rom_576D08: @ 0x08576D08
	.string "さかさま$"
	.if (. - gText_Rom_576D08) > 0x5
	.error "gText_Rom_576D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D08) < 0x5
	.space 0x5 - (. - gText_Rom_576D08)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:184 easy_chat_group_conditions_line_184
	.globl gText_Rom_576D0D
gText_Rom_576D0D: @ 0x08576D0D
	.string "さむい$"
	.if (. - gText_Rom_576D0D) > 0x4
	.error "gText_Rom_576D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D0D) < 0x4
	.space 0x4 - (. - gText_Rom_576D0D)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:190 easy_chat_group_conditions_line_190
	.globl gText_Rom_576D11
gText_Rom_576D11: @ 0x08576D11
	.string "さわやか$"
	.if (. - gText_Rom_576D11) > 0x5
	.error "gText_Rom_576D11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D11) < 0x5
	.space 0x5 - (. - gText_Rom_576D11)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:196 easy_chat_group_conditions_line_196
	.globl gText_Rom_576D16
gText_Rom_576D16: @ 0x08576D16
	.string "しかたない$"
	.if (. - gText_Rom_576D16) > 0x6
	.error "gText_Rom_576D16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D16) < 0x6
	.space 0x6 - (. - gText_Rom_576D16)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:202 easy_chat_group_conditions_line_202
	.globl gText_Rom_576D1C
gText_Rom_576D1C: @ 0x08576D1C
	.string "すごい$"
	.if (. - gText_Rom_576D1C) > 0x4
	.error "gText_Rom_576D1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D1C) < 0x4
	.space 0x4 - (. - gText_Rom_576D1C)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:208 easy_chat_group_conditions_line_208
	.globl gText_Rom_576D20
gText_Rom_576D20: @ 0x08576D20
	.string "すごすぎ$"
	.if (. - gText_Rom_576D20) > 0x5
	.error "gText_Rom_576D20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D20) < 0x5
	.space 0x5 - (. - gText_Rom_576D20)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:214 easy_chat_group_conditions_line_214
	.globl gText_Rom_576D25
gText_Rom_576D25: @ 0x08576D25
	.string "すてき$"
	.if (. - gText_Rom_576D25) > 0x4
	.error "gText_Rom_576D25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D25) < 0x4
	.space 0x4 - (. - gText_Rom_576D25)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:220 easy_chat_group_conditions_line_220
	.globl gText_Rom_576D29
gText_Rom_576D29: @ 0x08576D29
	.string "たいした$"
	.if (. - gText_Rom_576D29) > 0x5
	.error "gText_Rom_576D29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D29) < 0x5
	.space 0x5 - (. - gText_Rom_576D29)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:226 easy_chat_group_conditions_line_226
	.globl gText_Rom_576D2E
gText_Rom_576D2E: @ 0x08576D2E
	.string "たかい$"
	.if (. - gText_Rom_576D2E) > 0x4
	.error "gText_Rom_576D2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D2E) < 0x4
	.space 0x4 - (. - gText_Rom_576D2E)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:232 easy_chat_group_conditions_line_232
	.globl gText_Rom_576D32
gText_Rom_576D32: @ 0x08576D32
	.string "ただしい$"
	.if (. - gText_Rom_576D32) > 0x5
	.error "gText_Rom_576D32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D32) < 0x5
	.space 0x5 - (. - gText_Rom_576D32)
	.endif
	@ Replaced baserom.gba range: offset=0x576D37, size=0x3
	.byte 0x41, 0x22, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:244 easy_chat_group_conditions_line_244
	.globl gText_Rom_576D3A
gText_Rom_576D3A: @ 0x08576D3A
	.string "ちいさい$"
	.if (. - gText_Rom_576D3A) > 0x5
	.error "gText_Rom_576D3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3A) < 0x5
	.space 0x5 - (. - gText_Rom_576D3A)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:250 easy_chat_group_conditions_line_250
	.globl gText_Rom_576D3F
gText_Rom_576D3F: @ 0x08576D3F
	.string "ちがう$"
	.if (. - gText_Rom_576D3F) > 0x4
	.error "gText_Rom_576D3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D3F) < 0x4
	.space 0x4 - (. - gText_Rom_576D3F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:256 easy_chat_group_conditions_line_256
	.globl gText_Rom_576D43
gText_Rom_576D43: @ 0x08576D43
	.string "つかれ$"
	.if (. - gText_Rom_576D43) > 0x4
	.error "gText_Rom_576D43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D43) < 0x4
	.space 0x4 - (. - gText_Rom_576D43)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:262 easy_chat_group_conditions_line_262
	.globl gText_Rom_576D47
gText_Rom_576D47: @ 0x08576D47
	.string "とくい$"
	.if (. - gText_Rom_576D47) > 0x4
	.error "gText_Rom_576D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D47) < 0x4
	.space 0x4 - (. - gText_Rom_576D47)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:268 easy_chat_group_conditions_line_268
	.globl gText_Rom_576D4B
gText_Rom_576D4B: @ 0x08576D4B
	.string "トップ$"
	.if (. - gText_Rom_576D4B) > 0x4
	.error "gText_Rom_576D4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4B) < 0x4
	.space 0x4 - (. - gText_Rom_576D4B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:274 easy_chat_group_conditions_line_274
	.globl gText_Rom_576D4F
gText_Rom_576D4F: @ 0x08576D4F
	.string "とまらない$"
	.if (. - gText_Rom_576D4F) > 0x6
	.error "gText_Rom_576D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D4F) < 0x6
	.space 0x6 - (. - gText_Rom_576D4F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:280 easy_chat_group_conditions_line_280
	.globl gText_Rom_576D55
gText_Rom_576D55: @ 0x08576D55
	.string "とんでもない$"
	.if (. - gText_Rom_576D55) > 0x7
	.error "gText_Rom_576D55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D55) < 0x7
	.space 0x7 - (. - gText_Rom_576D55)
	.endif
	@ Replaced baserom.gba range: offset=0x576D5C, size=0x3
	.byte 0x15, 0x02, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:292 easy_chat_group_conditions_line_292
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576D5F
gText_Rom_576D5F: @ 0x08576D5F
	.string "なかった$"
	.if (. - gText_Rom_576D5F) != 0x5
	.error "gText_Rom_576D5F must retain its original byte length"
	.endif
	.globl gText_Rom_576D60
	.set gText_Rom_576D60, gText_Rom_576D5F + 0x1
	@ Replaced baserom.gba range: offset=0x576D64, size=0x3
	.byte 0x15, 0x0C, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:304 easy_chat_group_conditions_line_304
	.globl gText_Rom_576D67
gText_Rom_576D67: @ 0x08576D67
	.string "なって$"
	.if (. - gText_Rom_576D67) > 0x4
	.error "gText_Rom_576D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D67) < 0x4
	.space 0x4 - (. - gText_Rom_576D67)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:310 easy_chat_group_conditions_line_310
	.globl gText_Rom_576D6B
gText_Rom_576D6B: @ 0x08576D6B
	.string "ぬるい$"
	.if (. - gText_Rom_576D6B) > 0x4
	.error "gText_Rom_576D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6B) < 0x4
	.space 0x4 - (. - gText_Rom_576D6B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:316 easy_chat_group_conditions_line_316 (+1 aliases)
	.globl gText_Rom_576D6F
gText_Rom_576D6F: @ 0x08576D6F
	.string "はやい$"
	.if (. - gText_Rom_576D6F) > 0x4
	.error "gText_Rom_576D6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D6F) < 0x4
	.space 0x4 - (. - gText_Rom_576D6F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:322 easy_chat_group_conditions_line_322
	.globl gText_Rom_576D73
gText_Rom_576D73: @ 0x08576D73
	.string "ひくい$"
	.if (. - gText_Rom_576D73) > 0x4
	.error "gText_Rom_576D73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D73) < 0x4
	.space 0x4 - (. - gText_Rom_576D73)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:328 easy_chat_group_conditions_line_328
	.globl gText_Rom_576D77
gText_Rom_576D77: @ 0x08576D77
	.string "ひどい$"
	.if (. - gText_Rom_576D77) > 0x4
	.error "gText_Rom_576D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D77) < 0x4
	.space 0x4 - (. - gText_Rom_576D77)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:334 easy_chat_group_conditions_line_334
	.globl gText_Rom_576D7B
gText_Rom_576D7B: @ 0x08576D7B
	.string "ひとりで$"
	.if (. - gText_Rom_576D7B) > 0x5
	.error "gText_Rom_576D7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D7B) < 0x5
	.space 0x5 - (. - gText_Rom_576D7B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:340 easy_chat_group_conditions_line_340
	.globl gText_Rom_576D80
gText_Rom_576D80: @ 0x08576D80
	.string "ひま$"
	.if (. - gText_Rom_576D80) > 0x3
	.error "gText_Rom_576D80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D80) < 0x3
	.space 0x3 - (. - gText_Rom_576D80)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:346 easy_chat_group_conditions_line_346
	.globl gText_Rom_576D83
gText_Rom_576D83: @ 0x08576D83
	.string "ひみつ$"
	.if (. - gText_Rom_576D83) > 0x4
	.error "gText_Rom_576D83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D83) < 0x4
	.space 0x4 - (. - gText_Rom_576D83)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:352 easy_chat_group_conditions_line_352
	.globl gText_Rom_576D87
gText_Rom_576D87: @ 0x08576D87
	.string "ふしぎ$"
	.if (. - gText_Rom_576D87) > 0x4
	.error "gText_Rom_576D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D87) < 0x4
	.space 0x4 - (. - gText_Rom_576D87)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:358 easy_chat_group_conditions_line_358
	.globl gText_Rom_576D8B
gText_Rom_576D8B: @ 0x08576D8B
	.string "ふそく$"
	.if (. - gText_Rom_576D8B) > 0x4
	.error "gText_Rom_576D8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8B) < 0x4
	.space 0x4 - (. - gText_Rom_576D8B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:364 easy_chat_group_conditions_line_364
	.globl gText_Rom_576D8F
gText_Rom_576D8F: @ 0x08576D8F
	.string "ベスト$"
	.if (. - gText_Rom_576D8F) > 0x4
	.error "gText_Rom_576D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8F) < 0x4
	.space 0x4 - (. - gText_Rom_576D8F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:370 easy_chat_group_conditions_line_370
	.globl gText_Rom_576D93
gText_Rom_576D93: @ 0x08576D93
	.string "へた$"
	.if (. - gText_Rom_576D93) > 0x3
	.error "gText_Rom_576D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D93) < 0x3
	.space 0x3 - (. - gText_Rom_576D93)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:376 easy_chat_group_conditions_line_376
	.globl gText_Rom_576D96
gText_Rom_576D96: @ 0x08576D96
	.string "まちがって$"
	.if (. - gText_Rom_576D96) > 0x6
	.error "gText_Rom_576D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D96) < 0x6
	.space 0x6 - (. - gText_Rom_576D96)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:382 easy_chat_group_conditions_line_382
	.globl gText_Rom_576D9C
gText_Rom_576D9C: @ 0x08576D9C
	.string "やさしい$"
	.if (. - gText_Rom_576D9C) > 0x5
	.error "gText_Rom_576D9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D9C) < 0x5
	.space 0x5 - (. - gText_Rom_576D9C)
	.endif
	@ Replaced baserom.gba range: offset=0x576DA1, size=0x3
	.byte 0x26, 0x08, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:394 easy_chat_group_conditions_line_394
	.globl gText_Rom_576DA4
gText_Rom_576DA4: @ 0x08576DA4
	.string "よわって$"
	.if (. - gText_Rom_576DA4) > 0x5
	.error "gText_Rom_576DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DA4) < 0x5
	.space 0x5 - (. - gText_Rom_576DA4)
	.endif
	@ Replaced baserom.gba range: offset=0x576DA9, size=0x3
	.byte 0x27, 0x08, 0xFF

	@ src/data/easy_chat/easy_chat_group_conditions.h:406 easy_chat_group_conditions_line_406
	.globl gText_Rom_576DAC
gText_Rom_576DAC: @ 0x08576DAC
	.string "らしい$"
	.if (. - gText_Rom_576DAC) > 0x4
	.error "gText_Rom_576DAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DAC) < 0x4
	.space 0x4 - (. - gText_Rom_576DAC)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:412 easy_chat_group_conditions_line_412
	.globl gText_Rom_576DB0
gText_Rom_576DB0: @ 0x08576DB0
	.string "わるい$"
	.if (. - gText_Rom_576DB0) > 0x4
	.error "gText_Rom_576DB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DB0) < 0x4
	.space 0x4 - (. - gText_Rom_576DB0)
	.endif
	@ Replaced baserom.gba range: offset=0x576DB4, size=0x33F
	.byte 0x88, 0x6C, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8C, 0x6C, 0x57, 0x08
	.byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x90, 0x6C, 0x57, 0x08, 0x02, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x94, 0x6C, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x97, 0x6C, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x9A, 0x6C, 0x57, 0x08
	.byte 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x9D, 0x6C, 0x57, 0x08, 0x06, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xA0, 0x6C, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xA5, 0x6C, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA9, 0x6C, 0x57, 0x08
	.byte 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xAE, 0x6C, 0x57, 0x08, 0x0A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xB4, 0x6C, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xBA, 0x6C, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xBF, 0x6C, 0x57, 0x08
	.byte 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC3, 0x6C, 0x57, 0x08, 0x0E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xC6, 0x6C, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xC9, 0x6C, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCD, 0x6C, 0x57, 0x08
	.byte 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD1, 0x6C, 0x57, 0x08, 0x12, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xD6, 0x6C, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xDB, 0x6C, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xDF, 0x6C, 0x57, 0x08
	.byte 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE3, 0x6C, 0x57, 0x08, 0x16, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xE9, 0x6C, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xEF, 0x6C, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF5, 0x6C, 0x57, 0x08
	.byte 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFA, 0x6C, 0x57, 0x08, 0x1A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xFF, 0x6C, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x03, 0x6D, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x6D, 0x57, 0x08
	.byte 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0D, 0x6D, 0x57, 0x08, 0x1E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x11, 0x6D, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x16, 0x6D, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1C, 0x6D, 0x57, 0x08
	.byte 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x6D, 0x57, 0x08, 0x22, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x25, 0x6D, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x29, 0x6D, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2E, 0x6D, 0x57, 0x08
	.byte 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x6D, 0x57, 0x08, 0x26, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x37, 0x6D, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x3A, 0x6D, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3F, 0x6D, 0x57, 0x08
	.byte 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x43, 0x6D, 0x57, 0x08, 0x2A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x47, 0x6D, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x4B, 0x6D, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4F, 0x6D, 0x57, 0x08
	.byte 0x2D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x55, 0x6D, 0x57, 0x08, 0x2E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x5C, 0x6D, 0x57, 0x08, 0x2F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x5F, 0x6D, 0x57, 0x08, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x6D, 0x57, 0x08
	.byte 0x31, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x6D, 0x57, 0x08, 0x32, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x6B, 0x6D, 0x57, 0x08, 0x33, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x6F, 0x6D, 0x57, 0x08, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x73, 0x6D, 0x57, 0x08
	.byte 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x77, 0x6D, 0x57, 0x08, 0x36, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x7B, 0x6D, 0x57, 0x08, 0x37, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x80, 0x6D, 0x57, 0x08, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x83, 0x6D, 0x57, 0x08
	.byte 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x87, 0x6D, 0x57, 0x08, 0x3A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x8B, 0x6D, 0x57, 0x08, 0x3B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x8F, 0x6D, 0x57, 0x08, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x93, 0x6D, 0x57, 0x08
	.byte 0x3D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x96, 0x6D, 0x57, 0x08, 0x3E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x9C, 0x6D, 0x57, 0x08, 0x3F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xA1, 0x6D, 0x57, 0x08, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA4, 0x6D, 0x57, 0x08
	.byte 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA9, 0x6D, 0x57, 0x08, 0x42, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xAC, 0x6D, 0x57, 0x08, 0x43, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xB0, 0x6D, 0x57, 0x08, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:10 easy_chat_group_actions_line_10
	.globl gText_Rom_5770F3
gText_Rom_5770F3: @ 0x085770F3
	.string "あきらめ$"
	.if (. - gText_Rom_5770F3) > 0x5
	.error "gText_Rom_5770F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770F3) < 0x5
	.space 0x5 - (. - gText_Rom_5770F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:16 easy_chat_group_actions_line_16 (+1 aliases)
	.globl gText_Rom_5770F8
gText_Rom_5770F8: @ 0x085770F8
	.string "あげる$"
	.if (. - gText_Rom_5770F8) > 0x4
	.error "gText_Rom_5770F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770F8) < 0x4
	.space 0x4 - (. - gText_Rom_5770F8)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:22 easy_chat_group_actions_line_22
	.globl gText_Rom_5770FC
gText_Rom_5770FC: @ 0x085770FC
	.string "あせる$"
	.if (. - gText_Rom_5770FC) > 0x4
	.error "gText_Rom_5770FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5770FC) < 0x4
	.space 0x4 - (. - gText_Rom_5770FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:28 easy_chat_group_actions_line_28
	.globl gText_Rom_577100
gText_Rom_577100: @ 0x08577100
	.string "あそび$"
	.if (. - gText_Rom_577100) > 0x4
	.error "gText_Rom_577100 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577100) < 0x4
	.space 0x4 - (. - gText_Rom_577100)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:34 easy_chat_group_actions_line_34
	.globl gText_Rom_577104
gText_Rom_577104: @ 0x08577104
	.string "あそぶ$"
	.if (. - gText_Rom_577104) > 0x4
	.error "gText_Rom_577104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577104) < 0x4
	.space 0x4 - (. - gText_Rom_577104)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:40 easy_chat_group_actions_line_40
	.globl gText_Rom_577108
gText_Rom_577108: @ 0x08577108
	.string "あつめ$"
	.if (. - gText_Rom_577108) > 0x4
	.error "gText_Rom_577108 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577108) < 0x4
	.space 0x4 - (. - gText_Rom_577108)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:46 easy_chat_group_actions_line_46
	.globl gText_Rom_57710C
gText_Rom_57710C: @ 0x0857710C
	.string "あるき$"
	.if (. - gText_Rom_57710C) > 0x4
	.error "gText_Rom_57710C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57710C) < 0x4
	.space 0x4 - (. - gText_Rom_57710C)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:52 easy_chat_group_actions_line_52
	.globl gText_Rom_577110
gText_Rom_577110: @ 0x08577110
	.string "あるく$"
	.if (. - gText_Rom_577110) > 0x4
	.error "gText_Rom_577110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577110) < 0x4
	.space 0x4 - (. - gText_Rom_577110)
	.endif
	@ Replaced baserom.gba range: offset=0x577114, size=0x6
	.byte 0x02, 0x03, 0xFF, 0x02, 0x08, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:70 easy_chat_group_actions_line_70
	.globl gText_Rom_57711A
gText_Rom_57711A: @ 0x0857711A
	.string "いって$"
	.if (. - gText_Rom_57711A) > 0x4
	.error "gText_Rom_57711A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57711A) < 0x4
	.space 0x4 - (. - gText_Rom_57711A)
	.endif
	@ Replaced baserom.gba range: offset=0x57711E, size=0x3
	.byte 0x05, 0x07, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:82 easy_chat_group_actions_line_82
	.globl gText_Rom_577121
gText_Rom_577121: @ 0x08577121
	.string "おこり$"
	.if (. - gText_Rom_577121) > 0x4
	.error "gText_Rom_577121 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577121) < 0x4
	.space 0x4 - (. - gText_Rom_577121)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:88 easy_chat_group_actions_line_88
	.globl gText_Rom_577125
gText_Rom_577125: @ 0x08577125
	.string "おこる$"
	.if (. - gText_Rom_577125) > 0x4
	.error "gText_Rom_577125 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577125) < 0x4
	.space 0x4 - (. - gText_Rom_577125)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:94 easy_chat_group_actions_line_94
	.globl gText_Rom_577129
gText_Rom_577129: @ 0x08577129
	.string "おしえ$"
	.if (. - gText_Rom_577129) > 0x4
	.error "gText_Rom_577129 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577129) < 0x4
	.space 0x4 - (. - gText_Rom_577129)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:100 easy_chat_group_actions_line_100
	.globl gText_Rom_57712D
gText_Rom_57712D: @ 0x0857712D
	.string "おしえて$"
	.if (. - gText_Rom_57712D) > 0x5
	.error "gText_Rom_57712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57712D) < 0x5
	.space 0x5 - (. - gText_Rom_57712D)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:106 easy_chat_group_actions_line_106
	.globl gText_Rom_577132
gText_Rom_577132: @ 0x08577132
	.string "おねがい$"
	.if (. - gText_Rom_577132) > 0x5
	.error "gText_Rom_577132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577132) < 0x5
	.space 0x5 - (. - gText_Rom_577132)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:112 easy_chat_group_actions_line_112
	.globl gText_Rom_577137
gText_Rom_577137: @ 0x08577137
	.string "おぼえ$"
	.if (. - gText_Rom_577137) > 0x4
	.error "gText_Rom_577137 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577137) < 0x4
	.space 0x4 - (. - gText_Rom_577137)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:118 easy_chat_group_actions_line_118
	.globl gText_Rom_57713B
gText_Rom_57713B: @ 0x0857713B
	.string "かえる$"
	.if (. - gText_Rom_57713B) > 0x4
	.error "gText_Rom_57713B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57713B) < 0x4
	.space 0x4 - (. - gText_Rom_57713B)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:124 easy_chat_group_actions_line_124
	.globl gText_Rom_57713F
gText_Rom_57713F: @ 0x0857713F
	.string "かたり$"
	.if (. - gText_Rom_57713F) > 0x4
	.error "gText_Rom_57713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57713F) < 0x4
	.space 0x4 - (. - gText_Rom_57713F)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:130 easy_chat_group_actions_line_130 (+1 aliases)
	.globl gText_Rom_577143
gText_Rom_577143: @ 0x08577143
	.string "がまん$"
	.if (. - gText_Rom_577143) > 0x4
	.error "gText_Rom_577143 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577143) < 0x4
	.space 0x4 - (. - gText_Rom_577143)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:136 easy_chat_group_actions_line_136
	.globl gText_Rom_577147
gText_Rom_577147: @ 0x08577147
	.string "かわいがって$"
	.if (. - gText_Rom_577147) > 0x7
	.error "gText_Rom_577147 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577147) < 0x7
	.space 0x7 - (. - gText_Rom_577147)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:142 easy_chat_group_actions_line_142
	.globl gText_Rom_57714E
gText_Rom_57714E: @ 0x0857714E
	.string "きいて$"
	.if (. - gText_Rom_57714E) > 0x4
	.error "gText_Rom_57714E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57714E) < 0x4
	.space 0x4 - (. - gText_Rom_57714E)
	.endif
	@ Replaced baserom.gba range: offset=0x577152, size=0x3
	.byte 0x07, 0x08, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:154 easy_chat_group_actions_line_154
	.globl gText_Rom_577155
gText_Rom_577155: @ 0x08577155
	.string "きたえ$"
	.if (. - gText_Rom_577155) > 0x4
	.error "gText_Rom_577155 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577155) < 0x4
	.space 0x4 - (. - gText_Rom_577155)
	.endif
	@ Replaced baserom.gba range: offset=0x577159, size=0x6
	.byte 0x07, 0x22, 0xFF, 0x08, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:172 easy_chat_group_actions_line_172
	.globl gText_Rom_57715F
gText_Rom_57715F: @ 0x0857715F
	.string "こない$"
	.if (. - gText_Rom_57715F) > 0x4
	.error "gText_Rom_57715F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57715F) < 0x4
	.space 0x4 - (. - gText_Rom_57715F)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:178 easy_chat_group_actions_line_178
	.globl gText_Rom_577163
gText_Rom_577163: @ 0x08577163
	.string "さがし$"
	.if (. - gText_Rom_577163) > 0x4
	.error "gText_Rom_577163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577163) < 0x4
	.space 0x4 - (. - gText_Rom_577163)
	.endif
	@ Replaced baserom.gba range: offset=0x577167, size=0x3
	.byte 0x0B, 0x0E, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:190 easy_chat_group_actions_line_190
	.globl gText_Rom_57716A
gText_Rom_57716A: @ 0x0857716A
	.string "さわぎ$"
	.if (. - gText_Rom_57716A) > 0x4
	.error "gText_Rom_57716A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57716A) < 0x4
	.space 0x4 - (. - gText_Rom_57716A)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:196 easy_chat_group_actions_line_196
	.globl gText_Rom_57716E
gText_Rom_57716E: @ 0x0857716E
	.string "しって$"
	.if (. - gText_Rom_57716E) > 0x4
	.error "gText_Rom_57716E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57716E) < 0x4
	.space 0x4 - (. - gText_Rom_57716E)
	.endif
	@ Replaced baserom.gba range: offset=0x577172, size=0x3
	.byte 0x0C, 0x13, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:208 easy_chat_group_actions_line_208
	.globl gText_Rom_577175
gText_Rom_577175: @ 0x08577175
	.string "しない$"
	.if (. - gText_Rom_577175) > 0x4
	.error "gText_Rom_577175 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577175) < 0x4
	.space 0x4 - (. - gText_Rom_577175)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:214 easy_chat_group_actions_line_214
	.globl gText_Rom_577179
gText_Rom_577179: @ 0x08577179
	.string "しまう$"
	.if (. - gText_Rom_577179) > 0x4
	.error "gText_Rom_577179 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577179) < 0x4
	.space 0x4 - (. - gText_Rom_577179)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:220 easy_chat_group_actions_line_220
	.globl gText_Rom_57717D
gText_Rom_57717D: @ 0x0857717D
	.string "じまん$"
	.if (. - gText_Rom_57717D) > 0x4
	.error "gText_Rom_57717D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57717D) < 0x4
	.space 0x4 - (. - gText_Rom_57717D)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:226 easy_chat_group_actions_line_226
	.globl gText_Rom_577181
gText_Rom_577181: @ 0x08577181
	.string "しらない$"
	.if (. - gText_Rom_577181) > 0x5
	.error "gText_Rom_577181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577181) < 0x5
	.space 0x5 - (. - gText_Rom_577181)
	.endif
	@ Replaced baserom.gba range: offset=0x577186, size=0x3
	.byte 0x0C, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:238 easy_chat_group_actions_line_238
	.globl gText_Rom_577189
gText_Rom_577189: @ 0x08577189
	.string "しんじて$"
	.if (. - gText_Rom_577189) > 0x5
	.error "gText_Rom_577189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577189) < 0x5
	.space 0x5 - (. - gText_Rom_577189)
	.endif
	@ Replaced baserom.gba range: offset=0x57718E, size=0x3
	.byte 0x0D, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:250 easy_chat_group_actions_line_250
	.globl gText_Rom_577191
gText_Rom_577191: @ 0x08577191
	.string "たべる$"
	.if (. - gText_Rom_577191) > 0x4
	.error "gText_Rom_577191 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577191) < 0x4
	.space 0x4 - (. - gText_Rom_577191)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:256 easy_chat_group_actions_line_256 (+1 aliases)
	.globl gText_Rom_577195
gText_Rom_577195: @ 0x08577195
	.string "つかう$"
	.if (. - gText_Rom_577195) > 0x4
	.error "gText_Rom_577195 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577195) < 0x4
	.space 0x4 - (. - gText_Rom_577195)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:262 easy_chat_group_actions_line_262
	.globl gText_Rom_577199
gText_Rom_577199: @ 0x08577199
	.string "つかえ$"
	.if (. - gText_Rom_577199) > 0x4
	.error "gText_Rom_577199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577199) < 0x4
	.space 0x4 - (. - gText_Rom_577199)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:268 easy_chat_group_actions_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57719D
gText_Rom_57719D: @ 0x0857719D
	.string "つかって$"
	.if (. - gText_Rom_57719D) != 0x5
	.error "gText_Rom_57719D must retain its original byte length"
	.endif
	.globl gText_Rom_57719E
	.set gText_Rom_57719E, gText_Rom_57719D + 0x1

	@ src/data/easy_chat/easy_chat_group_actions.h:274 easy_chat_group_actions_line_274
	.globl gText_Rom_5771A2
gText_Rom_5771A2: @ 0x085771A2
	.string "できない$"
	.if (. - gText_Rom_5771A2) > 0x5
	.error "gText_Rom_5771A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A2) < 0x5
	.space 0x5 - (. - gText_Rom_5771A2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:280 easy_chat_group_actions_line_280
	.globl gText_Rom_5771A7
gText_Rom_5771A7: @ 0x085771A7
	.string "できる$"
	.if (. - gText_Rom_5771A7) > 0x4
	.error "gText_Rom_5771A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A7) < 0x4
	.space 0x4 - (. - gText_Rom_5771A7)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:286 easy_chat_group_actions_line_286
	.globl gText_Rom_5771AB
gText_Rom_5771AB: @ 0x085771AB
	.string "でない$"
	.if (. - gText_Rom_5771AB) > 0x4
	.error "gText_Rom_5771AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AB) < 0x4
	.space 0x4 - (. - gText_Rom_5771AB)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:292 easy_chat_group_actions_line_292 (+2 aliases)
	.globl gText_Rom_5771AF
gText_Rom_5771AF: @ 0x085771AF
	.string "でる$"
	.if (. - gText_Rom_5771AF) > 0x3
	.error "gText_Rom_5771AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AF) < 0x3
	.space 0x3 - (. - gText_Rom_5771AF)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:298 easy_chat_group_actions_line_298
	.globl gText_Rom_5771B2
gText_Rom_5771B2: @ 0x085771B2
	.string "なげる$"
	.if (. - gText_Rom_5771B2) > 0x4
	.error "gText_Rom_5771B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B2) < 0x4
	.space 0x4 - (. - gText_Rom_5771B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:304 easy_chat_group_actions_line_304
	.globl gText_Rom_5771B6
gText_Rom_5771B6: @ 0x085771B6
	.string "なやみ$"
	.if (. - gText_Rom_5771B6) > 0x4
	.error "gText_Rom_5771B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B6) < 0x4
	.space 0x4 - (. - gText_Rom_5771B6)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:310 easy_chat_group_actions_line_310
	.globl gText_Rom_5771BA
gText_Rom_5771BA: @ 0x085771BA
	.string "ねられ$"
	.if (. - gText_Rom_5771BA) > 0x4
	.error "gText_Rom_5771BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771BA) < 0x4
	.space 0x4 - (. - gText_Rom_5771BA)
	.endif
	@ Replaced baserom.gba range: offset=0x5771BE, size=0x3
	.byte 0x18, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:322 easy_chat_group_actions_line_322
	.globl gText_Rom_5771C1
gText_Rom_5771C1: @ 0x085771C1
	.string "のがし$"
	.if (. - gText_Rom_5771C1) > 0x4
	.error "gText_Rom_5771C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C1) < 0x4
	.space 0x4 - (. - gText_Rom_5771C1)
	.endif
	@ Replaced baserom.gba range: offset=0x5771C5, size=0x3
	.byte 0x19, 0x21, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:334 easy_chat_group_actions_line_334
	.globl gText_Rom_5771C8
gText_Rom_5771C8: @ 0x085771C8
	.string "はしり$"
	.if (. - gText_Rom_5771C8) > 0x4
	.error "gText_Rom_5771C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C8) < 0x4
	.space 0x4 - (. - gText_Rom_5771C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:340 easy_chat_group_actions_line_340
	.globl gText_Rom_5771CC
gText_Rom_5771CC: @ 0x085771CC
	.string "はしる$"
	.if (. - gText_Rom_5771CC) > 0x4
	.error "gText_Rom_5771CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771CC) < 0x4
	.space 0x4 - (. - gText_Rom_5771CC)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:346 easy_chat_group_actions_line_346
	.globl gText_Rom_5771D0
gText_Rom_5771D0: @ 0x085771D0
	.string "はたらき$"
	.if (. - gText_Rom_5771D0) > 0x5
	.error "gText_Rom_5771D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D0) < 0x5
	.space 0x5 - (. - gText_Rom_5771D0)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:352 easy_chat_group_actions_line_352
	.globl gText_Rom_5771D5
gText_Rom_5771D5: @ 0x085771D5
	.string "はたらく$"
	.if (. - gText_Rom_5771D5) > 0x5
	.error "gText_Rom_5771D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D5) < 0x5
	.space 0x5 - (. - gText_Rom_5771D5)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:358 easy_chat_group_actions_line_358
	.globl gText_Rom_5771DA
gText_Rom_5771DA: @ 0x085771DA
	.string "はなし$"
	.if (. - gText_Rom_5771DA) > 0x4
	.error "gText_Rom_5771DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DA) < 0x4
	.space 0x4 - (. - gText_Rom_5771DA)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:364 easy_chat_group_actions_line_364
	.globl gText_Rom_5771DE
gText_Rom_5771DE: @ 0x085771DE
	.string "はなす$"
	.if (. - gText_Rom_5771DE) > 0x4
	.error "gText_Rom_5771DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DE) < 0x4
	.space 0x4 - (. - gText_Rom_5771DE)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:370 easy_chat_group_actions_line_370
	.globl gText_Rom_5771E2
gText_Rom_5771E2: @ 0x085771E2
	.string "はまって$"
	.if (. - gText_Rom_5771E2) > 0x5
	.error "gText_Rom_5771E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771E2) < 0x5
	.space 0x5 - (. - gText_Rom_5771E2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:376 easy_chat_group_actions_line_376
	.globl gText_Rom_5771E7
gText_Rom_5771E7: @ 0x085771E7
	.string "ぶつけ$"
	.if (. - gText_Rom_5771E7) > 0x4
	.error "gText_Rom_5771E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771E7) < 0x4
	.space 0x4 - (. - gText_Rom_5771E7)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:382 easy_chat_group_actions_line_382
	.globl gText_Rom_5771EB
gText_Rom_5771EB: @ 0x085771EB
	.string "ふり$"
	.if (. - gText_Rom_5771EB) > 0x3
	.error "gText_Rom_5771EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771EB) < 0x3
	.space 0x3 - (. - gText_Rom_5771EB)
	.endif
	@ Replaced baserom.gba range: offset=0x5771EE, size=0x3
	.byte 0x1E, 0x22, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:394 easy_chat_group_actions_line_394
	.globl gText_Rom_5771F1
gText_Rom_5771F1: @ 0x085771F1
	.string "まくり$"
	.if (. - gText_Rom_5771F1) > 0x4
	.error "gText_Rom_5771F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771F1) < 0x4
	.space 0x4 - (. - gText_Rom_5771F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:400 easy_chat_group_actions_line_400
	.globl gText_Rom_5771F5
gText_Rom_5771F5: @ 0x085771F5
	.string "みせて$"
	.if (. - gText_Rom_5771F5) > 0x4
	.error "gText_Rom_5771F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771F5) < 0x4
	.space 0x4 - (. - gText_Rom_5771F5)
	.endif
	@ Replaced baserom.gba range: offset=0x5771F9, size=0x6
	.byte 0x20, 0x13, 0xFF, 0x20, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_actions.h:418 easy_chat_group_actions_line_418
	.globl gText_Rom_5771FF
gText_Rom_5771FF: @ 0x085771FF
	.string "めざす$"
	.if (. - gText_Rom_5771FF) > 0x4
	.error "gText_Rom_5771FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771FF) < 0x4
	.space 0x4 - (. - gText_Rom_5771FF)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:424 easy_chat_group_actions_line_424
	.globl gText_Rom_577203
gText_Rom_577203: @ 0x08577203
	.string "もって$"
	.if (. - gText_Rom_577203) > 0x4
	.error "gText_Rom_577203 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577203) < 0x4
	.space 0x4 - (. - gText_Rom_577203)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:430 easy_chat_group_actions_line_430
	.globl gText_Rom_577207
gText_Rom_577207: @ 0x08577207
	.string "ゆずる$"
	.if (. - gText_Rom_577207) > 0x4
	.error "gText_Rom_577207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577207) < 0x4
	.space 0x4 - (. - gText_Rom_577207)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:436 easy_chat_group_actions_line_436
	.globl gText_Rom_57720B
gText_Rom_57720B: @ 0x0857720B
	.string "ゆるす$"
	.if (. - gText_Rom_57720B) > 0x4
	.error "gText_Rom_57720B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57720B) < 0x4
	.space 0x4 - (. - gText_Rom_57720B)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:442 easy_chat_group_actions_line_442
	.globl gText_Rom_57720F
gText_Rom_57720F: @ 0x0857720F
	.string "ゆるせ$"
	.if (. - gText_Rom_57720F) > 0x4
	.error "gText_Rom_57720F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57720F) < 0x4
	.space 0x4 - (. - gText_Rom_57720F)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:448 easy_chat_group_actions_line_448
	.globl gText_Rom_577213
gText_Rom_577213: @ 0x08577213
	.string "られない$"
	.if (. - gText_Rom_577213) > 0x5
	.error "gText_Rom_577213 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577213) < 0x5
	.space 0x5 - (. - gText_Rom_577213)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:454 easy_chat_group_actions_line_454
	.globl gText_Rom_577218
gText_Rom_577218: @ 0x08577218
	.string "られる$"
	.if (. - gText_Rom_577218) > 0x4
	.error "gText_Rom_577218 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577218) < 0x4
	.space 0x4 - (. - gText_Rom_577218)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:460 easy_chat_group_actions_line_460
	.globl gText_Rom_57721C
gText_Rom_57721C: @ 0x0857721C
	.string "わかる$"
	.if (. - gText_Rom_57721C) > 0x4
	.error "gText_Rom_57721C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57721C) < 0x4
	.space 0x4 - (. - gText_Rom_57721C)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:466 easy_chat_group_actions_line_466
	.globl gText_Rom_577220
gText_Rom_577220: @ 0x08577220
	.string "わすれ$"
	.if (. - gText_Rom_577220) > 0x4
	.error "gText_Rom_577220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577220) < 0x4
	.space 0x4 - (. - gText_Rom_577220)
	.endif
	@ Replaced baserom.gba range: offset=0x577224, size=0x3A8
	.byte 0xF0, 0x70, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF3, 0x70, 0x57, 0x08
	.byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF8, 0x70, 0x57, 0x08, 0x02, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xFC, 0x70, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x00, 0x71, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x71, 0x57, 0x08
	.byte 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x71, 0x57, 0x08, 0x06, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x0C, 0x71, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x10, 0x71, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x71, 0x57, 0x08
	.byte 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x17, 0x71, 0x57, 0x08, 0x0A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x1A, 0x71, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x1E, 0x71, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x21, 0x71, 0x57, 0x08
	.byte 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x25, 0x71, 0x57, 0x08, 0x0E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x29, 0x71, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x2D, 0x71, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x71, 0x57, 0x08
	.byte 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x37, 0x71, 0x57, 0x08, 0x12, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x3B, 0x71, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x3F, 0x71, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x43, 0x71, 0x57, 0x08
	.byte 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x71, 0x57, 0x08, 0x16, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x4E, 0x71, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x52, 0x71, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x55, 0x71, 0x57, 0x08
	.byte 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x59, 0x71, 0x57, 0x08, 0x1A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x5C, 0x71, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x5F, 0x71, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x63, 0x71, 0x57, 0x08
	.byte 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x71, 0x57, 0x08, 0x1E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x6A, 0x71, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x6E, 0x71, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x72, 0x71, 0x57, 0x08
	.byte 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x71, 0x57, 0x08, 0x22, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x79, 0x71, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x7D, 0x71, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x81, 0x71, 0x57, 0x08
	.byte 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x86, 0x71, 0x57, 0x08, 0x26, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x89, 0x71, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x8E, 0x71, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x91, 0x71, 0x57, 0x08
	.byte 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x95, 0x71, 0x57, 0x08, 0x2A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x99, 0x71, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x9D, 0x71, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA2, 0x71, 0x57, 0x08
	.byte 0x2D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA7, 0x71, 0x57, 0x08, 0x2E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xAB, 0x71, 0x57, 0x08, 0x2F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xAF, 0x71, 0x57, 0x08, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB2, 0x71, 0x57, 0x08
	.byte 0x31, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB6, 0x71, 0x57, 0x08, 0x32, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xBA, 0x71, 0x57, 0x08, 0x33, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xBE, 0x71, 0x57, 0x08, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC1, 0x71, 0x57, 0x08
	.byte 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC5, 0x71, 0x57, 0x08, 0x36, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xC8, 0x71, 0x57, 0x08, 0x37, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xCC, 0x71, 0x57, 0x08, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD0, 0x71, 0x57, 0x08
	.byte 0x39, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD5, 0x71, 0x57, 0x08, 0x3A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xDA, 0x71, 0x57, 0x08, 0x3B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xDE, 0x71, 0x57, 0x08, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE2, 0x71, 0x57, 0x08
	.byte 0x3D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE7, 0x71, 0x57, 0x08, 0x3E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xEB, 0x71, 0x57, 0x08, 0x3F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xEE, 0x71, 0x57, 0x08, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF1, 0x71, 0x57, 0x08
	.byte 0x41, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF5, 0x71, 0x57, 0x08, 0x42, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xF9, 0x71, 0x57, 0x08, 0x43, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xFC, 0x71, 0x57, 0x08, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFF, 0x71, 0x57, 0x08
	.byte 0x45, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x72, 0x57, 0x08, 0x46, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x07, 0x72, 0x57, 0x08, 0x47, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x0B, 0x72, 0x57, 0x08, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x72, 0x57, 0x08
	.byte 0x49, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x72, 0x57, 0x08, 0x4A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x18, 0x72, 0x57, 0x08, 0x4B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x1C, 0x72, 0x57, 0x08, 0x4C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x72, 0x57, 0x08
	.byte 0x4D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:4 easy_chat_group_lifestyle_line_4
	.globl gText_Rom_5775CC
gText_Rom_5775CC: @ 0x085775CC
	.string "アルバイト$"
	.if (. - gText_Rom_5775CC) > 0x6
	.error "gText_Rom_5775CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775CC) < 0x6
	.space 0x6 - (. - gText_Rom_5775CC)
	.endif
	@ Replaced baserom.gba range: offset=0x5775D2, size=0x3
	.byte 0x03, 0x11, 0xFF

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:16 easy_chat_group_lifestyle_line_16
	.globl gText_Rom_5775D5
gText_Rom_5775D5: @ 0x085775D5
	.string "おかね$"
	.if (. - gText_Rom_5775D5) > 0x4
	.error "gText_Rom_5775D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775D5) < 0x4
	.space 0x4 - (. - gText_Rom_5775D5)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:22 easy_chat_group_lifestyle_line_22 (+1 aliases)
	.globl gText_Rom_5775D9
gText_Rom_5775D9: @ 0x085775D9
	.string "おこづかい$"
	.if (. - gText_Rom_5775D9) > 0x6
	.error "gText_Rom_5775D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775D9) < 0x6
	.space 0x6 - (. - gText_Rom_5775D9)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:28 easy_chat_group_lifestyle_line_28
	.globl gText_Rom_5775DF
gText_Rom_5775DF: @ 0x085775DF
	.string "おふろ$"
	.if (. - gText_Rom_5775DF) > 0x4
	.error "gText_Rom_5775DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775DF) < 0x4
	.space 0x4 - (. - gText_Rom_5775DF)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:34 easy_chat_group_lifestyle_line_34 (+1 aliases)
	.globl gText_Rom_5775E3
gText_Rom_5775E3: @ 0x085775E3
	.string "かいわ$"
	.if (. - gText_Rom_5775E3) > 0x4
	.error "gText_Rom_5775E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775E3) < 0x4
	.space 0x4 - (. - gText_Rom_5775E3)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:40 easy_chat_group_lifestyle_line_40
	.globl gText_Rom_5775E7
gText_Rom_5775E7: @ 0x085775E7
	.string "がっこう$"
	.if (. - gText_Rom_5775E7) > 0x5
	.error "gText_Rom_5775E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775E7) < 0x5
	.space 0x5 - (. - gText_Rom_5775E7)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:46 easy_chat_group_lifestyle_line_46
	.globl gText_Rom_5775EC
gText_Rom_5775EC: @ 0x085775EC
	.string "きねん$"
	.if (. - gText_Rom_5775EC) > 0x4
	.error "gText_Rom_5775EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775EC) < 0x4
	.space 0x4 - (. - gText_Rom_5775EC)
	.endif
	@ Replaced baserom.gba range: offset=0x5775F0, size=0x3
	.byte 0x08, 0x0E, 0xFF

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:58 easy_chat_group_lifestyle_line_58
	.globl gText_Rom_5775F3
gText_Rom_5775F3: @ 0x085775F3
	.string "グループ$"
	.if (. - gText_Rom_5775F3) > 0x5
	.error "gText_Rom_5775F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775F3) < 0x5
	.space 0x5 - (. - gText_Rom_5775F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:64 easy_chat_group_lifestyle_line_64
	.globl gText_Rom_5775F8
gText_Rom_5775F8: @ 0x085775F8
	.string "ことば$"
	.if (. - gText_Rom_5775F8) > 0x4
	.error "gText_Rom_5775F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775F8) < 0x4
	.space 0x4 - (. - gText_Rom_5775F8)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:70 easy_chat_group_lifestyle_line_70
	.globl gText_Rom_5775FC
gText_Rom_5775FC: @ 0x085775FC
	.string "コンビニ$"
	.if (. - gText_Rom_5775FC) > 0x5
	.error "gText_Rom_5775FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5775FC) < 0x5
	.space 0x5 - (. - gText_Rom_5775FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:76 easy_chat_group_lifestyle_line_76
	.globl gText_Rom_577601
gText_Rom_577601: @ 0x08577601
	.string "サービス$"
	.if (. - gText_Rom_577601) > 0x5
	.error "gText_Rom_577601 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577601) < 0x5
	.space 0x5 - (. - gText_Rom_577601)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:82 easy_chat_group_lifestyle_line_82
	.globl gText_Rom_577606
gText_Rom_577606: @ 0x08577606
	.string "しごと$"
	.if (. - gText_Rom_577606) > 0x4
	.error "gText_Rom_577606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577606) < 0x4
	.space 0x4 - (. - gText_Rom_577606)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:88 easy_chat_group_lifestyle_line_88
	.globl gText_Rom_57760A
gText_Rom_57760A: @ 0x0857760A
	.string "システム$"
	.if (. - gText_Rom_57760A) > 0x5
	.error "gText_Rom_57760A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57760A) < 0x5
	.space 0x5 - (. - gText_Rom_57760A)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:94 easy_chat_group_lifestyle_line_94
	.globl gText_Rom_57760F
gText_Rom_57760F: @ 0x0857760F
	.string "しゅぎょう$"
	.if (. - gText_Rom_57760F) > 0x6
	.error "gText_Rom_57760F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57760F) < 0x6
	.space 0x6 - (. - gText_Rom_57760F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:100 easy_chat_group_lifestyle_line_100
	.globl gText_Rom_577615
gText_Rom_577615: @ 0x08577615
	.string "じゅぎょう$"
	.if (. - gText_Rom_577615) > 0x6
	.error "gText_Rom_577615 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577615) < 0x6
	.space 0x6 - (. - gText_Rom_577615)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:106 easy_chat_group_lifestyle_line_106
	.globl gText_Rom_57761B
gText_Rom_57761B: @ 0x0857761B
	.string "じゅく$"
	.if (. - gText_Rom_57761B) > 0x4
	.error "gText_Rom_57761B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57761B) < 0x4
	.space 0x4 - (. - gText_Rom_57761B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:112 easy_chat_group_lifestyle_line_112
	.globl gText_Rom_57761F
gText_Rom_57761F: @ 0x0857761F
	.string "じょうほう$"
	.if (. - gText_Rom_57761F) > 0x6
	.error "gText_Rom_57761F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57761F) < 0x6
	.space 0x6 - (. - gText_Rom_57761F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:118 easy_chat_group_lifestyle_line_118 (+1 aliases)
	.globl gText_Rom_577625
gText_Rom_577625: @ 0x08577625
	.string "せいかつ$"
	.if (. - gText_Rom_577625) > 0x5
	.error "gText_Rom_577625 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577625) < 0x5
	.space 0x5 - (. - gText_Rom_577625)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:124 easy_chat_group_lifestyle_line_124
	.globl gText_Rom_57762A
gText_Rom_57762A: @ 0x0857762A
	.string "せんせい$"
	.if (. - gText_Rom_57762A) > 0x5
	.error "gText_Rom_57762A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57762A) < 0x5
	.space 0x5 - (. - gText_Rom_57762A)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:130 easy_chat_group_lifestyle_line_130
	.globl gText_Rom_57762F
gText_Rom_57762F: @ 0x0857762F
	.string "たいかい$"
	.if (. - gText_Rom_57762F) > 0x5
	.error "gText_Rom_57762F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57762F) < 0x5
	.space 0x5 - (. - gText_Rom_57762F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:136 easy_chat_group_lifestyle_line_136
	.globl gText_Rom_577634
gText_Rom_577634: @ 0x08577634
	.string "てがみ$"
	.if (. - gText_Rom_577634) > 0x4
	.error "gText_Rom_577634 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577634) < 0x4
	.space 0x4 - (. - gText_Rom_577634)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:142 easy_chat_group_lifestyle_line_142
	.globl gText_Rom_577638
gText_Rom_577638: @ 0x08577638
	.string "できごと$"
	.if (. - gText_Rom_577638) > 0x5
	.error "gText_Rom_577638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577638) < 0x5
	.space 0x5 - (. - gText_Rom_577638)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:148 easy_chat_group_lifestyle_line_148
	.globl gText_Rom_57763D
gText_Rom_57763D: @ 0x0857763D
	.string "デジタル$"
	.if (. - gText_Rom_57763D) > 0x5
	.error "gText_Rom_57763D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57763D) < 0x5
	.space 0x5 - (. - gText_Rom_57763D)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:154 easy_chat_group_lifestyle_line_154
	.globl gText_Rom_577642
gText_Rom_577642: @ 0x08577642
	.string "テスト$"
	.if (. - gText_Rom_577642) > 0x4
	.error "gText_Rom_577642 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577642) < 0x4
	.space 0x4 - (. - gText_Rom_577642)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:160 easy_chat_group_lifestyle_line_160
	.globl gText_Rom_577646
gText_Rom_577646: @ 0x08577646
	.string "デパート$"
	.if (. - gText_Rom_577646) > 0x5
	.error "gText_Rom_577646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577646) < 0x5
	.space 0x5 - (. - gText_Rom_577646)
	.endif

	@ src/data/decoration/header.h:636 header_line_636 (+1 aliases)
	.globl gText_Rom_57764B
gText_Rom_57764B: @ 0x0857764B
	.string "テレビ$"
	.if (. - gText_Rom_57764B) > 0x4
	.error "gText_Rom_57764B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764B) < 0x4
	.space 0x4 - (. - gText_Rom_57764B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:172 easy_chat_group_lifestyle_line_172
	.globl gText_Rom_57764F
gText_Rom_57764F: @ 0x0857764F
	.string "でんわ$"
	.if (. - gText_Rom_57764F) > 0x4
	.error "gText_Rom_57764F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57764F) < 0x4
	.space 0x4 - (. - gText_Rom_57764F)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_577653
gText_Rom_577653: @ 0x08577653
	.string "どうぐ$"
	.if (. - gText_Rom_577653) > 0x4
	.error "gText_Rom_577653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577653) < 0x4
	.space 0x4 - (. - gText_Rom_577653)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:184 easy_chat_group_lifestyle_line_184 (+5 aliases)
	.globl gText_Rom_577657
gText_Rom_577657: @ 0x08577657
	.string "なまえ$"
	.if (. - gText_Rom_577657) > 0x4
	.error "gText_Rom_577657 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577657) < 0x4
	.space 0x4 - (. - gText_Rom_577657)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:190 easy_chat_group_lifestyle_line_190
	.globl gText_Rom_57765B
gText_Rom_57765B: @ 0x0857765B
	.string "ニュース$"
	.if (. - gText_Rom_57765B) > 0x5
	.error "gText_Rom_57765B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57765B) < 0x5
	.space 0x5 - (. - gText_Rom_57765B)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:196 easy_chat_group_lifestyle_line_196
	.globl gText_Rom_577660
gText_Rom_577660: @ 0x08577660
	.string "にんき$"
	.if (. - gText_Rom_577660) > 0x4
	.error "gText_Rom_577660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577660) < 0x4
	.space 0x4 - (. - gText_Rom_577660)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:202 easy_chat_group_lifestyle_line_202
	.globl gText_Rom_577664
gText_Rom_577664: @ 0x08577664
	.string "パーティー$"
	.if (. - gText_Rom_577664) > 0x6
	.error "gText_Rom_577664 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577664) < 0x6
	.space 0x6 - (. - gText_Rom_577664)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:208 easy_chat_group_lifestyle_line_208
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57766A
gText_Rom_57766A: @ 0x0857766A
	.string "べんきょう$"
	.if (. - gText_Rom_57766A) != 0x6
	.error "gText_Rom_57766A must retain its original byte length"
	.endif
	.globl gText_Rom_57766C
	.set gText_Rom_57766C, gText_Rom_57766A + 0x2

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:214 easy_chat_group_lifestyle_line_214
	.globl gText_Rom_577670
gText_Rom_577670: @ 0x08577670
	.string "マシン$"
	.if (. - gText_Rom_577670) > 0x4
	.error "gText_Rom_577670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577670) < 0x4
	.space 0x4 - (. - gText_Rom_577670)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_577674
gText_Rom_577674: @ 0x08577674
	.string "メール$"
	.if (. - gText_Rom_577674) > 0x4
	.error "gText_Rom_577674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577674) < 0x4
	.space 0x4 - (. - gText_Rom_577674)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:226 easy_chat_group_lifestyle_line_226
	.globl gText_Rom_577678
gText_Rom_577678: @ 0x08577678
	.string "メッセージ$"
	.if (. - gText_Rom_577678) > 0x6
	.error "gText_Rom_577678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577678) < 0x6
	.space 0x6 - (. - gText_Rom_577678)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:232 easy_chat_group_lifestyle_line_232
	.globl gText_Rom_57767E
gText_Rom_57767E: @ 0x0857767E
	.string "やくそく$"
	.if (. - gText_Rom_57767E) > 0x5
	.error "gText_Rom_57767E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57767E) < 0x5
	.space 0x5 - (. - gText_Rom_57767E)
	.endif
	@ Replaced baserom.gba range: offset=0x577683, size=0x3
	.byte 0x25, 0x22, 0xFF

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:244 easy_chat_group_lifestyle_line_244
	.globl gText_Rom_577686
gText_Rom_577686: @ 0x08577686
	.string "ようちえん$"
	.if (. - gText_Rom_577686) > 0x6
	.error "gText_Rom_577686 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577686) < 0x6
	.space 0x6 - (. - gText_Rom_577686)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:250 easy_chat_group_lifestyle_line_250
	.globl gText_Rom_57768C
gText_Rom_57768C: @ 0x0857768C
	.string "ライフ$"
	.if (. - gText_Rom_57768C) > 0x4
	.error "gText_Rom_57768C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57768C) < 0x4
	.space 0x4 - (. - gText_Rom_57768C)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:256 easy_chat_group_lifestyle_line_256
	.globl gText_Rom_577690
gText_Rom_577690: @ 0x08577690
	.string "ラジオ$"
	.if (. - gText_Rom_577690) > 0x4
	.error "gText_Rom_577690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577690) < 0x4
	.space 0x4 - (. - gText_Rom_577690)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:262 easy_chat_group_lifestyle_line_262
	.globl gText_Rom_577694
gText_Rom_577694: @ 0x08577694
	.string "レンタル$"
	.if (. - gText_Rom_577694) > 0x5
	.error "gText_Rom_577694 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577694) < 0x5
	.space 0x5 - (. - gText_Rom_577694)
	.endif

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:268 easy_chat_group_lifestyle_line_268
	.globl gText_Rom_577699
gText_Rom_577699: @ 0x08577699
	.string "ワールド$"
	.if (. - gText_Rom_577699) > 0x5
	.error "gText_Rom_577699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577699) < 0x5
	.space 0x5 - (. - gText_Rom_577699)
	.endif
	@ Replaced baserom.gba range: offset=0x57769E, size=0x21E
	.byte 0x00, 0x00, 0xCC, 0x75, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD2, 0x75
	.byte 0x57, 0x08, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD5, 0x75, 0x57, 0x08, 0x02, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD9, 0x75, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xDF, 0x75, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE3, 0x75
	.byte 0x57, 0x08, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE7, 0x75, 0x57, 0x08, 0x06, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xEC, 0x75, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xF0, 0x75, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF3, 0x75
	.byte 0x57, 0x08, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF8, 0x75, 0x57, 0x08, 0x0A, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFC, 0x75, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x01, 0x76, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x76
	.byte 0x57, 0x08, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x76, 0x57, 0x08, 0x0E, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F, 0x76, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x15, 0x76, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1B, 0x76
	.byte 0x57, 0x08, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1F, 0x76, 0x57, 0x08, 0x12, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x25, 0x76, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x2A, 0x76, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2F, 0x76
	.byte 0x57, 0x08, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x34, 0x76, 0x57, 0x08, 0x16, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x76, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x3D, 0x76, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x42, 0x76
	.byte 0x57, 0x08, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x76, 0x57, 0x08, 0x1A, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4B, 0x76, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x4F, 0x76, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x53, 0x76
	.byte 0x57, 0x08, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x57, 0x76, 0x57, 0x08, 0x1E, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5B, 0x76, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x60, 0x76, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x76
	.byte 0x57, 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6A, 0x76, 0x57, 0x08, 0x22, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x76, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x74, 0x76, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x78, 0x76
	.byte 0x57, 0x08, 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7E, 0x76, 0x57, 0x08, 0x26, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x83, 0x76, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x86, 0x76, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8C, 0x76
	.byte 0x57, 0x08, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x90, 0x76, 0x57, 0x08, 0x2A, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x94, 0x76, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x99, 0x76, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00

	@ src/data/easy_chat/easy_chat_group_hobbies.h:4 easy_chat_group_hobbies_line_4
	.globl gText_Rom_5778BC
gText_Rom_5778BC: @ 0x085778BC
	.string "アイドル$"
	.if (. - gText_Rom_5778BC) > 0x5
	.error "gText_Rom_5778BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778BC) < 0x5
	.space 0x5 - (. - gText_Rom_5778BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:10 easy_chat_group_hobbies_line_10
	.globl gText_Rom_5778C1
gText_Rom_5778C1: @ 0x085778C1
	.string "アニメ$"
	.if (. - gText_Rom_5778C1) > 0x4
	.error "gText_Rom_5778C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C1) < 0x4
	.space 0x4 - (. - gText_Rom_5778C1)
	.endif
	@ Replaced baserom.gba range: offset=0x5778C5, size=0x3
	.byte 0x03, 0x10, 0xFF

	@ src/data/easy_chat/easy_chat_group_hobbies.h:22 easy_chat_group_hobbies_line_22
	.globl gText_Rom_5778C8
gText_Rom_5778C8: @ 0x085778C8
	.string "えいが$"
	.if (. - gText_Rom_5778C8) > 0x4
	.error "gText_Rom_5778C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C8) < 0x4
	.space 0x4 - (. - gText_Rom_5778C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:28 easy_chat_group_hobbies_line_28
	.globl gText_Rom_5778CC
gText_Rom_5778CC: @ 0x085778CC
	.string "おかし$"
	.if (. - gText_Rom_5778CC) > 0x4
	.error "gText_Rom_5778CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778CC) < 0x4
	.space 0x4 - (. - gText_Rom_5778CC)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:34 easy_chat_group_hobbies_line_34 (+1 aliases)
	.globl gText_Rom_5778D0
gText_Rom_5778D0: @ 0x085778D0
	.string "おしゃべり$"
	.if (. - gText_Rom_5778D0) > 0x6
	.error "gText_Rom_5778D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D0) < 0x6
	.space 0x6 - (. - gText_Rom_5778D0)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:40 easy_chat_group_hobbies_line_40
	.globl gText_Rom_5778D6
gText_Rom_5778D6: @ 0x085778D6
	.string "おままごと$"
	.if (. - gText_Rom_5778D6) > 0x6
	.error "gText_Rom_5778D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D6) < 0x6
	.space 0x6 - (. - gText_Rom_5778D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:46 easy_chat_group_hobbies_line_46
	.globl gText_Rom_5778DC
gText_Rom_5778DC: @ 0x085778DC
	.string "おもちゃ$"
	.if (. - gText_Rom_5778DC) > 0x5
	.error "gText_Rom_5778DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778DC) < 0x5
	.space 0x5 - (. - gText_Rom_5778DC)
	.endif

	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5778E1
gText_Rom_5778E1: @ 0x085778E1
	.string "おんがく$"
	.if (. - gText_Rom_5778E1) > 0x5
	.error "gText_Rom_5778E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778E1) < 0x5
	.space 0x5 - (. - gText_Rom_5778E1)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:58 easy_chat_group_hobbies_line_58 (+1 aliases)
	.globl gText_Rom_5778E6
gText_Rom_5778E6: @ 0x085778E6
	.string "カード$"
	.if (. - gText_Rom_5778E6) > 0x4
	.error "gText_Rom_5778E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778E6) < 0x4
	.space 0x4 - (. - gText_Rom_5778E6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:64 easy_chat_group_hobbies_line_64
	.globl gText_Rom_5778EA
gText_Rom_5778EA: @ 0x085778EA
	.string "かいもの$"
	.if (. - gText_Rom_5778EA) > 0x5
	.error "gText_Rom_5778EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778EA) < 0x5
	.space 0x5 - (. - gText_Rom_5778EA)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:70 easy_chat_group_hobbies_line_70
	.globl gText_Rom_5778EF
gText_Rom_5778EF: @ 0x085778EF
	.string "カメラ$"
	.if (. - gText_Rom_5778EF) > 0x4
	.error "gText_Rom_5778EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778EF) < 0x4
	.space 0x4 - (. - gText_Rom_5778EF)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:76 easy_chat_group_hobbies_line_76
	.globl gText_Rom_5778F3
gText_Rom_5778F3: @ 0x085778F3
	.string "かんしょう$"
	.if (. - gText_Rom_5778F3) > 0x6
	.error "gText_Rom_5778F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778F3) < 0x6
	.space 0x6 - (. - gText_Rom_5778F3)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:82 easy_chat_group_hobbies_line_82
	.globl gText_Rom_5778F9
gText_Rom_5778F9: @ 0x085778F9
	.string "かんせん$"
	.if (. - gText_Rom_5778F9) > 0x5
	.error "gText_Rom_5778F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778F9) < 0x5
	.space 0x5 - (. - gText_Rom_5778F9)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:88 easy_chat_group_hobbies_line_88
	.globl gText_Rom_5778FE
gText_Rom_5778FE: @ 0x085778FE
	.string "グルメ$"
	.if (. - gText_Rom_5778FE) > 0x4
	.error "gText_Rom_5778FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778FE) < 0x4
	.space 0x4 - (. - gText_Rom_5778FE)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:94 easy_chat_group_hobbies_line_94
	.globl gText_Rom_577902
gText_Rom_577902: @ 0x08577902
	.string "ゲーム$"
	.if (. - gText_Rom_577902) > 0x4
	.error "gText_Rom_577902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577902) < 0x4
	.space 0x4 - (. - gText_Rom_577902)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:100 easy_chat_group_hobbies_line_100
	.globl gText_Rom_577906
gText_Rom_577906: @ 0x08577906
	.string "ごっこ$"
	.if (. - gText_Rom_577906) > 0x4
	.error "gText_Rom_577906 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577906) < 0x4
	.space 0x4 - (. - gText_Rom_577906)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:106 easy_chat_group_hobbies_line_106
	.globl gText_Rom_57790A
gText_Rom_57790A: @ 0x0857790A
	.string "コレクション$"
	.if (. - gText_Rom_57790A) > 0x7
	.error "gText_Rom_57790A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57790A) < 0x7
	.space 0x7 - (. - gText_Rom_57790A)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:112 easy_chat_group_hobbies_line_112
	.globl gText_Rom_577911
gText_Rom_577911: @ 0x08577911
	.string "コンプリート$"
	.if (. - gText_Rom_577911) > 0x7
	.error "gText_Rom_577911 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577911) < 0x7
	.space 0x7 - (. - gText_Rom_577911)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:118 easy_chat_group_hobbies_line_118
	.globl gText_Rom_577918
gText_Rom_577918: @ 0x08577918
	.string "ざっし$"
	.if (. - gText_Rom_577918) > 0x4
	.error "gText_Rom_577918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577918) < 0x4
	.space 0x4 - (. - gText_Rom_577918)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:124 easy_chat_group_hobbies_line_124
	.globl gText_Rom_57791C
gText_Rom_57791C: @ 0x0857791C
	.string "さんぽ$"
	.if (. - gText_Rom_57791C) > 0x4
	.error "gText_Rom_57791C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57791C) < 0x4
	.space 0x4 - (. - gText_Rom_57791C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_577920
gText_Rom_577920: @ 0x08577920
	.string "じてんしゃ$"
	.if (. - gText_Rom_577920) > 0x6
	.error "gText_Rom_577920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577920) < 0x6
	.space 0x6 - (. - gText_Rom_577920)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:136 easy_chat_group_hobbies_line_136 (+1 aliases)
	.globl gText_Rom_577926
gText_Rom_577926: @ 0x08577926
	.string "しゅみ$"
	.if (. - gText_Rom_577926) > 0x4
	.error "gText_Rom_577926 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577926) < 0x4
	.space 0x4 - (. - gText_Rom_577926)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:142 easy_chat_group_hobbies_line_142
	.globl gText_Rom_57792A
gText_Rom_57792A: @ 0x0857792A
	.string "スポーツ$"
	.if (. - gText_Rom_57792A) > 0x5
	.error "gText_Rom_57792A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57792A) < 0x5
	.space 0x5 - (. - gText_Rom_57792A)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:148 easy_chat_group_hobbies_line_148
	.globl gText_Rom_57792F
gText_Rom_57792F: @ 0x0857792F
	.string "ソフト$"
	.if (. - gText_Rom_57792F) > 0x4
	.error "gText_Rom_57792F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57792F) < 0x4
	.space 0x4 - (. - gText_Rom_57792F)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:154 easy_chat_group_hobbies_line_154
	.globl gText_Rom_577933
gText_Rom_577933: @ 0x08577933
	.string "ソング$"
	.if (. - gText_Rom_577933) > 0x4
	.error "gText_Rom_577933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577933) < 0x4
	.space 0x4 - (. - gText_Rom_577933)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:160 easy_chat_group_hobbies_line_160
	.globl gText_Rom_577937
gText_Rom_577937: @ 0x08577937
	.string "ダイエット$"
	.if (. - gText_Rom_577937) > 0x6
	.error "gText_Rom_577937 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577937) < 0x6
	.space 0x6 - (. - gText_Rom_577937)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:166 easy_chat_group_hobbies_line_166
	.globl gText_Rom_57793D
gText_Rom_57793D: @ 0x0857793D
	.string "たからもの$"
	.if (. - gText_Rom_57793D) > 0x6
	.error "gText_Rom_57793D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57793D) < 0x6
	.space 0x6 - (. - gText_Rom_57793D)
	.endif
	@ Replaced baserom.gba range: offset=0x577943, size=0x3
	.byte 0x10, 0x47, 0xFF

	@ src/data/easy_chat/easy_chat_group_hobbies.h:178 easy_chat_group_hobbies_line_178
	.globl gText_Rom_577946
gText_Rom_577946: @ 0x08577946
	.string "ダンス$"
	.if (. - gText_Rom_577946) > 0x4
	.error "gText_Rom_577946 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577946) < 0x4
	.space 0x4 - (. - gText_Rom_577946)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:184 easy_chat_group_hobbies_line_184
	.globl gText_Rom_57794A
gText_Rom_57794A: @ 0x0857794A
	.string "チャンネル$"
	.if (. - gText_Rom_57794A) > 0x6
	.error "gText_Rom_57794A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57794A) < 0x6
	.space 0x6 - (. - gText_Rom_57794A)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:190 easy_chat_group_hobbies_line_190
	.globl gText_Rom_577950
gText_Rom_577950: @ 0x08577950
	.string "つくり$"
	.if (. - gText_Rom_577950) > 0x4
	.error "gText_Rom_577950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577950) < 0x4
	.space 0x4 - (. - gText_Rom_577950)
	.endif
	@ Replaced baserom.gba range: offset=0x577954, size=0x3
	.byte 0x12, 0x28, 0xFF

	@ src/data/easy_chat/easy_chat_group_hobbies.h:202 easy_chat_group_hobbies_line_202
	.globl gText_Rom_577957
gText_Rom_577957: @ 0x08577957
	.string "デート$"
	.if (. - gText_Rom_577957) > 0x4
	.error "gText_Rom_577957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577957) < 0x4
	.space 0x4 - (. - gText_Rom_577957)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:208 easy_chat_group_hobbies_line_208
	.globl gText_Rom_57795B
gText_Rom_57795B: @ 0x0857795B
	.string "デザイン$"
	.if (. - gText_Rom_57795B) > 0x5
	.error "gText_Rom_57795B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57795B) < 0x5
	.space 0x5 - (. - gText_Rom_57795B)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:214 easy_chat_group_hobbies_line_214
	.globl gText_Rom_577960
gText_Rom_577960: @ 0x08577960
	.string "でんしゃ$"
	.if (. - gText_Rom_577960) > 0x5
	.error "gText_Rom_577960 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577960) < 0x5
	.space 0x5 - (. - gText_Rom_577960)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:220 easy_chat_group_hobbies_line_220 (+1 aliases)
	.globl gText_Rom_577965
gText_Rom_577965: @ 0x08577965
	.string "ぬいぐるみ$"
	.if (. - gText_Rom_577965) > 0x6
	.error "gText_Rom_577965 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577965) < 0x6
	.space 0x6 - (. - gText_Rom_577965)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:226 easy_chat_group_hobbies_line_226 (+1 aliases)
	.globl gText_Rom_57796B
gText_Rom_57796B: @ 0x0857796B
	.string "パソコン$"
	.if (. - gText_Rom_57796B) > 0x5
	.error "gText_Rom_57796B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57796B) < 0x5
	.space 0x5 - (. - gText_Rom_57796B)
	.endif
	@ Replaced baserom.gba range: offset=0x577970, size=0x3
	.byte 0x1A, 0x15, 0xFF

	@ src/data/easy_chat/easy_chat_group_hobbies.h:238 easy_chat_group_hobbies_line_238
	.globl gText_Rom_577973
gText_Rom_577973: @ 0x08577973
	.string "ヒーロー$"
	.if (. - gText_Rom_577973) > 0x5
	.error "gText_Rom_577973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577973) < 0x5
	.space 0x5 - (. - gText_Rom_577973)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:244 easy_chat_group_hobbies_line_244
	.globl gText_Rom_577978
gText_Rom_577978: @ 0x08577978
	.string "ひるね$"
	.if (. - gText_Rom_577978) > 0x4
	.error "gText_Rom_577978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577978) < 0x4
	.space 0x4 - (. - gText_Rom_577978)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:250 easy_chat_group_hobbies_line_250
	.globl gText_Rom_57797C
gText_Rom_57797C: @ 0x0857797C
	.string "ヒロイン$"
	.if (. - gText_Rom_57797C) > 0x5
	.error "gText_Rom_57797C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57797C) < 0x5
	.space 0x5 - (. - gText_Rom_57797C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:256 easy_chat_group_hobbies_line_256
	.globl gText_Rom_577981
gText_Rom_577981: @ 0x08577981
	.string "ファッション$"
	.if (. - gText_Rom_577981) > 0x7
	.error "gText_Rom_577981 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577981) < 0x7
	.space 0x7 - (. - gText_Rom_577981)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:262 easy_chat_group_hobbies_line_262
	.globl gText_Rom_577988
gText_Rom_577988: @ 0x08577988
	.string "ぼうけん$"
	.if (. - gText_Rom_577988) > 0x5
	.error "gText_Rom_577988 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577988) < 0x5
	.space 0x5 - (. - gText_Rom_577988)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:268 easy_chat_group_hobbies_line_268
	.globl gText_Rom_57798D
gText_Rom_57798D: @ 0x0857798D
	.string "ボード$"
	.if (. - gText_Rom_57798D) > 0x4
	.error "gText_Rom_57798D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57798D) < 0x4
	.space 0x4 - (. - gText_Rom_57798D)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_577991
gText_Rom_577991: @ 0x08577991
	.string "ボール$"
	.if (. - gText_Rom_577991) > 0x4
	.error "gText_Rom_577991 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577991) < 0x4
	.space 0x4 - (. - gText_Rom_577991)
	.endif
	@ Replaced baserom.gba range: offset=0x577995, size=0x3
	.byte 0x1E, 0x2E, 0xFF

	@ src/data/easy_chat/easy_chat_group_hobbies.h:286 easy_chat_group_hobbies_line_286
	.globl gText_Rom_577998
gText_Rom_577998: @ 0x08577998
	.string "まつり$"
	.if (. - gText_Rom_577998) > 0x4
	.error "gText_Rom_577998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577998) < 0x4
	.space 0x4 - (. - gText_Rom_577998)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:292 easy_chat_group_hobbies_line_292
	.globl gText_Rom_57799C
gText_Rom_57799C: @ 0x0857799C
	.string "まんが$"
	.if (. - gText_Rom_57799C) > 0x4
	.error "gText_Rom_57799C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57799C) < 0x4
	.space 0x4 - (. - gText_Rom_57799C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:298 easy_chat_group_hobbies_line_298
	.globl gText_Rom_5779A0
gText_Rom_5779A0: @ 0x085779A0
	.string "やすみ$"
	.if (. - gText_Rom_5779A0) > 0x4
	.error "gText_Rom_5779A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A0) < 0x4
	.space 0x4 - (. - gText_Rom_5779A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:304 easy_chat_group_hobbies_line_304
	.globl gText_Rom_5779A4
gText_Rom_5779A4: @ 0x085779A4
	.string "よてい$"
	.if (. - gText_Rom_5779A4) > 0x4
	.error "gText_Rom_5779A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A4) < 0x4
	.space 0x4 - (. - gText_Rom_5779A4)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:310 easy_chat_group_hobbies_line_310
	.globl gText_Rom_5779A8
gText_Rom_5779A8: @ 0x085779A8
	.string "りゅうこう$"
	.if (. - gText_Rom_5779A8) > 0x6
	.error "gText_Rom_5779A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A8) < 0x6
	.space 0x6 - (. - gText_Rom_5779A8)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:316 easy_chat_group_hobbies_line_316
	.globl gText_Rom_5779AE
gText_Rom_5779AE: @ 0x085779AE
	.string "りょこう$"
	.if (. - gText_Rom_5779AE) > 0x5
	.error "gText_Rom_5779AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779AE) < 0x5
	.space 0x5 - (. - gText_Rom_5779AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:322 easy_chat_group_hobbies_line_322
	.globl gText_Rom_5779B3
gText_Rom_5779B3: @ 0x085779B3
	.string "ルック$"
	.if (. - gText_Rom_5779B3) > 0x4
	.error "gText_Rom_5779B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779B3) < 0x4
	.space 0x4 - (. - gText_Rom_5779B3)
	.endif
	@ Replaced baserom.gba range: offset=0x5779B7, size=0x28F
	.byte 0x00, 0xBC, 0x78, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC1, 0x78, 0x57
	.byte 0x08, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC5, 0x78, 0x57, 0x08, 0x02, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xC8, 0x78, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xCC, 0x78, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD0, 0x78, 0x57
	.byte 0x08, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD6, 0x78, 0x57, 0x08, 0x06, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xDC, 0x78, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xE1, 0x78, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE6, 0x78, 0x57
	.byte 0x08, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xEA, 0x78, 0x57, 0x08, 0x0A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xEF, 0x78, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xF3, 0x78, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF9, 0x78, 0x57
	.byte 0x08, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFE, 0x78, 0x57, 0x08, 0x0E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x79, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x06, 0x79, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x79, 0x57
	.byte 0x08, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x11, 0x79, 0x57, 0x08, 0x12, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x79, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x1C, 0x79, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x79, 0x57
	.byte 0x08, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x26, 0x79, 0x57, 0x08, 0x16, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x2A, 0x79, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x2F, 0x79, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x33, 0x79, 0x57
	.byte 0x08, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x37, 0x79, 0x57, 0x08, 0x1A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x3D, 0x79, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x43, 0x79, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x79, 0x57
	.byte 0x08, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4A, 0x79, 0x57, 0x08, 0x1E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x79, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x54, 0x79, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x57, 0x79, 0x57
	.byte 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5B, 0x79, 0x57, 0x08, 0x22, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x60, 0x79, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x65, 0x79, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6B, 0x79, 0x57
	.byte 0x08, 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x79, 0x57, 0x08, 0x26, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x73, 0x79, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x78, 0x79, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7C, 0x79, 0x57
	.byte 0x08, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x81, 0x79, 0x57, 0x08, 0x2A, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x88, 0x79, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x8D, 0x79, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x91, 0x79, 0x57
	.byte 0x08, 0x2D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x95, 0x79, 0x57, 0x08, 0x2E, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0x98, 0x79, 0x57, 0x08, 0x2F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0x9C, 0x79, 0x57, 0x08, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA0, 0x79, 0x57
	.byte 0x08, 0x31, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA4, 0x79, 0x57, 0x08, 0x32, 0x00, 0x00
	.byte 0x00, 0x01, 0x00, 0x00, 0x00, 0xA8, 0x79, 0x57, 0x08, 0x33, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00
	.byte 0x00, 0xAE, 0x79, 0x57, 0x08, 0x34, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB3, 0x79, 0x57
	.byte 0x08, 0x35, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x07, 0xFF, 0x01, 0x0B, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:16 easy_chat_group_time_line_16
	.globl gText_Rom_577C46
gText_Rom_577C46: @ 0x08577C46
	.string "あした$"
	.if (. - gText_Rom_577C46) > 0x4
	.error "gText_Rom_577C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C46) < 0x4
	.space 0x4 - (. - gText_Rom_577C46)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:22 easy_chat_group_time_line_22
	.globl gText_Rom_577C4A
gText_Rom_577C4A: @ 0x08577C4A
	.string "いちども$"
	.if (. - gText_Rom_577C4A) > 0x5
	.error "gText_Rom_577C4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C4A) < 0x5
	.space 0x5 - (. - gText_Rom_577C4A)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:28 easy_chat_group_time_line_28
	.globl gText_Rom_577C4F
gText_Rom_577C4F: @ 0x08577C4F
	.string "いちにち$"
	.if (. - gText_Rom_577C4F) > 0x5
	.error "gText_Rom_577C4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C4F) < 0x5
	.space 0x5 - (. - gText_Rom_577C4F)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:34 easy_chat_group_time_line_34
	.globl gText_Rom_577C54
gText_Rom_577C54: @ 0x08577C54
	.string "いつか$"
	.if (. - gText_Rom_577C54) > 0x4
	.error "gText_Rom_577C54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C54) < 0x4
	.space 0x4 - (. - gText_Rom_577C54)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:40 easy_chat_group_time_line_40
	.globl gText_Rom_577C58
gText_Rom_577C58: @ 0x08577C58
	.string "いつも$"
	.if (. - gText_Rom_577C58) > 0x4
	.error "gText_Rom_577C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C58) < 0x4
	.space 0x4 - (. - gText_Rom_577C58)
	.endif
	@ Replaced baserom.gba range: offset=0x577C5C, size=0x3
	.byte 0x02, 0x1F, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:52 easy_chat_group_time_line_52
	.globl gText_Rom_577C5F
gText_Rom_577C5F: @ 0x08577C5F
	.string "えいえん$"
	.if (. - gText_Rom_577C5F) > 0x5
	.error "gText_Rom_577C5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C5F) < 0x5
	.space 0x5 - (. - gText_Rom_577C5F)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:58 easy_chat_group_time_line_58
	.globl gText_Rom_577C64
gText_Rom_577C64: @ 0x08577C64
	.string "おととい$"
	.if (. - gText_Rom_577C64) > 0x5
	.error "gText_Rom_577C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C64) < 0x5
	.space 0x5 - (. - gText_Rom_577C64)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:64 easy_chat_group_time_line_64
	.globl gText_Rom_577C69
gText_Rom_577C69: @ 0x08577C69
	.string "おわり$"
	.if (. - gText_Rom_577C69) > 0x4
	.error "gText_Rom_577C69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C69) < 0x4
	.space 0x4 - (. - gText_Rom_577C69)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:70 easy_chat_group_time_line_70 (+1 aliases)
	.globl gText_Rom_577C6D
gText_Rom_577C6D: @ 0x08577C6D
	.string "かようび$"
	.if (. - gText_Rom_577C6D) > 0x5
	.error "gText_Rom_577C6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C6D) < 0x5
	.space 0x5 - (. - gText_Rom_577C6D)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:76 easy_chat_group_time_line_76
	.globl gText_Rom_577C72
gText_Rom_577C72: @ 0x08577C72
	.string "きのう$"
	.if (. - gText_Rom_577C72) > 0x4
	.error "gText_Rom_577C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C72) < 0x4
	.space 0x4 - (. - gText_Rom_577C72)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:82 easy_chat_group_time_line_82
	.globl gText_Rom_577C76
gText_Rom_577C76: @ 0x08577C76
	.string "きょう$"
	.if (. - gText_Rom_577C76) > 0x4
	.error "gText_Rom_577C76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C76) < 0x4
	.space 0x4 - (. - gText_Rom_577C76)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:88 easy_chat_group_time_line_88 (+1 aliases)
	.globl gText_Rom_577C7A
gText_Rom_577C7A: @ 0x08577C7A
	.string "きんようび$"
	.if (. - gText_Rom_577C7A) > 0x6
	.error "gText_Rom_577C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C7A) < 0x6
	.space 0x6 - (. - gText_Rom_577C7A)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:94 easy_chat_group_time_line_94 (+1 aliases)
	.globl gText_Rom_577C80
gText_Rom_577C80: @ 0x08577C80
	.string "げつようび$"
	.if (. - gText_Rom_577C80) > 0x6
	.error "gText_Rom_577C80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C80) < 0x6
	.space 0x6 - (. - gText_Rom_577C80)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:100 easy_chat_group_time_line_100
	.globl gText_Rom_577C86
gText_Rom_577C86: @ 0x08577C86
	.string "このあと$"
	.if (. - gText_Rom_577C86) > 0x5
	.error "gText_Rom_577C86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C86) < 0x5
	.space 0x5 - (. - gText_Rom_577C86)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:106 easy_chat_group_time_line_106
	.globl gText_Rom_577C8B
gText_Rom_577C8B: @ 0x08577C8B
	.string "このまえ$"
	.if (. - gText_Rom_577C8B) > 0x5
	.error "gText_Rom_577C8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C8B) < 0x5
	.space 0x5 - (. - gText_Rom_577C8B)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:112 easy_chat_group_time_line_112
	.globl gText_Rom_577C90
gText_Rom_577C90: @ 0x08577C90
	.string "こんど$"
	.if (. - gText_Rom_577C90) > 0x4
	.error "gText_Rom_577C90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C90) < 0x4
	.space 0x4 - (. - gText_Rom_577C90)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_577C94
gText_Rom_577C94: @ 0x08577C94
	.string "じかん$"
	.if (. - gText_Rom_577C94) > 0x4
	.error "gText_Rom_577C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C94) < 0x4
	.space 0x4 - (. - gText_Rom_577C94)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:124 easy_chat_group_time_line_124
	.globl gText_Rom_577C98
gText_Rom_577C98: @ 0x08577C98
	.string "しゅうりょう$"
	.if (. - gText_Rom_577C98) > 0x7
	.error "gText_Rom_577C98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C98) < 0x7
	.space 0x7 - (. - gText_Rom_577C98)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:130 easy_chat_group_time_line_130 (+1 aliases)
	.globl gText_Rom_577C9F
gText_Rom_577C9F: @ 0x08577C9F
	.string "すいようび$"
	.if (. - gText_Rom_577C9F) > 0x6
	.error "gText_Rom_577C9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577C9F) < 0x6
	.space 0x6 - (. - gText_Rom_577C9F)
	.endif
	@ Replaced baserom.gba range: offset=0x577CA5, size=0x3
	.byte 0x0D, 0x39, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:142 easy_chat_group_time_line_142
	.globl gText_Rom_577CA8
gText_Rom_577CA8: @ 0x08577CA8
	.string "スタート$"
	.if (. - gText_Rom_577CA8) > 0x5
	.error "gText_Rom_577CA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CA8) < 0x5
	.space 0x5 - (. - gText_Rom_577CA8)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:148 easy_chat_group_time_line_148
	.globl gText_Rom_577CAD
gText_Rom_577CAD: @ 0x08577CAD
	.string "ずっと$"
	.if (. - gText_Rom_577CAD) > 0x4
	.error "gText_Rom_577CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CAD) < 0x4
	.space 0x4 - (. - gText_Rom_577CAD)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:154 easy_chat_group_time_line_154
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577CB1
gText_Rom_577CB1: @ 0x08577CB1
	.string "ストップ$"
	.if (. - gText_Rom_577CB1) != 0x5
	.error "gText_Rom_577CB1 must retain its original byte length"
	.endif
	.globl gText_Rom_577CB2
	.set gText_Rom_577CB2, gText_Rom_577CB1 + 0x1

	@ src/data/easy_chat/easy_chat_group_time.h:160 easy_chat_group_time_line_160
	.globl gText_Rom_577CB6
gText_Rom_577CB6: @ 0x08577CB6
	.string "そのうち$"
	.if (. - gText_Rom_577CB6) > 0x5
	.error "gText_Rom_577CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CB6) < 0x5
	.space 0x5 - (. - gText_Rom_577CB6)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:166 easy_chat_group_time_line_166
	.globl gText_Rom_577CBB
gText_Rom_577CBB: @ 0x08577CBB
	.string "ついに$"
	.if (. - gText_Rom_577CBB) > 0x4
	.error "gText_Rom_577CBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CBB) < 0x4
	.space 0x4 - (. - gText_Rom_577CBB)
	.endif
	@ Replaced baserom.gba range: offset=0x577CBF, size=0x6
	.byte 0x12, 0x38, 0xFF, 0x14, 0x07, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:184 easy_chat_group_time_line_184 (+1 aliases)
	.globl gText_Rom_577CC5
gText_Rom_577CC5: @ 0x08577CC5
	.string "どようび$"
	.if (. - gText_Rom_577CC5) > 0x5
	.error "gText_Rom_577CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CC5) < 0x5
	.space 0x5 - (. - gText_Rom_577CC5)
	.endif
	@ Replaced baserom.gba range: offset=0x577CCA, size=0x3
	.byte 0x15, 0x12, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:196 easy_chat_group_time_line_196 (+1 aliases)
	.globl gText_Rom_577CCD
gText_Rom_577CCD: @ 0x08577CCD
	.string "にちようび$"
	.if (. - gText_Rom_577CCD) > 0x6
	.error "gText_Rom_577CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CCD) < 0x6
	.space 0x6 - (. - gText_Rom_577CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:202 easy_chat_group_time_line_202
	.globl gText_Rom_577CD3
gText_Rom_577CD3: @ 0x08577CD3
	.string "はじめ$"
	.if (. - gText_Rom_577CD3) > 0x4
	.error "gText_Rom_577CD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CD3) < 0x4
	.space 0x4 - (. - gText_Rom_577CD3)
	.endif
	@ Replaced baserom.gba range: offset=0x577CD7, size=0x3
	.byte 0x1A, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:214 easy_chat_group_time_line_214 (+3 aliases)
	.globl gText_Rom_577CDA
gText_Rom_577CDA: @ 0x08577CDA
	.string "ひる$"
	.if (. - gText_Rom_577CDA) > 0x3
	.error "gText_Rom_577CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CDA) < 0x3
	.space 0x3 - (. - gText_Rom_577CDA)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:220 easy_chat_group_time_line_220
	.globl gText_Rom_577CDD
gText_Rom_577CDD: @ 0x08577CDD
	.string "ふゆ$"
	.if (. - gText_Rom_577CDD) > 0x3
	.error "gText_Rom_577CDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CDD) < 0x3
	.space 0x3 - (. - gText_Rom_577CDD)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:226 easy_chat_group_time_line_226
	.globl gText_Rom_577CE0
gText_Rom_577CE0: @ 0x08577CE0
	.string "まいにち$"
	.if (. - gText_Rom_577CE0) > 0x5
	.error "gText_Rom_577CE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CE0) < 0x5
	.space 0x5 - (. - gText_Rom_577CE0)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:232 easy_chat_group_time_line_232
	.globl gText_Rom_577CE5
gText_Rom_577CE5: @ 0x08577CE5
	.string "むかし$"
	.if (. - gText_Rom_577CE5) > 0x4
	.error "gText_Rom_577CE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CE5) < 0x4
	.space 0x4 - (. - gText_Rom_577CE5)
	.endif
	@ Replaced baserom.gba range: offset=0x577CE9, size=0x3
	.byte 0x23, 0x03, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:244 easy_chat_group_time_line_244
	.globl gText_Rom_577CEC
gText_Rom_577CEC: @ 0x08577CEC
	.string "もうすぐ$"
	.if (. - gText_Rom_577CEC) > 0x5
	.error "gText_Rom_577CEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CEC) < 0x5
	.space 0x5 - (. - gText_Rom_577CEC)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:250 easy_chat_group_time_line_250 (+1 aliases)
	.globl gText_Rom_577CF1
gText_Rom_577CF1: @ 0x08577CF1
	.string "もくようび$"
	.if (. - gText_Rom_577CF1) > 0x6
	.error "gText_Rom_577CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF1) < 0x6
	.space 0x6 - (. - gText_Rom_577CF1)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:256 easy_chat_group_time_line_256
	.globl gText_Rom_577CF7
gText_Rom_577CF7: @ 0x08577CF7
	.string "よなか$"
	.if (. - gText_Rom_577CF7) > 0x4
	.error "gText_Rom_577CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF7) < 0x4
	.space 0x4 - (. - gText_Rom_577CF7)
	.endif
	@ Replaced baserom.gba range: offset=0x577CFB, size=0x3
	.byte 0x26, 0x29, 0xFF

	@ src/data/easy_chat/easy_chat_group_time.h:268 easy_chat_group_time_line_268
	.globl gText_Rom_577CFE
gText_Rom_577CFE: @ 0x08577CFE
	.string "らいしゅう$"
	.if (. - gText_Rom_577CFE) > 0x6
	.error "gText_Rom_577CFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CFE) < 0x6
	.space 0x6 - (. - gText_Rom_577CFE)
	.endif
	@ Replaced baserom.gba range: offset=0x577D04, size=0x21F
	.byte 0x40, 0x7C, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x43, 0x7C, 0x57, 0x08
	.byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7C, 0x57, 0x08, 0x02, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x4A, 0x7C, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x4F, 0x7C, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x54, 0x7C, 0x57, 0x08
	.byte 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x7C, 0x57, 0x08, 0x06, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x5C, 0x7C, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x5F, 0x7C, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x7C, 0x57, 0x08
	.byte 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x69, 0x7C, 0x57, 0x08, 0x0A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x6D, 0x7C, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x72, 0x7C, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x76, 0x7C, 0x57, 0x08
	.byte 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7A, 0x7C, 0x57, 0x08, 0x0E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x80, 0x7C, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x86, 0x7C, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8B, 0x7C, 0x57, 0x08
	.byte 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x90, 0x7C, 0x57, 0x08, 0x12, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x94, 0x7C, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0x98, 0x7C, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x9F, 0x7C, 0x57, 0x08
	.byte 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA5, 0x7C, 0x57, 0x08, 0x16, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xA8, 0x7C, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xAD, 0x7C, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB1, 0x7C, 0x57, 0x08
	.byte 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB6, 0x7C, 0x57, 0x08, 0x1A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xBB, 0x7C, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xBF, 0x7C, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC2, 0x7C, 0x57, 0x08
	.byte 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC5, 0x7C, 0x57, 0x08, 0x1E, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xCA, 0x7C, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xCD, 0x7C, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD3, 0x7C, 0x57, 0x08
	.byte 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD7, 0x7C, 0x57, 0x08, 0x22, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xDA, 0x7C, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xDD, 0x7C, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE0, 0x7C, 0x57, 0x08
	.byte 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE5, 0x7C, 0x57, 0x08, 0x26, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xE9, 0x7C, 0x57, 0x08, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xEC, 0x7C, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF1, 0x7C, 0x57, 0x08
	.byte 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF7, 0x7C, 0x57, 0x08, 0x2A, 0x00, 0x00, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0xFB, 0x7C, 0x57, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
	.byte 0xFE, 0x7C, 0x57, 0x08, 0x2C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:10 easy_chat_group_misc_line_10
	.globl gText_Rom_577F23
gText_Rom_577F23: @ 0x08577F23
	.string "あっち$"
	.if (. - gText_Rom_577F23) > 0x4
	.error "gText_Rom_577F23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F23) < 0x4
	.space 0x4 - (. - gText_Rom_577F23)
	.endif
	@ Replaced baserom.gba range: offset=0x577F27, size=0x3
	.byte 0x01, 0x19, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:22 easy_chat_group_misc_line_22
	.globl gText_Rom_577F2A
gText_Rom_577F2A: @ 0x08577F2A
	.string "ありゃ$"
	.if (. - gText_Rom_577F2A) > 0x4
	.error "gText_Rom_577F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F2A) < 0x4
	.space 0x4 - (. - gText_Rom_577F2A)
	.endif
	@ Replaced baserom.gba range: offset=0x577F2E, size=0x3
	.byte 0x01, 0x2A, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:34 easy_chat_group_misc_line_34
	.globl gText_Rom_577F31
gText_Rom_577F31: @ 0x08577F31
	.string "あれは$"
	.if (. - gText_Rom_577F31) > 0x4
	.error "gText_Rom_577F31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F31) < 0x4
	.space 0x4 - (. - gText_Rom_577F31)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:40 easy_chat_group_misc_line_40
	.globl gText_Rom_577F35
gText_Rom_577F35: @ 0x08577F35
	.string "あんな$"
	.if (. - gText_Rom_577F35) > 0x4
	.error "gText_Rom_577F35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F35) < 0x4
	.space 0x4 - (. - gText_Rom_577F35)
	.endif
	@ Replaced baserom.gba range: offset=0x577F39, size=0x9
	.byte 0x03, 0x04, 0xFF, 0x05, 0x08, 0xFF, 0x0A, 0x03, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:64 easy_chat_group_misc_line_64
	.globl gText_Rom_577F42
gText_Rom_577F42: @ 0x08577F42
	.string "こっち$"
	.if (. - gText_Rom_577F42) > 0x4
	.error "gText_Rom_577F42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F42) < 0x4
	.space 0x4 - (. - gText_Rom_577F42)
	.endif
	@ Replaced baserom.gba range: offset=0x577F46, size=0x3
	.byte 0x0A, 0x19, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:76 easy_chat_group_misc_line_76
	.globl gText_Rom_577F49
gText_Rom_577F49: @ 0x08577F49
	.string "こりゃ$"
	.if (. - gText_Rom_577F49) > 0x4
	.error "gText_Rom_577F49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F49) < 0x4
	.space 0x4 - (. - gText_Rom_577F49)
	.endif
	@ Replaced baserom.gba range: offset=0x577F4D, size=0x3
	.byte 0x0A, 0x2A, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:88 easy_chat_group_misc_line_88
	.globl gText_Rom_577F50
gText_Rom_577F50: @ 0x08577F50
	.string "これだ$"
	.if (. - gText_Rom_577F50) > 0x4
	.error "gText_Rom_577F50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F50) < 0x4
	.space 0x4 - (. - gText_Rom_577F50)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:94 easy_chat_group_misc_line_94
	.globl gText_Rom_577F54
gText_Rom_577F54: @ 0x08577F54
	.string "これは$"
	.if (. - gText_Rom_577F54) > 0x4
	.error "gText_Rom_577F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F54) < 0x4
	.space 0x4 - (. - gText_Rom_577F54)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:100 easy_chat_group_misc_line_100
	.globl gText_Rom_577F58
gText_Rom_577F58: @ 0x08577F58
	.string "こんな$"
	.if (. - gText_Rom_577F58) > 0x4
	.error "gText_Rom_577F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F58) < 0x4
	.space 0x4 - (. - gText_Rom_577F58)
	.endif
	@ Replaced baserom.gba range: offset=0x577F5C, size=0x6
	.byte 0x0C, 0x10, 0xFF, 0x0F, 0x03, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:118 easy_chat_group_misc_line_118
	.globl gText_Rom_577F62
gText_Rom_577F62: @ 0x08577F62
	.string "そっち$"
	.if (. - gText_Rom_577F62) > 0x4
	.error "gText_Rom_577F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F62) < 0x4
	.space 0x4 - (. - gText_Rom_577F62)
	.endif
	@ Replaced baserom.gba range: offset=0x577F66, size=0x3
	.byte 0x0F, 0x19, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:130 easy_chat_group_misc_line_130
	.globl gText_Rom_577F69
gText_Rom_577F69: @ 0x08577F69
	.string "そりゃ$"
	.if (. - gText_Rom_577F69) > 0x4
	.error "gText_Rom_577F69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F69) < 0x4
	.space 0x4 - (. - gText_Rom_577F69)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:136 easy_chat_group_misc_line_136
	.globl gText_Rom_577F6D
gText_Rom_577F6D: @ 0x08577F6D
	.string "それ$"
	.if (. - gText_Rom_577F6D) > 0x3
	.error "gText_Rom_577F6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F6D) < 0x3
	.space 0x3 - (. - gText_Rom_577F6D)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:142 easy_chat_group_misc_line_142
	.globl gText_Rom_577F70
gText_Rom_577F70: @ 0x08577F70
	.string "それだ$"
	.if (. - gText_Rom_577F70) > 0x4
	.error "gText_Rom_577F70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F70) < 0x4
	.space 0x4 - (. - gText_Rom_577F70)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:148 easy_chat_group_misc_line_148
	.globl gText_Rom_577F74
gText_Rom_577F74: @ 0x08577F74
	.string "それは$"
	.if (. - gText_Rom_577F74) > 0x4
	.error "gText_Rom_577F74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F74) < 0x4
	.space 0x4 - (. - gText_Rom_577F74)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:154 easy_chat_group_misc_line_154
	.globl gText_Rom_577F78
gText_Rom_577F78: @ 0x08577F78
	.string "そんな$"
	.if (. - gText_Rom_577F78) > 0x4
	.error "gText_Rom_577F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F78) < 0x4
	.space 0x4 - (. - gText_Rom_577F78)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:160 easy_chat_group_misc_line_160
	.globl gText_Rom_577F7C
gText_Rom_577F7C: @ 0x08577F7C
	.string "てまえ$"
	.if (. - gText_Rom_577F7C) > 0x4
	.error "gText_Rom_577F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F7C) < 0x4
	.space 0x4 - (. - gText_Rom_577F7C)
	.endif
	@ Replaced baserom.gba range: offset=0x577F80, size=0x3
	.byte 0x45, 0x03, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:172 easy_chat_group_misc_line_172
	.globl gText_Rom_577F83
gText_Rom_577F83: @ 0x08577F83
	.string "どっち$"
	.if (. - gText_Rom_577F83) > 0x4
	.error "gText_Rom_577F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F83) < 0x4
	.space 0x4 - (. - gText_Rom_577F83)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:178 easy_chat_group_misc_line_178
	.globl gText_Rom_577F87
gText_Rom_577F87: @ 0x08577F87
	.string "どの$"
	.if (. - gText_Rom_577F87) > 0x3
	.error "gText_Rom_577F87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F87) < 0x3
	.space 0x3 - (. - gText_Rom_577F87)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:184 easy_chat_group_misc_line_184
	.globl gText_Rom_577F8A
gText_Rom_577F8A: @ 0x08577F8A
	.string "どりゃ$"
	.if (. - gText_Rom_577F8A) > 0x4
	.error "gText_Rom_577F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F8A) < 0x4
	.space 0x4 - (. - gText_Rom_577F8A)
	.endif
	@ Replaced baserom.gba range: offset=0x577F8E, size=0x3
	.byte 0x45, 0x2A, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:196 easy_chat_group_misc_line_196
	.globl gText_Rom_577F91
gText_Rom_577F91: @ 0x08577F91
	.string "どれを$"
	.if (. - gText_Rom_577F91) > 0x4
	.error "gText_Rom_577F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F91) < 0x4
	.space 0x4 - (. - gText_Rom_577F91)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:202 easy_chat_group_misc_line_202
	.globl gText_Rom_577F95
gText_Rom_577F95: @ 0x08577F95
	.string "どんな$"
	.if (. - gText_Rom_577F95) > 0x4
	.error "gText_Rom_577F95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F95) < 0x4
	.space 0x4 - (. - gText_Rom_577F95)
	.endif
	@ Replaced baserom.gba range: offset=0x577F99, size=0x3
	.byte 0x15, 0x16, 0xFF

	@ src/data/easy_chat/easy_chat_group_misc.h:214 easy_chat_group_misc_line_214
	.globl gText_Rom_577F9C
gText_Rom_577F9C: @ 0x08577F9C
	.string "なんか$"
	.if (. - gText_Rom_577F9C) > 0x4
	.error "gText_Rom_577F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F9C) < 0x4
	.space 0x4 - (. - gText_Rom_577F9C)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:220 easy_chat_group_misc_line_220
	.globl gText_Rom_577FA0
gText_Rom_577FA0: @ 0x08577FA0
	.string "なんだ$"
	.if (. - gText_Rom_577FA0) > 0x4
	.error "gText_Rom_577FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA0) < 0x4
	.space 0x4 - (. - gText_Rom_577FA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:226 easy_chat_group_misc_line_226
	.globl gText_Rom_577FA4
gText_Rom_577FA4: @ 0x08577FA4
	.string "なんで$"
	.if (. - gText_Rom_577FA4) > 0x4
	.error "gText_Rom_577FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA4) < 0x4
	.space 0x4 - (. - gText_Rom_577FA4)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:232 easy_chat_group_misc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577FA8
gText_Rom_577FA8: @ 0x08577FA8
	.string "なんなんだ$"
	.if (. - gText_Rom_577FA8) != 0x6
	.error "gText_Rom_577FA8 must retain its original byte length"
	.endif
	.globl gText_Rom_577FAA
	.set gText_Rom_577FAA, gText_Rom_577FA8 + 0x2

	@ src/data/easy_chat/easy_chat_group_misc.h:238 easy_chat_group_misc_line_238
	.globl gText_Rom_577FAE
gText_Rom_577FAE: @ 0x08577FAE
	.string "なんの$"
	.if (. - gText_Rom_577FAE) > 0x4
	.error "gText_Rom_577FAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FAE) < 0x4
	.space 0x4 - (. - gText_Rom_577FAE)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl gText_Rom_577FB2
gText_Rom_577FB2: @ 0x08577FB2
	.string "ひだり$"
	.if (. - gText_Rom_577FB2) > 0x4
	.error "gText_Rom_577FB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FB2) < 0x4
	.space 0x4 - (. - gText_Rom_577FB2)
	.endif
	@ Replaced baserom.gba range: offset=0x577FB6, size=0x1FE
	.byte 0x20, 0x38, 0xFF, 0x00, 0x00, 0x00, 0x20, 0x7F, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x23, 0x7F, 0x57, 0x08, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x27, 0x7F
	.byte 0x57, 0x08, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2A, 0x7F, 0x57, 0x08, 0x03, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2E, 0x7F, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x31, 0x7F, 0x57, 0x08, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x35, 0x7F
	.byte 0x57, 0x08, 0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x39, 0x7F, 0x57, 0x08, 0x07, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3C, 0x7F, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x3F, 0x7F, 0x57, 0x08, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x42, 0x7F
	.byte 0x57, 0x08, 0x0A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7F, 0x57, 0x08, 0x0B, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x49, 0x7F, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x4D, 0x7F, 0x57, 0x08, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x50, 0x7F
	.byte 0x57, 0x08, 0x0E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x54, 0x7F, 0x57, 0x08, 0x0F, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0x7F, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x5C, 0x7F, 0x57, 0x08, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5F, 0x7F
	.byte 0x57, 0x08, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x7F, 0x57, 0x08, 0x13, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x66, 0x7F, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x69, 0x7F, 0x57, 0x08, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6D, 0x7F
	.byte 0x57, 0x08, 0x16, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x7F, 0x57, 0x08, 0x17, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, 0x7F, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x78, 0x7F, 0x57, 0x08, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7C, 0x7F
	.byte 0x57, 0x08, 0x1A, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0x7F, 0x57, 0x08, 0x1B, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x83, 0x7F, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x87, 0x7F, 0x57, 0x08, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8A, 0x7F
	.byte 0x57, 0x08, 0x1E, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8E, 0x7F, 0x57, 0x08, 0x1F, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x91, 0x7F, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x95, 0x7F, 0x57, 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x99, 0x7F
	.byte 0x57, 0x08, 0x22, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x9C, 0x7F, 0x57, 0x08, 0x23, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA0, 0x7F, 0x57, 0x08, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xA4, 0x7F, 0x57, 0x08, 0x25, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xA8, 0x7F
	.byte 0x57, 0x08, 0x26, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xAE, 0x7F, 0x57, 0x08, 0x27, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB2, 0x7F, 0x57, 0x08, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xB6, 0x7F, 0x57, 0x08, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00

	@ src/data/easy_chat/easy_chat_group_adjectives.h:4 easy_chat_group_adjectives_line_4
	.globl gText_Rom_5781B4
gText_Rom_5781B4: @ 0x085781B4
	.string "うろうろ$"
	.if (. - gText_Rom_5781B4) > 0x5
	.error "gText_Rom_5781B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781B4) < 0x5
	.space 0x5 - (. - gText_Rom_5781B4)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:10 easy_chat_group_adjectives_line_10
	.globl gText_Rom_5781B9
gText_Rom_5781B9: @ 0x085781B9
	.string "がたがた$"
	.if (. - gText_Rom_5781B9) > 0x5
	.error "gText_Rom_5781B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781B9) < 0x5
	.space 0x5 - (. - gText_Rom_5781B9)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:16 easy_chat_group_adjectives_line_16
	.globl gText_Rom_5781BE
gText_Rom_5781BE: @ 0x085781BE
	.string "カチカチ$"
	.if (. - gText_Rom_5781BE) > 0x5
	.error "gText_Rom_5781BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781BE) < 0x5
	.space 0x5 - (. - gText_Rom_5781BE)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:22 easy_chat_group_adjectives_line_22
	.globl gText_Rom_5781C3
gText_Rom_5781C3: @ 0x085781C3
	.string "がつがつ$"
	.if (. - gText_Rom_5781C3) > 0x5
	.error "gText_Rom_5781C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781C3) < 0x5
	.space 0x5 - (. - gText_Rom_5781C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:28 easy_chat_group_adjectives_line_28
	.globl gText_Rom_5781C8
gText_Rom_5781C8: @ 0x085781C8
	.string "ぎゅうぎゅう$"
	.if (. - gText_Rom_5781C8) > 0x7
	.error "gText_Rom_5781C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781C8) < 0x7
	.space 0x7 - (. - gText_Rom_5781C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:34 easy_chat_group_adjectives_line_34
	.globl gText_Rom_5781CF
gText_Rom_5781CF: @ 0x085781CF
	.string "クスクス$"
	.if (. - gText_Rom_5781CF) > 0x5
	.error "gText_Rom_5781CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781CF) < 0x5
	.space 0x5 - (. - gText_Rom_5781CF)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:40 easy_chat_group_adjectives_line_40
	.globl gText_Rom_5781D4
gText_Rom_5781D4: @ 0x085781D4
	.string "くるくる$"
	.if (. - gText_Rom_5781D4) > 0x5
	.error "gText_Rom_5781D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781D4) < 0x5
	.space 0x5 - (. - gText_Rom_5781D4)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:46 easy_chat_group_adjectives_line_46
	.globl gText_Rom_5781D9
gText_Rom_5781D9: @ 0x085781D9
	.string "グルグル$"
	.if (. - gText_Rom_5781D9) > 0x5
	.error "gText_Rom_5781D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781D9) < 0x5
	.space 0x5 - (. - gText_Rom_5781D9)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:52 easy_chat_group_adjectives_line_52
	.globl gText_Rom_5781DE
gText_Rom_5781DE: @ 0x085781DE
	.string "ごくごく$"
	.if (. - gText_Rom_5781DE) > 0x5
	.error "gText_Rom_5781DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781DE) < 0x5
	.space 0x5 - (. - gText_Rom_5781DE)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:58 easy_chat_group_adjectives_line_58
	.globl gText_Rom_5781E3
gText_Rom_5781E3: @ 0x085781E3
	.string "ごろごろ$"
	.if (. - gText_Rom_5781E3) > 0x5
	.error "gText_Rom_5781E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781E3) < 0x5
	.space 0x5 - (. - gText_Rom_5781E3)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:64 easy_chat_group_adjectives_line_64
	.globl gText_Rom_5781E8
gText_Rom_5781E8: @ 0x085781E8
	.string "さらさら$"
	.if (. - gText_Rom_5781E8) > 0x5
	.error "gText_Rom_5781E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781E8) < 0x5
	.space 0x5 - (. - gText_Rom_5781E8)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:70 easy_chat_group_adjectives_line_70
	.globl gText_Rom_5781ED
gText_Rom_5781ED: @ 0x085781ED
	.string "しくしく$"
	.if (. - gText_Rom_5781ED) > 0x5
	.error "gText_Rom_5781ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781ED) < 0x5
	.space 0x5 - (. - gText_Rom_5781ED)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:76 easy_chat_group_adjectives_line_76
	.globl gText_Rom_5781F2
gText_Rom_5781F2: @ 0x085781F2
	.string "ぜんぜん$"
	.if (. - gText_Rom_5781F2) > 0x5
	.error "gText_Rom_5781F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781F2) < 0x5
	.space 0x5 - (. - gText_Rom_5781F2)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:82 easy_chat_group_adjectives_line_82
	.globl gText_Rom_5781F7
gText_Rom_5781F7: @ 0x085781F7
	.string "ダメダメ$"
	.if (. - gText_Rom_5781F7) > 0x5
	.error "gText_Rom_5781F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781F7) < 0x5
	.space 0x5 - (. - gText_Rom_5781F7)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:88 easy_chat_group_adjectives_line_88
	.globl gText_Rom_5781FC
gText_Rom_5781FC: @ 0x085781FC
	.string "だらだら$"
	.if (. - gText_Rom_5781FC) > 0x5
	.error "gText_Rom_5781FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5781FC) < 0x5
	.space 0x5 - (. - gText_Rom_5781FC)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:94 easy_chat_group_adjectives_line_94
	.globl gText_Rom_578201
gText_Rom_578201: @ 0x08578201
	.string "ドキドキ$"
	.if (. - gText_Rom_578201) > 0x5
	.error "gText_Rom_578201 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578201) < 0x5
	.space 0x5 - (. - gText_Rom_578201)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:100 easy_chat_group_adjectives_line_100
	.globl gText_Rom_578206
gText_Rom_578206: @ 0x08578206
	.string "どんどん$"
	.if (. - gText_Rom_578206) > 0x5
	.error "gText_Rom_578206 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578206) < 0x5
	.space 0x5 - (. - gText_Rom_578206)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:106 easy_chat_group_adjectives_line_106
	.globl gText_Rom_57820B
gText_Rom_57820B: @ 0x0857820B
	.string "なでなで$"
	.if (. - gText_Rom_57820B) > 0x5
	.error "gText_Rom_57820B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57820B) < 0x5
	.space 0x5 - (. - gText_Rom_57820B)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:112 easy_chat_group_adjectives_line_112
	.globl gText_Rom_578210
gText_Rom_578210: @ 0x08578210
	.string "ぬるぬる$"
	.if (. - gText_Rom_578210) > 0x5
	.error "gText_Rom_578210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578210) < 0x5
	.space 0x5 - (. - gText_Rom_578210)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:118 easy_chat_group_adjectives_line_118
	.globl gText_Rom_578215
gText_Rom_578215: @ 0x08578215
	.string "はあはあ$"
	.if (. - gText_Rom_578215) > 0x5
	.error "gText_Rom_578215 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578215) < 0x5
	.space 0x5 - (. - gText_Rom_578215)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:124 easy_chat_group_adjectives_line_124
	.globl gText_Rom_57821A
gText_Rom_57821A: @ 0x0857821A
	.string "バキバキ$"
	.if (. - gText_Rom_57821A) > 0x5
	.error "gText_Rom_57821A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57821A) < 0x5
	.space 0x5 - (. - gText_Rom_57821A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:130 easy_chat_group_adjectives_line_130
	.globl gText_Rom_57821F
gText_Rom_57821F: @ 0x0857821F
	.string "ぱくぱく$"
	.if (. - gText_Rom_57821F) > 0x5
	.error "gText_Rom_57821F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57821F) < 0x5
	.space 0x5 - (. - gText_Rom_57821F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:136 easy_chat_group_adjectives_line_136
	.globl gText_Rom_578224
gText_Rom_578224: @ 0x08578224
	.string "パラパラ$"
	.if (. - gText_Rom_578224) > 0x5
	.error "gText_Rom_578224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578224) < 0x5
	.space 0x5 - (. - gText_Rom_578224)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:142 easy_chat_group_adjectives_line_142
	.globl gText_Rom_578229
gText_Rom_578229: @ 0x08578229
	.string "バリバリ$"
	.if (. - gText_Rom_578229) > 0x5
	.error "gText_Rom_578229 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578229) < 0x5
	.space 0x5 - (. - gText_Rom_578229)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:148 easy_chat_group_adjectives_line_148
	.globl gText_Rom_57822E
gText_Rom_57822E: @ 0x0857822E
	.string "ふにゃふにゃ$"
	.if (. - gText_Rom_57822E) > 0x7
	.error "gText_Rom_57822E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57822E) < 0x7
	.space 0x7 - (. - gText_Rom_57822E)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:154 easy_chat_group_adjectives_line_154
	.globl gText_Rom_578235
gText_Rom_578235: @ 0x08578235
	.string "ふらふら$"
	.if (. - gText_Rom_578235) > 0x5
	.error "gText_Rom_578235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578235) < 0x5
	.space 0x5 - (. - gText_Rom_578235)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:160 easy_chat_group_adjectives_line_160
	.globl gText_Rom_57823A
gText_Rom_57823A: @ 0x0857823A
	.string "ブルブル$"
	.if (. - gText_Rom_57823A) > 0x5
	.error "gText_Rom_57823A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57823A) < 0x5
	.space 0x5 - (. - gText_Rom_57823A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:166 easy_chat_group_adjectives_line_166
	.globl gText_Rom_57823F
gText_Rom_57823F: @ 0x0857823F
	.string "べろべろ$"
	.if (. - gText_Rom_57823F) > 0x5
	.error "gText_Rom_57823F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57823F) < 0x5
	.space 0x5 - (. - gText_Rom_57823F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:172 easy_chat_group_adjectives_line_172
	.globl gText_Rom_578244
gText_Rom_578244: @ 0x08578244
	.string "ボロボロ$"
	.if (. - gText_Rom_578244) > 0x5
	.error "gText_Rom_578244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578244) < 0x5
	.space 0x5 - (. - gText_Rom_578244)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:178 easy_chat_group_adjectives_line_178
	.globl gText_Rom_578249
gText_Rom_578249: @ 0x08578249
	.string "ますます$"
	.if (. - gText_Rom_578249) > 0x5
	.error "gText_Rom_578249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578249) < 0x5
	.space 0x5 - (. - gText_Rom_578249)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:184 easy_chat_group_adjectives_line_184
	.globl gText_Rom_57824E
gText_Rom_57824E: @ 0x0857824E
	.string "まだまだ$"
	.if (. - gText_Rom_57824E) > 0x5
	.error "gText_Rom_57824E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57824E) < 0x5
	.space 0x5 - (. - gText_Rom_57824E)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:190 easy_chat_group_adjectives_line_190
	.globl gText_Rom_578253
gText_Rom_578253: @ 0x08578253
	.string "めちゃめちゃ$"
	.if (. - gText_Rom_578253) > 0x7
	.error "gText_Rom_578253 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578253) < 0x7
	.space 0x7 - (. - gText_Rom_578253)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:196 easy_chat_group_adjectives_line_196
	.globl gText_Rom_57825A
gText_Rom_57825A: @ 0x0857825A
	.string "メラメラ$"
	.if (. - gText_Rom_57825A) > 0x5
	.error "gText_Rom_57825A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825A) < 0x5
	.space 0x5 - (. - gText_Rom_57825A)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:202 easy_chat_group_adjectives_line_202
	.globl gText_Rom_57825F
gText_Rom_57825F: @ 0x0857825F
	.string "ラブラブ$"
	.if (. - gText_Rom_57825F) > 0x5
	.error "gText_Rom_57825F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57825F) < 0x5
	.space 0x5 - (. - gText_Rom_57825F)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:208 easy_chat_group_adjectives_line_208
	.globl gText_Rom_578264
gText_Rom_578264: @ 0x08578264
	.string "るんるん$"
	.if (. - gText_Rom_578264) > 0x5
	.error "gText_Rom_578264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578264) < 0x5
	.space 0x5 - (. - gText_Rom_578264)
	.endif

	@ src/data/easy_chat/easy_chat_group_adjectives.h:214 easy_chat_group_adjectives_line_214
	.globl gText_Rom_578269
gText_Rom_578269: @ 0x08578269
	.string "わくわく$"
	.if (. - gText_Rom_578269) > 0x5
	.error "gText_Rom_578269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578269) < 0x5
	.space 0x5 - (. - gText_Rom_578269)
	.endif
	@ Replaced baserom.gba range: offset=0x57826E, size=0x1B2
	.byte 0x00, 0x00, 0xB4, 0x81, 0x57, 0x08, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xB9, 0x81
	.byte 0x57, 0x08, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xBE, 0x81, 0x57, 0x08, 0x02, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC3, 0x81, 0x57, 0x08, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xC8, 0x81, 0x57, 0x08, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCF, 0x81
	.byte 0x57, 0x08, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD4, 0x81, 0x57, 0x08, 0x06, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD9, 0x81, 0x57, 0x08, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xDE, 0x81, 0x57, 0x08, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE3, 0x81
	.byte 0x57, 0x08, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xE8, 0x81, 0x57, 0x08, 0x0A, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xED, 0x81, 0x57, 0x08, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0xF2, 0x81, 0x57, 0x08, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xF7, 0x81
	.byte 0x57, 0x08, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFC, 0x81, 0x57, 0x08, 0x0E, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x82, 0x57, 0x08, 0x0F, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x06, 0x82, 0x57, 0x08, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0B, 0x82
	.byte 0x57, 0x08, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x82, 0x57, 0x08, 0x12, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x15, 0x82, 0x57, 0x08, 0x13, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x1A, 0x82, 0x57, 0x08, 0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1F, 0x82
	.byte 0x57, 0x08, 0x15, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x24, 0x82, 0x57, 0x08, 0x16, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x29, 0x82, 0x57, 0x08, 0x17, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x2E, 0x82, 0x57, 0x08, 0x18, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x35, 0x82
	.byte 0x57, 0x08, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3A, 0x82, 0x57, 0x08, 0x1A, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3F, 0x82, 0x57, 0x08, 0x1B, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x44, 0x82, 0x57, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x49, 0x82
	.byte 0x57, 0x08, 0x1D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4E, 0x82, 0x57, 0x08, 0x1E, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x53, 0x82, 0x57, 0x08, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00, 0x5A, 0x82, 0x57, 0x08, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5F, 0x82
	.byte 0x57, 0x08, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x64, 0x82, 0x57, 0x08, 0x22, 0x00
	.byte 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x69, 0x82, 0x57, 0x08, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x00, 0x00

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_578420
gText_Rom_578420: @ 0x08578420
	.string "アピール$"
	.if (. - gText_Rom_578420) > 0x5
	.error "gText_Rom_578420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578420) < 0x5
	.space 0x5 - (. - gText_Rom_578420)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_578425
gText_Rom_578425: @ 0x08578425
	.string "イベント$"
	.if (. - gText_Rom_578425) > 0x5
	.error "gText_Rom_578425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578425) < 0x5
	.space 0x5 - (. - gText_Rom_578425)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:3 gEasyChatWord_StayAtHome (+1 aliases)
	.globl gText_Rom_57842A
gText_Rom_57842A: @ 0x0857842A
	.string "おるすばん$"
	.if (. - gText_Rom_57842A) > 0x6
	.error "gText_Rom_57842A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57842A) < 0x6
	.space 0x6 - (. - gText_Rom_57842A)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:4 gEasyChatWord_Berry (+4 aliases)
	.globl gText_Rom_578430
gText_Rom_578430: @ 0x08578430
	.string "きのみ$"
	.if (. - gText_Rom_578430) > 0x4
	.error "gText_Rom_578430 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578430) < 0x4
	.space 0x4 - (. - gText_Rom_578430)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:5 gEasyChatWord_Contest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578434
gText_Rom_578434: @ 0x08578434
	.string "コンテスト$"
	.if (. - gText_Rom_578434) != 0x6
	.error "gText_Rom_578434 must retain its original byte length"
	.endif
	.globl gText_Rom_578436
	.set gText_Rom_578436, gText_Rom_578434 + 0x2

	@ src/data/easy_chat/easy_chat_group_events.h:6 gEasyChatWord_Mc (+1 aliases)
	.globl gText_Rom_57843A
gText_Rom_57843A: @ 0x0857843A
	.string "しかいしゃ$"
	.if (. - gText_Rom_57843A) > 0x6
	.error "gText_Rom_57843A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57843A) < 0x6
	.space 0x6 - (. - gText_Rom_57843A)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:7 gEasyChatWord_Judge (+1 aliases)
	.globl gText_Rom_578440
gText_Rom_578440: @ 0x08578440
	.string "しんさいん$"
	.if (. - gText_Rom_578440) > 0x6
	.error "gText_Rom_578440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578440) < 0x6
	.space 0x6 - (. - gText_Rom_578440)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:8 gEasyChatWord_Super (+3 aliases)
	.globl gText_Rom_578446
gText_Rom_578446: @ 0x08578446
	.string "スーパー$"
	.if (. - gText_Rom_578446) > 0x5
	.error "gText_Rom_578446 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578446) < 0x5
	.space 0x5 - (. - gText_Rom_578446)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:9 gEasyChatWord_Stage (+1 aliases)
	.globl gText_Rom_57844B
gText_Rom_57844B: @ 0x0857844B
	.string "ステージ$"
	.if (. - gText_Rom_57844B) > 0x5
	.error "gText_Rom_57844B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57844B) < 0x5
	.space 0x5 - (. - gText_Rom_57844B)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gText_Rom_578450
gText_Rom_578450: @ 0x08578450
	.string "でんどういり$"
	.if (. - gText_Rom_578450) > 0x7
	.error "gText_Rom_578450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578450) < 0x7
	.space 0x7 - (. - gText_Rom_578450)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_578457
gText_Rom_578457: @ 0x08578457
	.string "ノーマル$"
	.if (. - gText_Rom_578457) > 0x5
	.error "gText_Rom_578457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578457) < 0x5
	.space 0x5 - (. - gText_Rom_578457)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:12 gEasyChatWord_Hyper (+3 aliases)
	.globl gText_Rom_57845C
gText_Rom_57845C: @ 0x0857845C
	.string "ハイパー$"
	.if (. - gText_Rom_57845C) > 0x5
	.error "gText_Rom_57845C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57845C) < 0x5
	.space 0x5 - (. - gText_Rom_57845C)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:13 gEasyChatWord_BattleTower (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578461
gText_Rom_578461: @ 0x08578461
	.string "バトルタワー$"
	.if (. - gText_Rom_578461) != 0x7
	.error "gText_Rom_578461 must retain its original byte length"
	.endif
	.globl gText_Rom_578464
	.set gText_Rom_578464, gText_Rom_578461 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:14 gEasyChatWord_Leaders (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578468
gText_Rom_578468: @ 0x08578468
	.string "バトルリーダー$"
	.if (. - gText_Rom_578468) != 0x8
	.error "gText_Rom_578468 must retain its original byte length"
	.endif
	.globl gText_Rom_57846B
	.set gText_Rom_57846B, gText_Rom_578468 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:15 gEasyChatWord_BattleRoom (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_578470
gText_Rom_578470: @ 0x08578470
	.string "バトルルーム$"
	.if (. - gText_Rom_578470) != 0x7
	.error "gText_Rom_578470 must retain its original byte length"
	.endif
	.globl gText_Rom_578473
	.set gText_Rom_578473, gText_Rom_578470 + 0x3

	@ src/data/easy_chat/easy_chat_group_events.h:16 gEasyChatWord_Hidden (+1 aliases)
	.globl gText_Rom_578477
gText_Rom_578477: @ 0x08578477
	.string "ひでん$"
	.if (. - gText_Rom_578477) > 0x4
	.error "gText_Rom_578477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578477) < 0x4
	.space 0x4 - (. - gText_Rom_578477)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57847B
gText_Rom_57847B: @ 0x0857847B
	.string "ひみつきち$"
	.if (. - gText_Rom_57847B) > 0x6
	.error "gText_Rom_57847B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57847B) < 0x6
	.space 0x6 - (. - gText_Rom_57847B)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:18 gEasyChatWord_Blend (+1 aliases)
	.globl gText_Rom_578481
gText_Rom_578481: @ 0x08578481
	.string "ブレンド$"
	.if (. - gText_Rom_578481) > 0x5
	.error "gText_Rom_578481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578481) < 0x5
	.space 0x5 - (. - gText_Rom_578481)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:19 gEasyChatWord_POKEBLOCK (+1 aliases)
	.globl gText_Rom_578486
gText_Rom_578486: @ 0x08578486
	.string "ポロック$"
	.if (. - gText_Rom_578486) > 0x5
	.error "gText_Rom_578486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578486) < 0x5
	.space 0x5 - (. - gText_Rom_578486)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:20 gEasyChatWord_Master (+3 aliases)
	.globl gText_Rom_57848B
gText_Rom_57848B: @ 0x0857848B
	.string "マスター$"
	.if (. - gText_Rom_57848B) > 0x5
	.error "gText_Rom_57848B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57848B) < 0x5
	.space 0x5 - (. - gText_Rom_57848B)
	.endif

