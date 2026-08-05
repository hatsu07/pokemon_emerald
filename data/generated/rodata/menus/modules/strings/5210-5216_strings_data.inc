	@ src/strings.c:480 gText_SomeonesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACEC
gText_Rom_5CACEC: @ 0x085CACEC
	.string "だれかのパソコン$"
	.if (. - gText_Rom_5CACEC) != 0x9
	.error "gText_Rom_5CACEC must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF0
	.set gText_Rom_5CACF0, gText_Rom_5CACEC + 0x4
	.globl gUnknown_85CACF5
gUnknown_85CACF5: @ 0x085CACF5

	@ src/strings.c:481 gText_LanettesPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACF5
gText_Rom_5CACF5: @ 0x085CACF5
	.string "マユミのパソコン$"
	.if (. - gText_Rom_5CACF5) != 0x9
	.error "gText_Rom_5CACF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5CACF9
	.set gText_Rom_5CACF9, gText_Rom_5CACF5 + 0x4
	.globl gUnknown_85CACFE
gUnknown_85CACFE: @ 0x085CACFE

	@ src/strings.c:483 gText_PlayersPC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CACFE
gText_Rom_5CACFE: @ 0x085CACFE
	.string "{PLAYER}のパソコン$"
	.if (. - gText_Rom_5CACFE) != 0x8
	.error "gText_Rom_5CACFE must retain its original byte length"
	.endif
