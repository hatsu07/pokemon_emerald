	.globl sText_SizeSlash

	@ src/berry_tag_screen.c:177 sText_SizeSlash
	.globl sText_SizeSlash
sText_SizeSlash: @ 0x085C977D
	.string "おおきさ{EOS}"
	.if (. - sText_SizeSlash) > 0x5
	.error "sText_SizeSlash may not grow beyond its original slot"
	.endif
	.if (. - sText_SizeSlash) < 0x5
	.space 0x5 - (. - sText_SizeSlash)
	.endif

	@ src/berry_tag_screen.c:178 sText_FirmSlash
	.globl sText_FirmSlash
sText_FirmSlash: @ 0x085C9782
	.string "かたさ{EOS}"
	.if (. - sText_FirmSlash) > 0x4
	.error "sText_FirmSlash may not grow beyond its original slot"
	.endif
	.if (. - sText_FirmSlash) < 0x4
	.space 0x4 - (. - sText_FirmSlash)
	.endif

	@ asm/berry_tag_screen.s:684 sub_0817804C
	.globl gText_Rom_5C9786
gText_Rom_5C9786: @ 0x085C9786
	.string "{0xFD}{0x02},{0xFD}{0x03}cm{EOS}"
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
	.string "とても　やわらかい{EOS}"
	.if (. - gText_Rom_5C978E) != 0xa
	.error "gText_Rom_5C978E must retain its original byte length"
	.endif
	.globl gText_Rom_5C9792
	.set gText_Rom_5C9792, gText_Rom_5C978E + 0x4

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C9798
gText_Rom_5C9798: @ 0x085C9798
	.string "やわらかい{EOS}"
	.if (. - gText_Rom_5C9798) > 0x6
	.error "gText_Rom_5C9798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9798) < 0x6
	.space 0x6 - (. - gText_Rom_5C9798)
	.endif

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C979E
gText_Rom_5C979E: @ 0x085C979E
	.string "かたい{EOS}"
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
	.string "とても　かたい{EOS}"
	.if (. - gText_Rom_5C97A2) != 0x8
	.error "gText_Rom_5C97A2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C97A6
	.set gText_Rom_5C97A6, gText_Rom_5C97A2 + 0x4

	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97AA
gText_Rom_5C97AA: @ 0x085C97AA
	.string "とてつもなく　かたい{EOS}"
	.if (. - gText_Rom_5C97AA) != 0xb
	.error "gText_Rom_5C97AA must retain its original byte length"
	.endif
	.globl gText_Rom_5C97B1
	.set gText_Rom_5C97B1, gText_Rom_5C97AA + 0x7

	@ src/berry_tag_screen.c:180 sText_NumberVar1Var2
	.globl sText_NumberVar1Var2
sText_NumberVar1Var2: @ 0x085C97B5
	.string "{NO}{STR_VAR_1} {STR_VAR_2}{EOS}"
	.if (. - sText_NumberVar1Var2) > 0x8
	.error "sText_NumberVar1Var2 may not grow beyond its original slot"
	.endif
	.if (. - sText_NumberVar1Var2) < 0x8
	.space 0x8 - (. - sText_NumberVar1Var2)
	.endif

	@ src/berry_tag_screen.c:181 sText_BerryTag
	.globl sText_BerryTag
sText_BerryTag: @ 0x085C97BD
	.string "きのみのタグ{EOS}"
	.if (. - sText_BerryTag) > 0x7
	.error "sText_BerryTag may not grow beyond its original slot"
	.endif
	.if (. - sText_BerryTag) < 0x7
	.space 0x7 - (. - sText_BerryTag)
	.endif
