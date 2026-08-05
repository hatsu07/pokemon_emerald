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
	@ Replaced baserom.gba range: offset=0x57CB11, size=0x6
	.byte 0x7B, 0x59, 0xA0, 0x64, 0x41, 0x2E

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
	@ Replaced baserom.gba range: offset=0x57CB1B, size=0x11
	.byte 0x5C, 0x79, 0x6C, 0x56, 0x7E, 0x9B, 0x66, 0xAE, 0xFF, 0x9F, 0x59, 0x73, 0x7E, 0x24, 0x0C, 0x07
	.byte 0xFF

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
	@ Replaced baserom.gba range: offset=0x57CB3C, size=0x13
	.byte 0x52, 0x7C, 0x74, 0x6F, 0x64, 0x7E, 0x68, 0x79, 0xFF, 0x1C, 0x10, 0x3B, 0x3D, 0x1F, 0xFF, 0x9F
	.byte 0x59, 0x73, 0x7E

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
	@ Replaced baserom.gba range: offset=0x57CB53, size=0x4
	.byte 0x6A, 0x65, 0x91, 0x19

