	@ src/use_pokeblock.c:159 sText_GetsAPokeBlockQuestion
	.globl gText_Rom_5CBD12
gText_Rom_5CBD12: @ 0x085CBD12
	.string "に ポロックを あげますか?$"
	.if (. - gText_Rom_5CBD12) > 0xf
	.error "gText_Rom_5CBD12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD12) < 0xf
	.space 0xf - (. - gText_Rom_5CBD12)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD21
gText_Rom_5CBD21: @ 0x085CBD21
	.string "かっこよさ$"
	.if (. - gText_Rom_5CBD21) > 0x6
	.error "gText_Rom_5CBD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD21) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD21)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD27
gText_Rom_5CBD27: @ 0x085CBD27
	.string "うつくしさ$"
	.if (. - gText_Rom_5CBD27) > 0x6
	.error "gText_Rom_5CBD27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD27) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD27)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD2D
gText_Rom_5CBD2D: @ 0x085CBD2D
	.string "かわいさ$"
	.if (. - gText_Rom_5CBD2D) > 0x5
	.error "gText_Rom_5CBD2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD2D) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD2D)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD32
gText_Rom_5CBD32: @ 0x085CBD32
	.string "かしこさ$"
	.if (. - gText_Rom_5CBD32) > 0x5
	.error "gText_Rom_5CBD32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD32) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD32)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD37
gText_Rom_5CBD37: @ 0x085CBD37
	.string "たくましさ$"
	.if (. - gText_Rom_5CBD37) > 0x6
	.error "gText_Rom_5CBD37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD37) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD37)
	.endif

	@ asm/use_pokeblock.s:1658 Pokeblock_BufferEnhancedStatText
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD3D
gText_Rom_5CBD3D: @ 0x085CBD3D
	.string "に　みがきが　かかった！$"
	.if (. - gText_Rom_5CBD3D) != 0xd
	.error "gText_Rom_5CBD3D must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD45
	.set gText_Rom_5CBD45, gText_Rom_5CBD3D + 0x8

	@ src/use_pokeblock.c:161 sText_NothingChanged
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD4A
gText_Rom_5CBD4A: @ 0x085CBD4A
	.string "なにも かわらなかった!$"
	.if (. - gText_Rom_5CBD4A) != 0xd
	.error "gText_Rom_5CBD4A must retain its original byte length"
	.endif
	.globl gText_Rom_5CBD52
	.set gText_Rom_5CBD52, gText_Rom_5CBD4A + 0x8

	@ src/use_pokeblock.c:162 sText_WontEatAnymore
	.globl gText_Rom_5CBD57
gText_Rom_5CBD57: @ 0x085CBD57
	.string "もう これいじょう たべない みたい…$"
	.if (. - gText_Rom_5CBD57) > 0x14
	.error "gText_Rom_5CBD57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD57) < 0x14
	.space 0x14 - (. - gText_Rom_5CBD57)
	.endif
