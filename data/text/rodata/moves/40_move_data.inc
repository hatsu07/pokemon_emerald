	@ src/data/moves_info.h:4217 moves_info_line_4217
	.globl gText_Rom_2EB20C
gText_Rom_2EB20C: @ 0x082EB20C
	.string "クモのす$"
	.if (. - gText_Rom_2EB20C) > 0x5
	.error "gText_Rom_2EB20C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB20C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB20C)
	.endif
	.incbin "baserom.gba", 0x2eb211, 0x3

	@ src/data/moves_info.h:4240 moves_info_line_4240
	.globl gText_Rom_2EB214
gText_Rom_2EB214: @ 0x082EB214
	.string "こころのめ$"
	.if (. - gText_Rom_2EB214) > 0x6
	.error "gText_Rom_2EB214 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB214) < 0x6
	.space 0x6 - (. - gText_Rom_2EB214)
	.endif
	.incbin "baserom.gba", 0x2eb21a, 0x2

	@ src/data/moves_info.h:4261 moves_info_line_4261
	.globl gText_Rom_2EB21C
gText_Rom_2EB21C: @ 0x082EB21C
	.string "あくむ$"
	.if (. - gText_Rom_2EB21C) > 0x4
	.error "gText_Rom_2EB21C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB21C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB21C)
	.endif
	.incbin "baserom.gba", 0x2eb220, 0x4

	@ src/data/moves_info.h:4283 moves_info_line_4283
	.globl gText_Rom_2EB224
gText_Rom_2EB224: @ 0x082EB224
	.string "かえんぐるま$"
	.if (. - gText_Rom_2EB224) > 0x7
	.error "gText_Rom_2EB224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB224) < 0x7
	.space 0x7 - (. - gText_Rom_2EB224)
	.endif
	.incbin "baserom.gba", 0x2eb22b, 0x1

	@ src/data/moves_info.h:4308 moves_info_line_4308
	.globl gText_Rom_2EB22C
gText_Rom_2EB22C: @ 0x082EB22C
	.string "いびき$"
	.if (. - gText_Rom_2EB22C) > 0x4
	.error "gText_Rom_2EB22C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB22C) < 0x4
	.space 0x4 - (. - gText_Rom_2EB22C)
	.endif
	.incbin "baserom.gba", 0x2eb230, 0x4

	@ src/data/moves_info.h:4335 moves_info_line_4335
	.globl gText_Rom_2EB234
gText_Rom_2EB234: @ 0x082EB234
	.string "のろい$"
	.if (. - gText_Rom_2EB234) > 0x4
	.error "gText_Rom_2EB234 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB234) < 0x4
	.space 0x4 - (. - gText_Rom_2EB234)
	.endif
	.incbin "baserom.gba", 0x2eb238, 0x4

	@ src/data/moves_info.h:4368 moves_info_line_4368
	.globl gText_Rom_2EB23C
gText_Rom_2EB23C: @ 0x082EB23C
	.string "じたばた$"
	.if (. - gText_Rom_2EB23C) > 0x5
	.error "gText_Rom_2EB23C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB23C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB23C)
	.endif
	.incbin "baserom.gba", 0x2eb241, 0x3

	@ src/data/moves_info.h:4389 moves_info_line_4389
	.globl gText_Rom_2EB244
gText_Rom_2EB244: @ 0x082EB244
	.string "テクスチャー2$"
	.if (. - gText_Rom_2EB244) > 0x8
	.error "gText_Rom_2EB244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB244) < 0x8
	.space 0x8 - (. - gText_Rom_2EB244)
	.endif

	@ src/data/moves_info.h:4413 moves_info_line_4413
	.globl gText_Rom_2EB24C
gText_Rom_2EB24C: @ 0x082EB24C
	.string "エアロブラスト$"
	.if (. - gText_Rom_2EB24C) > 0x8
	.error "gText_Rom_2EB24C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB24C) < 0x8
	.space 0x8 - (. - gText_Rom_2EB24C)
	.endif

	@ src/data/moves_info.h:4435 moves_info_line_4435
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EB254
gText_Rom_2EB254: @ 0x082EB254
	.string "わたほうし$"
	.if (. - gText_Rom_2EB254) != 0x6
	.error "gText_Rom_2EB254 must retain its original byte length"
	.endif
	.globl gText_Rom_2EB256
	.set gText_Rom_2EB256, gText_Rom_2EB254 + 0x2
	.incbin "baserom.gba", 0x2eb25a, 0x2

	@ src/data/moves_info.h:4462 moves_info_line_4462
	.globl gText_Rom_2EB25C
gText_Rom_2EB25C: @ 0x082EB25C
	.string "きしかいせい$"
	.if (. - gText_Rom_2EB25C) > 0x7
	.error "gText_Rom_2EB25C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB25C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB25C)
	.endif
	.incbin "baserom.gba", 0x2eb263, 0x1

	@ src/data/moves_info.h:4483 moves_info_line_4483
	.globl gText_Rom_2EB264
