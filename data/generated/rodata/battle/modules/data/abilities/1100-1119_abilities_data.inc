	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574ACE
gText_Rom_574ACE: @ 0x08574ACE
	.string "ほのおのからだ$"
	.if (. - gText_Rom_574ACE) != 0x8
	.error "gText_Rom_574ACE must retain its original byte length"
	.endif
	.globl gText_Rom_574AD2
	.set gText_Rom_574AD2, gText_Rom_574ACE + 0x4

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_574AD6
gText_Rom_574AD6: @ 0x08574AD6
	.string "マイナス$"
	.if (. - gText_Rom_574AD6) > 0x5
	.error "gText_Rom_574AD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AD6) < 0x5
	.space 0x5 - (. - gText_Rom_574AD6)
	.endif

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_574ADB
gText_Rom_574ADB: @ 0x08574ADB
	.string "マイペース$"
	.if (. - gText_Rom_574ADB) > 0x6
	.error "gText_Rom_574ADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574ADB) < 0x6
	.space 0x6 - (. - gText_Rom_574ADB)
	.endif

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_574AE1
gText_Rom_574AE1: @ 0x08574AE1
	.string "マグマのよろい$"
	.if (. - gText_Rom_574AE1) > 0x8
	.error "gText_Rom_574AE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AE1) < 0x8
	.space 0x8 - (. - gText_Rom_574AE1)
	.endif
	@ Decoded text from ROM range: offset=0x574AE9, size=0x3
	.string "みず$"

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_574AEC
gText_Rom_574AEC: @ 0x08574AEC
	.string "みずのベール$"
	.if (. - gText_Rom_574AEC) > 0x7
	.error "gText_Rom_574AEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AEC) < 0x7
	.space 0x7 - (. - gText_Rom_574AEC)
	.endif
	@ Decoded text from ROM range: offset=0x574AF3, size=0x3
	.string "むし$"

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_574AF6
gText_Rom_574AF6: @ 0x08574AF6
	.string "むしのしらせ$"
	.if (. - gText_Rom_574AF6) > 0x7
	.error "gText_Rom_574AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AF6) < 0x7
	.space 0x7 - (. - gText_Rom_574AF6)
	.endif

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_574AFD
gText_Rom_574AFD: @ 0x08574AFD
	.string "メロメロボディ$"
	.if (. - gText_Rom_574AFD) > 0x8
	.error "gText_Rom_574AFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574AFD) < 0x8
	.space 0x8 - (. - gText_Rom_574AFD)
	.endif

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_574B05
gText_Rom_574B05: @ 0x08574B05
	.string "めんえき$"
	.if (. - gText_Rom_574B05) > 0x5
	.error "gText_Rom_574B05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B05) < 0x5
	.space 0x5 - (. - gText_Rom_574B05)
	.endif

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_574B0A
gText_Rom_574B0A: @ 0x08574B0A
	.string "もうか$"
	.if (. - gText_Rom_574B0A) > 0x4
	.error "gText_Rom_574B0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0A) < 0x4
	.space 0x4 - (. - gText_Rom_574B0A)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_574B0E
gText_Rom_574B0E: @ 0x08574B0E
	.string "ものひろい$"
	.if (. - gText_Rom_574B0E) > 0x6
	.error "gText_Rom_574B0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574B0E) < 0x6
	.space 0x6 - (. - gText_Rom_574B0E)
	.endif
