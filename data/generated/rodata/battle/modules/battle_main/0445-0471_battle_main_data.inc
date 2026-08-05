	@ src/battle_main.c:355 battle_main_line_355
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E37AB
gText_Rom_2E37AB: @ 0x082E37AB
	.string "マグマだんリーダー$"
	.if (. - gText_Rom_2E37AB) != 0xa
	.error "gText_Rom_2E37AB must retain its original byte length"
	.endif
	.globl gText_Rom_2E37B0
	.set gText_Rom_2E37B0, gText_Rom_2E37AB + 0x5
	.space 0x1, 0x00

	@ src/battle_main.c:356 battle_main_line_356 (+1 aliases)
	.globl gText_Rom_2E37B6
gText_Rom_2E37B6: @ 0x082E37B6
	.string "ミニスカート$"
	.if (. - gText_Rom_2E37B6) > 0x7
	.error "gText_Rom_2E37B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37B6) < 0x7
	.space 0x7 - (. - gText_Rom_2E37B6)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:357 battle_main_line_357 (+1 aliases)
	.globl gText_Rom_2E37C1
gText_Rom_2E37C1: @ 0x082E37C1
	.string "ラブラブカップル$"
	.if (. - gText_Rom_2E37C1) > 0x9
	.error "gText_Rom_2E37C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37C1) < 0x9
	.space 0x9 - (. - gText_Rom_2E37C1)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:358 battle_main_line_358
	.globl gText_Rom_2E37CC
gText_Rom_2E37CC: @ 0x082E37CC
	.string "きんこんしき$"
	.if (. - gText_Rom_2E37CC) > 0x7
	.error "gText_Rom_2E37CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37CC) < 0x7
	.space 0x7 - (. - gText_Rom_2E37CC)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:359 battle_main_line_359 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E37D7
gText_Rom_2E37D7: @ 0x082E37D7
	.string "うみきょうだい$"
	.if (. - gText_Rom_2E37D7) != 0x8
	.error "gText_Rom_2E37D7 must retain its original byte length"
	.endif
	.globl gText_Rom_2E37D9
	.set gText_Rom_2E37D9, gText_Rom_2E37D7 + 0x2
	.space 0x3, 0x00

	@ src/battle_main.c:360 battle_main_line_360
	.globl gText_Rom_2E37E2
gText_Rom_2E37E2: @ 0x082E37E2
	.string "タワータイクーン$"
	.if (. - gText_Rom_2E37E2) > 0x9
	.error "gText_Rom_2E37E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37E2) < 0x9
	.space 0x9 - (. - gText_Rom_2E37E2)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:361 battle_main_line_361
	.globl gText_Rom_2E37ED
gText_Rom_2E37ED: @ 0x082E37ED
	.string "ドームスーパースター$"
	.if (. - gText_Rom_2E37ED) > 0xb
	.error "gText_Rom_2E37ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37ED) < 0xb
	.space 0xb - (. - gText_Rom_2E37ED)
	.endif

	@ src/battle_main.c:362 battle_main_line_362
	.globl gText_Rom_2E37F8
gText_Rom_2E37F8: @ 0x082E37F8
	.string "パレスガーディアン$"
	.if (. - gText_Rom_2E37F8) > 0xa
	.error "gText_Rom_2E37F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37F8) < 0xa
	.space 0xa - (. - gText_Rom_2E37F8)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:363 battle_main_line_363
	.globl gText_Rom_2E3803
gText_Rom_2E3803: @ 0x082E3803
	.string "アリーナキャプテン$"
	.if (. - gText_Rom_2E3803) > 0xa
	.error "gText_Rom_2E3803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3803) < 0xa
	.space 0xa - (. - gText_Rom_2E3803)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:364 battle_main_line_364
	.globl gText_Rom_2E380E
gText_Rom_2E380E: @ 0x082E380E
	.string "ファクトリーヘッド$"
	.if (. - gText_Rom_2E380E) > 0xa
	.error "gText_Rom_2E380E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E380E) < 0xa
	.space 0xa - (. - gText_Rom_2E380E)
	.endif
	.space 0x1, 0x00

	@ src/battle_main.c:365 battle_main_line_365
	.globl gText_Rom_2E3819
gText_Rom_2E3819: @ 0x082E3819
	.string "チューブクイーン$"
	.if (. - gText_Rom_2E3819) > 0x9
	.error "gText_Rom_2E3819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3819) < 0x9
	.space 0x9 - (. - gText_Rom_2E3819)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:366 battle_main_line_366
	.globl gText_Rom_2E3824
gText_Rom_2E3824: @ 0x082E3824
	.string "ピラミッドキング$"
	.if (. - gText_Rom_2E3824) > 0x9
	.error "gText_Rom_2E3824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3824) < 0x9
	.space 0x9 - (. - gText_Rom_2E3824)
	.endif
	.space 0x2, 0x00

	@ src/battle_main.c:302 battle_main_line_302 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2E382F
gText_Rom_2E382F: @ 0x082E382F
	.string "ポケモントレーナー$"
	.if (. - gText_Rom_2E382F) != 0xa
	.error "gText_Rom_2E382F must retain its original byte length"
	.endif
