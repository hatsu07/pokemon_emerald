.if .L__inc_fragment_select_02b974ce9e73 == 1

	@ asm/battle_message.s:3005 ChooseTypeOfMoveUsedString
	.globl gText_Rom_5AB055
gText_Rom_5AB055: @ 0x085AB055
	.string "！{EOS}"
	.if (. - gText_Rom_5AB055) > 0x2
	.error "gText_Rom_5AB055 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB055) < 0x2
	.space 0x2 - (. - gText_Rom_5AB055)
	.endif
	@ asm/pokemon.s:10677 sub_0806C9E8 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB057
gText_Rom_5AB057: @ 0x085AB057
	.string "たいりょく{EOS}"
	.if (. - gText_Rom_5AB057) != 0x6
	.error "gText_Rom_5AB057 must retain its original byte length"
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB05D
gText_Rom_5AB05D: @ 0x085AB05D
	.string "こうげきりょく{EOS}"
	.if (. - gText_Rom_5AB05D) > 0x8
	.error "gText_Rom_5AB05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB05D) < 0x8
	.space 0x8 - (. - gText_Rom_5AB05D)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB065
gText_Rom_5AB065: @ 0x085AB065
	.string "ぼうぎょりょく{EOS}"
	.if (. - gText_Rom_5AB065) > 0x8
	.error "gText_Rom_5AB065 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB065) < 0x8
	.space 0x8 - (. - gText_Rom_5AB065)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+5 aliases)
	.globl gText_Rom_5AB06D
gText_Rom_5AB06D: @ 0x085AB06D
	.string "すばやさ{EOS}"
	.if (. - gText_Rom_5AB06D) > 0x5
	.error "gText_Rom_5AB06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB06D) < 0x5
	.space 0x5 - (. - gText_Rom_5AB06D)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB072
gText_Rom_5AB072: @ 0x085AB072
	.string "とくこう{EOS}"
	.if (. - gText_Rom_5AB072) > 0x5
	.error "gText_Rom_5AB072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB072) < 0x5
	.space 0x5 - (. - gText_Rom_5AB072)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB077
gText_Rom_5AB077: @ 0x085AB077
	.string "とくぼう{EOS}"
	.if (. - gText_Rom_5AB077) > 0x5
	.error "gText_Rom_5AB077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB077) < 0x5
	.space 0x5 - (. - gText_Rom_5AB077)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB07C
gText_Rom_5AB07C: @ 0x085AB07C
	.string "めいちゅうりつ{EOS}"
	.if (. - gText_Rom_5AB07C) > 0x8
	.error "gText_Rom_5AB07C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB07C) < 0x8
	.space 0x8 - (. - gText_Rom_5AB07C)
	.endif

	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB084
gText_Rom_5AB084: @ 0x085AB084
	.string "かいひりつ{EOS}"
	.if (. - gText_Rom_5AB084) > 0x6
	.error "gText_Rom_5AB084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB084) < 0x6
	.space 0x6 - (. - gText_Rom_5AB084)
	.endif
	.space 0x2, 0x00
.elseif .L__inc_fragment_select_02b974ce9e73 == 2
	@ src/pokemon.c:158 pokemon_line_158
	.globl gText_Rom_5ECDA4
gText_Rom_5ECDA4: @ 0x085ECDA4
	.string "がんばりや{EOS}"
	.if (. - gText_Rom_5ECDA4) > 0x6
	.error "gText_Rom_5ECDA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDA4) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDA4)
	.endif

	@ src/pokemon.c:170 pokemon_line_170
	.globl gText_Rom_5ECDAA
gText_Rom_5ECDAA: @ 0x085ECDAA
	.string "さみしがり{EOS}"
	.if (. - gText_Rom_5ECDAA) > 0x6
	.error "gText_Rom_5ECDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDAA) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDAA)
	.endif

	@ src/pokemon.c:182 pokemon_line_182
	.globl gText_Rom_5ECDB0
gText_Rom_5ECDB0: @ 0x085ECDB0
	.string "ゆうかん{EOS}"
	.if (. - gText_Rom_5ECDB0) > 0x5
	.error "gText_Rom_5ECDB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDB0)
	.endif

	@ src/pokemon.c:194 pokemon_line_194
	.globl gText_Rom_5ECDB5
gText_Rom_5ECDB5: @ 0x085ECDB5
	.string "いじっぱり{EOS}"
	.if (. - gText_Rom_5ECDB5) > 0x6
	.error "gText_Rom_5ECDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDB5) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDB5)
	.endif

	@ src/pokemon.c:206 pokemon_line_206
	.globl gText_Rom_5ECDBB
gText_Rom_5ECDBB: @ 0x085ECDBB
	.string "やんちゃ{EOS}"
	.if (. - gText_Rom_5ECDBB) > 0x5
	.error "gText_Rom_5ECDBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDBB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDBB)
	.endif

	@ src/pokemon.c:218 pokemon_line_218
	.globl gText_Rom_5ECDC0
gText_Rom_5ECDC0: @ 0x085ECDC0
	.string "ずぶとい{EOS}"
	.if (. - gText_Rom_5ECDC0) > 0x5
	.error "gText_Rom_5ECDC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDC0)
	.endif

	@ src/pokemon.c:230 pokemon_line_230
	.globl gText_Rom_5ECDC5
gText_Rom_5ECDC5: @ 0x085ECDC5
	.string "すなお{EOS}"
	.if (. - gText_Rom_5ECDC5) > 0x4
	.error "gText_Rom_5ECDC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC5) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC5)
	.endif

	@ src/pokemon.c:242 pokemon_line_242
	.globl gText_Rom_5ECDC9
