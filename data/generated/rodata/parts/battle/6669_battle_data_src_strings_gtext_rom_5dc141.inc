	@ src/strings.c:1019 gText_SamePkmnInPartyAlready
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DC141
gText_Rom_5DC141: @ 0x085DC141
	.string "てもちに おなじ ポケモンが います!$"
	.if (. - gText_Rom_5DC141) != 0x14
	.error "gText_Rom_5DC141 must retain its original byte length"
	.endif
