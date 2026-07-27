	@ src/data/region_map/region_map_entries.h:504 region_map_entries_line_504
	.globl gText_Rom_57CB07
gText_Rom_57CB07: @ 0x0857CB07
	.string "チャンピオンロード$"
	.if (. - gText_Rom_57CB07) > 0xa
	.error "gText_Rom_57CB07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB07) < 0xa
	.space 0xa - (. - gText_Rom_57CB07)
	.endif
	.incbin "baserom.gba", 0x57cb11, 0x6

	@ src/strings.c:640 gText_Hideout
	.globl gText_Rom_57CB17
gText_Rom_57CB17: @ 0x0857CB17
	.string "アジト$"
	.if (. - gText_Rom_57CB17) > 0x4
	.error "gText_Rom_57CB17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB17) < 0x4
	.space 0x4 - (. - gText_Rom_57CB17)
	.endif
	.incbin "baserom.gba", 0x57cb1b, 0x11

	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57CB2C
gText_Rom_57CB2C: @ 0x0857CB2C
	.string "サファリゾーン$"
	.if (. - gText_Rom_57CB2C) > 0x8
	.error "gText_Rom_57CB2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB2C) < 0x8
	.space 0x8 - (. - gText_Rom_57CB2C)
	.endif

	@ src/strings.c:623 gText_PokemonLeague
	.globl gText_Rom_57CB34
gText_Rom_57CB34: @ 0x0857CB34
	.string "ポケモンリーグ$"
	.if (. - gText_Rom_57CB34) > 0x8
	.error "gText_Rom_57CB34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB34) < 0x8
	.space 0x8 - (. - gText_Rom_57CB34)
	.endif
	.incbin "baserom.gba", 0x57cb3c, 0x13

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CB4F
gText_Rom_57CB4F: @ 0x0857CB4F
	.string "タワー$"
	.if (. - gText_Rom_57CB4F) > 0x4
	.error "gText_Rom_57CB4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB4F) < 0x4
	.space 0x4 - (. - gText_Rom_57CB4F)
	.endif
	.incbin "baserom.gba", 0x57cb53, 0x4

