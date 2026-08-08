	@ src/pokemon.c:158 pokemon_line_158
	.globl gText_Rom_5ECDA4
gText_Rom_5ECDA4: @ 0x085ECDA4
	.string "がんばりや$"
	.if (. - gText_Rom_5ECDA4) > 0x6
	.error "gText_Rom_5ECDA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDA4) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDA4)
	.endif

	@ src/pokemon.c:170 pokemon_line_170
	.globl gText_Rom_5ECDAA
gText_Rom_5ECDAA: @ 0x085ECDAA
	.string "さみしがり$"
	.if (. - gText_Rom_5ECDAA) > 0x6
	.error "gText_Rom_5ECDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDAA) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDAA)
	.endif

	@ src/pokemon.c:182 pokemon_line_182
	.globl gText_Rom_5ECDB0
gText_Rom_5ECDB0: @ 0x085ECDB0
	.string "ゆうかん$"
	.if (. - gText_Rom_5ECDB0) > 0x5
	.error "gText_Rom_5ECDB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDB0)
	.endif

	@ src/pokemon.c:194 pokemon_line_194
	.globl gText_Rom_5ECDB5
gText_Rom_5ECDB5: @ 0x085ECDB5
	.string "いじっぱり$"
	.if (. - gText_Rom_5ECDB5) > 0x6
	.error "gText_Rom_5ECDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB5) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDB5)
	.endif

	@ src/pokemon.c:206 pokemon_line_206
	.globl gText_Rom_5ECDBB
gText_Rom_5ECDBB: @ 0x085ECDBB
	.string "やんちゃ$"
	.if (. - gText_Rom_5ECDBB) > 0x5
	.error "gText_Rom_5ECDBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDBB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDBB)
	.endif

	@ src/pokemon.c:218 pokemon_line_218
	.globl gText_Rom_5ECDC0
gText_Rom_5ECDC0: @ 0x085ECDC0
	.string "ずぶとい$"
	.if (. - gText_Rom_5ECDC0) > 0x5
	.error "gText_Rom_5ECDC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDC0)
	.endif

	@ src/pokemon.c:230 pokemon_line_230
	.globl gText_Rom_5ECDC5
gText_Rom_5ECDC5: @ 0x085ECDC5
	.string "すなお$"
	.if (. - gText_Rom_5ECDC5) > 0x4
	.error "gText_Rom_5ECDC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC5) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC5)
	.endif

	@ src/pokemon.c:242 pokemon_line_242
	.globl gText_Rom_5ECDC9
gText_Rom_5ECDC9: @ 0x085ECDC9
	.string "のんき$"
	.if (. - gText_Rom_5ECDC9) > 0x4
	.error "gText_Rom_5ECDC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC9) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC9)
	.endif

	@ src/pokemon.c:254 pokemon_line_254
	.globl gText_Rom_5ECDCD
gText_Rom_5ECDCD: @ 0x085ECDCD
	.string "わんぱく$"
	.if (. - gText_Rom_5ECDCD) > 0x5
	.error "gText_Rom_5ECDCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDCD) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDCD)
	.endif

	@ src/pokemon.c:266 pokemon_line_266
	.globl gText_Rom_5ECDD2
gText_Rom_5ECDD2: @ 0x085ECDD2
	.string "のうてんき$"
	.if (. - gText_Rom_5ECDD2) > 0x6
	.error "gText_Rom_5ECDD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDD2) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDD2)
	.endif

	@ src/pokemon.c:278 pokemon_line_278
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ECDD8
gText_Rom_5ECDD8: @ 0x085ECDD8
	.string "おくびょう$"
	.if (. - gText_Rom_5ECDD8) != 0x6
	.error "gText_Rom_5ECDD8 must retain its original byte length"
	.endif
	.globl gText_Rom_5ECDDA
	.set gText_Rom_5ECDDA, gText_Rom_5ECDD8 + 0x2

	@ src/pokemon.c:290 pokemon_line_290
	.globl gText_Rom_5ECDDE
gText_Rom_5ECDDE: @ 0x085ECDDE
	.string "せっかち$"
	.if (. - gText_Rom_5ECDDE) > 0x5
	.error "gText_Rom_5ECDDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDDE) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDDE)
	.endif

	@ src/pokemon.c:302 pokemon_line_302
	.globl gText_Rom_5ECDE3
gText_Rom_5ECDE3: @ 0x085ECDE3
	.string "まじめ$"
	.if (. - gText_Rom_5ECDE3) > 0x4
	.error "gText_Rom_5ECDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE3) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE3)
	.endif

	@ src/pokemon.c:314 pokemon_line_314
	.globl gText_Rom_5ECDE7
gText_Rom_5ECDE7: @ 0x085ECDE7
	.string "ようき$"
	.if (. - gText_Rom_5ECDE7) > 0x4
	.error "gText_Rom_5ECDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE7) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE7)
	.endif

	@ src/pokemon.c:326 pokemon_line_326
	.globl gText_Rom_5ECDEB
gText_Rom_5ECDEB: @ 0x085ECDEB
	.string "むじゃき$"
	.if (. - gText_Rom_5ECDEB) > 0x5
	.error "gText_Rom_5ECDEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDEB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDEB)
	.endif

	@ src/pokemon.c:338 pokemon_line_338
	.globl gText_Rom_5ECDF0
gText_Rom_5ECDF0: @ 0x085ECDF0
	.string "ひかえめ$"
	.if (. - gText_Rom_5ECDF0) > 0x5
	.error "gText_Rom_5ECDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF0)
	.endif
