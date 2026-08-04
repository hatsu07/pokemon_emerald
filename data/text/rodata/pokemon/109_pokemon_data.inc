	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_57CC6E
gText_Rom_57CC6E: @ 0x0857CC6E
	.string "どうくつ$"
	.if (. - gText_Rom_57CC6E) > 0x5
	.error "gText_Rom_57CC6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC6E) < 0x5
	.space 0x5 - (. - gText_Rom_57CC6E)
	.endif
	.incbin "baserom.gba", 0x57cc73, 0xf

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC82
gText_Rom_57CC82: @ 0x0857CC82
	.string "タワー$"
	.if (. - gText_Rom_57CC82) > 0x4
	.error "gText_Rom_57CC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC82) < 0x4
	.space 0x4 - (. - gText_Rom_57CC82)
	.endif
	.incbin "baserom.gba", 0x57cc86, 0x16

	@ src/data/region_map/region_map_entries.h:1456 region_map_entries_line_1456
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CC9C
gText_Rom_57CC9C: @ 0x0857CC9C
	.string "へんげのどうくつ$"
	.if (. - gText_Rom_57CC9C) != 0x9
	.error "gText_Rom_57CC9C must retain its original byte length"
	.endif
	.globl gText_Rom_57CCA0
	.set gText_Rom_57CCA0, gText_Rom_57CC9C + 0x4
	.incbin "baserom.gba", 0x57cca5, 0x1c

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl gText_Rom_57CCC1
gText_Rom_57CCC1: @ 0x0857CCC1
	.string "たんじょうのしま$"
	.if (. - gText_Rom_57CCC1) > 0x9
	.error "gText_Rom_57CCC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CCC1) < 0x9
	.space 0x9 - (. - gText_Rom_57CCC1)
	.endif
	.incbin "baserom.gba", 0x57ccca, 0x52

	@ src/data/region_map/region_map_entries.h:1365 region_map_entries_line_1365
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD1C
gText_Rom_57CD1C: @ 0x0857CD1C
	.string "アクアだん アジト$"
	.if (. - gText_Rom_57CD1C) != 0xa
	.error "gText_Rom_57CD1C must retain its original byte length"
	.endif
	.globl gText_Rom_57CD22
	.set gText_Rom_57CD22, gText_Rom_57CD1C + 0x6

	@ src/data/region_map/region_map_entries.h:1372 region_map_entries_line_1372
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD26
gText_Rom_57CD26: @ 0x0857CD26
	.string "マグマだん アジト$"
	.if (. - gText_Rom_57CD26) != 0xa
	.error "gText_Rom_57CD26 must retain its original byte length"
	.endif
	.globl gText_Rom_57CD2C
	.set gText_Rom_57CD2C, gText_Rom_57CD26 + 0x6

	@ src/data/region_map/region_map_entries.h:1379 region_map_entries_line_1379
	.globl gText_Rom_57CD30
gText_Rom_57CD30: @ 0x0857CD30
	.string "げんえいのとう$"
	.if (. - gText_Rom_57CD30) > 0x8
	.error "gText_Rom_57CD30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD30) < 0x8
	.space 0x8 - (. - gText_Rom_57CD30)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl gText_Rom_57CD38
gText_Rom_57CD38: @ 0x0857CD38
	.string "さいはてのことう$"
	.if (. - gText_Rom_57CD38) > 0x9
	.error "gText_Rom_57CD38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD38) < 0x9
	.space 0x9 - (. - gText_Rom_57CD38)
	.endif

	@ src/data/region_map/region_map_entries.h:1400 region_map_entries_line_1400
	.globl gText_Rom_57CD41
gText_Rom_57CD41: @ 0x0857CD41
	.string "アトリエのあな$"
	.if (. - gText_Rom_57CD41) > 0x8
	.error "gText_Rom_57CD41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD41) < 0x8
	.space 0x8 - (. - gText_Rom_57CD41)
	.endif

	@ src/data/region_map/region_map_entries.h:1407 region_map_entries_line_1407
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD49
gText_Rom_57CD49: @ 0x0857CD49
	.string "うみのどうくつ$"
	.if (. - gText_Rom_57CD49) != 0x8
	.error "gText_Rom_57CD49 must retain its original byte length"
	.endif
	.globl gText_Rom_57CD4C
	.set gText_Rom_57CD4C, gText_Rom_57CD49 + 0x3

	@ src/data/region_map/region_map_entries.h:1421 region_map_entries_line_1421
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57CD51
gText_Rom_57CD51: @ 0x0857CD51
	.string "りくのどうくつ$"
	.if (. - gText_Rom_57CD51) != 0x8
	.error "gText_Rom_57CD51 must retain its original byte length"
	.endif
	.globl gText_Rom_57CD54
	.set gText_Rom_57CD54, gText_Rom_57CD51 + 0x3

	@ src/data/region_map/region_map_entries.h:1449 region_map_entries_line_1449
	.globl gText_Rom_57CD59