gText_Rom_5ECDC9: @ 0x085ECDC9
	.string "のんき{EOS}"
	.if (. - gText_Rom_5ECDC9) > 0x4
	.error "gText_Rom_5ECDC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC9) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC9)
	.endif

	@ src/pokemon.c:254 pokemon_line_254
	.globl gText_Rom_5ECDCD
gText_Rom_5ECDCD: @ 0x085ECDCD
	.string "わんぱく{EOS}"
	.if (. - gText_Rom_5ECDCD) > 0x5
	.error "gText_Rom_5ECDCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDCD) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDCD)
	.endif

	@ src/pokemon.c:266 pokemon_line_266
	.globl gText_Rom_5ECDD2
gText_Rom_5ECDD2: @ 0x085ECDD2
	.string "のうてんき{EOS}"
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
	.string "おくびょう{EOS}"
	.if (. - gText_Rom_5ECDD8) != 0x6
	.error "gText_Rom_5ECDD8 must retain its original byte length"
	.endif

	@ src/pokemon.c:290 pokemon_line_290
	.globl gText_Rom_5ECDDE
gText_Rom_5ECDDE: @ 0x085ECDDE
	.string "せっかち{EOS}"
	.if (. - gText_Rom_5ECDDE) > 0x5
	.error "gText_Rom_5ECDDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDDE) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDDE)
	.endif

	@ src/pokemon.c:302 pokemon_line_302
	.globl gText_Rom_5ECDE3
gText_Rom_5ECDE3: @ 0x085ECDE3
	.string "まじめ{EOS}"
	.if (. - gText_Rom_5ECDE3) > 0x4
	.error "gText_Rom_5ECDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE3) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE3)
	.endif

	@ src/pokemon.c:314 pokemon_line_314
	.globl gText_Rom_5ECDE7
gText_Rom_5ECDE7: @ 0x085ECDE7
	.string "ようき{EOS}"
	.if (. - gText_Rom_5ECDE7) > 0x4
	.error "gText_Rom_5ECDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE7) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE7)
	.endif

	@ src/pokemon.c:326 pokemon_line_326
	.globl gText_Rom_5ECDEB
gText_Rom_5ECDEB: @ 0x085ECDEB
	.string "むじゃき{EOS}"
	.if (. - gText_Rom_5ECDEB) > 0x5
	.error "gText_Rom_5ECDEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDEB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDEB)
	.endif

	@ src/pokemon.c:338 pokemon_line_338
	.globl gText_Rom_5ECDF0
gText_Rom_5ECDF0: @ 0x085ECDF0
	.string "ひかえめ{EOS}"
	.if (. - gText_Rom_5ECDF0) > 0x5
	.error "gText_Rom_5ECDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF0)
	.endif
.elseif .L__inc_fragment_select_02b974ce9e73 == 3

	@ src/pokemon.c:350 pokemon_line_350
	.globl gText_Rom_5ECDF5
gText_Rom_5ECDF5: @ 0x085ECDF5
	.string "おっとり{EOS}"
	.if (. - gText_Rom_5ECDF5) > 0x5
	.error "gText_Rom_5ECDF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF5) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF5)
	.endif

	@ src/pokemon.c:362 pokemon_line_362
	.globl gText_Rom_5ECDFA
gText_Rom_5ECDFA: @ 0x085ECDFA
	.string "れいせい{EOS}"
	.if (. - gText_Rom_5ECDFA) > 0x5
	.error "gText_Rom_5ECDFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFA) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDFA)
	.endif

	@ src/pokemon.c:374 pokemon_line_374
	.globl gText_Rom_5ECDFF
gText_Rom_5ECDFF: @ 0x085ECDFF
	.string "てれや{EOS}"
	.if (. - gText_Rom_5ECDFF) > 0x4
	.error "gText_Rom_5ECDFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFF) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDFF)
	.endif

	@ src/pokemon.c:386 pokemon_line_386
	.globl gText_Rom_5ECE03
gText_Rom_5ECE03: @ 0x085ECE03
	.string "うっかりや{EOS}"
	.if (. - gText_Rom_5ECE03) > 0x6
	.error "gText_Rom_5ECE03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE03) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE03)
	.endif

	@ src/pokemon.c:398 pokemon_line_398
	.globl gText_Rom_5ECE09
gText_Rom_5ECE09: @ 0x085ECE09
	.string "おだやか{EOS}"
	.if (. - gText_Rom_5ECE09) > 0x5
	.error "gText_Rom_5ECE09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE09) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE09)
	.endif
.elseif .L__inc_fragment_select_02b974ce9e73 == 4
	@ src/data/easy_chat/easy_chat_group_conditions.h:136 easy_chat_group_conditions_line_136 (+1 aliases)
	.globl gText_Rom_5ECE0E
gText_Rom_5ECE0E: @ 0x085ECE0E
	.string "おとなしい{EOS}"
	.if (. - gText_Rom_5ECE0E) > 0x6
	.error "gText_Rom_5ECE0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE0E) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE0E)
	.endif
	@ src/pokemon.c:422 pokemon_line_422
	.globl gText_Rom_5ECE14
gText_Rom_5ECE14: @ 0x085ECE14
	.string "なまいき{EOS}"
	.if (. - gText_Rom_5ECE14) > 0x5
	.error "gText_Rom_5ECE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE14) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE14)
	.endif

	@ src/pokemon.c:434 pokemon_line_434
	.globl gText_Rom_5ECE19
gText_Rom_5ECE19: @ 0x085ECE19
	.string "しんちょう{EOS}"
	.if (. - gText_Rom_5ECE19) > 0x6
	.error "gText_Rom_5ECE19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE19) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE19)
	.endif
.endif
