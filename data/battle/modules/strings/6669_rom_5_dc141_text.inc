	@ src/strings.c:1019 gText_SamePkmnInPartyAlready
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_SamePkmnInPartyAlready
gText_SamePkmnInPartyAlready: @ 0x085DC141
	.string "てもちに おなじ ポケモンが います!{EOS}"
	.if (. - gText_SamePkmnInPartyAlready) != 0x14
	.error "gText_SamePkmnInPartyAlready must retain its original byte length"
	.endif
