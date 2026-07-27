	@ src/data/script_menu.h:630 script_menu_line_630
	.globl gText_Rom_55FB98
gText_Rom_55FB98: @ 0x0855FB98
	.string "ねっこのカセキ$"
	.if (. - gText_Rom_55FB98) > 0x8
	.error "gText_Rom_55FB98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55FB98) < 0x8
	.space 0x8 - (. - gText_Rom_55FB98)
	.endif
	.incbin "baserom.gba", 0x55fba0, 0x20

	@ src/data/script_menu.h:629 script_menu_line_629
	.globl gText_Rom_55FBC0
gText_Rom_55FBC0: @ 0x0855FBC0
	.string "ツメのカセキ$"
	.if (. - gText_Rom_55FBC0) > 0x7
	.error "gText_Rom_55FBC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55FBC0) < 0x7
	.space 0x7 - (. - gText_Rom_55FBC0)
	.endif
	.incbin "baserom.gba", 0x55fbc7, 0xa71

	@ src/data/script_menu.h:1036 sText_OldAmber
	.globl gText_Rom_560638
gText_Rom_560638: @ 0x08560638
	.string "ひみつのコハク$"
	.if (. - gText_Rom_560638) > 0x8
	.error "gText_Rom_560638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560638) < 0x8
	.space 0x8 - (. - gText_Rom_560638)
	.endif
	.incbin "baserom.gba", 0x560640, 0x70

	@ src/data/script_menu.h:1034 sText_HelixFossil
	.globl gText_Rom_5606B0
gText_Rom_5606B0: @ 0x085606B0
	.string "かいのカセキ$"
	.if (. - gText_Rom_5606B0) > 0x7
	.error "gText_Rom_5606B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5606B0) < 0x7
	.space 0x7 - (. - gText_Rom_5606B0)
	.endif
	.incbin "baserom.gba", 0x5606b7, 0x21

	@ src/data/script_menu.h:1035 sText_DomeFossil
	.globl gText_Rom_5606D8
gText_Rom_5606D8: @ 0x085606D8
	.string "こうらのカセキ$"
	.if (. - gText_Rom_5606D8) > 0x8
	.error "gText_Rom_5606D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5606D8) < 0x8
	.space 0x8 - (. - gText_Rom_5606D8)
	.endif
	.incbin "baserom.gba", 0x5606e0, 0x48

	@ src/data/easy_chat/easy_chat_group_hobbies.h:130 easy_chat_group_hobbies_line_130
	.globl gText_Rom_560728
gText_Rom_560728: @ 0x08560728
	.string "じてんしゃ$"
	.if (. - gText_Rom_560728) > 0x6
	.error "gText_Rom_560728 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_560728) < 0x6
	.space 0x6 - (. - gText_Rom_560728)
	.endif
	.incbin "baserom.gba", 0x56072e, 0xed

	@ src/data/decoration/header.h:636 header_line_636 (+1 aliases)
	.globl gText_Rom_56081B
gText_Rom_56081B: @ 0x0856081B
	.string "テレビ$"
	.if (. - gText_Rom_56081B) > 0x4
	.error "gText_Rom_56081B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_56081B) < 0x4
	.space 0x4 - (. - gText_Rom_56081B)
	.endif
	.incbin "baserom.gba", 0x56081f, 0x111

