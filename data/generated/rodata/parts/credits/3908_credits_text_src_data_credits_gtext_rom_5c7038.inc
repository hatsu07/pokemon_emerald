	@ src/data/credits.h:159 sCreditsText_NCLSuperMarioClub
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C7038
gText_Rom_5C7038: @ 0x085C7038
	.string "スーパーマリオクラブ$"
	.if (. - gText_Rom_5C7038) != 0xb
	.error "gText_Rom_5C7038 must retain its original byte length"
	.endif
