	@ src/use_pokeblock.c:159 sText_GetsAPokeBlockQuestion
	.globl sText_GetsAPokeBlockQuestion
sText_GetsAPokeBlockQuestion: @ 0x085CBD12
	.string "に ポロックを あげますか?{EOS}"
	.if (. - sText_GetsAPokeBlockQuestion) > 0xf
	.error "sText_GetsAPokeBlockQuestion may not grow beyond its original slot"
	.endif
	.if (. - sText_GetsAPokeBlockQuestion) < 0xf
	.space 0xf - (. - sText_GetsAPokeBlockQuestion)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD21
gText_Rom_5CBD21: @ 0x085CBD21
	.string "かっこよさ{EOS}"
	.if (. - gText_Rom_5CBD21) > 0x6
	.error "gText_Rom_5CBD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD21) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD21)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD27
gText_Rom_5CBD27: @ 0x085CBD27
	.string "うつくしさ{EOS}"
	.if (. - gText_Rom_5CBD27) > 0x6
	.error "gText_Rom_5CBD27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD27) < 0x6
	.space 0x6 - (. - gText_Rom_5CBD27)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD2D
gText_Rom_5CBD2D: @ 0x085CBD2D
	.string "かわいさ{EOS}"
	.if (. - gText_Rom_5CBD2D) > 0x5
	.error "gText_Rom_5CBD2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD2D) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD2D)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD32
gText_Rom_5CBD32: @ 0x085CBD32
	.string "かしこさ{EOS}"
	.if (. - gText_Rom_5CBD32) > 0x5
	.error "gText_Rom_5CBD32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBD32) < 0x5
	.space 0x5 - (. - gText_Rom_5CBD32)
	.endif

	@ asm/use_pokeblock.s:1655 Pokeblock_BufferEnhancedStatText (+3 aliases)
	.globl gText_Rom_5CBD37
gText_Rom_5CBD37: @ 0x085CBD37
	.string "たくましさ{EOS}"
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
	.string "に　みがきが　かかった！{EOS}"
	.if (. - gText_Rom_5CBD3D) != 0xd
	.error "gText_Rom_5CBD3D must retain its original byte length"
	.endif

	@ src/use_pokeblock.c:161 sText_NothingChanged
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_NothingChanged
sText_NothingChanged: @ 0x085CBD4A
	.string "なにも かわらなかった!{EOS}"
	.if (. - sText_NothingChanged) != 0xd
	.error "sText_NothingChanged must retain its original byte length"
	.endif

	@ src/use_pokeblock.c:162 sText_WontEatAnymore
	.globl sText_WontEatAnymore
sText_WontEatAnymore: @ 0x085CBD57
	.string "もう これいじょう たべない みたい…{EOS}"
	.if (. - sText_WontEatAnymore) > 0x14
	.error "sText_WontEatAnymore may not grow beyond its original slot"
	.endif
	.if (. - sText_WontEatAnymore) < 0x14
	.space 0x14 - (. - sText_WontEatAnymore)
	.endif
