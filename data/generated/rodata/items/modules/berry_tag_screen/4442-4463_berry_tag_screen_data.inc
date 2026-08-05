	@ src/berry_tag_screen.c:177 sText_SizeSlash
	.globl gText_Rom_5C977D
gText_Rom_5C977D: @ 0x085C977D
	.string "おおきさ$"
	.if (. - gText_Rom_5C977D) > 0x5
	.error "gText_Rom_5C977D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C977D) < 0x5
	.space 0x5 - (. - gText_Rom_5C977D)
	.endif
	.globl gUnknown_85C9782
gUnknown_85C9782: @ 0x085C9782

	@ src/berry_tag_screen.c:178 sText_FirmSlash
	.globl gText_Rom_5C9782
gText_Rom_5C9782: @ 0x085C9782
	.string "かたさ$"
	.if (. - gText_Rom_5C9782) > 0x4
	.error "gText_Rom_5C9782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9782) < 0x4
	.space 0x4 - (. - gText_Rom_5C9782)
	.endif
	.globl gUnknown_85C9786
gUnknown_85C9786: @ 0x085C9786

	@ asm/berry_tag_screen.s:684 sub_0817804C
	.globl gText_Rom_5C9786
gText_Rom_5C9786: @ 0x085C9786
	.string "{0xFD}{0x02},{0xFD}{0x03}cm$"
	.if (. - gText_Rom_5C9786) > 0x8
	.error "gText_Rom_5C9786 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9786) < 0x8
	.space 0x8 - (. - gText_Rom_5C9786)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C978E
gText_Rom_5C978E: @ 0x085C978E
	.string "とても　やわらかい$"
	.if (. - gText_Rom_5C978E) != 0xa
	.error "gText_Rom_5C978E must retain its original byte length"
	.endif
	.globl gText_Rom_5C9792
	.set gText_Rom_5C9792, gText_Rom_5C978E + 0x4

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C9798
gText_Rom_5C9798: @ 0x085C9798
	.string "やわらかい$"
	.if (. - gText_Rom_5C9798) > 0x6
	.error "gText_Rom_5C9798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9798) < 0x6
	.space 0x6 - (. - gText_Rom_5C9798)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C979E
gText_Rom_5C979E: @ 0x085C979E
	.string "かたい$"
	.if (. - gText_Rom_5C979E) > 0x4
	.error "gText_Rom_5C979E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C979E) < 0x4
	.space 0x4 - (. - gText_Rom_5C979E)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97A2
gText_Rom_5C97A2: @ 0x085C97A2
	.string "とても　かたい$"
	.if (. - gText_Rom_5C97A2) != 0x8
	.error "gText_Rom_5C97A2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C97A6
	.set gText_Rom_5C97A6, gText_Rom_5C97A2 + 0x4

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97AA
gText_Rom_5C97AA: @ 0x085C97AA
	.string "とてつもなく　かたい$"
	.if (. - gText_Rom_5C97AA) != 0xb
	.error "gText_Rom_5C97AA must retain its original byte length"
	.endif
	.globl gText_Rom_5C97B1
	.set gText_Rom_5C97B1, gText_Rom_5C97AA + 0x7
	.globl gUnknown_85C97B5
gUnknown_85C97B5: @ 0x085C97B5

	@ src/berry_tag_screen.c:180 sText_NumberVar1Var2
	.globl gText_Rom_5C97B5
gText_Rom_5C97B5: @ 0x085C97B5
	.string "{NO}{STR_VAR_1} {STR_VAR_2}$"
	.if (. - gText_Rom_5C97B5) > 0x8
	.error "gText_Rom_5C97B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C97B5) < 0x8
	.space 0x8 - (. - gText_Rom_5C97B5)
	.endif
	.globl gUnknown_85C97BD
gUnknown_85C97BD: @ 0x085C97BD

	@ src/berry_tag_screen.c:181 sText_BerryTag
	.globl gText_Rom_5C97BD
gText_Rom_5C97BD: @ 0x085C97BD
	.string "きのみのタグ$"
	.if (. - gText_Rom_5C97BD) > 0x7
	.error "gText_Rom_5C97BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C97BD) < 0x7
	.space 0x7 - (. - gText_Rom_5C97BD)
	.endif

