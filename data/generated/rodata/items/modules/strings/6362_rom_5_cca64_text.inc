	@ src/strings.c:783 gText_PressingPowerRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA64
gText_Rom_5CCA64: @ 0x085CCA64
	.string "おすつよさ ランキング$"
	.if (. - gText_Rom_5CCA64) != 0xc
	.error "gText_Rom_5CCA64 must retain its original byte length"
	.endif
