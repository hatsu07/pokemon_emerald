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
	@ analyzed canonical ROM range 0x085763AF-0x085763B3
	.globl gText_Rom_5763AF
gText_Rom_5763AF: @ 0x085763AF
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x06, 0xFF, 0x06, 0x02, 0xFF
	.globl gText_Rom_5763B4
gText_Rom_5763B4: @ 0x085763B4
	.string "かしら$"
	.if (. - gText_Rom_5763B4) > 0x4
	.error "gText_Rom_5763B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763B4) < 0x4
	.space 0x4 - (. - gText_Rom_5763B4)
	.endif
	@ Decoded text from ROM range: offset=0x5763B8, size=0xA
	.string "かな？$"
	.string "かも$"
	.string "くれ$"

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
	@ Decoded text from ROM range: offset=0x5763D0, size=0x3
	.string "じゃ$"

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
	@ analyzed canonical ROM range 0x085763DB-0x085763E4
	.globl gText_Rom_5763DB
gText_Rom_5763DB: @ 0x085763DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x3F, 0xAB, 0xFF, 0x40, 0xAB, 0xFF, 0x10, 0xFF, 0x41, 0xFF
	.globl gText_Rom_5763E5
gText_Rom_5763E5: @ 0x085763E5
	.string "だからね$"
	.if (. - gText_Rom_5763E5) > 0x5
	.error "gText_Rom_5763E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5763E5) < 0x5
	.space 0x5 - (. - gText_Rom_5763E5)
	.endif
	@ Decoded text from ROM range: offset=0x5763EA, size=0x3
	.string "だぜ$"

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
	@ Decoded text from ROM range: offset=0x5763F1, size=0x6
	.string "だね$"
	.string "だよ$"

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
	@ Decoded text from ROM range: offset=0x5763FD, size=0x6
	.string "だわ$"
	.string "ッス$"

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
