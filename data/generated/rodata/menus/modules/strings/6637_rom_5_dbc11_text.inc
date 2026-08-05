	@ src/strings.c:1003 gText_CantSelectSamePkmn
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DBC11
gText_Rom_5DBC11: @ 0x085DBC11
	.string "おなじポケモンは えらべません$"
	.if (. - gText_Rom_5DBC11) != 0x10
	.error "gText_Rom_5DBC11 must retain its original byte length"
	.endif