gText_Rom_57CD59: @ 0x0857CD59
	.string "さばくのちかどう$"
	.if (. - gText_Rom_57CD59) > 0x9
	.error "gText_Rom_57CD59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD59) < 0x9
	.space 0x9 - (. - gText_Rom_57CD59)
	.endif

	@ src/data/region_map/region_map_entries.h:1470 region_map_entries_line_1470
	.globl gText_Rom_57CD62
gText_Rom_57CD62: @ 0x0857CD62
	.string "トレーナーヒル$"
	.if (. - gText_Rom_57CD62) > 0x8
	.error "gText_Rom_57CD62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CD62) < 0x8
	.space 0x8 - (. - gText_Rom_57CD62)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_857CD6C
gUnknown_857CD6C: @ 0x0857CD6C
	.incbin "baserom.gba", 0x57cd6c, 0x6a8
	.globl gUnknown_857D414
gUnknown_857D414: @ 0x0857D414
	.incbin "baserom.gba", 0x57d414, 0x60
	.globl gUnknown_857D474
gUnknown_857D474: @ 0x0857D474
	.incbin "baserom.gba", 0x57d474, 0x6
	.globl gUnknown_857D47A
gUnknown_857D47A: @ 0x0857D47A
	.incbin "baserom.gba", 0x57d47a, 0x22
	.globl gUnknown_857D49C
gUnknown_857D49C: @ 0x0857D49C
	.incbin "baserom.gba", 0x57d49c, 0x20
	.globl gUnknown_857D4BC
gUnknown_857D4BC: @ 0x0857D4BC
	.incbin "baserom.gba", 0x57d4bc, 0x34
	.globl gUnknown_857D4F0
gUnknown_857D4F0: @ 0x0857D4F0
	.incbin "baserom.gba", 0x57d4f0, 0x8
	.globl gUnknown_857D4F8
gUnknown_857D4F8: @ 0x0857D4F8
	.incbin "baserom.gba", 0x57d4f8, 0x18
	.globl gUnknown_857D510
gUnknown_857D510: @ 0x0857D510
	.incbin "baserom.gba", 0x57d510, 0x10
	.globl gUnknown_857D520
gUnknown_857D520: @ 0x0857D520
	.incbin "baserom.gba", 0x57d520, 0x4
	.globl gUnknown_857D524
gUnknown_857D524: @ 0x0857D524
	.incbin "baserom.gba", 0x57d524, 0x4
	.globl gUnknown_857D528
gUnknown_857D528: @ 0x0857D528
	.incbin "baserom.gba", 0x57d528, 0x20
	.globl gUnknown_857D548
gUnknown_857D548: @ 0x0857D548
	.incbin "baserom.gba", 0x57d548, 0x38
	.globl gUnknown_857D580
gUnknown_857D580: @ 0x0857D580
	.incbin "baserom.gba", 0x57d580, 0xd8
	.globl gUnknown_857D658
gUnknown_857D658: @ 0x0857D658
	.incbin "baserom.gba", 0x57d658, 0xd4
	.globl gUnknown_857D72C
gUnknown_857D72C: @ 0x0857D72C
	.incbin "baserom.gba", 0x57d72c, 0xa0
	.globl gUnknown_857D7CC
gUnknown_857D7CC: @ 0x0857D7CC
	.incbin "baserom.gba", 0x57d7cc, 0x8
	.globl gUnknown_857D7D4
gUnknown_857D7D4: @ 0x0857D7D4
	.incbin "baserom.gba", 0x57d7d4, 0xc
	.globl gUnknown_857D7E0
gUnknown_857D7E0: @ 0x0857D7E0
	.incbin "baserom.gba", 0x57d7e0, 0x20
	.globl gUnknown_857D800
gUnknown_857D800: @ 0x0857D800
	.incbin "baserom.gba", 0x57d800, 0x8
	.globl gUnknown_857D808
gUnknown_857D808: @ 0x0857D808
	.incbin "baserom.gba", 0x57d808, 0x64
	.globl gUnknown_857D86C
gUnknown_857D86C: @ 0x0857D86C
	.incbin "baserom.gba", 0x57d86c, 0x18
	.globl gUnknown_857D884
gUnknown_857D884: @ 0x0857D884
	.incbin "baserom.gba", 0x57d884, 0x2580