gText_Rom_2EB264: @ 0x082EB264
	.string "うらみ$"
	.if (. - gText_Rom_2EB264) > 0x4
	.error "gText_Rom_2EB264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB264) < 0x4
	.space 0x4 - (. - gText_Rom_2EB264)
	.endif
	.incbin "baserom.gba", 0x2eb268, 0x4

	@ src/data/moves_info.h:4506 moves_info_line_4506
	.globl gText_Rom_2EB26C
gText_Rom_2EB26C: @ 0x082EB26C
	.string "こなゆき$"
	.if (. - gText_Rom_2EB26C) > 0x5
	.error "gText_Rom_2EB26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB26C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB26C)
	.endif
	.incbin "baserom.gba", 0x2eb271, 0x3

	@ src/data/moves_info.h:4529 moves_info_line_4529
	.globl gText_Rom_2EB274
gText_Rom_2EB274: @ 0x082EB274
	.string "まもる$"
	.if (. - gText_Rom_2EB274) > 0x4
	.error "gText_Rom_2EB274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB274) < 0x4
	.space 0x4 - (. - gText_Rom_2EB274)
	.endif
	.incbin "baserom.gba", 0x2eb278, 0x4

	@ src/data/moves_info.h:4562 moves_info_line_4562
	.globl gText_Rom_2EB27C
gText_Rom_2EB27C: @ 0x082EB27C
	.string "マッハパンチ$"
	.if (. - gText_Rom_2EB27C) > 0x7
	.error "gText_Rom_2EB27C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB27C) < 0x7
	.space 0x7 - (. - gText_Rom_2EB27C)
	.endif
	.incbin "baserom.gba", 0x2eb283, 0x1

	@ src/data/moves_info.h:4584 moves_info_line_4584
	.globl gText_Rom_2EB284
gText_Rom_2EB284: @ 0x082EB284
	.string "こわいかお$"
	.if (. - gText_Rom_2EB284) > 0x6
	.error "gText_Rom_2EB284 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB284) < 0x6
	.space 0x6 - (. - gText_Rom_2EB284)
	.endif
	.incbin "baserom.gba", 0x2eb28a, 0x2

	@ src/data/moves_info.h:4610 moves_info_line_4610
	.globl gText_Rom_2EB28C
gText_Rom_2EB28C: @ 0x082EB28C
	.string "だましうち$"
	.if (. - gText_Rom_2EB28C) > 0x6
	.error "gText_Rom_2EB28C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB28C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB28C)
	.endif
	.incbin "baserom.gba", 0x2eb292, 0x2

	@ src/data/moves_info.h:4631 moves_info_line_4631
	.globl gText_Rom_2EB294
gText_Rom_2EB294: @ 0x082EB294
	.string "てんしのキッス$"
	.if (. - gText_Rom_2EB294) > 0x8
	.error "gText_Rom_2EB294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB294) < 0x8
	.space 0x8 - (. - gText_Rom_2EB294)
	.endif

	@ src/data/moves_info.h:4653 moves_info_line_4653
	.globl gText_Rom_2EB29C
gText_Rom_2EB29C: @ 0x082EB29C
	.string "はらだいこ$"
	.if (. - gText_Rom_2EB29C) > 0x6
	.error "gText_Rom_2EB29C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB29C) < 0x6
	.space 0x6 - (. - gText_Rom_2EB29C)
	.endif
	.incbin "baserom.gba", 0x2eb2a2, 0x2

	@ src/data/moves_info.h:4681 moves_info_line_4681
	.globl gText_Rom_2EB2A4
gText_Rom_2EB2A4: @ 0x082EB2A4
	.string "ヘドロばくだん$"
	.if (. - gText_Rom_2EB2A4) > 0x8
	.error "gText_Rom_2EB2A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2A4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB2A4)
	.endif

	@ src/data/moves_info.h:4706 moves_info_line_4706
	.globl gText_Rom_2EB2AC
gText_Rom_2EB2AC: @ 0x082EB2AC
	.string "どろかけ$"
	.if (. - gText_Rom_2EB2AC) > 0x5
	.error "gText_Rom_2EB2AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2AC) < 0x5
	.space 0x5 - (. - gText_Rom_2EB2AC)
	.endif
	.incbin "baserom.gba", 0x2eb2b1, 0x3

	@ src/data/moves_info.h:4731 moves_info_line_4731
	.globl gText_Rom_2EB2B4
gText_Rom_2EB2B4: @ 0x082EB2B4
	.string "オクタンほう$"
	.if (. - gText_Rom_2EB2B4) > 0x7
	.error "gText_Rom_2EB2B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB2B4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB2B4)
	.endif
	.incbin "baserom.gba", 0x2eb2bb, 0x1

